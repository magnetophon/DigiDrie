// dsp_bench.cpp — measure raw per-sample throughput of mydsp.
//
// Build:
//   g++ -O3 -std=c++17 -I plugin/dpf/DigiDrie/dsp \
//     bench/dsp_bench.cpp -o bench/dsp_bench
//
// Run:
//   ./bench/dsp_bench [seconds]
//
// What it measures: how many samples per second the synth can render
// when driven by a host. Excludes parameter automation cost; the synth
// runs with all controls at their initialized (zero) defaults. This
// isolates the Faust-generated code from MIDI parsing, the SIMD
// dispatch wrapper, and the surrounding DSP module — i.e., exactly
// the layer that gets replaced when faustdsp.hpp is regenerated.

#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <utility>
#include <vector>

// Faust 2.85+ generates `class mydsp : public dsp` and references Meta
// and UI types in metadata()/buildUserInterface() shells. These types
// live in Faust's runtime headers (<faust/dsp/dsp.h>, etc.), but the
// benchmark doesn't need their real implementations — the tight loop
// only calls per-sample work. Provide minimal stubs here so the
// generated header compiles in isolation. If Faust's real headers
// happen to be on the include path (e.g., from `nix shell nixpkgs#faust`),
// they win via __has_include.
//
// Faust 2.28.0 didn't need any of this; the stubs are unused when the
// .hpp is 2.28.0-vintage.
#if __has_include(<faust/dsp/dsp.h>)
#  include <faust/dsp/dsp.h>
#  include <faust/gui/meta.h>
#  include <faust/gui/UI.h>
#else
class dsp {
public:
    virtual ~dsp() = default;
};
class Meta {
public:
    virtual ~Meta() = default;
    virtual void declare(const char*, const char*) {}
};
class UI {
public:
    virtual ~UI() = default;
    virtual void openTabBox(const char*)        {}
    virtual void openHorizontalBox(const char*) {}
    virtual void openVerticalBox(const char*)   {}
    virtual void closeBox()                     {}
    virtual void addButton(const char*, float*) {}
    virtual void addCheckButton(const char*, float*) {}
    virtual void addVerticalSlider(const char*, float*, float, float, float, float) {}
    virtual void addHorizontalSlider(const char*, float*, float, float, float, float) {}
    virtual void addNumEntry(const char*, float*, float, float, float, float) {}
    virtual void addHorizontalBargraph(const char*, float*, float, float) {}
    virtual void addVerticalBargraph(const char*, float*, float, float) {}
    virtual void addSoundfile(const char*, const char*, void*) {}
    virtual void declare(float*, const char*, const char*) {}
};
#endif

#define FAUSTFLOAT float
#include "faustdsp.hpp"

// Four per-sample API shapes exist depending on which flags the
// faustdsp.hpp was regenerated with:
//
//   rank<0>  Faust 2.28 cpp -os:
//     mydsp dsp;
//     dsp.init(sr);
//     dsp.control(iControl[], fControl[])              // per block
//     dsp.compute(in, out, iControl[], fControl[])     // per sample
//
//   rank<1>  Faust 2.85 cpp -os (no -ec, no -mem):
//     mydsp dsp;
//     dsp.init(sr);
//     dsp.frame(in, out)                               // per sample
//
//   rank<2>  (theoretical: -ec without -mem)
//     mydsp dsp;
//     dsp.init(sr);
//     dsp.control()                                    // per block
//     dsp.frame(in, out)                               // per sample
//
//   rank<3>  Faust 2.85 cpp -os -ec -mem2 -it:
//     std::vector<int>   iControl(N); std::vector<float> fControl(M);
//     std::vector<int>   iZone(P);    std::vector<float> fZone(Q);
//     mydsp dsp(iControl.data(), fControl.data(), iZone.data(), fZone.data());
//     dsp.instanceInit(sr);                            // init() is empty
//     dsp.control()                                    // per block
//     dsp.frame(in, out)                               // per sample
//
// Compile-time tag dispatch picks the most-derived viable overload.
// rank<3> wins when both the 4-pointer constructor AND control()+frame()
// AND instanceInit() are present. rank<2> wins when control()+frame()
// are present but the 4-pointer constructor isn't. rank<1> falls through
// to bare frame(). rank<0> is the variadic catch-all for 2.28 vintage.
template<int N> struct rank : rank<N - 1> {};
template<>      struct rank<0> {};

// rank<3>: Faust 2.85 -os -ec -mem2 -it — externally allocated memory.
//
// Buffer sizing: ideally we'd query getNumIntControls()/getNumRealControls()/
// getNumIntZone()/getNumRealZone() at runtime, but those methods may not be
// uniformly present. Hardcode generous upper bounds; if the actual DSP
// exceeds these, the constructor will write past the buffer and gdb will
// show a clear out-of-bounds crash to bump from. For DigiDrie's complexity
// (~650 controls, big wavetable in the synth's SIG0 table) these are sized
// with substantial headroom.
template<typename T>
auto run_loop(long long n, FAUSTFLOAT* in, FAUSTFLOAT* out, int sr, rank<3>)
    -> decltype(T(static_cast<int*>(nullptr), static_cast<float*>(nullptr),
                  static_cast<int*>(nullptr), static_cast<float*>(nullptr)),
                std::declval<T&>().instanceInit(sr),
                std::declval<T&>().control(),
                std::declval<T&>().frame(in, out),
                double())
{
    std::puts("# API: 4-ptr ctor + instanceInit + control() + frame() (Faust 2.85 -ec -mem2)");

    constexpr int kIControl = 256;
    constexpr int kFControl = 2048;
    constexpr int kIZone    = 64;
    constexpr int kFZone    = 65536;

    std::vector<int>   iControlMem(kIControl, 0);
    std::vector<float> fControlMem(kFControl, 0.0f);
    std::vector<int>   iZoneMem(kIZone, 0);
    std::vector<float> fZoneMem(kFZone, 0.0f);

    T dsp(iControlMem.data(), fControlMem.data(),
          iZoneMem.data(),    fZoneMem.data());
    dsp.instanceInit(sr);
    dsp.control();

    auto start = std::chrono::steady_clock::now();
    for (long long i = 0; i < n; ++i) dsp.frame(in, out);
    auto end = std::chrono::steady_clock::now();
    return std::chrono::duration<double>(end - start).count();
}

// rank<2>: control() (no args) + frame() — -ec without -mem2 if that's a thing
template<typename T>
auto run_loop(long long n, FAUSTFLOAT* in, FAUSTFLOAT* out, int sr, rank<2>)
    -> decltype(std::declval<T&>().control(),
                std::declval<T&>().frame(in, out),
                double())
{
    std::puts("# API: control()+frame() (Faust 2.85 -ec)");
    T dsp;
    dsp.init(sr);
    dsp.control();
    auto start = std::chrono::steady_clock::now();
    for (long long i = 0; i < n; ++i) dsp.frame(in, out);
    auto end = std::chrono::steady_clock::now();
    return std::chrono::duration<double>(end - start).count();
}

// rank<1>: just frame() — Faust 2.85 -os without -ec
template<typename T>
auto run_loop(long long n, FAUSTFLOAT* in, FAUSTFLOAT* out, int sr, rank<1>)
    -> decltype(std::declval<T&>().frame(in, out), double())
{
    std::puts("# API: frame() (Faust 2.85 -os only)");
    T dsp;
    dsp.init(sr);
    auto start = std::chrono::steady_clock::now();
    for (long long i = 0; i < n; ++i) dsp.frame(in, out);
    auto end = std::chrono::steady_clock::now();
    return std::chrono::duration<double>(end - start).count();
}

// rank<0>: Faust 2.28 vintage — control(iC[], fC[]) + compute(in, out, iC[], fC[])
template<typename T>
double run_loop(long long n, FAUSTFLOAT* in, FAUSTFLOAT* out, int sr, rank<0>)
{
    std::puts("# API: control()/compute() (Faust 2.28 vintage)");
    T dsp;
    dsp.init(sr);
    int   iCtrl[81]  = {0};   // sizes from 2.28-generated getNumIntControls/RealControls
    float fCtrl[850] = {0};
    dsp.control(iCtrl, fCtrl);
    auto start = std::chrono::steady_clock::now();
    for (long long i = 0; i < n; ++i) dsp.compute(in, out, iCtrl, fCtrl);
    auto end = std::chrono::steady_clock::now();
    return std::chrono::duration<double>(end - start).count();
}

int main(int argc, char** argv) {
    constexpr int sampleRate = 48000;
    const double seconds = (argc > 1) ? std::atof(argv[1]) : 30.0;
    const long long totalSamples =
        static_cast<long long>(seconds * sampleRate);

    FAUSTFLOAT inputs[2]  = {0};  // mydsp has 0 inputs; unused
    FAUSTFLOAT outputs[2] = {0};

    const double wall = run_loop<mydsp>(
        totalSamples, inputs, outputs, sampleRate, rank<3>{});

    const double rt = seconds / wall;
    const double nsPerSample = (wall * 1e9) / totalSamples;
    std::printf("samples:      %lld @ %d Hz (%.1f s of audio)\n",
                totalSamples, sampleRate, seconds);
    std::printf("wall time:    %.3f s\n", wall);
    std::printf("realtime:     %.2fx\n", rt);
    std::printf("per sample:   %.2f ns\n", nsPerSample);

    if (outputs[0] == 1234.5678f) {
        std::printf("(impossible)\n");
    }
    return 0;
}

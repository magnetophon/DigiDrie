# Faust Benchmark
Faust benchmark tools are available at [`faust/tools/benchmark`](https://github.com/grame-cncm/faust/tree/master-dev/tools/benchmark).

- [Optimizing - Faust Documentation](https://faustdoc.grame.fr/manual/optimizing/)


Currently, `DigiDrie.dsp` takes long time to compile. Therefore to take benchmark, split component from `DigiDrie.dsp`, and run `faustbench`.

The result of component level benchmark may not be reliable, because C++ compiler optimization may work differently on merged code. Still, it's better than nothing.

## Install
`faustbench` is used to benchmark. Available at `faust/tools/benchmark/faustbench` in Faust repository.

```bash
git clone <faust repository url>
cd faust
make benchmark -j
make devinstall
```

To test installation:

```bash
cd faust/examples/generator
faustbench noise.dsp
```

Example of `faustbench` options:

```bash
faustbench         \
  -opt 3           \ # optimization level (defauts to -Ofast).
  -t 0 -time -midi \ # Faust options
  component.dsp
```

Output format is:

```
duration [seconds]
[faust options] : [benchmark score]  (DSP CPU % : [dsp cpu %]), DSP size : [dsp size]
```

Example output:

```bash
$ faustbench noise.dsp
Selected compiler is g++ with CXXFLAGS = -Ofast -march=native
DSP bench of ./faust.BX3/noise/noise compiled in C++ running with FAUSTFLOAT = float
Running with 'compute' called with 512 samples
duration 0.001692
-scal : 3610.12 (DSP CPU % : 0.00519066), DSP size : 24
duration 0.000575
-scal -exp10 : 3616.82 (DSP CPU % : 0.141196), DSP size : 24
duration 0.001194
-vec -lv 0 -vs 4 : 2009.76 (DSP CPU % : 0.00936366), DSP size : 32
duration 0.000666
-vec -lv 0 -vs 8 : 3610.12 (DSP CPU % : -0.0431359), DSP size : 32
duration 0.00058
-vec -lv 0 -vs 16 : 3610.12 (DSP CPU % : 0.188154), DSP size : 32
duration 0.000613
-vec -lv 0 -vs 32 : 3420.12 (DSP CPU % : -0.187319), DSP size : 32
duration 0.000592
-vec -lv 0 -vs 64 : 3481.19 (DSP CPU % : 0.765661), DSP size : 32
duration 0.000742
-vec -lv 0 -vs 128 : 3304.18 (DSP CPU % : -0.0224959), DSP size : 32
duration 0.000683
-vec -lv 0 -vs 256 : 3304.18 (DSP CPU % : -0.0376109), DSP size : 32
duration 0.000781
-vec -lv 0 -vs 512 : 3304.18 (DSP CPU % : -0.0182567), DSP size : 32
duration 0.001255
-vec -fun -lv 0 -vs 4 : 2009.76 (DSP CPU % : 0.00968464), DSP size : 32
duration 0.00068
-vec -fun -lv 0 -vs 8 : 3610.12 (DSP CPU % : -0.0386755), DSP size : 32
duration 0.000685
-vec -fun -lv 0 -vs 16 : 3610.12 (DSP CPU % : -0.0387576), DSP size : 32
duration 0.00071
-vec -fun -lv 0 -vs 32 : 3420.12 (DSP CPU % : -0.0318986), DSP size : 32
duration 0.000785
-vec -fun -lv 0 -vs 64 : 3481.19 (DSP CPU % : -0.0180155), DSP size : 32
duration 0.000733
-vec -fun -lv 0 -vs 128 : 3361.15 (DSP CPU % : -0.0256008), DSP size : 32
duration 0.001844
-vec -fun -lv 0 -vs 256 : 3144.3 (DSP CPU % : 0.00621875), DSP size : 32
duration 0.000748
-vec -fun -lv 0 -vs 512 : 3304.18 (DSP CPU % : -0.023041), DSP size : 32
duration 0.001289
-vec -lv 0 -g -vs 4 : 2005.62 (DSP CPU % : 0.00952257), DSP size : 32
duration 0.000781
-vec -lv 0 -g -vs 8 : 2953.74 (DSP CPU % : -0.0200609), DSP size : 32
duration 0.000821
-vec -lv 0 -g -vs 16 : 3304.18 (DSP CPU % : -0.0151648), DSP size : 32
duration 0.000608
-vec -lv 0 -g -vs 32 : 3420.12 (DSP CPU % : -0.268724), DSP size : 32
duration 0.000719
-vec -lv 0 -g -vs 64 : 3420.12 (DSP CPU % : -0.0268783), DSP size : 32
duration 0.000797
-vec -lv 0 -g -vs 128 : 3304.18 (DSP CPU % : -0.0173436), DSP size : 32
duration 0.000751
-vec -lv 0 -g -vs 256 : 3304.18 (DSP CPU % : -0.0220774), DSP size : 32
duration 0.000745
-vec -lv 0 -g -vs 512 : 3304.18 (DSP CPU % : -0.0240836), DSP size : 32
duration 0.001192
-vec -lv 1 -vs 4 : 2009.76 (DSP CPU % : -0.00937252), DSP size : 32
duration 0.00078
-vec -lv 1 -vs 8 : 2985.4 (DSP CPU % : -0.0201545), DSP size : 32
duration 0.000751
-vec -lv 1 -vs 16 : 3304.18 (DSP CPU % : -0.0225387), DSP size : 32
duration 0.000725
-vec -lv 1 -vs 32 : 3420.12 (DSP CPU % : -0.0251883), DSP size : 32
duration 0.0007
-vec -lv 1 -vs 64 : 3481.19 (DSP CPU % : -0.0310129), DSP size : 32
duration 0.000655
-vec -lv 1 -vs 128 : 3361.15 (DSP CPU % : -0.0555922), DSP size : 32
duration 0.000769
-vec -lv 1 -vs 256 : 3144.3 (DSP CPU % : -0.0207212), DSP size : 32
duration 0.000771
-vec -lv 1 -vs 512 : 3304.18 (DSP CPU % : -0.0198537), DSP size : 32
Best value is : 3616.82 with -scal -exp10
```

## Result
### Merged Code
- Target: `DigiFaustMidi.dsp`
- Commit: 158d94739f4825e7489529759e0253c3dbdd2916

Roughly took 3 hours to complete on Ryzen 7 1700.

```bash
$ faustbench -t 0 -time DigiFaustMidi.dsp
Selected compiler is g++ with CXXFLAGS = -Ofast -march=native
Compiled with additional options : -t 0 -time

# Outputs of -time option are omitted.

DSP bench of ./faust.PQh/DigiFaustMidi/DigiFaustMidi compiled in C++ running with FAUSTFLOAT = float
Running with 'compute' called with 512 samples
duration 1.24877
-scal : 3.35321 (DSP CPU % : 10.8476), DSP size : 4256
duration 1.25074
-scal -exp10 : 3.35616 (DSP CPU % : 10.6073), DSP size : 4256
duration 1.19126
-vec -lv 0 -vs 4 : 3.466 (DSP CPU % : 10.0852), DSP size : 5728
duration 1.4358
-vec -lv 0 -vs 8 : 2.8521 (DSP CPU % : 12.165), DSP size : 5728
duration 1.51787
-vec -lv 0 -vs 16 : 2.68234 (DSP CPU % : 12.935), DSP size : 90440
duration 1.43887
-vec -lv 0 -vs 32 : 2.8552 (DSP CPU % : 12.1706), DSP size : 170760
duration 1.44085
-vec -lv 0 -vs 64 : 2.85025 (DSP CPU % : 12.6339), DSP size : 331400
duration 1.51357
-vec -lv 0 -vs 128 : 2.74109 (DSP CPU % : 12.6878), DSP size : 652680
duration 1.7704
-vec -lv 0 -vs 256 : 2.30832 (DSP CPU % : 15.0985), DSP size : 1295240
duration 2.88299
-vec -lv 0 -vs 512 : 1.42359 (DSP CPU % : 24.6323), DSP size : 2580360
duration 1.32598
-vec -fun -lv 0 -vs 4 : 3.44938 (DSP CPU % : 11.0516), DSP size : 5728
duration 1.55888
-vec -fun -lv 0 -vs 8 : 2.85192 (DSP CPU % : 12.8921), DSP size : 5728
duration 1.60728
-vec -fun -lv 0 -vs 16 : 2.68759 (DSP CPU % : 13.3298), DSP size : 90440
duration 1.48966
-vec -fun -lv 0 -vs 32 : 2.84808 (DSP CPU % : 12.7566), DSP size : 170760
duration 1.52917
-vec -fun -lv 0 -vs 64 : 2.81798 (DSP CPU % : 12.6231), DSP size : 331400
duration 1.47798
-vec -fun -lv 0 -vs 128 : 2.7797 (DSP CPU % : 12.7237), DSP size : 652680
duration 1.82807
-vec -fun -lv 0 -vs 256 : 2.29808 (DSP CPU % : 15.6298), DSP size : 1295240
duration 2.92326
-vec -fun -lv 0 -vs 512 : 1.4315 (DSP CPU % : 24.2474), DSP size : 2580360
duration 1.18287
-vec -lv 0 -g -vs 4 : 3.46683 (DSP CPU % : 10.0185), DSP size : 5728
duration 1.15134
-vec -lv 0 -g -vs 8 : 3.57974 (DSP CPU % : 9.67107), DSP size : 5728
duration 1.34568
-vec -lv 0 -g -vs 16 : 3.01655 (DSP CPU % : 11.4665), DSP size : 90440
duration 1.52911
-vec -lv 0 -g -vs 32 : 2.76335 (DSP CPU % : 12.5759), DSP size : 170760
duration 1.36589
-vec -lv 0 -g -vs 64 : 2.98821 (DSP CPU % : 11.6412), DSP size : 331400
duration 1.40871
-vec -lv 0 -g -vs 128 : 2.91084 (DSP CPU % : 11.9852), DSP size : 652680
duration 1.66123
-vec -lv 0 -g -vs 256 : 2.45822 (DSP CPU % : 14.2059), DSP size : 1295240
duration 2.57755
-vec -lv 0 -g -vs 512 : 1.56524 (DSP CPU % : 22.1268), DSP size : 2580360
duration 1.20673
-vec -lv 1 -vs 4 : 3.4485 (DSP CPU % : 10.1747), DSP size : 5728
duration 1.14101
-vec -lv 1 -vs 8 : 3.55357 (DSP CPU % : 9.72897), DSP size : 5728
duration 1.36916
-vec -lv 1 -vs 16 : 2.99396 (DSP CPU % : 11.6226), DSP size : 90440
duration 1.35654
-vec -lv 1 -vs 32 : 2.9852 (DSP CPU % : 11.6923), DSP size : 170760
duration 1.37308
-vec -lv 1 -vs 64 : 2.98339 (DSP CPU % : 11.6447), DSP size : 331400
duration 1.40986
-vec -lv 1 -vs 128 : 2.90176 (DSP CPU % : 12.0609), DSP size : 652680
duration 1.65886
-vec -lv 1 -vs 256 : 2.48033 (DSP CPU % : 14.0701), DSP size : 1295240
duration 2.77068
-vec -lv 1 -vs 512 : 1.5668 (DSP CPU % : 22.1892), DSP size : 2580360
Best value is : 3.57974 with -vec -lv 0 -g -vs 8
```

### Components
TODO: Compare approximated version to Faust `-fm` option.

- `*_approx.dsp` is approximated version.
- `*_test.dsp` is comparing exact version and approximated version.

#### index2freq
Difference is negligible.

#### pianokey2hz
Approximated version is around 2 times faster. Probably not so useful for mono synth.

#### tan_halfpi
Probably not so useful for mono synth.

`korg35LPF`, `oberheimF` and `svf` have same equation for variable `g`.

```faust
// freq is in Hz.
wd = 2*ma.PI*freq;
T = 1/ma.SR;
wa = (2/T)*tan(wd*T/2);
g = wa*T/2;
```

`g` can be simplified to:

```faust
g = tan(ma.PI * freq / ma.SR);
```

Usually, freq doesn't exceed `ma.SR / 2`. So the input to `tan` is in range [0, pi]. The name `tan_halfpi` comes from this.

Results in `tan_halfpi` directory are likely misleading.

Applying `tan_halfpi` to `korg35LPF`, `oberheimF` and `svf` makes them faster in `-scal` case, but only negligible difference in `-vec` cases.

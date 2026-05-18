#!/usr/bin/env bash
# bench/run.sh — build and run the DSP throughput benchmark.
#
# Usage:
#   ./bench/run.sh                # default 30 seconds, 5 runs
#   ./bench/run.sh 60 10          # 60 seconds of audio, 10 runs
#
# Output is suitable for `tee'ing into a file before regenerating the
# DSP, then comparing with another run after:
#
#   ./bench/run.sh 30 5 | tee bench/before.txt
#   ./faust/regenerate.sh
#   ./bench/run.sh 30 5 | tee bench/after.txt
#   diff -u bench/before.txt bench/after.txt
#
# The runs/seconds numbers are arguments rather than env vars so it's
# obvious from the command line what was measured.
# Intentionally NOT `set -e`. The metadata-gathering commands below
# (sed/awk on faustdsp.hpp and /proc/cpuinfo) are informational; if
# any of them fail under SIGPIPE when stdout is piped to `tee`, we
# still want the runs to happen. The g++ build's status is checked
# explicitly instead.

cd "$(dirname "$0")/.."
SECONDS_OF_AUDIO=${1:-30}
RUNS=${2:-5}

# Match dspcore's compilation flags as closely as we can. SIMD flags
# (-mavx2 etc.) intentionally omitted; the faustdsp.hpp inner loop is
# scalar (-scal in the Faust options) and any vectorization happens via
# the dispatch wrapper around it, not inside compute().
if ! g++ -O3 -std=c++17 \
        -I plugin/dpf/DigiDrie/dsp \
        bench/dsp_bench.cpp \
        -o bench/dsp_bench; then
    echo "build failed" >&2
    exit 1
fi

echo "# Faust DSP throughput benchmark"
echo "# $(date -Iseconds)"
echo "# $RUNS runs of ${SECONDS_OF_AUDIO}s audio each"
echo "# faustdsp.hpp header (Faust version):"
sed -n '1,5p' plugin/dpf/DigiDrie/dsp/faustdsp.hpp | sed 's/^/#   /'
echo "# CPU:"
if [ -r /proc/cpuinfo ]; then
    awk -F: '/^model name/ {print "#   " $2; exit}' /proc/cpuinfo
elif command -v sysctl >/dev/null 2>&1; then
    # macOS fallback
    echo "#   $(sysctl -n machdep.cpu.brand_string 2>/dev/null || echo unknown)"
fi
echo

for i in $(seq 1 "$RUNS"); do
    echo "--- run $i ---"
    ./bench/dsp_bench "$SECONDS_OF_AUDIO"
done

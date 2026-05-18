#!/usr/bin/env bash
# faust/regenerate.sh — regenerate plugin/dpf/DigiDrie/dsp/faustdsp.hpp
# from faust/DigiFaustMidi.dsp.
#
# Run from anywhere; the script changes to the repo root first so the
# paths below are stable. Requires `faust` on PATH.
#
# On NixOS:
#   nix shell nixpkgs#faust -c ./faust/regenerate.sh
#
# Notes on the flags:
#   -light     Don't generate the modern dsp/UI/Meta API. Produces a
#              self-contained class like Faust 2.28.0 used to, which
#              is what dspcore.{cpp,hpp} expects (it writes directly
#              to synth.fHslider<N> etc., not via UI* abstractions).
#   -I faust/lib
#              Adds faust/lib/ to the import search path. Necessary
#              because lib/DigiDrie.lib internally `import("GUI.lib")`
#              without the `lib/` prefix, and Faust's default search
#              order doesn't always find sibling imports.
#   -t 600     10-minute compile timeout. DigiDrie's DSP is big enough
#              that Faust 2.85's default 120 s kills it mid-pass. -t 0
#              should mean "no timeout" per the --help text but
#              empirically doesn't, so use a generous explicit value.
#   -time      Print per-pass timing — useful when something is slow.
#   -os -scal -ftz 0
#              Match the original 2.28.0 compile options recorded in
#              the existing faustdsp.hpp's header comment.
#   -mem3      In Faust 2.85, -os no longer implies the iControl/fControl
#              "as function parameters" calling convention by default
#              (it inherits `dsp::compute(int count, float**, float**)`
#              from the base class instead). -mem3 explicitly requests
#              the parameter-passing model — separate control()/compute()
#              methods that take iControl[] and fControl[] arrays. This
#              matches the 2.28.0-generated API that dspcore.cpp drives.
#   -it        Required by -mem3 ("inline-table"). With the parameter-
#              passing memory model, rdtable/rwtable lookup tables can't
#              live in a separate memory region; -it inlines them into
#              the main class. Faust 2.85 refuses to compile with
#              -mem1/-mem2/-mem3 unless -it is also set.
set -e
cd "$(dirname "$0")/.."

echo "Regenerating with $(faust --version 2>&1 | head -1)"

faust -light -t 600 -time \
    -I faust/lib \
    -lang cpp -os -ec -mem2 -it -scal -ftz 0 \
    faust/DigiFaustMidi.dsp \
    -o plugin/dpf/DigiDrie/dsp/faustdsp.hpp

echo
echo "Wrote plugin/dpf/DigiDrie/dsp/faustdsp.hpp"
echo "Verify the widget field numbering still matches dspcore.cpp's"
echo "direct field writes before building:"
echo
echo "  git diff plugin/dpf/DigiDrie/dsp/faustdsp.hpp"
echo
echo "If the fHsliderN / fButtonN / fVsliderN / fCheckboxN / fEntryN"
echo "field declarations match the old file in count and order, the"
echo "regeneration is safe to commit. If the numbering shifted, the"
echo "650+ field writes in dspcore.cpp need a corresponding remap."

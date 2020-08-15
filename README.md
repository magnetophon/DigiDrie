# DigiDrie

A monster monophonic synth, written in faust.

## features

- 4 oscillators in double crossfade configuration, so iow Vector Synthesis.
- each osc is a [CZ style](https://forum.pdpatchrepo.info/topic/5992/casio-cz-oscillators) osc, where you can choose between 9 waveforms
- each osc is phase-locked to a single master oscillator.
- but the phase can be changed and modulated, also by other oscillators.
- each osc can smoothly crossfade between octaves
- the phase signal feeding the CZ oscs can be passed trough a set of lowpass-filters.
  This sounds similar yet very different from filtering the output of an oscillator. For example: when you filter the phase input of a sine-wave, it creates harmonics and you can kind of hear the character of the filter.
  - there are a couple of lowpass-types (moog/oberheim/ms20) that can be dynamically mixed, but the sum of the mix is always 1
- the synth is fully stereo: each parameter has a main slider and a left-right difference slider
- each parameter (and it's l-r-diff brother) can be morphed between 8 settings, called macros, in a 3D cross-fade configuration.
- each macro can be modulated by 4 envelopes and 4 lfo's
- the number of envelopes, lfos can be easily changed at compile time


Here are two short [audio](https://magnetophon.nl/sounds/magnetophon/digiDrie.mp3) [demo's](https://raw.githubusercontent.com/magnetophon/DigiDrie/master/faust/various/digiDrie_III.mp3).


## macros

You can think of the macros as modulate-able presets, arranged in a cube.
Each of the "modulation->1/2/3" settings cross-fades between two sides of the cube, in either the x,y or z dimension.

So:
"modulation->1" cross-fades from preset 1,3,5 and 7 to 2,4,6,8.
"modulation->2" cross-fades from preset 1,2,5,6 to 3,4,7,8.
"modulation->3" cross-fades from preset 1,2,3,4 to 5,6,7,8.

By default, "modulation->1/2/3" are all 0, so you hear preset 1.
When you turn up "modulation->1", the settings morph to preset 2.

## building

### Faust

``` shell
git clone https://github.com/magnetophon/DigiDrie/
cd DigiDrie/faust/
```

To get a jack standalone app:

``` shell
faust2jack -t 0 -time -midi DigiDrie.dsp && ./DigiDrie

```

It's quite a long compile for a single faust program, +/- 7 minutes on my hardware.
The compiler is not hanging!  ;)

To look at a block diagram:

``` shell
faust -lang ocpp -t 0 -time -svg -f 1 DigiDiagram.dsp -o -drf  /dev/null && xdg-open DigiDiagram-svg/process.svg
```

The file ``DigiDiagram.dsp`` is slightly different from the main dsp, in that it doesn't use a [cludge written in faust](https://github.com/magnetophon/DigiDrie/blob/master/lib/lastNote.lib) to work around the [poor monophonic handeling](https://github.com/grame-cncm/faust/issues/252) faust currently has.
It increases the size of the diagram a lot, and doesn't help to clarify the actual synth.


### Plugin

This is work in progress. Plugin won't work properly for now.

```bash
git clone --recursive https://github.com/magnetophon/DigiDrie/

# Run following command if you forget to add `--recursive`,
# or update from already cloned repo:
cd DigiDrie
git submodule update --init --recursive

# Generate json.
cd faust/
faust -t 0 -time -json DigiFaustMidi.dsp
cp DigiFaustMidi.dsp.json ../plugin/data/

# Generate C++ code from json.
cd ../plugin/data
./copy.sh

# Build plugin.
cd ../dpf
make -j
```

Plugins are built into `DigiDrie/dpf/bin`.

- `DigiDrie`: JACK standalone
- `DigiDrie.lv2`: LV2
- `DigiDrie-vst.so`: VST2

## issues

Bug reports, feature requests and other [issues](https://github.com/magnetophon/DigiDrie/issues) welcome!

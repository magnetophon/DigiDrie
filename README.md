# DigiDrie

A monster monophonic synth, written in faust.

## features

- 4 oscillators in double crossfade configuration, so iow Vector Synthesis.
- each osc is a [CZ style](https://forum.pdpatchrepo.info/topic/5992/casio-cz-oscillators) osc, where you can choose between 9 waveforms
- each osc is phase-locked to a single master oscillator.
- but the phase can be changed and modulated, also by other oscillators.
- each osc can crossfade between octaves
- the phase signal feeding the CZ oscs can be passed trough a set of lowpass-filters.
  This sounds similar yet very different from filtering the output of an oscillator. For example: when you filter the phase input of a sine-wave, it creates harmonics and you can kind of hear the character of the filter. 
  - there are a couple of lowpass-types (moog/oberheim/ms20) that can be dynamically mixed, but the sum of the mix is always 1
- the synth is fully stereo: each parameter has a main slider and a left-right difference slider
- each parameter (and it's l-r-diff brother) can be modulated by 4 envelopes, 4 lfo's, and 4 macros.
- the number of envelopes, lfos and macros can be easily changed at compile time
- you can think of the macros as modulatable presets


Quick [audio demo](https://magnetophon.nl/sounds/magnetophon/digiDrie.mp3).


## macros

The masters->amount knobs are the main settings.
They are what you hear when all the macros and all the "masters->envelopes & LFO's" are at 0.
When "tab macros-> macro 1" is at 1 and all the other macros are at 0, you hear the settings of "modulation sources->macro 1".
When "tab macros-> macro 1" is at 0.5 and the others are at 0, the settings are halfway between "masters->amount" and "modulation sources->macro 1".
When the sum amount of all "tab macros-> macro 1..4" is one ore higher, you hear an interpolation of the macros, and none of the "masters->amount".

## modulation

The "masters->envelopes % LFO's" knobs are the amount of modulation on top of the macros.
So if you want a parameter to move around, independently of the macros, turn up some of the "modulation sources->envelope x" or "modulation sources->LFO x" knobs, and the "masters->envelopes & LFO's" knob.

## building

To get a jack standalone app:

``` shell
faust2jack -t 0 -time -midi DigiDrie.dsp && ./DigiDrie

```

For an lv2 plugin:

``` shell
faust2lv2 -t 0 -time -nvoices 1 -gui DigiFaustMidi.dsp
ln -s DigiFaustMidi.lv2  ~/.lv2/
```

It's quite a long compile for a single faust program, +/- 7 minutes on my hardware.
The compiler is not hanging!  ;)

To look at a block diagram:

``` shell
faust -lang ocpp -t 0 -time -svg -f 1 DigiDiagram.dsp -o -drf  /dev/null && xdg-open DigiDiagram-svg/process.svg
```

The file ``DigiDiagram.dsp`` is slightly different from the main dsp, in that it doesn't use a [cludge written in faust](https://github.com/magnetophon/DigiDrie/blob/master/lib/lastNote.lib) to work around the [poor monophonic handeling](https://github.com/grame-cncm/faust/issues/252) faust currently has.
It increases the size of the diagram a lot, and doesn't help to clarify the actual synth.


## issues

Bug reports, feature requests and other [issues](https://github.com/magnetophon/DigiDrie/issues) welcome!

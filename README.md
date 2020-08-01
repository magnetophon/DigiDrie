# DigiDrie

A monster monophonic synth, written in faust.

- 4 oscillators in double crossfade configuration, so iow Vector Synthesis.
- each osc is a [CZ style](https://forum.pdpatchrepo.info/topic/5992/casio-cz-oscillators) osc, where you can choose between 9 waveforms
- each osc is phase-locked to a single master
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


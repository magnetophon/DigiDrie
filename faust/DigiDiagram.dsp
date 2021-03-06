declare author "Bart Brouns";
declare license "AGPLv3";
declare name "DigiDiagram";
declare options "[midi:on]";
import("lib/DigiDrie.lib");


// Do:
//
//faust -lang ocpp -t 0 -time -svg -f 1 DigiDiagram.dsp -o -drf /dev/null && xdg-open DigiDiagram-svg/process.svg
//
//to look at the diagram.


process =
  lastNote:CZsynthVectorOsc;

diagram = 1; // simplify the diagram so it's not too big
lastNote = 0; // don't use cludge: https://github.com/grame-cncm/faust/issues/252

// traditional faust synth:
freq(note) = midiGroup(hslider("freq[scale:log]",440,0,24000,0.0001))*maxOct : portamentoSwitcher(note)*bend(pitchWheel,negRange,posRange);
gain(note) = midiGroup(hslider("gain",0.5,0,1,stepsize));
gate(note) = midiGroup(button("gate"));

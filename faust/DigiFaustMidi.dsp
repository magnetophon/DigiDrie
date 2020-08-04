declare author "Bart Brouns";
declare license "AGPLv3";
declare name "DigiFaustMidi";
declare options "[midi:on][nvoices:1]";
import("lib/DigiDrie.lib");

// Compile with:
// faust2jack -t 0 -time -midi -nvoices 1 DigiFaustMidi.dsp

process =
  CZsynthVectorOsc;

diagram = 0; // simplify the diagram so it's not too big
lastNote = 0; // don't use cludge: https://github.com/grame-cncm/faust/issues/252

// traditional faust synth:
freq(lastNote) = midiGroup(hslider("freq",440,0,24000,0.0001))*maxOct : portamentoSwitcher;
gain(lastNote) = midiGroup(hslider("gain",0.5,0,1,stepsize));
gate(lastNote) = midiGroup(button("gate"));

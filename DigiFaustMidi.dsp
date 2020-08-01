declare author "Bart Brouns";
declare license "AGPLv3";
declare name "DigiDrie";
declare options "[midi:on]";
import("lib/DigiDrie.lib");

process =
  CZsynthVectorOsc;

diagram = 0; // don't simplify
lastNote = 0; // don't use cludge: https://github.com/grame-cncm/faust/issues/252

traditional faust synth:
freq(lastNote) = midiGroup(hslider("freq",440,0,24000,0.0001)) :new_smooth( ba.tau2pole(portamento));
gain(lastNote) = midiGroup(hslider("gain",0.5,0,1,stepsize));
gate(lastNote) = midiGroup(button("gate"));

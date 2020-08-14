declare author "Bart Brouns";
declare license "AGPLv3";
declare name "DigiDrie";
declare options "[midi:on]";
import("lib/DigiDrie.lib");
import("lib/lastNote.lib");

process =
  CZsynthVectorOsc;
// freq(0);

// use a cludge to fix monophonic midi handling: https://github.com/grame-cncm/faust/issues/252
freq(lastNote) = lastNote:ba.pianokey2hz: portamentoSwitcher*bend(pitchWheel,negRange,posRange);
gain(lastNote) = (vel(lastNote)/127); // increases the cpu-usage, from 7% to 11%
gate(lastNote) = gain(lastNote)>0;

diagram = 0; // don't simplify

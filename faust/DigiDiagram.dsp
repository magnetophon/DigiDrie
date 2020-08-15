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
  lastNote:(_,!):CZsynthVectorOsc;
// oscParams(A,0,0.1,1,1,12, 0.2,0.3,0.4,0.5);
// preFilterOctG(A,0,fund,gate,gain,3,0.8);
// oscPreFilterParams(A,0,gate,gain,note) ;
// modMixer(A,svfGroup,0,svfLevel,gate,gain,note);

diagram = 1; // simplify the diagram so it's not too big
lastNote = 0,1; // don't use cludge: https://github.com/grame-cncm/faust/issues/252

fund = 0.1;
gate = 1;
gain=0.9;
note = 3;
freq(x) = 440;
// traditional faust synth:
// freq(note) = midiGroup(hslider("freq[scale:log]",440,0,24000,0.0001))*maxOct : portamentoSwitcher(note)*bend(pitchWheel,negRange,posRange);
// gain(note) = midiGroup(hslider("gain",0.5,0,1,stepsize));
// gate(note) = midiGroup(button("gate"));

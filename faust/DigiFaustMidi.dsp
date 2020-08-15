declare author "Bart Brouns";
declare license "AGPLv3";
declare name "DigiFaustMidi";
// declare options "[midi:on][nvoices:1]";
import("lib/DigiDrie.lib");

// Compile with:
// faust2jack -t 0 -time -midi -nvoices 1 DigiFaustMidi.dsp

process =
  // (vectorOsc(0,fund,gate,gain,note,0.3,0.4) );
  // oscParams(A,0,0.1,1,1,12, 0.2,0.3,0.4,0.5);
  // preFilterOctG(A,0,fund,gate,gain,3,0.8)
  // oscPreFilterParams(group,i,gate,gain,note) ;
  modMixer(A,svfGroup,0,svfLevel,gate,gain,note);


// lastNote:CZsynthVectorOsc;

fund = 0.1;
gate = button("gate");
gain=0.9;
note = 3;


diagram = 0; // simplify the diagram so it's not too big
lastNote = 0; // don't use cludge: https://github.com/grame-cncm/faust/issues/252

// traditional faust synth:
// freq(note) = midiGroup(hslider("freq[scale:log]",440,0,24000,0.0001))*maxOct : portamentoSwitcher(note)*bend(pitchWheel,negRange,posRange);
// gain(note) = midiGroup(hslider("gain",0.5,0,1,stepsize));
// gate(note) = midiGroup(button("gate"));

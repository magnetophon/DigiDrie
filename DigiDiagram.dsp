declare author "Bart Brouns";
declare license "AGPLv3";
declare name "DigiDrie";
declare options "[midi:on]";
import("lib/DigiDrie.lib");

process =
  CZsynthVectorOsc;

diagram = 1; // simplify the diagram so it's not too big

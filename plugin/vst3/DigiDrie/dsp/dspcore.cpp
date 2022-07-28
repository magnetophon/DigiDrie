// Generated code.

#include "dspcore.hpp"

#include <algorithm>
#include <numeric>
#include <random>

#include <iostream>

#if INSTRSET >= 10
  #define NOTE_NAME Note_AVX512
  #define DSPCORE_NAME DSPCore_AVX512
#elif INSTRSET >= 8
  #define NOTE_NAME Note_AVX2
  #define DSPCORE_NAME DSPCore_AVX2
#elif INSTRSET >= 5
  #define NOTE_NAME Note_SSE41
  #define DSPCORE_NAME DSPCore_SSE41
#elif INSTRSET >= 2
  #define NOTE_NAME Note_SSE2
  #define DSPCORE_NAME DSPCore_SSE2
#else
  #error Unsupported instruction set
#endif

inline float
notePitchToFrequency(float notePitch, float equalTemperament = 12.0f, float a4Hz = 440.0f)
{
  return a4Hz * std::pow(2.0f, (notePitch - 69.0f) / equalTemperament);
}

DSPCORE_NAME::DSPCORE_NAME() {
  noteStack.reserve(1024);
}

void DSPCORE_NAME::setup(double sampleRate)
{
  this->sampleRate = sampleRate;

  noteStack.resize(0);
  synth.init(sampleRate);

  startup();
}

void DSPCORE_NAME::reset() {
  noteStack.resize(0);
  startup();
}

void DSPCORE_NAME::startup() {}

void DSPCORE_NAME::setParameters(float tempo) {
  using ID = ParameterID::ID;
  auto &pv = param.value;

  synth.fCheckbox0 = pv[ID::globalSwitchesFreefloatosc]->getFloat();
  synth.fEntry2 = pv[ID::globalSwitchesPositivebendrange]->getFloat();
  synth.fEntry1 = pv[ID::globalSwitchesNegativebendrange]->getFloat();
  synth.fEntry0 = pv[ID::globalSwitchesPortaoff_auto_on]->getFloat();
  synth.fVslider8 = pv[ID::globalMasterphase]->getFloat();
  synth.fVslider7 = pv[ID::globalPortamento]->getFloat();
  synth.fHslider626 = pv[ID::globalStereoMainVectorAb_cdMacro1_4Macro1Ab_cd]->getFloat();
  synth.fHslider627 = pv[ID::globalStereoMainVectorAb_cdMacro1_4Macro2Ab_cd]->getFloat();
  synth.fHslider628 = pv[ID::globalStereoMainVectorAb_cdMacro1_4Macro3Ab_cd]->getFloat();
  synth.fHslider629 = pv[ID::globalStereoMainVectorAb_cdMacro1_4Macro4Ab_cd]->getFloat();
  synth.fHslider634 = pv[ID::globalStereoMainVectorAb_cdMacro5_8Macro5Ab_cd]->getFloat();
  synth.fHslider635 = pv[ID::globalStereoMainVectorAb_cdMacro5_8Macro6Ab_cd]->getFloat();
  synth.fHslider636 = pv[ID::globalStereoMainVectorAb_cdMacro5_8Macro7Ab_cd]->getFloat();
  synth.fHslider637 = pv[ID::globalStereoMainVectorAb_cdMacro5_8Macro8Ab_cd]->getFloat();
  synth.fHslider610 = pv[ID::globalStereoMainVectorAc_bdMacro1_4Macro1Ac_bd]->getFloat();
  synth.fHslider611 = pv[ID::globalStereoMainVectorAc_bdMacro1_4Macro2Ac_bd]->getFloat();
  synth.fHslider612 = pv[ID::globalStereoMainVectorAc_bdMacro1_4Macro3Ac_bd]->getFloat();
  synth.fHslider613 = pv[ID::globalStereoMainVectorAc_bdMacro1_4Macro4Ac_bd]->getFloat();
  synth.fHslider618 = pv[ID::globalStereoMainVectorAc_bdMacro5_8Macro5Ac_bd]->getFloat();
  synth.fHslider619 = pv[ID::globalStereoMainVectorAc_bdMacro5_8Macro6Ac_bd]->getFloat();
  synth.fHslider620 = pv[ID::globalStereoMainVectorAc_bdMacro5_8Macro7Ac_bd]->getFloat();
  synth.fHslider621 = pv[ID::globalStereoMainVectorAc_bdMacro5_8Macro8Ac_bd]->getFloat();
  synth.fHslider630 = pv[ID::globalStereoL_roffsetVectorAb_cdMacro1_4Macro1Ab_cd]->getFloat();
  synth.fHslider631 = pv[ID::globalStereoL_roffsetVectorAb_cdMacro1_4Macro2Ab_cd]->getFloat();
  synth.fHslider632 = pv[ID::globalStereoL_roffsetVectorAb_cdMacro1_4Macro3Ab_cd]->getFloat();
  synth.fHslider633 = pv[ID::globalStereoL_roffsetVectorAb_cdMacro1_4Macro4Ab_cd]->getFloat();
  synth.fHslider638 = pv[ID::globalStereoL_roffsetVectorAb_cdMacro5_8Macro5Ab_cd]->getFloat();
  synth.fHslider639 = pv[ID::globalStereoL_roffsetVectorAb_cdMacro5_8Macro6Ab_cd]->getFloat();
  synth.fHslider640 = pv[ID::globalStereoL_roffsetVectorAb_cdMacro5_8Macro7Ab_cd]->getFloat();
  synth.fHslider641 = pv[ID::globalStereoL_roffsetVectorAb_cdMacro5_8Macro8Ab_cd]->getFloat();
  synth.fHslider614 = pv[ID::globalStereoL_roffsetVectorAc_bdMacro1_4Macro1Ac_bd]->getFloat();
  synth.fHslider615 = pv[ID::globalStereoL_roffsetVectorAc_bdMacro1_4Macro2Ac_bd]->getFloat();
  synth.fHslider616 = pv[ID::globalStereoL_roffsetVectorAc_bdMacro1_4Macro3Ac_bd]->getFloat();
  synth.fHslider617 = pv[ID::globalStereoL_roffsetVectorAc_bdMacro1_4Macro4Ac_bd]->getFloat();
  synth.fHslider622 = pv[ID::globalStereoL_roffsetVectorAc_bdMacro5_8Macro5Ac_bd]->getFloat();
  synth.fHslider623 = pv[ID::globalStereoL_roffsetVectorAc_bdMacro5_8Macro6Ac_bd]->getFloat();
  synth.fHslider624 = pv[ID::globalStereoL_roffsetVectorAc_bdMacro5_8Macro7Ac_bd]->getFloat();
  synth.fHslider625 = pv[ID::globalStereoL_roffsetVectorAc_bdMacro5_8Macro8Ac_bd]->getFloat();
  synth.fHslider47 = pv[ID::filterStereoMainMix_tweakMixSvfMacro1_4Macro1Level]->getFloat();
  synth.fHslider65 = pv[ID::filterStereoMainMix_tweakMixSvfMacro1_4Macro2Level]->getFloat();
  synth.fHslider83 = pv[ID::filterStereoMainMix_tweakMixSvfMacro1_4Macro3Level]->getFloat();
  synth.fHslider84 = pv[ID::filterStereoMainMix_tweakMixSvfMacro1_4Macro4Level]->getFloat();
  synth.fHslider89 = pv[ID::filterStereoMainMix_tweakMixSvfMacro5_8Macro5Level]->getFloat();
  synth.fHslider90 = pv[ID::filterStereoMainMix_tweakMixSvfMacro5_8Macro6Level]->getFloat();
  synth.fHslider91 = pv[ID::filterStereoMainMix_tweakMixSvfMacro5_8Macro7Level]->getFloat();
  synth.fHslider92 = pv[ID::filterStereoMainMix_tweakMixSvfMacro5_8Macro8Level]->getFloat();
  synth.fHslider97 = pv[ID::filterStereoMainMix_tweakMixMs20Macro1_4Macro1Level]->getFloat();
  synth.fHslider98 = pv[ID::filterStereoMainMix_tweakMixMs20Macro1_4Macro2Level]->getFloat();
  synth.fHslider99 = pv[ID::filterStereoMainMix_tweakMixMs20Macro1_4Macro3Level]->getFloat();
  synth.fHslider100 = pv[ID::filterStereoMainMix_tweakMixMs20Macro1_4Macro4Level]->getFloat();
  synth.fHslider105 = pv[ID::filterStereoMainMix_tweakMixMs20Macro5_8Macro5Level]->getFloat();
  synth.fHslider106 = pv[ID::filterStereoMainMix_tweakMixMs20Macro5_8Macro6Level]->getFloat();
  synth.fHslider107 = pv[ID::filterStereoMainMix_tweakMixMs20Macro5_8Macro7Level]->getFloat();
  synth.fHslider108 = pv[ID::filterStereoMainMix_tweakMixMs20Macro5_8Macro8Level]->getFloat();
  synth.fHslider113 = pv[ID::filterStereoMainMix_tweakMixOberheimMacro1_4Macro1Level]->getFloat();
  synth.fHslider114 = pv[ID::filterStereoMainMix_tweakMixOberheimMacro1_4Macro2Level]->getFloat();
  synth.fHslider115 = pv[ID::filterStereoMainMix_tweakMixOberheimMacro1_4Macro3Level]->getFloat();
  synth.fHslider116 = pv[ID::filterStereoMainMix_tweakMixOberheimMacro1_4Macro4Level]->getFloat();
  synth.fHslider121 = pv[ID::filterStereoMainMix_tweakMixOberheimMacro5_8Macro5Level]->getFloat();
  synth.fHslider122 = pv[ID::filterStereoMainMix_tweakMixOberheimMacro5_8Macro6Level]->getFloat();
  synth.fHslider123 = pv[ID::filterStereoMainMix_tweakMixOberheimMacro5_8Macro7Level]->getFloat();
  synth.fHslider124 = pv[ID::filterStereoMainMix_tweakMixOberheimMacro5_8Macro8Level]->getFloat();
  synth.fHslider129 = pv[ID::filterStereoMainMix_tweakTweakFreqMacro1_4Macro1Normfreq]->getFloat();
  synth.fHslider130 = pv[ID::filterStereoMainMix_tweakTweakFreqMacro1_4Macro2Normfreq]->getFloat();
  synth.fHslider131 = pv[ID::filterStereoMainMix_tweakTweakFreqMacro1_4Macro3Normfreq]->getFloat();
  synth.fHslider132 = pv[ID::filterStereoMainMix_tweakTweakFreqMacro1_4Macro4Normfreq]->getFloat();
  synth.fHslider137 = pv[ID::filterStereoMainMix_tweakTweakFreqMacro5_8Macro5Normfreq]->getFloat();
  synth.fHslider138 = pv[ID::filterStereoMainMix_tweakTweakFreqMacro5_8Macro6Normfreq]->getFloat();
  synth.fHslider139 = pv[ID::filterStereoMainMix_tweakTweakFreqMacro5_8Macro7Normfreq]->getFloat();
  synth.fHslider140 = pv[ID::filterStereoMainMix_tweakTweakFreqMacro5_8Macro8Normfreq]->getFloat();
  synth.fHslider242 = pv[ID::filterStereoMainMix_tweakTweakQMacro1_4Macro1Q]->getFloat();
  synth.fHslider243 = pv[ID::filterStereoMainMix_tweakTweakQMacro1_4Macro2Q]->getFloat();
  synth.fHslider244 = pv[ID::filterStereoMainMix_tweakTweakQMacro1_4Macro3Q]->getFloat();
  synth.fHslider245 = pv[ID::filterStereoMainMix_tweakTweakQMacro1_4Macro4Q]->getFloat();
  synth.fHslider250 = pv[ID::filterStereoMainMix_tweakTweakQMacro5_8Macro5Q]->getFloat();
  synth.fHslider251 = pv[ID::filterStereoMainMix_tweakTweakQMacro5_8Macro6Q]->getFloat();
  synth.fHslider252 = pv[ID::filterStereoMainMix_tweakTweakQMacro5_8Macro7Q]->getFloat();
  synth.fHslider253 = pv[ID::filterStereoMainMix_tweakTweakQMacro5_8Macro8Q]->getFloat();
  synth.fHslider85 = pv[ID::filterStereoL_roffsetMix_tweakMixSvfMacro1_4Macro1Level]->getFloat();
  synth.fHslider86 = pv[ID::filterStereoL_roffsetMix_tweakMixSvfMacro1_4Macro2Level]->getFloat();
  synth.fHslider87 = pv[ID::filterStereoL_roffsetMix_tweakMixSvfMacro1_4Macro3Level]->getFloat();
  synth.fHslider88 = pv[ID::filterStereoL_roffsetMix_tweakMixSvfMacro1_4Macro4Level]->getFloat();
  synth.fHslider93 = pv[ID::filterStereoL_roffsetMix_tweakMixSvfMacro5_8Macro5Level]->getFloat();
  synth.fHslider94 = pv[ID::filterStereoL_roffsetMix_tweakMixSvfMacro5_8Macro6Level]->getFloat();
  synth.fHslider95 = pv[ID::filterStereoL_roffsetMix_tweakMixSvfMacro5_8Macro7Level]->getFloat();
  synth.fHslider96 = pv[ID::filterStereoL_roffsetMix_tweakMixSvfMacro5_8Macro8Level]->getFloat();
  synth.fHslider101 = pv[ID::filterStereoL_roffsetMix_tweakMixMs20Macro1_4Macro1Level]->getFloat();
  synth.fHslider102 = pv[ID::filterStereoL_roffsetMix_tweakMixMs20Macro1_4Macro2Level]->getFloat();
  synth.fHslider103 = pv[ID::filterStereoL_roffsetMix_tweakMixMs20Macro1_4Macro3Level]->getFloat();
  synth.fHslider104 = pv[ID::filterStereoL_roffsetMix_tweakMixMs20Macro1_4Macro4Level]->getFloat();
  synth.fHslider109 = pv[ID::filterStereoL_roffsetMix_tweakMixMs20Macro5_8Macro5Level]->getFloat();
  synth.fHslider110 = pv[ID::filterStereoL_roffsetMix_tweakMixMs20Macro5_8Macro6Level]->getFloat();
  synth.fHslider111 = pv[ID::filterStereoL_roffsetMix_tweakMixMs20Macro5_8Macro7Level]->getFloat();
  synth.fHslider112 = pv[ID::filterStereoL_roffsetMix_tweakMixMs20Macro5_8Macro8Level]->getFloat();
  synth.fHslider117 = pv[ID::filterStereoL_roffsetMix_tweakMixOberheimMacro1_4Macro1Level]->getFloat();
  synth.fHslider118 = pv[ID::filterStereoL_roffsetMix_tweakMixOberheimMacro1_4Macro2Level]->getFloat();
  synth.fHslider119 = pv[ID::filterStereoL_roffsetMix_tweakMixOberheimMacro1_4Macro3Level]->getFloat();
  synth.fHslider120 = pv[ID::filterStereoL_roffsetMix_tweakMixOberheimMacro1_4Macro4Level]->getFloat();
  synth.fHslider125 = pv[ID::filterStereoL_roffsetMix_tweakMixOberheimMacro5_8Macro5Level]->getFloat();
  synth.fHslider126 = pv[ID::filterStereoL_roffsetMix_tweakMixOberheimMacro5_8Macro6Level]->getFloat();
  synth.fHslider127 = pv[ID::filterStereoL_roffsetMix_tweakMixOberheimMacro5_8Macro7Level]->getFloat();
  synth.fHslider128 = pv[ID::filterStereoL_roffsetMix_tweakMixOberheimMacro5_8Macro8Level]->getFloat();
  synth.fHslider133 = pv[ID::filterStereoL_roffsetMix_tweakTweakFreqMacro1_4Macro1Normfreq]->getFloat();
  synth.fHslider134 = pv[ID::filterStereoL_roffsetMix_tweakTweakFreqMacro1_4Macro2Normfreq]->getFloat();
  synth.fHslider135 = pv[ID::filterStereoL_roffsetMix_tweakTweakFreqMacro1_4Macro3Normfreq]->getFloat();
  synth.fHslider136 = pv[ID::filterStereoL_roffsetMix_tweakTweakFreqMacro1_4Macro4Normfreq]->getFloat();
  synth.fHslider141 = pv[ID::filterStereoL_roffsetMix_tweakTweakFreqMacro5_8Macro5Normfreq]->getFloat();
  synth.fHslider142 = pv[ID::filterStereoL_roffsetMix_tweakTweakFreqMacro5_8Macro6Normfreq]->getFloat();
  synth.fHslider143 = pv[ID::filterStereoL_roffsetMix_tweakTweakFreqMacro5_8Macro7Normfreq]->getFloat();
  synth.fHslider144 = pv[ID::filterStereoL_roffsetMix_tweakTweakFreqMacro5_8Macro8Normfreq]->getFloat();
  synth.fHslider246 = pv[ID::filterStereoL_roffsetMix_tweakTweakQMacro1_4Macro1Q]->getFloat();
  synth.fHslider247 = pv[ID::filterStereoL_roffsetMix_tweakTweakQMacro1_4Macro2Q]->getFloat();
  synth.fHslider248 = pv[ID::filterStereoL_roffsetMix_tweakTweakQMacro1_4Macro3Q]->getFloat();
  synth.fHslider249 = pv[ID::filterStereoL_roffsetMix_tweakTweakQMacro1_4Macro4Q]->getFloat();
  synth.fHslider254 = pv[ID::filterStereoL_roffsetMix_tweakTweakQMacro5_8Macro5Q]->getFloat();
  synth.fHslider255 = pv[ID::filterStereoL_roffsetMix_tweakTweakQMacro5_8Macro6Q]->getFloat();
  synth.fHslider256 = pv[ID::filterStereoL_roffsetMix_tweakTweakQMacro5_8Macro7Q]->getFloat();
  synth.fHslider257 = pv[ID::filterStereoL_roffsetMix_tweakTweakQMacro5_8Macro8Q]->getFloat();
  synth.fHslider258 = pv[ID::aStereoMainCz_pmCzIndexMacro1_4Macro1Index]->getFloat();
  synth.fHslider259 = pv[ID::aStereoMainCz_pmCzIndexMacro1_4Macro2Index]->getFloat();
  synth.fHslider260 = pv[ID::aStereoMainCz_pmCzIndexMacro1_4Macro3Index]->getFloat();
  synth.fHslider261 = pv[ID::aStereoMainCz_pmCzIndexMacro1_4Macro4Index]->getFloat();
  synth.fHslider266 = pv[ID::aStereoMainCz_pmCzIndexMacro5_8Macro5Index]->getFloat();
  synth.fHslider267 = pv[ID::aStereoMainCz_pmCzIndexMacro5_8Macro6Index]->getFloat();
  synth.fHslider268 = pv[ID::aStereoMainCz_pmCzIndexMacro5_8Macro7Index]->getFloat();
  synth.fHslider269 = pv[ID::aStereoMainCz_pmCzIndexMacro5_8Macro8Index]->getFloat();
  synth.fHslider210 = pv[ID::aStereoMainCz_pmCzOctaveMacro1_4Macro1Octave]->getFloat();
  synth.fHslider211 = pv[ID::aStereoMainCz_pmCzOctaveMacro1_4Macro2Octave]->getFloat();
  synth.fHslider212 = pv[ID::aStereoMainCz_pmCzOctaveMacro1_4Macro3Octave]->getFloat();
  synth.fHslider213 = pv[ID::aStereoMainCz_pmCzOctaveMacro1_4Macro4Octave]->getFloat();
  synth.fHslider218 = pv[ID::aStereoMainCz_pmCzOctaveMacro5_8Macro5Octave]->getFloat();
  synth.fHslider219 = pv[ID::aStereoMainCz_pmCzOctaveMacro5_8Macro6Octave]->getFloat();
  synth.fHslider220 = pv[ID::aStereoMainCz_pmCzOctaveMacro5_8Macro7Octave]->getFloat();
  synth.fHslider221 = pv[ID::aStereoMainCz_pmCzOctaveMacro5_8Macro8Octave]->getFloat();
  synth.fHslider194 = pv[ID::aStereoMainCz_pmCzPhaseMacro1_4Macro1Phase]->getFloat();
  synth.fHslider195 = pv[ID::aStereoMainCz_pmCzPhaseMacro1_4Macro2Phase]->getFloat();
  synth.fHslider196 = pv[ID::aStereoMainCz_pmCzPhaseMacro1_4Macro3Phase]->getFloat();
  synth.fHslider197 = pv[ID::aStereoMainCz_pmCzPhaseMacro1_4Macro4Phase]->getFloat();
  synth.fHslider202 = pv[ID::aStereoMainCz_pmCzPhaseMacro5_8Macro5Phase]->getFloat();
  synth.fHslider203 = pv[ID::aStereoMainCz_pmCzPhaseMacro5_8Macro6Phase]->getFloat();
  synth.fHslider204 = pv[ID::aStereoMainCz_pmCzPhaseMacro5_8Macro7Phase]->getFloat();
  synth.fHslider205 = pv[ID::aStereoMainCz_pmCzPhaseMacro5_8Macro8Phase]->getFloat();
  synth.fHslider226 = pv[ID::aStereoMainCz_pmPmPmaMacro1_4Macro1Pma]->getFloat();
  synth.fHslider227 = pv[ID::aStereoMainCz_pmPmPmaMacro1_4Macro2Pma]->getFloat();
  synth.fHslider228 = pv[ID::aStereoMainCz_pmPmPmaMacro1_4Macro3Pma]->getFloat();
  synth.fHslider229 = pv[ID::aStereoMainCz_pmPmPmaMacro1_4Macro4Pma]->getFloat();
  synth.fHslider234 = pv[ID::aStereoMainCz_pmPmPmaMacro5_8Macro5Pma]->getFloat();
  synth.fHslider235 = pv[ID::aStereoMainCz_pmPmPmaMacro5_8Macro6Pma]->getFloat();
  synth.fHslider236 = pv[ID::aStereoMainCz_pmPmPmaMacro5_8Macro7Pma]->getFloat();
  synth.fHslider237 = pv[ID::aStereoMainCz_pmPmPmaMacro5_8Macro8Pma]->getFloat();
  synth.fHslider177 = pv[ID::aStereoMainCz_pmPmPmbMacro1_4Macro1Pmb]->getFloat();
  synth.fHslider178 = pv[ID::aStereoMainCz_pmPmPmbMacro1_4Macro2Pmb]->getFloat();
  synth.fHslider179 = pv[ID::aStereoMainCz_pmPmPmbMacro1_4Macro3Pmb]->getFloat();
  synth.fHslider180 = pv[ID::aStereoMainCz_pmPmPmbMacro1_4Macro4Pmb]->getFloat();
  synth.fHslider185 = pv[ID::aStereoMainCz_pmPmPmbMacro5_8Macro5Pmb]->getFloat();
  synth.fHslider186 = pv[ID::aStereoMainCz_pmPmPmbMacro5_8Macro6Pmb]->getFloat();
  synth.fHslider187 = pv[ID::aStereoMainCz_pmPmPmbMacro5_8Macro7Pmb]->getFloat();
  synth.fHslider188 = pv[ID::aStereoMainCz_pmPmPmbMacro5_8Macro8Pmb]->getFloat();
  synth.fHslider161 = pv[ID::aStereoMainCz_pmPmPmcMacro1_4Macro1Pmc]->getFloat();
  synth.fHslider162 = pv[ID::aStereoMainCz_pmPmPmcMacro1_4Macro2Pmc]->getFloat();
  synth.fHslider163 = pv[ID::aStereoMainCz_pmPmPmcMacro1_4Macro3Pmc]->getFloat();
  synth.fHslider164 = pv[ID::aStereoMainCz_pmPmPmcMacro1_4Macro4Pmc]->getFloat();
  synth.fHslider169 = pv[ID::aStereoMainCz_pmPmPmcMacro5_8Macro5Pmc]->getFloat();
  synth.fHslider170 = pv[ID::aStereoMainCz_pmPmPmcMacro5_8Macro6Pmc]->getFloat();
  synth.fHslider171 = pv[ID::aStereoMainCz_pmPmPmcMacro5_8Macro7Pmc]->getFloat();
  synth.fHslider172 = pv[ID::aStereoMainCz_pmPmPmcMacro5_8Macro8Pmc]->getFloat();
  synth.fHslider145 = pv[ID::aStereoMainCz_pmPmPmdMacro1_4Macro1Pmd]->getFloat();
  synth.fHslider146 = pv[ID::aStereoMainCz_pmPmPmdMacro1_4Macro2Pmd]->getFloat();
  synth.fHslider147 = pv[ID::aStereoMainCz_pmPmPmdMacro1_4Macro3Pmd]->getFloat();
  synth.fHslider148 = pv[ID::aStereoMainCz_pmPmPmdMacro1_4Macro4Pmd]->getFloat();
  synth.fHslider153 = pv[ID::aStereoMainCz_pmPmPmdMacro5_8Macro5Pmd]->getFloat();
  synth.fHslider154 = pv[ID::aStereoMainCz_pmPmPmdMacro5_8Macro6Pmd]->getFloat();
  synth.fHslider155 = pv[ID::aStereoMainCz_pmPmPmdMacro5_8Macro7Pmd]->getFloat();
  synth.fHslider156 = pv[ID::aStereoMainCz_pmPmPmdMacro5_8Macro8Pmd]->getFloat();
  synth.fHslider262 = pv[ID::aStereoL_roffsetCz_pmCzIndexMacro1_4Macro1Index]->getFloat();
  synth.fHslider263 = pv[ID::aStereoL_roffsetCz_pmCzIndexMacro1_4Macro2Index]->getFloat();
  synth.fHslider264 = pv[ID::aStereoL_roffsetCz_pmCzIndexMacro1_4Macro3Index]->getFloat();
  synth.fHslider265 = pv[ID::aStereoL_roffsetCz_pmCzIndexMacro1_4Macro4Index]->getFloat();
  synth.fHslider270 = pv[ID::aStereoL_roffsetCz_pmCzIndexMacro5_8Macro5Index]->getFloat();
  synth.fHslider271 = pv[ID::aStereoL_roffsetCz_pmCzIndexMacro5_8Macro6Index]->getFloat();
  synth.fHslider272 = pv[ID::aStereoL_roffsetCz_pmCzIndexMacro5_8Macro7Index]->getFloat();
  synth.fHslider273 = pv[ID::aStereoL_roffsetCz_pmCzIndexMacro5_8Macro8Index]->getFloat();
  synth.fHslider214 = pv[ID::aStereoL_roffsetCz_pmCzOctaveMacro1_4Macro1Octave]->getFloat();
  synth.fHslider215 = pv[ID::aStereoL_roffsetCz_pmCzOctaveMacro1_4Macro2Octave]->getFloat();
  synth.fHslider216 = pv[ID::aStereoL_roffsetCz_pmCzOctaveMacro1_4Macro3Octave]->getFloat();
  synth.fHslider217 = pv[ID::aStereoL_roffsetCz_pmCzOctaveMacro1_4Macro4Octave]->getFloat();
  synth.fHslider222 = pv[ID::aStereoL_roffsetCz_pmCzOctaveMacro5_8Macro5Octave]->getFloat();
  synth.fHslider223 = pv[ID::aStereoL_roffsetCz_pmCzOctaveMacro5_8Macro6Octave]->getFloat();
  synth.fHslider224 = pv[ID::aStereoL_roffsetCz_pmCzOctaveMacro5_8Macro7Octave]->getFloat();
  synth.fHslider225 = pv[ID::aStereoL_roffsetCz_pmCzOctaveMacro5_8Macro8Octave]->getFloat();
  synth.fHslider198 = pv[ID::aStereoL_roffsetCz_pmCzPhaseMacro1_4Macro1Phase]->getFloat();
  synth.fHslider199 = pv[ID::aStereoL_roffsetCz_pmCzPhaseMacro1_4Macro2Phase]->getFloat();
  synth.fHslider200 = pv[ID::aStereoL_roffsetCz_pmCzPhaseMacro1_4Macro3Phase]->getFloat();
  synth.fHslider201 = pv[ID::aStereoL_roffsetCz_pmCzPhaseMacro1_4Macro4Phase]->getFloat();
  synth.fHslider206 = pv[ID::aStereoL_roffsetCz_pmCzPhaseMacro5_8Macro5Phase]->getFloat();
  synth.fHslider207 = pv[ID::aStereoL_roffsetCz_pmCzPhaseMacro5_8Macro6Phase]->getFloat();
  synth.fHslider208 = pv[ID::aStereoL_roffsetCz_pmCzPhaseMacro5_8Macro7Phase]->getFloat();
  synth.fHslider209 = pv[ID::aStereoL_roffsetCz_pmCzPhaseMacro5_8Macro8Phase]->getFloat();
  synth.fHslider230 = pv[ID::aStereoL_roffsetCz_pmPmPmaMacro1_4Macro1Pma]->getFloat();
  synth.fHslider231 = pv[ID::aStereoL_roffsetCz_pmPmPmaMacro1_4Macro2Pma]->getFloat();
  synth.fHslider232 = pv[ID::aStereoL_roffsetCz_pmPmPmaMacro1_4Macro3Pma]->getFloat();
  synth.fHslider233 = pv[ID::aStereoL_roffsetCz_pmPmPmaMacro1_4Macro4Pma]->getFloat();
  synth.fHslider238 = pv[ID::aStereoL_roffsetCz_pmPmPmaMacro5_8Macro5Pma]->getFloat();
  synth.fHslider239 = pv[ID::aStereoL_roffsetCz_pmPmPmaMacro5_8Macro6Pma]->getFloat();
  synth.fHslider240 = pv[ID::aStereoL_roffsetCz_pmPmPmaMacro5_8Macro7Pma]->getFloat();
  synth.fHslider241 = pv[ID::aStereoL_roffsetCz_pmPmPmaMacro5_8Macro8Pma]->getFloat();
  synth.fHslider181 = pv[ID::aStereoL_roffsetCz_pmPmPmbMacro1_4Macro1Pmb]->getFloat();
  synth.fHslider182 = pv[ID::aStereoL_roffsetCz_pmPmPmbMacro1_4Macro2Pmb]->getFloat();
  synth.fHslider183 = pv[ID::aStereoL_roffsetCz_pmPmPmbMacro1_4Macro3Pmb]->getFloat();
  synth.fHslider184 = pv[ID::aStereoL_roffsetCz_pmPmPmbMacro1_4Macro4Pmb]->getFloat();
  synth.fHslider189 = pv[ID::aStereoL_roffsetCz_pmPmPmbMacro5_8Macro5Pmb]->getFloat();
  synth.fHslider190 = pv[ID::aStereoL_roffsetCz_pmPmPmbMacro5_8Macro6Pmb]->getFloat();
  synth.fHslider191 = pv[ID::aStereoL_roffsetCz_pmPmPmbMacro5_8Macro7Pmb]->getFloat();
  synth.fHslider192 = pv[ID::aStereoL_roffsetCz_pmPmPmbMacro5_8Macro8Pmb]->getFloat();
  synth.fHslider165 = pv[ID::aStereoL_roffsetCz_pmPmPmcMacro1_4Macro1Pmc]->getFloat();
  synth.fHslider166 = pv[ID::aStereoL_roffsetCz_pmPmPmcMacro1_4Macro2Pmc]->getFloat();
  synth.fHslider167 = pv[ID::aStereoL_roffsetCz_pmPmPmcMacro1_4Macro3Pmc]->getFloat();
  synth.fHslider168 = pv[ID::aStereoL_roffsetCz_pmPmPmcMacro1_4Macro4Pmc]->getFloat();
  synth.fHslider173 = pv[ID::aStereoL_roffsetCz_pmPmPmcMacro5_8Macro5Pmc]->getFloat();
  synth.fHslider174 = pv[ID::aStereoL_roffsetCz_pmPmPmcMacro5_8Macro6Pmc]->getFloat();
  synth.fHslider175 = pv[ID::aStereoL_roffsetCz_pmPmPmcMacro5_8Macro7Pmc]->getFloat();
  synth.fHslider176 = pv[ID::aStereoL_roffsetCz_pmPmPmcMacro5_8Macro8Pmc]->getFloat();
  synth.fHslider149 = pv[ID::aStereoL_roffsetCz_pmPmPmdMacro1_4Macro1Pmd]->getFloat();
  synth.fHslider150 = pv[ID::aStereoL_roffsetCz_pmPmPmdMacro1_4Macro2Pmd]->getFloat();
  synth.fHslider151 = pv[ID::aStereoL_roffsetCz_pmPmPmdMacro1_4Macro3Pmd]->getFloat();
  synth.fHslider152 = pv[ID::aStereoL_roffsetCz_pmPmPmdMacro1_4Macro4Pmd]->getFloat();
  synth.fHslider157 = pv[ID::aStereoL_roffsetCz_pmPmPmdMacro5_8Macro5Pmd]->getFloat();
  synth.fHslider158 = pv[ID::aStereoL_roffsetCz_pmPmPmdMacro5_8Macro6Pmd]->getFloat();
  synth.fHslider159 = pv[ID::aStereoL_roffsetCz_pmPmPmdMacro5_8Macro7Pmd]->getFloat();
  synth.fHslider160 = pv[ID::aStereoL_roffsetCz_pmPmPmdMacro5_8Macro8Pmd]->getFloat();
  synth.fVslider0 = pv[ID::aType]->getFloat();
  synth.fHslider370 = pv[ID::bStereoMainCz_pmCzIndexMacro1_4Macro1Index]->getFloat();
  synth.fHslider371 = pv[ID::bStereoMainCz_pmCzIndexMacro1_4Macro2Index]->getFloat();
  synth.fHslider372 = pv[ID::bStereoMainCz_pmCzIndexMacro1_4Macro3Index]->getFloat();
  synth.fHslider373 = pv[ID::bStereoMainCz_pmCzIndexMacro1_4Macro4Index]->getFloat();
  synth.fHslider378 = pv[ID::bStereoMainCz_pmCzIndexMacro5_8Macro5Index]->getFloat();
  synth.fHslider379 = pv[ID::bStereoMainCz_pmCzIndexMacro5_8Macro6Index]->getFloat();
  synth.fHslider380 = pv[ID::bStereoMainCz_pmCzIndexMacro5_8Macro7Index]->getFloat();
  synth.fHslider381 = pv[ID::bStereoMainCz_pmCzIndexMacro5_8Macro8Index]->getFloat();
  synth.fHslider338 = pv[ID::bStereoMainCz_pmCzOctaveMacro1_4Macro1Octave]->getFloat();
  synth.fHslider339 = pv[ID::bStereoMainCz_pmCzOctaveMacro1_4Macro2Octave]->getFloat();
  synth.fHslider340 = pv[ID::bStereoMainCz_pmCzOctaveMacro1_4Macro3Octave]->getFloat();
  synth.fHslider341 = pv[ID::bStereoMainCz_pmCzOctaveMacro1_4Macro4Octave]->getFloat();
  synth.fHslider346 = pv[ID::bStereoMainCz_pmCzOctaveMacro5_8Macro5Octave]->getFloat();
  synth.fHslider347 = pv[ID::bStereoMainCz_pmCzOctaveMacro5_8Macro6Octave]->getFloat();
  synth.fHslider348 = pv[ID::bStereoMainCz_pmCzOctaveMacro5_8Macro7Octave]->getFloat();
  synth.fHslider349 = pv[ID::bStereoMainCz_pmCzOctaveMacro5_8Macro8Octave]->getFloat();
  synth.fHslider322 = pv[ID::bStereoMainCz_pmCzPhaseMacro1_4Macro1Phase]->getFloat();
  synth.fHslider323 = pv[ID::bStereoMainCz_pmCzPhaseMacro1_4Macro2Phase]->getFloat();
  synth.fHslider324 = pv[ID::bStereoMainCz_pmCzPhaseMacro1_4Macro3Phase]->getFloat();
  synth.fHslider325 = pv[ID::bStereoMainCz_pmCzPhaseMacro1_4Macro4Phase]->getFloat();
  synth.fHslider330 = pv[ID::bStereoMainCz_pmCzPhaseMacro5_8Macro5Phase]->getFloat();
  synth.fHslider331 = pv[ID::bStereoMainCz_pmCzPhaseMacro5_8Macro6Phase]->getFloat();
  synth.fHslider332 = pv[ID::bStereoMainCz_pmCzPhaseMacro5_8Macro7Phase]->getFloat();
  synth.fHslider333 = pv[ID::bStereoMainCz_pmCzPhaseMacro5_8Macro8Phase]->getFloat();
  synth.fHslider354 = pv[ID::bStereoMainCz_pmPmPmaMacro1_4Macro1Pma]->getFloat();
  synth.fHslider355 = pv[ID::bStereoMainCz_pmPmPmaMacro1_4Macro2Pma]->getFloat();
  synth.fHslider356 = pv[ID::bStereoMainCz_pmPmPmaMacro1_4Macro3Pma]->getFloat();
  synth.fHslider357 = pv[ID::bStereoMainCz_pmPmPmaMacro1_4Macro4Pma]->getFloat();
  synth.fHslider362 = pv[ID::bStereoMainCz_pmPmPmaMacro5_8Macro5Pma]->getFloat();
  synth.fHslider363 = pv[ID::bStereoMainCz_pmPmPmaMacro5_8Macro6Pma]->getFloat();
  synth.fHslider364 = pv[ID::bStereoMainCz_pmPmPmaMacro5_8Macro7Pma]->getFloat();
  synth.fHslider365 = pv[ID::bStereoMainCz_pmPmPmaMacro5_8Macro8Pma]->getFloat();
  synth.fHslider306 = pv[ID::bStereoMainCz_pmPmPmbMacro1_4Macro1Pmb]->getFloat();
  synth.fHslider307 = pv[ID::bStereoMainCz_pmPmPmbMacro1_4Macro2Pmb]->getFloat();
  synth.fHslider308 = pv[ID::bStereoMainCz_pmPmPmbMacro1_4Macro3Pmb]->getFloat();
  synth.fHslider309 = pv[ID::bStereoMainCz_pmPmPmbMacro1_4Macro4Pmb]->getFloat();
  synth.fHslider314 = pv[ID::bStereoMainCz_pmPmPmbMacro5_8Macro5Pmb]->getFloat();
  synth.fHslider315 = pv[ID::bStereoMainCz_pmPmPmbMacro5_8Macro6Pmb]->getFloat();
  synth.fHslider316 = pv[ID::bStereoMainCz_pmPmPmbMacro5_8Macro7Pmb]->getFloat();
  synth.fHslider317 = pv[ID::bStereoMainCz_pmPmPmbMacro5_8Macro8Pmb]->getFloat();
  synth.fHslider290 = pv[ID::bStereoMainCz_pmPmPmcMacro1_4Macro1Pmc]->getFloat();
  synth.fHslider291 = pv[ID::bStereoMainCz_pmPmPmcMacro1_4Macro2Pmc]->getFloat();
  synth.fHslider292 = pv[ID::bStereoMainCz_pmPmPmcMacro1_4Macro3Pmc]->getFloat();
  synth.fHslider293 = pv[ID::bStereoMainCz_pmPmPmcMacro1_4Macro4Pmc]->getFloat();
  synth.fHslider298 = pv[ID::bStereoMainCz_pmPmPmcMacro5_8Macro5Pmc]->getFloat();
  synth.fHslider299 = pv[ID::bStereoMainCz_pmPmPmcMacro5_8Macro6Pmc]->getFloat();
  synth.fHslider300 = pv[ID::bStereoMainCz_pmPmPmcMacro5_8Macro7Pmc]->getFloat();
  synth.fHslider301 = pv[ID::bStereoMainCz_pmPmPmcMacro5_8Macro8Pmc]->getFloat();
  synth.fHslider274 = pv[ID::bStereoMainCz_pmPmPmdMacro1_4Macro1Pmd]->getFloat();
  synth.fHslider275 = pv[ID::bStereoMainCz_pmPmPmdMacro1_4Macro2Pmd]->getFloat();
  synth.fHslider276 = pv[ID::bStereoMainCz_pmPmPmdMacro1_4Macro3Pmd]->getFloat();
  synth.fHslider277 = pv[ID::bStereoMainCz_pmPmPmdMacro1_4Macro4Pmd]->getFloat();
  synth.fHslider282 = pv[ID::bStereoMainCz_pmPmPmdMacro5_8Macro5Pmd]->getFloat();
  synth.fHslider283 = pv[ID::bStereoMainCz_pmPmPmdMacro5_8Macro6Pmd]->getFloat();
  synth.fHslider284 = pv[ID::bStereoMainCz_pmPmPmdMacro5_8Macro7Pmd]->getFloat();
  synth.fHslider285 = pv[ID::bStereoMainCz_pmPmPmdMacro5_8Macro8Pmd]->getFloat();
  synth.fHslider374 = pv[ID::bStereoL_roffsetCz_pmCzIndexMacro1_4Macro1Index]->getFloat();
  synth.fHslider375 = pv[ID::bStereoL_roffsetCz_pmCzIndexMacro1_4Macro2Index]->getFloat();
  synth.fHslider376 = pv[ID::bStereoL_roffsetCz_pmCzIndexMacro1_4Macro3Index]->getFloat();
  synth.fHslider377 = pv[ID::bStereoL_roffsetCz_pmCzIndexMacro1_4Macro4Index]->getFloat();
  synth.fHslider382 = pv[ID::bStereoL_roffsetCz_pmCzIndexMacro5_8Macro5Index]->getFloat();
  synth.fHslider383 = pv[ID::bStereoL_roffsetCz_pmCzIndexMacro5_8Macro6Index]->getFloat();
  synth.fHslider384 = pv[ID::bStereoL_roffsetCz_pmCzIndexMacro5_8Macro7Index]->getFloat();
  synth.fHslider385 = pv[ID::bStereoL_roffsetCz_pmCzIndexMacro5_8Macro8Index]->getFloat();
  synth.fHslider342 = pv[ID::bStereoL_roffsetCz_pmCzOctaveMacro1_4Macro1Octave]->getFloat();
  synth.fHslider343 = pv[ID::bStereoL_roffsetCz_pmCzOctaveMacro1_4Macro2Octave]->getFloat();
  synth.fHslider344 = pv[ID::bStereoL_roffsetCz_pmCzOctaveMacro1_4Macro3Octave]->getFloat();
  synth.fHslider345 = pv[ID::bStereoL_roffsetCz_pmCzOctaveMacro1_4Macro4Octave]->getFloat();
  synth.fHslider350 = pv[ID::bStereoL_roffsetCz_pmCzOctaveMacro5_8Macro5Octave]->getFloat();
  synth.fHslider351 = pv[ID::bStereoL_roffsetCz_pmCzOctaveMacro5_8Macro6Octave]->getFloat();
  synth.fHslider352 = pv[ID::bStereoL_roffsetCz_pmCzOctaveMacro5_8Macro7Octave]->getFloat();
  synth.fHslider353 = pv[ID::bStereoL_roffsetCz_pmCzOctaveMacro5_8Macro8Octave]->getFloat();
  synth.fHslider326 = pv[ID::bStereoL_roffsetCz_pmCzPhaseMacro1_4Macro1Phase]->getFloat();
  synth.fHslider327 = pv[ID::bStereoL_roffsetCz_pmCzPhaseMacro1_4Macro2Phase]->getFloat();
  synth.fHslider328 = pv[ID::bStereoL_roffsetCz_pmCzPhaseMacro1_4Macro3Phase]->getFloat();
  synth.fHslider329 = pv[ID::bStereoL_roffsetCz_pmCzPhaseMacro1_4Macro4Phase]->getFloat();
  synth.fHslider334 = pv[ID::bStereoL_roffsetCz_pmCzPhaseMacro5_8Macro5Phase]->getFloat();
  synth.fHslider335 = pv[ID::bStereoL_roffsetCz_pmCzPhaseMacro5_8Macro6Phase]->getFloat();
  synth.fHslider336 = pv[ID::bStereoL_roffsetCz_pmCzPhaseMacro5_8Macro7Phase]->getFloat();
  synth.fHslider337 = pv[ID::bStereoL_roffsetCz_pmCzPhaseMacro5_8Macro8Phase]->getFloat();
  synth.fHslider358 = pv[ID::bStereoL_roffsetCz_pmPmPmaMacro1_4Macro1Pma]->getFloat();
  synth.fHslider359 = pv[ID::bStereoL_roffsetCz_pmPmPmaMacro1_4Macro2Pma]->getFloat();
  synth.fHslider360 = pv[ID::bStereoL_roffsetCz_pmPmPmaMacro1_4Macro3Pma]->getFloat();
  synth.fHslider361 = pv[ID::bStereoL_roffsetCz_pmPmPmaMacro1_4Macro4Pma]->getFloat();
  synth.fHslider366 = pv[ID::bStereoL_roffsetCz_pmPmPmaMacro5_8Macro5Pma]->getFloat();
  synth.fHslider367 = pv[ID::bStereoL_roffsetCz_pmPmPmaMacro5_8Macro6Pma]->getFloat();
  synth.fHslider368 = pv[ID::bStereoL_roffsetCz_pmPmPmaMacro5_8Macro7Pma]->getFloat();
  synth.fHslider369 = pv[ID::bStereoL_roffsetCz_pmPmPmaMacro5_8Macro8Pma]->getFloat();
  synth.fHslider310 = pv[ID::bStereoL_roffsetCz_pmPmPmbMacro1_4Macro1Pmb]->getFloat();
  synth.fHslider311 = pv[ID::bStereoL_roffsetCz_pmPmPmbMacro1_4Macro2Pmb]->getFloat();
  synth.fHslider312 = pv[ID::bStereoL_roffsetCz_pmPmPmbMacro1_4Macro3Pmb]->getFloat();
  synth.fHslider313 = pv[ID::bStereoL_roffsetCz_pmPmPmbMacro1_4Macro4Pmb]->getFloat();
  synth.fHslider318 = pv[ID::bStereoL_roffsetCz_pmPmPmbMacro5_8Macro5Pmb]->getFloat();
  synth.fHslider319 = pv[ID::bStereoL_roffsetCz_pmPmPmbMacro5_8Macro6Pmb]->getFloat();
  synth.fHslider320 = pv[ID::bStereoL_roffsetCz_pmPmPmbMacro5_8Macro7Pmb]->getFloat();
  synth.fHslider321 = pv[ID::bStereoL_roffsetCz_pmPmPmbMacro5_8Macro8Pmb]->getFloat();
  synth.fHslider294 = pv[ID::bStereoL_roffsetCz_pmPmPmcMacro1_4Macro1Pmc]->getFloat();
  synth.fHslider295 = pv[ID::bStereoL_roffsetCz_pmPmPmcMacro1_4Macro2Pmc]->getFloat();
  synth.fHslider296 = pv[ID::bStereoL_roffsetCz_pmPmPmcMacro1_4Macro3Pmc]->getFloat();
  synth.fHslider297 = pv[ID::bStereoL_roffsetCz_pmPmPmcMacro1_4Macro4Pmc]->getFloat();
  synth.fHslider302 = pv[ID::bStereoL_roffsetCz_pmPmPmcMacro5_8Macro5Pmc]->getFloat();
  synth.fHslider303 = pv[ID::bStereoL_roffsetCz_pmPmPmcMacro5_8Macro6Pmc]->getFloat();
  synth.fHslider304 = pv[ID::bStereoL_roffsetCz_pmPmPmcMacro5_8Macro7Pmc]->getFloat();
  synth.fHslider305 = pv[ID::bStereoL_roffsetCz_pmPmPmcMacro5_8Macro8Pmc]->getFloat();
  synth.fHslider278 = pv[ID::bStereoL_roffsetCz_pmPmPmdMacro1_4Macro1Pmd]->getFloat();
  synth.fHslider279 = pv[ID::bStereoL_roffsetCz_pmPmPmdMacro1_4Macro2Pmd]->getFloat();
  synth.fHslider280 = pv[ID::bStereoL_roffsetCz_pmPmPmdMacro1_4Macro3Pmd]->getFloat();
  synth.fHslider281 = pv[ID::bStereoL_roffsetCz_pmPmPmdMacro1_4Macro4Pmd]->getFloat();
  synth.fHslider286 = pv[ID::bStereoL_roffsetCz_pmPmPmdMacro5_8Macro5Pmd]->getFloat();
  synth.fHslider287 = pv[ID::bStereoL_roffsetCz_pmPmPmdMacro5_8Macro6Pmd]->getFloat();
  synth.fHslider288 = pv[ID::bStereoL_roffsetCz_pmPmPmdMacro5_8Macro7Pmd]->getFloat();
  synth.fHslider289 = pv[ID::bStereoL_roffsetCz_pmPmPmdMacro5_8Macro8Pmd]->getFloat();
  synth.fVslider6 = pv[ID::bType]->getFloat();
  synth.fHslider482 = pv[ID::cStereoMainCz_pmCzIndexMacro1_4Macro1Index]->getFloat();
  synth.fHslider483 = pv[ID::cStereoMainCz_pmCzIndexMacro1_4Macro2Index]->getFloat();
  synth.fHslider484 = pv[ID::cStereoMainCz_pmCzIndexMacro1_4Macro3Index]->getFloat();
  synth.fHslider485 = pv[ID::cStereoMainCz_pmCzIndexMacro1_4Macro4Index]->getFloat();
  synth.fHslider490 = pv[ID::cStereoMainCz_pmCzIndexMacro5_8Macro5Index]->getFloat();
  synth.fHslider491 = pv[ID::cStereoMainCz_pmCzIndexMacro5_8Macro6Index]->getFloat();
  synth.fHslider492 = pv[ID::cStereoMainCz_pmCzIndexMacro5_8Macro7Index]->getFloat();
  synth.fHslider493 = pv[ID::cStereoMainCz_pmCzIndexMacro5_8Macro8Index]->getFloat();
  synth.fHslider450 = pv[ID::cStereoMainCz_pmCzOctaveMacro1_4Macro1Octave]->getFloat();
  synth.fHslider451 = pv[ID::cStereoMainCz_pmCzOctaveMacro1_4Macro2Octave]->getFloat();
  synth.fHslider452 = pv[ID::cStereoMainCz_pmCzOctaveMacro1_4Macro3Octave]->getFloat();
  synth.fHslider453 = pv[ID::cStereoMainCz_pmCzOctaveMacro1_4Macro4Octave]->getFloat();
  synth.fHslider458 = pv[ID::cStereoMainCz_pmCzOctaveMacro5_8Macro5Octave]->getFloat();
  synth.fHslider459 = pv[ID::cStereoMainCz_pmCzOctaveMacro5_8Macro6Octave]->getFloat();
  synth.fHslider460 = pv[ID::cStereoMainCz_pmCzOctaveMacro5_8Macro7Octave]->getFloat();
  synth.fHslider461 = pv[ID::cStereoMainCz_pmCzOctaveMacro5_8Macro8Octave]->getFloat();
  synth.fHslider434 = pv[ID::cStereoMainCz_pmCzPhaseMacro1_4Macro1Phase]->getFloat();
  synth.fHslider435 = pv[ID::cStereoMainCz_pmCzPhaseMacro1_4Macro2Phase]->getFloat();
  synth.fHslider436 = pv[ID::cStereoMainCz_pmCzPhaseMacro1_4Macro3Phase]->getFloat();
  synth.fHslider437 = pv[ID::cStereoMainCz_pmCzPhaseMacro1_4Macro4Phase]->getFloat();
  synth.fHslider442 = pv[ID::cStereoMainCz_pmCzPhaseMacro5_8Macro5Phase]->getFloat();
  synth.fHslider443 = pv[ID::cStereoMainCz_pmCzPhaseMacro5_8Macro6Phase]->getFloat();
  synth.fHslider444 = pv[ID::cStereoMainCz_pmCzPhaseMacro5_8Macro7Phase]->getFloat();
  synth.fHslider445 = pv[ID::cStereoMainCz_pmCzPhaseMacro5_8Macro8Phase]->getFloat();
  synth.fHslider466 = pv[ID::cStereoMainCz_pmPmPmaMacro1_4Macro1Pma]->getFloat();
  synth.fHslider467 = pv[ID::cStereoMainCz_pmPmPmaMacro1_4Macro2Pma]->getFloat();
  synth.fHslider468 = pv[ID::cStereoMainCz_pmPmPmaMacro1_4Macro3Pma]->getFloat();
  synth.fHslider469 = pv[ID::cStereoMainCz_pmPmPmaMacro1_4Macro4Pma]->getFloat();
  synth.fHslider474 = pv[ID::cStereoMainCz_pmPmPmaMacro5_8Macro5Pma]->getFloat();
  synth.fHslider475 = pv[ID::cStereoMainCz_pmPmPmaMacro5_8Macro6Pma]->getFloat();
  synth.fHslider476 = pv[ID::cStereoMainCz_pmPmPmaMacro5_8Macro7Pma]->getFloat();
  synth.fHslider477 = pv[ID::cStereoMainCz_pmPmPmaMacro5_8Macro8Pma]->getFloat();
  synth.fHslider418 = pv[ID::cStereoMainCz_pmPmPmbMacro1_4Macro1Pmb]->getFloat();
  synth.fHslider419 = pv[ID::cStereoMainCz_pmPmPmbMacro1_4Macro2Pmb]->getFloat();
  synth.fHslider420 = pv[ID::cStereoMainCz_pmPmPmbMacro1_4Macro3Pmb]->getFloat();
  synth.fHslider421 = pv[ID::cStereoMainCz_pmPmPmbMacro1_4Macro4Pmb]->getFloat();
  synth.fHslider426 = pv[ID::cStereoMainCz_pmPmPmbMacro5_8Macro5Pmb]->getFloat();
  synth.fHslider427 = pv[ID::cStereoMainCz_pmPmPmbMacro5_8Macro6Pmb]->getFloat();
  synth.fHslider428 = pv[ID::cStereoMainCz_pmPmPmbMacro5_8Macro7Pmb]->getFloat();
  synth.fHslider429 = pv[ID::cStereoMainCz_pmPmPmbMacro5_8Macro8Pmb]->getFloat();
  synth.fHslider402 = pv[ID::cStereoMainCz_pmPmPmcMacro1_4Macro1Pmc]->getFloat();
  synth.fHslider403 = pv[ID::cStereoMainCz_pmPmPmcMacro1_4Macro2Pmc]->getFloat();
  synth.fHslider404 = pv[ID::cStereoMainCz_pmPmPmcMacro1_4Macro3Pmc]->getFloat();
  synth.fHslider405 = pv[ID::cStereoMainCz_pmPmPmcMacro1_4Macro4Pmc]->getFloat();
  synth.fHslider410 = pv[ID::cStereoMainCz_pmPmPmcMacro5_8Macro5Pmc]->getFloat();
  synth.fHslider411 = pv[ID::cStereoMainCz_pmPmPmcMacro5_8Macro6Pmc]->getFloat();
  synth.fHslider412 = pv[ID::cStereoMainCz_pmPmPmcMacro5_8Macro7Pmc]->getFloat();
  synth.fHslider413 = pv[ID::cStereoMainCz_pmPmPmcMacro5_8Macro8Pmc]->getFloat();
  synth.fHslider386 = pv[ID::cStereoMainCz_pmPmPmdMacro1_4Macro1Pmd]->getFloat();
  synth.fHslider387 = pv[ID::cStereoMainCz_pmPmPmdMacro1_4Macro2Pmd]->getFloat();
  synth.fHslider388 = pv[ID::cStereoMainCz_pmPmPmdMacro1_4Macro3Pmd]->getFloat();
  synth.fHslider389 = pv[ID::cStereoMainCz_pmPmPmdMacro1_4Macro4Pmd]->getFloat();
  synth.fHslider394 = pv[ID::cStereoMainCz_pmPmPmdMacro5_8Macro5Pmd]->getFloat();
  synth.fHslider395 = pv[ID::cStereoMainCz_pmPmPmdMacro5_8Macro6Pmd]->getFloat();
  synth.fHslider396 = pv[ID::cStereoMainCz_pmPmPmdMacro5_8Macro7Pmd]->getFloat();
  synth.fHslider397 = pv[ID::cStereoMainCz_pmPmPmdMacro5_8Macro8Pmd]->getFloat();
  synth.fHslider486 = pv[ID::cStereoL_roffsetCz_pmCzIndexMacro1_4Macro1Index]->getFloat();
  synth.fHslider487 = pv[ID::cStereoL_roffsetCz_pmCzIndexMacro1_4Macro2Index]->getFloat();
  synth.fHslider488 = pv[ID::cStereoL_roffsetCz_pmCzIndexMacro1_4Macro3Index]->getFloat();
  synth.fHslider489 = pv[ID::cStereoL_roffsetCz_pmCzIndexMacro1_4Macro4Index]->getFloat();
  synth.fHslider494 = pv[ID::cStereoL_roffsetCz_pmCzIndexMacro5_8Macro5Index]->getFloat();
  synth.fHslider495 = pv[ID::cStereoL_roffsetCz_pmCzIndexMacro5_8Macro6Index]->getFloat();
  synth.fHslider496 = pv[ID::cStereoL_roffsetCz_pmCzIndexMacro5_8Macro7Index]->getFloat();
  synth.fHslider497 = pv[ID::cStereoL_roffsetCz_pmCzIndexMacro5_8Macro8Index]->getFloat();
  synth.fHslider454 = pv[ID::cStereoL_roffsetCz_pmCzOctaveMacro1_4Macro1Octave]->getFloat();
  synth.fHslider455 = pv[ID::cStereoL_roffsetCz_pmCzOctaveMacro1_4Macro2Octave]->getFloat();
  synth.fHslider456 = pv[ID::cStereoL_roffsetCz_pmCzOctaveMacro1_4Macro3Octave]->getFloat();
  synth.fHslider457 = pv[ID::cStereoL_roffsetCz_pmCzOctaveMacro1_4Macro4Octave]->getFloat();
  synth.fHslider462 = pv[ID::cStereoL_roffsetCz_pmCzOctaveMacro5_8Macro5Octave]->getFloat();
  synth.fHslider463 = pv[ID::cStereoL_roffsetCz_pmCzOctaveMacro5_8Macro6Octave]->getFloat();
  synth.fHslider464 = pv[ID::cStereoL_roffsetCz_pmCzOctaveMacro5_8Macro7Octave]->getFloat();
  synth.fHslider465 = pv[ID::cStereoL_roffsetCz_pmCzOctaveMacro5_8Macro8Octave]->getFloat();
  synth.fHslider438 = pv[ID::cStereoL_roffsetCz_pmCzPhaseMacro1_4Macro1Phase]->getFloat();
  synth.fHslider439 = pv[ID::cStereoL_roffsetCz_pmCzPhaseMacro1_4Macro2Phase]->getFloat();
  synth.fHslider440 = pv[ID::cStereoL_roffsetCz_pmCzPhaseMacro1_4Macro3Phase]->getFloat();
  synth.fHslider441 = pv[ID::cStereoL_roffsetCz_pmCzPhaseMacro1_4Macro4Phase]->getFloat();
  synth.fHslider446 = pv[ID::cStereoL_roffsetCz_pmCzPhaseMacro5_8Macro5Phase]->getFloat();
  synth.fHslider447 = pv[ID::cStereoL_roffsetCz_pmCzPhaseMacro5_8Macro6Phase]->getFloat();
  synth.fHslider448 = pv[ID::cStereoL_roffsetCz_pmCzPhaseMacro5_8Macro7Phase]->getFloat();
  synth.fHslider449 = pv[ID::cStereoL_roffsetCz_pmCzPhaseMacro5_8Macro8Phase]->getFloat();
  synth.fHslider470 = pv[ID::cStereoL_roffsetCz_pmPmPmaMacro1_4Macro1Pma]->getFloat();
  synth.fHslider471 = pv[ID::cStereoL_roffsetCz_pmPmPmaMacro1_4Macro2Pma]->getFloat();
  synth.fHslider472 = pv[ID::cStereoL_roffsetCz_pmPmPmaMacro1_4Macro3Pma]->getFloat();
  synth.fHslider473 = pv[ID::cStereoL_roffsetCz_pmPmPmaMacro1_4Macro4Pma]->getFloat();
  synth.fHslider478 = pv[ID::cStereoL_roffsetCz_pmPmPmaMacro5_8Macro5Pma]->getFloat();
  synth.fHslider479 = pv[ID::cStereoL_roffsetCz_pmPmPmaMacro5_8Macro6Pma]->getFloat();
  synth.fHslider480 = pv[ID::cStereoL_roffsetCz_pmPmPmaMacro5_8Macro7Pma]->getFloat();
  synth.fHslider481 = pv[ID::cStereoL_roffsetCz_pmPmPmaMacro5_8Macro8Pma]->getFloat();
  synth.fHslider422 = pv[ID::cStereoL_roffsetCz_pmPmPmbMacro1_4Macro1Pmb]->getFloat();
  synth.fHslider423 = pv[ID::cStereoL_roffsetCz_pmPmPmbMacro1_4Macro2Pmb]->getFloat();
  synth.fHslider424 = pv[ID::cStereoL_roffsetCz_pmPmPmbMacro1_4Macro3Pmb]->getFloat();
  synth.fHslider425 = pv[ID::cStereoL_roffsetCz_pmPmPmbMacro1_4Macro4Pmb]->getFloat();
  synth.fHslider430 = pv[ID::cStereoL_roffsetCz_pmPmPmbMacro5_8Macro5Pmb]->getFloat();
  synth.fHslider431 = pv[ID::cStereoL_roffsetCz_pmPmPmbMacro5_8Macro6Pmb]->getFloat();
  synth.fHslider432 = pv[ID::cStereoL_roffsetCz_pmPmPmbMacro5_8Macro7Pmb]->getFloat();
  synth.fHslider433 = pv[ID::cStereoL_roffsetCz_pmPmPmbMacro5_8Macro8Pmb]->getFloat();
  synth.fHslider406 = pv[ID::cStereoL_roffsetCz_pmPmPmcMacro1_4Macro1Pmc]->getFloat();
  synth.fHslider407 = pv[ID::cStereoL_roffsetCz_pmPmPmcMacro1_4Macro2Pmc]->getFloat();
  synth.fHslider408 = pv[ID::cStereoL_roffsetCz_pmPmPmcMacro1_4Macro3Pmc]->getFloat();
  synth.fHslider409 = pv[ID::cStereoL_roffsetCz_pmPmPmcMacro1_4Macro4Pmc]->getFloat();
  synth.fHslider414 = pv[ID::cStereoL_roffsetCz_pmPmPmcMacro5_8Macro5Pmc]->getFloat();
  synth.fHslider415 = pv[ID::cStereoL_roffsetCz_pmPmPmcMacro5_8Macro6Pmc]->getFloat();
  synth.fHslider416 = pv[ID::cStereoL_roffsetCz_pmPmPmcMacro5_8Macro7Pmc]->getFloat();
  synth.fHslider417 = pv[ID::cStereoL_roffsetCz_pmPmPmcMacro5_8Macro8Pmc]->getFloat();
  synth.fHslider390 = pv[ID::cStereoL_roffsetCz_pmPmPmdMacro1_4Macro1Pmd]->getFloat();
  synth.fHslider391 = pv[ID::cStereoL_roffsetCz_pmPmPmdMacro1_4Macro2Pmd]->getFloat();
  synth.fHslider392 = pv[ID::cStereoL_roffsetCz_pmPmPmdMacro1_4Macro3Pmd]->getFloat();
  synth.fHslider393 = pv[ID::cStereoL_roffsetCz_pmPmPmdMacro1_4Macro4Pmd]->getFloat();
  synth.fHslider398 = pv[ID::cStereoL_roffsetCz_pmPmPmdMacro5_8Macro5Pmd]->getFloat();
  synth.fHslider399 = pv[ID::cStereoL_roffsetCz_pmPmPmdMacro5_8Macro6Pmd]->getFloat();
  synth.fHslider400 = pv[ID::cStereoL_roffsetCz_pmPmPmdMacro5_8Macro7Pmd]->getFloat();
  synth.fHslider401 = pv[ID::cStereoL_roffsetCz_pmPmPmdMacro5_8Macro8Pmd]->getFloat();
  synth.fVslider5 = pv[ID::cType]->getFloat();
  synth.fHslider594 = pv[ID::dStereoMainCz_pmCzIndexMacro1_4Macro1Index]->getFloat();
  synth.fHslider595 = pv[ID::dStereoMainCz_pmCzIndexMacro1_4Macro2Index]->getFloat();
  synth.fHslider596 = pv[ID::dStereoMainCz_pmCzIndexMacro1_4Macro3Index]->getFloat();
  synth.fHslider597 = pv[ID::dStereoMainCz_pmCzIndexMacro1_4Macro4Index]->getFloat();
  synth.fHslider602 = pv[ID::dStereoMainCz_pmCzIndexMacro5_8Macro5Index]->getFloat();
  synth.fHslider603 = pv[ID::dStereoMainCz_pmCzIndexMacro5_8Macro6Index]->getFloat();
  synth.fHslider604 = pv[ID::dStereoMainCz_pmCzIndexMacro5_8Macro7Index]->getFloat();
  synth.fHslider605 = pv[ID::dStereoMainCz_pmCzIndexMacro5_8Macro8Index]->getFloat();
  synth.fHslider562 = pv[ID::dStereoMainCz_pmCzOctaveMacro1_4Macro1Octave]->getFloat();
  synth.fHslider563 = pv[ID::dStereoMainCz_pmCzOctaveMacro1_4Macro2Octave]->getFloat();
  synth.fHslider564 = pv[ID::dStereoMainCz_pmCzOctaveMacro1_4Macro3Octave]->getFloat();
  synth.fHslider565 = pv[ID::dStereoMainCz_pmCzOctaveMacro1_4Macro4Octave]->getFloat();
  synth.fHslider570 = pv[ID::dStereoMainCz_pmCzOctaveMacro5_8Macro5Octave]->getFloat();
  synth.fHslider571 = pv[ID::dStereoMainCz_pmCzOctaveMacro5_8Macro6Octave]->getFloat();
  synth.fHslider572 = pv[ID::dStereoMainCz_pmCzOctaveMacro5_8Macro7Octave]->getFloat();
  synth.fHslider573 = pv[ID::dStereoMainCz_pmCzOctaveMacro5_8Macro8Octave]->getFloat();
  synth.fHslider546 = pv[ID::dStereoMainCz_pmCzPhaseMacro1_4Macro1Phase]->getFloat();
  synth.fHslider547 = pv[ID::dStereoMainCz_pmCzPhaseMacro1_4Macro2Phase]->getFloat();
  synth.fHslider548 = pv[ID::dStereoMainCz_pmCzPhaseMacro1_4Macro3Phase]->getFloat();
  synth.fHslider549 = pv[ID::dStereoMainCz_pmCzPhaseMacro1_4Macro4Phase]->getFloat();
  synth.fHslider554 = pv[ID::dStereoMainCz_pmCzPhaseMacro5_8Macro5Phase]->getFloat();
  synth.fHslider555 = pv[ID::dStereoMainCz_pmCzPhaseMacro5_8Macro6Phase]->getFloat();
  synth.fHslider556 = pv[ID::dStereoMainCz_pmCzPhaseMacro5_8Macro7Phase]->getFloat();
  synth.fHslider557 = pv[ID::dStereoMainCz_pmCzPhaseMacro5_8Macro8Phase]->getFloat();
  synth.fHslider578 = pv[ID::dStereoMainCz_pmPmPmaMacro1_4Macro1Pma]->getFloat();
  synth.fHslider579 = pv[ID::dStereoMainCz_pmPmPmaMacro1_4Macro2Pma]->getFloat();
  synth.fHslider580 = pv[ID::dStereoMainCz_pmPmPmaMacro1_4Macro3Pma]->getFloat();
  synth.fHslider581 = pv[ID::dStereoMainCz_pmPmPmaMacro1_4Macro4Pma]->getFloat();
  synth.fHslider586 = pv[ID::dStereoMainCz_pmPmPmaMacro5_8Macro5Pma]->getFloat();
  synth.fHslider587 = pv[ID::dStereoMainCz_pmPmPmaMacro5_8Macro6Pma]->getFloat();
  synth.fHslider588 = pv[ID::dStereoMainCz_pmPmPmaMacro5_8Macro7Pma]->getFloat();
  synth.fHslider589 = pv[ID::dStereoMainCz_pmPmPmaMacro5_8Macro8Pma]->getFloat();
  synth.fHslider530 = pv[ID::dStereoMainCz_pmPmPmbMacro1_4Macro1Pmb]->getFloat();
  synth.fHslider531 = pv[ID::dStereoMainCz_pmPmPmbMacro1_4Macro2Pmb]->getFloat();
  synth.fHslider532 = pv[ID::dStereoMainCz_pmPmPmbMacro1_4Macro3Pmb]->getFloat();
  synth.fHslider533 = pv[ID::dStereoMainCz_pmPmPmbMacro1_4Macro4Pmb]->getFloat();
  synth.fHslider538 = pv[ID::dStereoMainCz_pmPmPmbMacro5_8Macro5Pmb]->getFloat();
  synth.fHslider539 = pv[ID::dStereoMainCz_pmPmPmbMacro5_8Macro6Pmb]->getFloat();
  synth.fHslider540 = pv[ID::dStereoMainCz_pmPmPmbMacro5_8Macro7Pmb]->getFloat();
  synth.fHslider541 = pv[ID::dStereoMainCz_pmPmPmbMacro5_8Macro8Pmb]->getFloat();
  synth.fHslider514 = pv[ID::dStereoMainCz_pmPmPmcMacro1_4Macro1Pmc]->getFloat();
  synth.fHslider515 = pv[ID::dStereoMainCz_pmPmPmcMacro1_4Macro2Pmc]->getFloat();
  synth.fHslider516 = pv[ID::dStereoMainCz_pmPmPmcMacro1_4Macro3Pmc]->getFloat();
  synth.fHslider517 = pv[ID::dStereoMainCz_pmPmPmcMacro1_4Macro4Pmc]->getFloat();
  synth.fHslider522 = pv[ID::dStereoMainCz_pmPmPmcMacro5_8Macro5Pmc]->getFloat();
  synth.fHslider523 = pv[ID::dStereoMainCz_pmPmPmcMacro5_8Macro6Pmc]->getFloat();
  synth.fHslider524 = pv[ID::dStereoMainCz_pmPmPmcMacro5_8Macro7Pmc]->getFloat();
  synth.fHslider525 = pv[ID::dStereoMainCz_pmPmPmcMacro5_8Macro8Pmc]->getFloat();
  synth.fHslider498 = pv[ID::dStereoMainCz_pmPmPmdMacro1_4Macro1Pmd]->getFloat();
  synth.fHslider499 = pv[ID::dStereoMainCz_pmPmPmdMacro1_4Macro2Pmd]->getFloat();
  synth.fHslider500 = pv[ID::dStereoMainCz_pmPmPmdMacro1_4Macro3Pmd]->getFloat();
  synth.fHslider501 = pv[ID::dStereoMainCz_pmPmPmdMacro1_4Macro4Pmd]->getFloat();
  synth.fHslider506 = pv[ID::dStereoMainCz_pmPmPmdMacro5_8Macro5Pmd]->getFloat();
  synth.fHslider507 = pv[ID::dStereoMainCz_pmPmPmdMacro5_8Macro6Pmd]->getFloat();
  synth.fHslider508 = pv[ID::dStereoMainCz_pmPmPmdMacro5_8Macro7Pmd]->getFloat();
  synth.fHslider509 = pv[ID::dStereoMainCz_pmPmPmdMacro5_8Macro8Pmd]->getFloat();
  synth.fHslider598 = pv[ID::dStereoL_roffsetCz_pmCzIndexMacro1_4Macro1Index]->getFloat();
  synth.fHslider599 = pv[ID::dStereoL_roffsetCz_pmCzIndexMacro1_4Macro2Index]->getFloat();
  synth.fHslider600 = pv[ID::dStereoL_roffsetCz_pmCzIndexMacro1_4Macro3Index]->getFloat();
  synth.fHslider601 = pv[ID::dStereoL_roffsetCz_pmCzIndexMacro1_4Macro4Index]->getFloat();
  synth.fHslider606 = pv[ID::dStereoL_roffsetCz_pmCzIndexMacro5_8Macro5Index]->getFloat();
  synth.fHslider607 = pv[ID::dStereoL_roffsetCz_pmCzIndexMacro5_8Macro6Index]->getFloat();
  synth.fHslider608 = pv[ID::dStereoL_roffsetCz_pmCzIndexMacro5_8Macro7Index]->getFloat();
  synth.fHslider609 = pv[ID::dStereoL_roffsetCz_pmCzIndexMacro5_8Macro8Index]->getFloat();
  synth.fHslider566 = pv[ID::dStereoL_roffsetCz_pmCzOctaveMacro1_4Macro1Octave]->getFloat();
  synth.fHslider567 = pv[ID::dStereoL_roffsetCz_pmCzOctaveMacro1_4Macro2Octave]->getFloat();
  synth.fHslider568 = pv[ID::dStereoL_roffsetCz_pmCzOctaveMacro1_4Macro3Octave]->getFloat();
  synth.fHslider569 = pv[ID::dStereoL_roffsetCz_pmCzOctaveMacro1_4Macro4Octave]->getFloat();
  synth.fHslider574 = pv[ID::dStereoL_roffsetCz_pmCzOctaveMacro5_8Macro5Octave]->getFloat();
  synth.fHslider575 = pv[ID::dStereoL_roffsetCz_pmCzOctaveMacro5_8Macro6Octave]->getFloat();
  synth.fHslider576 = pv[ID::dStereoL_roffsetCz_pmCzOctaveMacro5_8Macro7Octave]->getFloat();
  synth.fHslider577 = pv[ID::dStereoL_roffsetCz_pmCzOctaveMacro5_8Macro8Octave]->getFloat();
  synth.fHslider550 = pv[ID::dStereoL_roffsetCz_pmCzPhaseMacro1_4Macro1Phase]->getFloat();
  synth.fHslider551 = pv[ID::dStereoL_roffsetCz_pmCzPhaseMacro1_4Macro2Phase]->getFloat();
  synth.fHslider552 = pv[ID::dStereoL_roffsetCz_pmCzPhaseMacro1_4Macro3Phase]->getFloat();
  synth.fHslider553 = pv[ID::dStereoL_roffsetCz_pmCzPhaseMacro1_4Macro4Phase]->getFloat();
  synth.fHslider558 = pv[ID::dStereoL_roffsetCz_pmCzPhaseMacro5_8Macro5Phase]->getFloat();
  synth.fHslider559 = pv[ID::dStereoL_roffsetCz_pmCzPhaseMacro5_8Macro6Phase]->getFloat();
  synth.fHslider560 = pv[ID::dStereoL_roffsetCz_pmCzPhaseMacro5_8Macro7Phase]->getFloat();
  synth.fHslider561 = pv[ID::dStereoL_roffsetCz_pmCzPhaseMacro5_8Macro8Phase]->getFloat();
  synth.fHslider582 = pv[ID::dStereoL_roffsetCz_pmPmPmaMacro1_4Macro1Pma]->getFloat();
  synth.fHslider583 = pv[ID::dStereoL_roffsetCz_pmPmPmaMacro1_4Macro2Pma]->getFloat();
  synth.fHslider584 = pv[ID::dStereoL_roffsetCz_pmPmPmaMacro1_4Macro3Pma]->getFloat();
  synth.fHslider585 = pv[ID::dStereoL_roffsetCz_pmPmPmaMacro1_4Macro4Pma]->getFloat();
  synth.fHslider590 = pv[ID::dStereoL_roffsetCz_pmPmPmaMacro5_8Macro5Pma]->getFloat();
  synth.fHslider591 = pv[ID::dStereoL_roffsetCz_pmPmPmaMacro5_8Macro6Pma]->getFloat();
  synth.fHslider592 = pv[ID::dStereoL_roffsetCz_pmPmPmaMacro5_8Macro7Pma]->getFloat();
  synth.fHslider593 = pv[ID::dStereoL_roffsetCz_pmPmPmaMacro5_8Macro8Pma]->getFloat();
  synth.fHslider534 = pv[ID::dStereoL_roffsetCz_pmPmPmbMacro1_4Macro1Pmb]->getFloat();
  synth.fHslider535 = pv[ID::dStereoL_roffsetCz_pmPmPmbMacro1_4Macro2Pmb]->getFloat();
  synth.fHslider536 = pv[ID::dStereoL_roffsetCz_pmPmPmbMacro1_4Macro3Pmb]->getFloat();
  synth.fHslider537 = pv[ID::dStereoL_roffsetCz_pmPmPmbMacro1_4Macro4Pmb]->getFloat();
  synth.fHslider542 = pv[ID::dStereoL_roffsetCz_pmPmPmbMacro5_8Macro5Pmb]->getFloat();
  synth.fHslider543 = pv[ID::dStereoL_roffsetCz_pmPmPmbMacro5_8Macro6Pmb]->getFloat();
  synth.fHslider544 = pv[ID::dStereoL_roffsetCz_pmPmPmbMacro5_8Macro7Pmb]->getFloat();
  synth.fHslider545 = pv[ID::dStereoL_roffsetCz_pmPmPmbMacro5_8Macro8Pmb]->getFloat();
  synth.fHslider518 = pv[ID::dStereoL_roffsetCz_pmPmPmcMacro1_4Macro1Pmc]->getFloat();
  synth.fHslider519 = pv[ID::dStereoL_roffsetCz_pmPmPmcMacro1_4Macro2Pmc]->getFloat();
  synth.fHslider520 = pv[ID::dStereoL_roffsetCz_pmPmPmcMacro1_4Macro3Pmc]->getFloat();
  synth.fHslider521 = pv[ID::dStereoL_roffsetCz_pmPmPmcMacro1_4Macro4Pmc]->getFloat();
  synth.fHslider526 = pv[ID::dStereoL_roffsetCz_pmPmPmcMacro5_8Macro5Pmc]->getFloat();
  synth.fHslider527 = pv[ID::dStereoL_roffsetCz_pmPmPmcMacro5_8Macro6Pmc]->getFloat();
  synth.fHslider528 = pv[ID::dStereoL_roffsetCz_pmPmPmcMacro5_8Macro7Pmc]->getFloat();
  synth.fHslider529 = pv[ID::dStereoL_roffsetCz_pmPmPmcMacro5_8Macro8Pmc]->getFloat();
  synth.fHslider502 = pv[ID::dStereoL_roffsetCz_pmPmPmdMacro1_4Macro1Pmd]->getFloat();
  synth.fHslider503 = pv[ID::dStereoL_roffsetCz_pmPmPmdMacro1_4Macro2Pmd]->getFloat();
  synth.fHslider504 = pv[ID::dStereoL_roffsetCz_pmPmPmdMacro1_4Macro3Pmd]->getFloat();
  synth.fHslider505 = pv[ID::dStereoL_roffsetCz_pmPmPmdMacro1_4Macro4Pmd]->getFloat();
  synth.fHslider510 = pv[ID::dStereoL_roffsetCz_pmPmPmdMacro5_8Macro5Pmd]->getFloat();
  synth.fHslider511 = pv[ID::dStereoL_roffsetCz_pmPmPmdMacro5_8Macro6Pmd]->getFloat();
  synth.fHslider512 = pv[ID::dStereoL_roffsetCz_pmPmPmdMacro5_8Macro7Pmd]->getFloat();
  synth.fHslider513 = pv[ID::dStereoL_roffsetCz_pmPmPmdMacro5_8Macro8Pmd]->getFloat();
  synth.fVslider4 = pv[ID::dType]->getFloat();
  synth.fHslider1 = pv[ID::envelopesEnvelope_1Attack]->getFloat();
  synth.fHslider2 = pv[ID::envelopesEnvelope_1Decay]->getFloat();
  synth.fHslider5 = pv[ID::envelopesEnvelope_1Sustain]->getFloat();
  synth.fHslider0 = pv[ID::envelopesEnvelope_1Release]->getFloat();
  synth.fHslider3 = pv[ID::envelopesEnvelope_1Velsens]->getFloat();
  synth.fHslider21 = pv[ID::envelopesEnvelope0Attack]->getFloat();
  synth.fHslider22 = pv[ID::envelopesEnvelope0Decay]->getFloat();
  synth.fHslider24 = pv[ID::envelopesEnvelope0Sustain]->getFloat();
  synth.fHslider20 = pv[ID::envelopesEnvelope0Release]->getFloat();
  synth.fHslider23 = pv[ID::envelopesEnvelope0Velsens]->getFloat();
  synth.fHslider26 = pv[ID::envelopesEnvelope1Attack]->getFloat();
  synth.fHslider27 = pv[ID::envelopesEnvelope1Decay]->getFloat();
  synth.fHslider29 = pv[ID::envelopesEnvelope1Sustain]->getFloat();
  synth.fHslider25 = pv[ID::envelopesEnvelope1Release]->getFloat();
  synth.fHslider28 = pv[ID::envelopesEnvelope1Velsens]->getFloat();
  synth.fHslider31 = pv[ID::envelopesEnvelope2Attack]->getFloat();
  synth.fHslider32 = pv[ID::envelopesEnvelope2Decay]->getFloat();
  synth.fHslider34 = pv[ID::envelopesEnvelope2Sustain]->getFloat();
  synth.fHslider30 = pv[ID::envelopesEnvelope2Release]->getFloat();
  synth.fHslider33 = pv[ID::envelopesEnvelope2Velsens]->getFloat();
  synth.fHslider36 = pv[ID::envelopesEnvelope3Attack]->getFloat();
  synth.fHslider37 = pv[ID::envelopesEnvelope3Decay]->getFloat();
  synth.fHslider39 = pv[ID::envelopesEnvelope3Sustain]->getFloat();
  synth.fHslider35 = pv[ID::envelopesEnvelope3Release]->getFloat();
  synth.fHslider38 = pv[ID::envelopesEnvelope3Velsens]->getFloat();
  synth.fHslider40 = pv[ID::lfosLfo0Lfofreq]->getFloat();
  synth.fHslider41 = pv[ID::lfosLfo1Lfofreq]->getFloat();
  synth.fHslider42 = pv[ID::lfosLfo2Lfofreq]->getFloat();
  synth.fHslider43 = pv[ID::lfosLfo3Lfofreq]->getFloat();
  synth.fHslider62 = pv[ID::modulation1Macro]->getFloat();
  synth.fHslider63 = pv[ID::modulation1Uptime]->getFloat();
  synth.fHslider64 = pv[ID::modulation1Downtime]->getFloat();
  synth.fHslider48 = pv[ID::modulation1Env0]->getFloat();
  synth.fHslider49 = pv[ID::modulation1Env1]->getFloat();
  synth.fHslider50 = pv[ID::modulation1Env2]->getFloat();
  synth.fHslider51 = pv[ID::modulation1Env3]->getFloat();
  synth.fHslider52 = pv[ID::modulation1Lfo0]->getFloat();
  synth.fHslider53 = pv[ID::modulation1Lfo1]->getFloat();
  synth.fHslider55 = pv[ID::modulation1Lfo2]->getFloat();
  synth.fHslider54 = pv[ID::modulation1Lfo3]->getFloat();
  synth.fHslider56 = pv[ID::modulation1After_touch]->getFloat();
  synth.fHslider57 = pv[ID::modulation1Note]->getFloat();
  synth.fHslider58 = pv[ID::modulation1Velocity]->getFloat();
  synth.fHslider59 = pv[ID::modulation1Mod_wheel]->getFloat();
  synth.fHslider60 = pv[ID::modulation1Pitch_wheel]->getFloat();
  synth.fHslider61 = pv[ID::modulation1Random]->getFloat();
  synth.fHslider80 = pv[ID::modulation2Macro]->getFloat();
  synth.fHslider81 = pv[ID::modulation2Uptime]->getFloat();
  synth.fHslider82 = pv[ID::modulation2Downtime]->getFloat();
  synth.fHslider66 = pv[ID::modulation2Env0]->getFloat();
  synth.fHslider67 = pv[ID::modulation2Env1]->getFloat();
  synth.fHslider68 = pv[ID::modulation2Env2]->getFloat();
  synth.fHslider69 = pv[ID::modulation2Env3]->getFloat();
  synth.fHslider70 = pv[ID::modulation2Lfo0]->getFloat();
  synth.fHslider71 = pv[ID::modulation2Lfo1]->getFloat();
  synth.fHslider73 = pv[ID::modulation2Lfo2]->getFloat();
  synth.fHslider72 = pv[ID::modulation2Lfo3]->getFloat();
  synth.fHslider74 = pv[ID::modulation2After_touch]->getFloat();
  synth.fHslider75 = pv[ID::modulation2Note]->getFloat();
  synth.fHslider76 = pv[ID::modulation2Velocity]->getFloat();
  synth.fHslider77 = pv[ID::modulation2Mod_wheel]->getFloat();
  synth.fHslider78 = pv[ID::modulation2Pitch_wheel]->getFloat();
  synth.fHslider79 = pv[ID::modulation2Random]->getFloat();
  synth.fHslider44 = pv[ID::modulation3Macro]->getFloat();
  synth.fHslider45 = pv[ID::modulation3Uptime]->getFloat();
  synth.fHslider46 = pv[ID::modulation3Downtime]->getFloat();
  synth.fHslider6 = pv[ID::modulation3Env0]->getFloat();
  synth.fHslider7 = pv[ID::modulation3Env1]->getFloat();
  synth.fHslider8 = pv[ID::modulation3Env2]->getFloat();
  synth.fHslider9 = pv[ID::modulation3Env3]->getFloat();
  synth.fHslider10 = pv[ID::modulation3Lfo0]->getFloat();
  synth.fHslider11 = pv[ID::modulation3Lfo1]->getFloat();
  synth.fHslider13 = pv[ID::modulation3Lfo2]->getFloat();
  synth.fHslider12 = pv[ID::modulation3Lfo3]->getFloat();
  synth.fHslider14 = pv[ID::modulation3After_touch]->getFloat();
  synth.fHslider15 = pv[ID::modulation3Note]->getFloat();
  synth.fHslider16 = pv[ID::modulation3Velocity]->getFloat();
  synth.fHslider17 = pv[ID::modulation3Mod_wheel]->getFloat();
  synth.fHslider18 = pv[ID::modulation3Pitch_wheel]->getFloat();
  synth.fHslider19 = pv[ID::modulation3Random]->getFloat();
  

  // MIDI parameters.
  // - `fHslider193: note frequency in Hz.
  // - `fButton0: note gain (velocity).
  // - `fHslider4: note gate.
  // - `fVslider1: aftertouch. [0, 127].
  // - `fVslider2: CC1 (0x01). [0, 127].
  // - `fVslider3: pitch bend. [-8192, 8191].
  if (!noteStack.empty()) {
    synth.fHslider193 = noteStack.back().frequency;
    synth.fHslider4 = noteStack.back().velocity;
    synth.fButton0 = 1.0f;
    synth.fVslider1 = pv[ID::aftertouch]->getFloat();
    synth.fVslider2 = pv[ID::modulationWheel]->getFloat();
    synth.fVslider3 = pv[ID::pitchBend]->getFloat();
  } else {
    synth.fHslider193 = 0;
    synth.fHslider4 = 0;
    synth.fButton0 = 0;
    synth.fVslider1 = 0;
    synth.fVslider2 = 0;
    synth.fVslider3 = 0;
  }

  synth.control(&synth.ictrl[0], &synth.rctrl[0]);
}

void DSPCORE_NAME::process(const uint32_t length, float *out0, float *out1)
{
  std::array<float, 2> frame{};
  for (uint32_t i = 0; i < length; ++i) {
    processMidiNote(i);

    synth.compute(nullptr, &frame[0], &synth.ictrl[0], &synth.rctrl[0]);

    out0[i] = frame[0];
    out1[i] = frame[1];
  }
}

void DSPCORE_NAME::noteOn(
  int32_t noteId, int16_t pitch, float tuning, float velocity)
{
  NoteInfo info;
  info.id = noteId;
  info.frequency = notePitchToFrequency(pitch + tuning);
  info.velocity = velocityMap.map(velocity);
  noteStack.push_back(info);
}

void DSPCORE_NAME::noteOff(int32_t noteId)
{
  auto it = std::find_if(noteStack.begin(), noteStack.end(), [&](const NoteInfo &info) {
    return info.id == noteId;
  });
  if (it == noteStack.end()) return;
  noteStack.erase(it);
}
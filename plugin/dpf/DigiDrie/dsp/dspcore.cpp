/*
TODO:
- Add license.
- Add note handling.
- Integrate Faust code.
*/

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

DSPCORE_NAME::DSPCORE_NAME() {}

void DSPCORE_NAME::setup(double sampleRate)
{
  this->sampleRate = sampleRate;

  startup();
}

void DSPCORE_NAME::reset() { startup(); }

void DSPCORE_NAME::startup() {}

void DSPCORE_NAME::setParameters(float tempo) {}

void DSPCORE_NAME::process(const uint32_t length, float *out0, float *out1)
{
  for (uint32_t i = 0; i < length; ++i) {
    processMidiNote(i);

    out0[i] = 0;
    out1[i] = 0;
  }
}

void DSPCORE_NAME::noteOn(
  int32_t /* id */, int16_t /* pitch */, float /* tuning */, float /* velocity */)
{
}

void DSPCORE_NAME::noteOff(int32_t /* noteId */) {}

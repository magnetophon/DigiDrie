// (c) 2022 Digital Magic Industries
//
// This file is part of DigiDrie.
//
// DigiDrie is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// DigiDrie is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with DigiDrie.  If not, see <https://www.gnu.org/licenses/>.

#include "plugprocessor.hpp"
#include "fuid.hpp"

#include "base/source/fstreamer.h"
#include "pluginterfaces/base/ibstream.h"
#include "pluginterfaces/vst/ivstaudioprocessor.h"
#include "pluginterfaces/vst/ivstevents.h"
#include "pluginterfaces/vst/ivstparameterchanges.h"

#include <cstring>
#include <iostream>

namespace Steinberg {
namespace Synth {

PlugProcessor::PlugProcessor()
{
  dsp = std::make_unique<DSPCore_Plain>();
  setControllerClass(ControllerUID);
}

tresult PLUGIN_API PlugProcessor::initialize(FUnknown *context)
{
  tresult result = AudioEffect::initialize(context);
  if (result != kResultTrue) return result;

  addAudioOutput(STR16("StereoOutput"), Vst::SpeakerArr::kStereo);
  addEventInput(STR16("EventInput"), 1);

  return result;
}

tresult PLUGIN_API PlugProcessor::setBusArrangements(
  Vst::SpeakerArrangement *inputs,
  int32 numIns,
  Vst::SpeakerArrangement *outputs,
  int32 numOuts)
{
  if (numIns == 1 && numOuts == 1 && inputs[0] == outputs[0]) {
    return AudioEffect::setBusArrangements(inputs, numIns, outputs, numOuts);
  }
  return kResultFalse;
}

uint32 PLUGIN_API PlugProcessor::getProcessContextRequirements()
{
  using Rq = Vst::IProcessContextRequirements;

  return Rq::kNeedProjectTimeMusic & Rq::kNeedTempo & Rq::kNeedTransportState;
}

tresult PLUGIN_API PlugProcessor::setupProcessing(Vst::ProcessSetup &setup)
{
  if (dsp == nullptr) return kNotInitialized;
  dsp->setup(processSetup.sampleRate);
  return AudioEffect::setupProcessing(setup);
}

tresult PLUGIN_API PlugProcessor::setActive(TBool state)
{
  if (dsp == nullptr) return kResultFalse;
  if (state) {
    dsp->setup(processSetup.sampleRate);
  } else {
    dsp->reset();
  }
  return AudioEffect::setActive(state);
}

tresult PLUGIN_API PlugProcessor::process(Vst::ProcessData &data)
{
  if (dsp == nullptr) return kNotInitialized;

  // Read inputs parameter changes.
  if (data.inputParameterChanges) {
    int32 parameterCount = data.inputParameterChanges->getParameterCount();
    for (int32 index = 0; index < parameterCount; index++) {
      auto queue = data.inputParameterChanges->getParameterData(index);
      if (!queue) continue;
      Vst::ParamValue value;
      int32 sampleOffset;
      if (queue->getPoint(queue->getPointCount() - 1, sampleOffset, value) != kResultTrue)
        continue;
      size_t id = queue->getParameterId();
      if (id < dsp->param.value.size()) dsp->param.value[id]->setFromNormalized(value);
    }
  }

  if (data.processContext == nullptr) return kResultOk;

  uint64_t state = data.processContext->state;
  if (state & Vst::ProcessContext::kTempoValid) {
    dsp->tempo = float(data.processContext->tempo);
  }
  if (state & Vst::ProcessContext::kProjectTimeMusicValid) {
    dsp->beatsElapsed = data.processContext->projectTimeMusic;
  }
  if (!dsp->isPlaying && (state & Vst::ProcessContext::kPlaying) != 0) {
    dsp->startup();
  }
  dsp->isPlaying = state & Vst::ProcessContext::kPlaying;

  dsp->setParameters();

  if (data.numOutputs == 0) return kResultOk;
  if (data.numSamples <= 0) return kResultOk;
  if (data.outputs[0].numChannels != 2) return kResultOk;
  if (data.symbolicSampleSize == Vst::kSample64) return kResultOk;

  if (data.inputEvents != nullptr) handleEvent(data);

  float *out0 = data.outputs[0].channelBuffers32[0];
  float *out1 = data.outputs[0].channelBuffers32[1];
  size_t length = data.numSamples < 0 ? 0 : size_t(data.numSamples);
  dsp->process(length, out0, out1);

  return kResultOk;
}

void PlugProcessor::handleEvent(Vst::ProcessData &data)
{
  if (dsp == nullptr) return;

  for (int32 index = 0; index < data.inputEvents->getEventCount(); ++index) {
    Vst::Event event;
    if (data.inputEvents->getEvent(index, event) != kResultOk) continue;
    switch (event.type) {
      case Vst::Event::kNoteOnEvent: {
        auto noteId
          = event.noteOn.noteId == -1 ? event.noteOn.pitch : event.noteOn.noteId;
        dsp->pushMidiNote(
          true, event.sampleOffset, noteId, event.noteOn.pitch, event.noteOn.tuning,
          event.noteOn.velocity);
      } break;

      case Vst::Event::kNoteOffEvent: {
        auto noteId
          = event.noteOff.noteId == -1 ? event.noteOff.pitch : event.noteOff.noteId;
        dsp->pushMidiNote(false, event.sampleOffset, noteId, 0, 0, 0);
      } break;

        // Add other event type here.
    }
  }
}

tresult PLUGIN_API PlugProcessor::setState(IBStream *state)
{
  if (dsp == nullptr) return kNotInitialized;
  if (!state) return kResultFalse;
  return dsp->param.setState(state);
}

tresult PLUGIN_API PlugProcessor::getState(IBStream *state)
{
  if (dsp == nullptr) return kNotInitialized;
  return dsp->param.getState(state);
}

tresult PlugProcessor::receiveText(const char8 *text)
{
  if (dsp == nullptr) return kNotInitialized;
  return kResultOk;
}

} // namespace Synth
} // namespace Steinberg

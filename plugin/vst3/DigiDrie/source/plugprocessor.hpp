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

#pragma once

#include "public.sdk/source/vst/vstaudioeffect.h"

#include "dsp/dspcore.hpp"

#include <memory>

namespace Steinberg {
namespace Synth {

class PlugProcessor : public Vst::AudioEffect {
public:
  PlugProcessor();

  tresult PLUGIN_API initialize(FUnknown *context) SMTG_OVERRIDE;
  tresult PLUGIN_API setBusArrangements(
    Vst::SpeakerArrangement *inputs,
    int32 numIns,
    Vst::SpeakerArrangement *outputs,
    int32 numOuts) SMTG_OVERRIDE;
  uint32 PLUGIN_API getProcessContextRequirements() SMTG_OVERRIDE;

  tresult PLUGIN_API setupProcessing(Vst::ProcessSetup &setup) SMTG_OVERRIDE;
  tresult PLUGIN_API setActive(TBool state) SMTG_OVERRIDE;
  tresult PLUGIN_API process(Vst::ProcessData &data) SMTG_OVERRIDE;

  tresult PLUGIN_API setState(IBStream *state) SMTG_OVERRIDE;
  tresult PLUGIN_API getState(IBStream *state) SMTG_OVERRIDE;

  tresult receiveText(const char8 *text) SMTG_OVERRIDE;

  static FUnknown *createInstance(void *)
  {
    return (Vst::IAudioProcessor *)new PlugProcessor();
  }

  void handleEvent(Vst::ProcessData &data);

protected:
  std::unique_ptr<DSPInterface> dsp;
};

} // namespace Synth
} // namespace Steinberg

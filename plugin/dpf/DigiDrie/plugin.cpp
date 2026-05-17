/*
TODO:
- Add license.
- Change home page.
- Change maker.
- Change description.
- Remove state, if unused.
- Improve handleMidi.
  - Clean up lastNoteId and alreadyRecievedNote.
  - Note-off by velocity 0 note-on.
  - Pitch bend range.
*/

#include <iostream>

#include <memory>
#include <utility>

#include "DistrhoPlugin.hpp"
#include "dsp/dspcore.hpp"

START_NAMESPACE_DISTRHO

class DigiDrie : public Plugin {
public:
  DigiDrie()
    : Plugin(ParameterID::ID_ENUM_LENGTH, GlobalParameter::Preset::Preset_ENUM_LENGTH, 0)
  {
#if defined(__x86_64__) || defined(_M_X64) || defined(__i386__) || defined(_M_IX86)
    auto iset = instrset_detect();
    if (iset >= 10) {
      dsp = std::make_unique<DSPCore_AVX512>();
    } else if (iset >= 8) {
      dsp = std::make_unique<DSPCore_AVX2>();
    } else if (iset >= 5) {
      dsp = std::make_unique<DSPCore_SSE41>();
    } else if (iset >= 2) {
      dsp = std::make_unique<DSPCore_SSE2>();
    } else {
      std::cerr << "\nError: Instruction set SSE2 not supported on this computer";
      exit(EXIT_FAILURE);
    }
#else
    // Non-x86 (Apple Silicon, aarch64 Linux): single non-vectorised core.
    dsp = std::make_unique<DSPCore_Generic>();
#endif
    dsp->param.validate();

    sampleRateChanged(getSampleRate());
    lastNoteId.reserve(dsp->maxVoice + 1);
    alreadyRecievedNote.reserve(dsp->maxVoice);
  }

protected:
  /* Information */
  const char *getLabel() const override { return "DigiDrie"; }
  const char *getDescription() const override
  {
    return "A monster monophonic synth, written in faust.";
  }
  const char *getMaker() const override { return "Digital Magic Industries"; }
  const char *getHomePage() const override
  {
    return "https://github.com/magnetophon/DigiDrie";
  }
  const char *getLicense() const override { return "GPLv3"; }
  uint32_t getVersion() const override
  {
    return d_version(MAJOR_VERSION, MINOR_VERSION, PATCH_VERSION);
  }
  int64_t getUniqueId() const override { return d_cconst('d', 'd', 'r', 'i'); }

  void initParameter(uint32_t index, Parameter &parameter) override
  {
    dsp->param.initParameter(index, parameter);

    switch (index) {
      case ParameterID::bypass:
        parameter.designation = kParameterDesignationBypass;
        break;
    }

    parameter.symbol = parameter.name;
  }

  float getParameterValue(uint32_t index) const override
  {
    return dsp->param.getFloat(index);
  }

  void setParameterValue(uint32_t index, float value) override
  {
    dsp->param.setParameterValue(index, value);
  }

  void initProgramName(uint32_t index, String &programName) override
  {
    dsp->param.initProgramName(index, programName);
  }

  void loadProgram(uint32_t index) override { dsp->param.loadProgram(index); }

  void initState(
    uint32_t /* index */, String & /* stateKey */, String & /* defaultStateValue */)
  {
  }

  String getState(const char *) const { return String("N/A"); }

  void setState(const char * /* key */, const char *) {}

  void sampleRateChanged(double newSampleRate) { dsp->setup(newSampleRate); }
  void activate() { dsp->startup(); }
  void deactivate() { dsp->reset(); }

  void handleControlChange(
    const MidiEvent &ev,
    const MidiEvent *midiEvents,
    uint32_t &midiIndex,
    uint32_t midiEventCount)
  {
    switch (ev.data[1]) {
      // Modulation wheel or lever.
      case 0x01: {
        // Check if LSB is available. Only considering consecutive case.
        if (midiIndex >= midiEventCount - 1) break;

        auto &next = midiEvents[midiIndex + 1].data;
        if (next[0] == 0xB0 && next[1] == 0x33) { // LSB is available.
          dsp->param.value[ParameterID::modulationWheel]->setFromFloat(
            ((uint16_t(ev.data[2]) << 7) + ev.data[1]) / 129.0f);
          ++midiIndex;
        } else { // LSB is not available.
          dsp->param.value[ParameterID::modulationWheel]->setFromInt(ev.data[2]);
        }
      } break;
    }
  }

  void handleNoteOff(const MidiEvent &ev)
  {
    auto it = std::find_if(
      lastNoteId.begin(), lastNoteId.end(),
      [&](const std::pair<uint8_t, uint32_t> &p) { return p.first == ev.data[1]; });
    if (it == std::end(lastNoteId)) return;
    dsp->pushMidiNote(false, ev.frame, it->second, 0, 0, 0);
    lastNoteId.erase(it);
  }

  void handleMidi(
    const MidiEvent &ev,
    const MidiEvent *midiEvents,
    uint32_t &midiIndex,
    uint32_t midiEventCount)
  {
    // Channel Pressure is a 2-byte message (status + value); the
    // earlier `!= 3` guard silently dropped every 0xD0 event. Use the
    // minimum-2 floor and let each case rely on its own status-byte
    // convention for how many bytes it actually inspects.
    if (ev.size < 2) return;

    switch (ev.data[0] & 0xf0) {
      // Note off.
      case 0x80: {
        handleNoteOff(ev);
      } break;

      // Note on. data[1]: note number, data[2] velocity.
      case 0x90: {
        if (ev.data[2] == 0) { // velocity 0 means note off.
          handleNoteOff(ev);
        } else {
          auto it = std::find_if(
            alreadyRecievedNote.begin(), alreadyRecievedNote.end(),
            [&](const uint8_t &noteNo) { return noteNo == ev.data[1]; });
          if (it != std::end(alreadyRecievedNote)) break;
          dsp->pushMidiNote(
            true, ev.frame, noteId, ev.data[1], 0.0f, ev.data[2] / float(INT8_MAX));
          lastNoteId.push_back(std::pair<uint8_t, uint32_t>(ev.data[1], noteId));
          alreadyRecievedNote.push_back(ev.data[1]);
          noteId += 1;
        }
      } break;

      // Polyphonic Key Pressure. data[1]: note, data[2]: pressure.
      // Applied as global aftertouch since the synth is monophonic.
      case 0xA0: {
        dsp->param.value[ParameterID::aftertouch]->setFromInt(ev.data[2]);
      } break;

      // Control Change.
      case 0xB0: {
        handleControlChange(ev, midiEvents, midiIndex, midiEventCount);
      } break;

      // Channel Pressure. data[1]: pressure (no data[2]; 2-byte msg).
      case 0xD0: {
        dsp->param.value[ParameterID::aftertouch]->setFromInt(ev.data[1]);
      } break;

      // Pitch bend. Center is 8192 (0x2000).
      case 0xE0: {
        dsp->param.value[ParameterID::pitchBend]->setFromInt(
          ((int32_t(ev.data[2]) << 7) + ev.data[1]) - 8192);
      } break;

      default:
        break;
    }
  }

  void run(
    const float **,
    float **outputs,
    uint32_t frames,
    const MidiEvent *midiEvents,
    uint32_t midiEventCount) override
  {
    if (outputs == nullptr) return;
    if (dsp->param.value[ParameterID::bypass]->getInt()) return;

    const auto timePos = getTimePosition();
    if (!wasPlaying && timePos.playing) dsp->startup();
    wasPlaying = timePos.playing;

    for (uint32_t i = 0; i < midiEventCount; ++i)
      handleMidi(midiEvents[i], midiEvents, i, midiEventCount);
    alreadyRecievedNote.resize(0);

    dsp->setParameters(timePos.bbt.beatsPerMinute);
    dsp->process(frames, outputs[0], outputs[1]);
  }

private:
  std::unique_ptr<DSPInterface> dsp;
  bool wasPlaying = false;
  uint32_t noteId = 0;
  std::vector<std::pair<uint8_t, uint32_t>> lastNoteId;
  std::vector<uint8_t> alreadyRecievedNote;

  DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(DigiDrie)
};

Plugin *createPlugin() { return new DigiDrie(); }

END_NAMESPACE_DISTRHO

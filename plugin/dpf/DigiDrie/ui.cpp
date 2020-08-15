// TODO: Generate this.

#include <iostream>
#include <memory>
#include <sstream>
#include <tuple>
#include <unordered_map>
#include <vector>

#include "../common/uibase.hpp"
#include "parameter.hpp"

START_NAMESPACE_DISTRHO

constexpr float uiTextSize = 14.0f;
constexpr float midTextSize = 16.0f;
constexpr float infoTextSize = 18.0f;
constexpr float pluginNameTextSize = 22.0f;
constexpr float margin = 5.0f;
constexpr float uiMargin = 20.0f;
constexpr float labelHeight = 20.0f;
constexpr float labelY = 30.0f;
constexpr float knobWidth = 50.0f;
constexpr float knobHeight = 40.0f;
constexpr float spreadKnobWidth = 20.0f;
constexpr float knobX = 60.0f; // With margin.
constexpr float knobY = knobHeight + labelY;

constexpr float sectionHeight = labelY + knobY;
constexpr float knobPairWidth = knobX + spreadKnobWidth;
constexpr float innerWidth = 1400;
constexpr float innerHeight = 700;

constexpr uint32_t defaultWidth = uint32_t(2 * uiMargin + innerWidth);
constexpr uint32_t defaultHeight = uint32_t(2 * uiMargin + innerHeight);

enum macrotabIndex {
  macro_1,
  macro_2,
  macro_3,
  macro_4,
  macro_5,
  macro_6,
  macro_7,
  macro_8,
  };

enum globaltabIndex {
  global,
  envelopes,
  LFOs,
  modulation,
};

class DigiDrieUI : public PluginUIBase {
protected:
  void onNanoDisplay() override
  {
    beginPath();
    rect(0, 0, getWidth(), getHeight());
    fillColor(palette.background());
    fill();
  }

  DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(DigiDrieUI)

public:
  DigiDrieUI() : PluginUIBase(defaultWidth, defaultHeight)
  {
    param = std::make_unique<GlobalParameter>();

    setGeometryConstraints(defaultWidth, defaultHeight, true, true);

    if (palette.fontPath().size() > 0)
      fontId = createFontFromFile("main", palette.fontPath().c_str());

    if (fontId < 0) {
      fontId = createFontFromMemory(
        "main", (unsigned char *)(FontData::TinosBoldItalicData),
        FontData::TinosBoldItalicDataSize, false);
    }

    using ID = ParameterID::ID;

    const auto top0 = 20.0f;
    const auto left0 = 20.0f;

    const auto tabTop0 = top0;
    const auto tabLeft0 = left0;
    const auto macrotabInnerWidth = 8 * knobPairWidth;
    const auto macrotabWidth = macrotabInnerWidth + 2 * uiMargin;
    const auto macrotabHeight = innerHeight;
    std::vector<std::string> macroTabs = {
      "Macro1",
      "Macro2",
      "Macro3",
      "Macro4",
      "Macro5",
      "Macro6",
      "Macro7",
      "Macro8",
      };
    auto tabviewMacro
      = addTabView(tabLeft0, tabTop0, macrotabWidth, macrotabHeight,
        uiTextSize, labelY, macroTabs);

    const auto macrotabInsideTop0 = tabTop0 + labelY + uiMargin;
    const auto macrotabInsideLeft0 = tabLeft0 + uiMargin;

    const auto macro_1_filter_top0 = macrotabInsideTop0 + 0 * sectionHeight;
    const auto macro_1_filter_top1 = macro_1_filter_top0 + labelY;
    tabviewMacro->addWidget(macro_1,
      addGroupLabel(macrotabInsideLeft0, macro_1_filter_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "Filter"));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_1_filter_top1,
        knobWidth, margin, uiTextSize,
        "SVF", ID::filterStereoMainMixTweakMixPrefilterSvfMacro1_4Macro1Level));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_1_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakMixPrefilterSvfMacro1_4Macro1Level));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_1_filter_top1,
        knobWidth, margin, uiTextSize,
        "ms20", ID::filterStereoMainMixTweakMixPrefilterMs20Macro1_4Macro1Level));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_1_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakMixPrefilterMs20Macro1_4Macro1Level));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_1_filter_top1,
        knobWidth, margin, uiTextSize,
        "oberheim", ID::filterStereoMainMixTweakMixPrefilterOberheimMacro1_4Macro1Level));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_1_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakMixPrefilterOberheimMacro1_4Macro1Level));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_1_filter_top1,
        knobWidth, margin, uiTextSize,
        "normFreq", ID::filterStereoMainMixTweakTweakPrefilterFreqMacro1_4Macro1Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_1_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakTweakPrefilterFreqMacro1_4Macro1Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_1_filter_top1,
        knobWidth, margin, uiTextSize,
        "Q", ID::filterStereoMainMixTweakTweakPrefilterQMacro1_4Macro1Q));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_1_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakTweakPrefilterQMacro1_4Macro1Q));
    
    const auto macro_1_A_top0 = macrotabInsideTop0 + 1 * sectionHeight;
    const auto macro_1_A_top1 = macro_1_A_top0 + labelY;
    tabviewMacro->addWidget(macro_1,
      addGroupLabel(macrotabInsideLeft0, macro_1_A_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "A"));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_1_A_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::aStereoMainOscillatorCzPmCzIndexMacro1_4Macro1Index));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_1_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmCzIndexMacro1_4Macro1Index));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_1_A_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::aStereoMainOscillatorCzPmCzOctaveMacro1_4Macro1Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_1_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmCzOctaveMacro1_4Macro1Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_1_A_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::aStereoMainOscillatorCzPmCzPhaseMacro1_4Macro1Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_1_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmCzPhaseMacro1_4Macro1Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_1_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::aStereoMainOscillatorCzPmPmPmaMacro1_4Macro1Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_1_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmaMacro1_4Macro1Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_1_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::aStereoMainOscillatorCzPmPmPmbMacro1_4Macro1Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_1_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmbMacro1_4Macro1Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_1_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::aStereoMainOscillatorCzPmPmPmcMacro1_4Macro1Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_1_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmcMacro1_4Macro1Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_1_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::aStereoMainOscillatorCzPmPmPmdMacro1_4Macro1Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_1_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmdMacro1_4Macro1Pmd));
    
    const auto macro_1_B_top0 = macrotabInsideTop0 + 2 * sectionHeight;
    const auto macro_1_B_top1 = macro_1_B_top0 + labelY;
    tabviewMacro->addWidget(macro_1,
      addGroupLabel(macrotabInsideLeft0, macro_1_B_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "B"));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_1_B_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::bStereoMainOscillatorCzPmCzIndexMacro1_4Macro1Index));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_1_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmCzIndexMacro1_4Macro1Index));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_1_B_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::bStereoMainOscillatorCzPmCzOctaveMacro1_4Macro1Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_1_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmCzOctaveMacro1_4Macro1Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_1_B_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::bStereoMainOscillatorCzPmCzPhaseMacro1_4Macro1Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_1_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmCzPhaseMacro1_4Macro1Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_1_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::bStereoMainOscillatorCzPmPmPmaMacro1_4Macro1Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_1_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmaMacro1_4Macro1Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_1_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::bStereoMainOscillatorCzPmPmPmbMacro1_4Macro1Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_1_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmbMacro1_4Macro1Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_1_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::bStereoMainOscillatorCzPmPmPmcMacro1_4Macro1Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_1_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmcMacro1_4Macro1Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_1_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::bStereoMainOscillatorCzPmPmPmdMacro1_4Macro1Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_1_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmdMacro1_4Macro1Pmd));
    
    const auto macro_1_C_top0 = macrotabInsideTop0 + 3 * sectionHeight;
    const auto macro_1_C_top1 = macro_1_C_top0 + labelY;
    tabviewMacro->addWidget(macro_1,
      addGroupLabel(macrotabInsideLeft0, macro_1_C_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "C"));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_1_C_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::cStereoMainOscillatorCzPmCzIndexMacro1_4Macro1Index));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_1_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmCzIndexMacro1_4Macro1Index));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_1_C_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::cStereoMainOscillatorCzPmCzOctaveMacro1_4Macro1Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_1_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmCzOctaveMacro1_4Macro1Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_1_C_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::cStereoMainOscillatorCzPmCzPhaseMacro1_4Macro1Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_1_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmCzPhaseMacro1_4Macro1Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_1_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::cStereoMainOscillatorCzPmPmPmaMacro1_4Macro1Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_1_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmaMacro1_4Macro1Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_1_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::cStereoMainOscillatorCzPmPmPmbMacro1_4Macro1Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_1_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmbMacro1_4Macro1Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_1_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::cStereoMainOscillatorCzPmPmPmcMacro1_4Macro1Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_1_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmcMacro1_4Macro1Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_1_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::cStereoMainOscillatorCzPmPmPmdMacro1_4Macro1Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_1_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmdMacro1_4Macro1Pmd));
    
    const auto macro_1_D_top0 = macrotabInsideTop0 + 4 * sectionHeight;
    const auto macro_1_D_top1 = macro_1_D_top0 + labelY;
    tabviewMacro->addWidget(macro_1,
      addGroupLabel(macrotabInsideLeft0, macro_1_D_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "D"));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_1_D_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::dStereoMainOscillatorCzPmCzIndexMacro1_4Macro1Index));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_1_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmCzIndexMacro1_4Macro1Index));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_1_D_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::dStereoMainOscillatorCzPmCzOctaveMacro1_4Macro1Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_1_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmCzOctaveMacro1_4Macro1Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_1_D_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::dStereoMainOscillatorCzPmCzPhaseMacro1_4Macro1Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_1_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmCzPhaseMacro1_4Macro1Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_1_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::dStereoMainOscillatorCzPmPmPmaMacro1_4Macro1Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_1_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmaMacro1_4Macro1Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_1_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::dStereoMainOscillatorCzPmPmPmbMacro1_4Macro1Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_1_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmbMacro1_4Macro1Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_1_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::dStereoMainOscillatorCzPmPmPmcMacro1_4Macro1Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_1_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmcMacro1_4Macro1Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_1_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::dStereoMainOscillatorCzPmPmPmdMacro1_4Macro1Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_1_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmdMacro1_4Macro1Pmd));
    
    
    const auto macro_2_filter_top0 = macrotabInsideTop0 + 0 * sectionHeight;
    const auto macro_2_filter_top1 = macro_2_filter_top0 + labelY;
    tabviewMacro->addWidget(macro_2,
      addGroupLabel(macrotabInsideLeft0, macro_2_filter_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "Filter"));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_2_filter_top1,
        knobWidth, margin, uiTextSize,
        "SVF", ID::filterStereoMainMixTweakMixPrefilterSvfMacro1_4Macro2Level));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_2_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakMixPrefilterSvfMacro1_4Macro2Level));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_2_filter_top1,
        knobWidth, margin, uiTextSize,
        "ms20", ID::filterStereoMainMixTweakMixPrefilterMs20Macro1_4Macro2Level));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_2_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakMixPrefilterMs20Macro1_4Macro2Level));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_2_filter_top1,
        knobWidth, margin, uiTextSize,
        "oberheim", ID::filterStereoMainMixTweakMixPrefilterOberheimMacro1_4Macro2Level));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_2_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakMixPrefilterOberheimMacro1_4Macro2Level));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_2_filter_top1,
        knobWidth, margin, uiTextSize,
        "normFreq", ID::filterStereoMainMixTweakTweakPrefilterFreqMacro1_4Macro2Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_2_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakTweakPrefilterFreqMacro1_4Macro2Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_2_filter_top1,
        knobWidth, margin, uiTextSize,
        "Q", ID::filterStereoMainMixTweakTweakPrefilterQMacro1_4Macro2Q));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_2_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakTweakPrefilterQMacro1_4Macro2Q));
    
    const auto macro_2_A_top0 = macrotabInsideTop0 + 1 * sectionHeight;
    const auto macro_2_A_top1 = macro_2_A_top0 + labelY;
    tabviewMacro->addWidget(macro_2,
      addGroupLabel(macrotabInsideLeft0, macro_2_A_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "A"));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_2_A_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::aStereoMainOscillatorCzPmCzIndexMacro1_4Macro2Index));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_2_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmCzIndexMacro1_4Macro2Index));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_2_A_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::aStereoMainOscillatorCzPmCzOctaveMacro1_4Macro2Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_2_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmCzOctaveMacro1_4Macro2Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_2_A_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::aStereoMainOscillatorCzPmCzPhaseMacro1_4Macro2Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_2_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmCzPhaseMacro1_4Macro2Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_2_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::aStereoMainOscillatorCzPmPmPmaMacro1_4Macro2Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_2_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmaMacro1_4Macro2Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_2_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::aStereoMainOscillatorCzPmPmPmbMacro1_4Macro2Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_2_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmbMacro1_4Macro2Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_2_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::aStereoMainOscillatorCzPmPmPmcMacro1_4Macro2Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_2_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmcMacro1_4Macro2Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_2_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::aStereoMainOscillatorCzPmPmPmdMacro1_4Macro2Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_2_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmdMacro1_4Macro2Pmd));
    
    const auto macro_2_B_top0 = macrotabInsideTop0 + 2 * sectionHeight;
    const auto macro_2_B_top1 = macro_2_B_top0 + labelY;
    tabviewMacro->addWidget(macro_2,
      addGroupLabel(macrotabInsideLeft0, macro_2_B_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "B"));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_2_B_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::bStereoMainOscillatorCzPmCzIndexMacro1_4Macro2Index));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_2_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmCzIndexMacro1_4Macro2Index));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_2_B_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::bStereoMainOscillatorCzPmCzOctaveMacro1_4Macro2Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_2_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmCzOctaveMacro1_4Macro2Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_2_B_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::bStereoMainOscillatorCzPmCzPhaseMacro1_4Macro2Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_2_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmCzPhaseMacro1_4Macro2Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_2_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::bStereoMainOscillatorCzPmPmPmaMacro1_4Macro2Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_2_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmaMacro1_4Macro2Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_2_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::bStereoMainOscillatorCzPmPmPmbMacro1_4Macro2Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_2_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmbMacro1_4Macro2Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_2_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::bStereoMainOscillatorCzPmPmPmcMacro1_4Macro2Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_2_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmcMacro1_4Macro2Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_2_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::bStereoMainOscillatorCzPmPmPmdMacro1_4Macro2Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_2_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmdMacro1_4Macro2Pmd));
    
    const auto macro_2_C_top0 = macrotabInsideTop0 + 3 * sectionHeight;
    const auto macro_2_C_top1 = macro_2_C_top0 + labelY;
    tabviewMacro->addWidget(macro_2,
      addGroupLabel(macrotabInsideLeft0, macro_2_C_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "C"));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_2_C_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::cStereoMainOscillatorCzPmCzIndexMacro1_4Macro2Index));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_2_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmCzIndexMacro1_4Macro2Index));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_2_C_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::cStereoMainOscillatorCzPmCzOctaveMacro1_4Macro2Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_2_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmCzOctaveMacro1_4Macro2Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_2_C_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::cStereoMainOscillatorCzPmCzPhaseMacro1_4Macro2Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_2_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmCzPhaseMacro1_4Macro2Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_2_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::cStereoMainOscillatorCzPmPmPmaMacro1_4Macro2Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_2_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmaMacro1_4Macro2Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_2_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::cStereoMainOscillatorCzPmPmPmbMacro1_4Macro2Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_2_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmbMacro1_4Macro2Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_2_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::cStereoMainOscillatorCzPmPmPmcMacro1_4Macro2Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_2_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmcMacro1_4Macro2Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_2_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::cStereoMainOscillatorCzPmPmPmdMacro1_4Macro2Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_2_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmdMacro1_4Macro2Pmd));
    
    const auto macro_2_D_top0 = macrotabInsideTop0 + 4 * sectionHeight;
    const auto macro_2_D_top1 = macro_2_D_top0 + labelY;
    tabviewMacro->addWidget(macro_2,
      addGroupLabel(macrotabInsideLeft0, macro_2_D_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "D"));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_2_D_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::dStereoMainOscillatorCzPmCzIndexMacro1_4Macro2Index));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_2_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmCzIndexMacro1_4Macro2Index));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_2_D_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::dStereoMainOscillatorCzPmCzOctaveMacro1_4Macro2Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_2_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmCzOctaveMacro1_4Macro2Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_2_D_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::dStereoMainOscillatorCzPmCzPhaseMacro1_4Macro2Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_2_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmCzPhaseMacro1_4Macro2Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_2_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::dStereoMainOscillatorCzPmPmPmaMacro1_4Macro2Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_2_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmaMacro1_4Macro2Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_2_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::dStereoMainOscillatorCzPmPmPmbMacro1_4Macro2Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_2_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmbMacro1_4Macro2Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_2_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::dStereoMainOscillatorCzPmPmPmcMacro1_4Macro2Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_2_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmcMacro1_4Macro2Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_2_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::dStereoMainOscillatorCzPmPmPmdMacro1_4Macro2Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_2_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmdMacro1_4Macro2Pmd));
    
    
    const auto macro_3_filter_top0 = macrotabInsideTop0 + 0 * sectionHeight;
    const auto macro_3_filter_top1 = macro_3_filter_top0 + labelY;
    tabviewMacro->addWidget(macro_3,
      addGroupLabel(macrotabInsideLeft0, macro_3_filter_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "Filter"));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_3_filter_top1,
        knobWidth, margin, uiTextSize,
        "SVF", ID::filterStereoMainMixTweakMixPrefilterSvfMacro1_4Macro3Level));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_3_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakMixPrefilterSvfMacro1_4Macro3Level));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_3_filter_top1,
        knobWidth, margin, uiTextSize,
        "ms20", ID::filterStereoMainMixTweakMixPrefilterMs20Macro1_4Macro3Level));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_3_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakMixPrefilterMs20Macro1_4Macro3Level));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_3_filter_top1,
        knobWidth, margin, uiTextSize,
        "oberheim", ID::filterStereoMainMixTweakMixPrefilterOberheimMacro1_4Macro3Level));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_3_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakMixPrefilterOberheimMacro1_4Macro3Level));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_3_filter_top1,
        knobWidth, margin, uiTextSize,
        "normFreq", ID::filterStereoMainMixTweakTweakPrefilterFreqMacro1_4Macro3Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_3_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakTweakPrefilterFreqMacro1_4Macro3Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_3_filter_top1,
        knobWidth, margin, uiTextSize,
        "Q", ID::filterStereoMainMixTweakTweakPrefilterQMacro1_4Macro3Q));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_3_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakTweakPrefilterQMacro1_4Macro3Q));
    
    const auto macro_3_A_top0 = macrotabInsideTop0 + 1 * sectionHeight;
    const auto macro_3_A_top1 = macro_3_A_top0 + labelY;
    tabviewMacro->addWidget(macro_3,
      addGroupLabel(macrotabInsideLeft0, macro_3_A_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "A"));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_3_A_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::aStereoMainOscillatorCzPmCzIndexMacro1_4Macro3Index));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_3_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmCzIndexMacro1_4Macro3Index));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_3_A_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::aStereoMainOscillatorCzPmCzOctaveMacro1_4Macro3Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_3_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmCzOctaveMacro1_4Macro3Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_3_A_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::aStereoMainOscillatorCzPmCzPhaseMacro1_4Macro3Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_3_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmCzPhaseMacro1_4Macro3Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_3_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::aStereoMainOscillatorCzPmPmPmaMacro1_4Macro3Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_3_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmaMacro1_4Macro3Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_3_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::aStereoMainOscillatorCzPmPmPmbMacro1_4Macro3Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_3_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmbMacro1_4Macro3Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_3_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::aStereoMainOscillatorCzPmPmPmcMacro1_4Macro3Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_3_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmcMacro1_4Macro3Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_3_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::aStereoMainOscillatorCzPmPmPmdMacro1_4Macro3Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_3_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmdMacro1_4Macro3Pmd));
    
    const auto macro_3_B_top0 = macrotabInsideTop0 + 2 * sectionHeight;
    const auto macro_3_B_top1 = macro_3_B_top0 + labelY;
    tabviewMacro->addWidget(macro_3,
      addGroupLabel(macrotabInsideLeft0, macro_3_B_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "B"));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_3_B_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::bStereoMainOscillatorCzPmCzIndexMacro1_4Macro3Index));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_3_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmCzIndexMacro1_4Macro3Index));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_3_B_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::bStereoMainOscillatorCzPmCzOctaveMacro1_4Macro3Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_3_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmCzOctaveMacro1_4Macro3Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_3_B_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::bStereoMainOscillatorCzPmCzPhaseMacro1_4Macro3Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_3_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmCzPhaseMacro1_4Macro3Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_3_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::bStereoMainOscillatorCzPmPmPmaMacro1_4Macro3Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_3_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmaMacro1_4Macro3Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_3_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::bStereoMainOscillatorCzPmPmPmbMacro1_4Macro3Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_3_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmbMacro1_4Macro3Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_3_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::bStereoMainOscillatorCzPmPmPmcMacro1_4Macro3Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_3_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmcMacro1_4Macro3Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_3_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::bStereoMainOscillatorCzPmPmPmdMacro1_4Macro3Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_3_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmdMacro1_4Macro3Pmd));
    
    const auto macro_3_C_top0 = macrotabInsideTop0 + 3 * sectionHeight;
    const auto macro_3_C_top1 = macro_3_C_top0 + labelY;
    tabviewMacro->addWidget(macro_3,
      addGroupLabel(macrotabInsideLeft0, macro_3_C_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "C"));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_3_C_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::cStereoMainOscillatorCzPmCzIndexMacro1_4Macro3Index));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_3_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmCzIndexMacro1_4Macro3Index));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_3_C_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::cStereoMainOscillatorCzPmCzOctaveMacro1_4Macro3Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_3_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmCzOctaveMacro1_4Macro3Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_3_C_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::cStereoMainOscillatorCzPmCzPhaseMacro1_4Macro3Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_3_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmCzPhaseMacro1_4Macro3Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_3_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::cStereoMainOscillatorCzPmPmPmaMacro1_4Macro3Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_3_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmaMacro1_4Macro3Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_3_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::cStereoMainOscillatorCzPmPmPmbMacro1_4Macro3Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_3_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmbMacro1_4Macro3Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_3_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::cStereoMainOscillatorCzPmPmPmcMacro1_4Macro3Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_3_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmcMacro1_4Macro3Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_3_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::cStereoMainOscillatorCzPmPmPmdMacro1_4Macro3Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_3_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmdMacro1_4Macro3Pmd));
    
    const auto macro_3_D_top0 = macrotabInsideTop0 + 4 * sectionHeight;
    const auto macro_3_D_top1 = macro_3_D_top0 + labelY;
    tabviewMacro->addWidget(macro_3,
      addGroupLabel(macrotabInsideLeft0, macro_3_D_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "D"));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_3_D_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::dStereoMainOscillatorCzPmCzIndexMacro1_4Macro3Index));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_3_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmCzIndexMacro1_4Macro3Index));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_3_D_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::dStereoMainOscillatorCzPmCzOctaveMacro1_4Macro3Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_3_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmCzOctaveMacro1_4Macro3Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_3_D_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::dStereoMainOscillatorCzPmCzPhaseMacro1_4Macro3Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_3_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmCzPhaseMacro1_4Macro3Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_3_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::dStereoMainOscillatorCzPmPmPmaMacro1_4Macro3Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_3_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmaMacro1_4Macro3Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_3_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::dStereoMainOscillatorCzPmPmPmbMacro1_4Macro3Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_3_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmbMacro1_4Macro3Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_3_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::dStereoMainOscillatorCzPmPmPmcMacro1_4Macro3Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_3_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmcMacro1_4Macro3Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_3_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::dStereoMainOscillatorCzPmPmPmdMacro1_4Macro3Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_3_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmdMacro1_4Macro3Pmd));
    
    
    const auto macro_4_filter_top0 = macrotabInsideTop0 + 0 * sectionHeight;
    const auto macro_4_filter_top1 = macro_4_filter_top0 + labelY;
    tabviewMacro->addWidget(macro_4,
      addGroupLabel(macrotabInsideLeft0, macro_4_filter_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "Filter"));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_4_filter_top1,
        knobWidth, margin, uiTextSize,
        "SVF", ID::filterStereoMainMixTweakMixPrefilterSvfMacro1_4Macro4Level));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_4_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakMixPrefilterSvfMacro1_4Macro4Level));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_4_filter_top1,
        knobWidth, margin, uiTextSize,
        "ms20", ID::filterStereoMainMixTweakMixPrefilterMs20Macro1_4Macro4Level));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_4_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakMixPrefilterMs20Macro1_4Macro4Level));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_4_filter_top1,
        knobWidth, margin, uiTextSize,
        "oberheim", ID::filterStereoMainMixTweakMixPrefilterOberheimMacro1_4Macro4Level));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_4_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakMixPrefilterOberheimMacro1_4Macro4Level));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_4_filter_top1,
        knobWidth, margin, uiTextSize,
        "normFreq", ID::filterStereoMainMixTweakTweakPrefilterFreqMacro1_4Macro4Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_4_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakTweakPrefilterFreqMacro1_4Macro4Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_4_filter_top1,
        knobWidth, margin, uiTextSize,
        "Q", ID::filterStereoMainMixTweakTweakPrefilterQMacro1_4Macro4Q));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_4_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakTweakPrefilterQMacro1_4Macro4Q));
    
    const auto macro_4_A_top0 = macrotabInsideTop0 + 1 * sectionHeight;
    const auto macro_4_A_top1 = macro_4_A_top0 + labelY;
    tabviewMacro->addWidget(macro_4,
      addGroupLabel(macrotabInsideLeft0, macro_4_A_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "A"));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_4_A_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::aStereoMainOscillatorCzPmCzIndexMacro1_4Macro4Index));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_4_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmCzIndexMacro1_4Macro4Index));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_4_A_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::aStereoMainOscillatorCzPmCzOctaveMacro1_4Macro4Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_4_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmCzOctaveMacro1_4Macro4Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_4_A_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::aStereoMainOscillatorCzPmCzPhaseMacro1_4Macro4Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_4_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmCzPhaseMacro1_4Macro4Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_4_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::aStereoMainOscillatorCzPmPmPmaMacro1_4Macro4Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_4_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmaMacro1_4Macro4Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_4_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::aStereoMainOscillatorCzPmPmPmbMacro1_4Macro4Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_4_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmbMacro1_4Macro4Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_4_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::aStereoMainOscillatorCzPmPmPmcMacro1_4Macro4Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_4_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmcMacro1_4Macro4Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_4_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::aStereoMainOscillatorCzPmPmPmdMacro1_4Macro4Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_4_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmdMacro1_4Macro4Pmd));
    
    const auto macro_4_B_top0 = macrotabInsideTop0 + 2 * sectionHeight;
    const auto macro_4_B_top1 = macro_4_B_top0 + labelY;
    tabviewMacro->addWidget(macro_4,
      addGroupLabel(macrotabInsideLeft0, macro_4_B_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "B"));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_4_B_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::bStereoMainOscillatorCzPmCzIndexMacro1_4Macro4Index));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_4_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmCzIndexMacro1_4Macro4Index));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_4_B_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::bStereoMainOscillatorCzPmCzOctaveMacro1_4Macro4Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_4_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmCzOctaveMacro1_4Macro4Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_4_B_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::bStereoMainOscillatorCzPmCzPhaseMacro1_4Macro4Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_4_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmCzPhaseMacro1_4Macro4Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_4_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::bStereoMainOscillatorCzPmPmPmaMacro1_4Macro4Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_4_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmaMacro1_4Macro4Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_4_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::bStereoMainOscillatorCzPmPmPmbMacro1_4Macro4Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_4_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmbMacro1_4Macro4Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_4_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::bStereoMainOscillatorCzPmPmPmcMacro1_4Macro4Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_4_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmcMacro1_4Macro4Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_4_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::bStereoMainOscillatorCzPmPmPmdMacro1_4Macro4Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_4_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmdMacro1_4Macro4Pmd));
    
    const auto macro_4_C_top0 = macrotabInsideTop0 + 3 * sectionHeight;
    const auto macro_4_C_top1 = macro_4_C_top0 + labelY;
    tabviewMacro->addWidget(macro_4,
      addGroupLabel(macrotabInsideLeft0, macro_4_C_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "C"));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_4_C_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::cStereoMainOscillatorCzPmCzIndexMacro1_4Macro4Index));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_4_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmCzIndexMacro1_4Macro4Index));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_4_C_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::cStereoMainOscillatorCzPmCzOctaveMacro1_4Macro4Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_4_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmCzOctaveMacro1_4Macro4Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_4_C_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::cStereoMainOscillatorCzPmCzPhaseMacro1_4Macro4Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_4_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmCzPhaseMacro1_4Macro4Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_4_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::cStereoMainOscillatorCzPmPmPmaMacro1_4Macro4Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_4_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmaMacro1_4Macro4Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_4_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::cStereoMainOscillatorCzPmPmPmbMacro1_4Macro4Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_4_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmbMacro1_4Macro4Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_4_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::cStereoMainOscillatorCzPmPmPmcMacro1_4Macro4Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_4_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmcMacro1_4Macro4Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_4_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::cStereoMainOscillatorCzPmPmPmdMacro1_4Macro4Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_4_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmdMacro1_4Macro4Pmd));
    
    const auto macro_4_D_top0 = macrotabInsideTop0 + 4 * sectionHeight;
    const auto macro_4_D_top1 = macro_4_D_top0 + labelY;
    tabviewMacro->addWidget(macro_4,
      addGroupLabel(macrotabInsideLeft0, macro_4_D_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "D"));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_4_D_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::dStereoMainOscillatorCzPmCzIndexMacro1_4Macro4Index));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_4_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmCzIndexMacro1_4Macro4Index));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_4_D_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::dStereoMainOscillatorCzPmCzOctaveMacro1_4Macro4Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_4_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmCzOctaveMacro1_4Macro4Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_4_D_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::dStereoMainOscillatorCzPmCzPhaseMacro1_4Macro4Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_4_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmCzPhaseMacro1_4Macro4Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_4_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::dStereoMainOscillatorCzPmPmPmaMacro1_4Macro4Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_4_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmaMacro1_4Macro4Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_4_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::dStereoMainOscillatorCzPmPmPmbMacro1_4Macro4Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_4_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmbMacro1_4Macro4Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_4_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::dStereoMainOscillatorCzPmPmPmcMacro1_4Macro4Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_4_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmcMacro1_4Macro4Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_4_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::dStereoMainOscillatorCzPmPmPmdMacro1_4Macro4Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_4_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmdMacro1_4Macro4Pmd));
    
    
    const auto macro_5_filter_top0 = macrotabInsideTop0 + 0 * sectionHeight;
    const auto macro_5_filter_top1 = macro_5_filter_top0 + labelY;
    tabviewMacro->addWidget(macro_5,
      addGroupLabel(macrotabInsideLeft0, macro_5_filter_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "Filter"));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_5_filter_top1,
        knobWidth, margin, uiTextSize,
        "SVF", ID::filterStereoMainMixTweakMixPrefilterSvfMacro5_8Macro5Level));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_5_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakMixPrefilterSvfMacro5_8Macro5Level));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_5_filter_top1,
        knobWidth, margin, uiTextSize,
        "ms20", ID::filterStereoMainMixTweakMixPrefilterMs20Macro5_8Macro5Level));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_5_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakMixPrefilterMs20Macro5_8Macro5Level));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_5_filter_top1,
        knobWidth, margin, uiTextSize,
        "oberheim", ID::filterStereoMainMixTweakMixPrefilterOberheimMacro5_8Macro5Level));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_5_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakMixPrefilterOberheimMacro5_8Macro5Level));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_5_filter_top1,
        knobWidth, margin, uiTextSize,
        "normFreq", ID::filterStereoMainMixTweakTweakPrefilterFreqMacro5_8Macro5Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_5_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakTweakPrefilterFreqMacro5_8Macro5Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_5_filter_top1,
        knobWidth, margin, uiTextSize,
        "Q", ID::filterStereoMainMixTweakTweakPrefilterQMacro5_8Macro5Q));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_5_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakTweakPrefilterQMacro5_8Macro5Q));
    
    const auto macro_5_A_top0 = macrotabInsideTop0 + 1 * sectionHeight;
    const auto macro_5_A_top1 = macro_5_A_top0 + labelY;
    tabviewMacro->addWidget(macro_5,
      addGroupLabel(macrotabInsideLeft0, macro_5_A_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "A"));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_5_A_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::aStereoMainOscillatorCzPmCzIndexMacro5_8Macro5Index));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_5_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmCzIndexMacro5_8Macro5Index));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_5_A_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::aStereoMainOscillatorCzPmCzOctaveMacro5_8Macro5Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_5_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmCzOctaveMacro5_8Macro5Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_5_A_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::aStereoMainOscillatorCzPmCzPhaseMacro5_8Macro5Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_5_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmCzPhaseMacro5_8Macro5Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_5_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::aStereoMainOscillatorCzPmPmPmaMacro5_8Macro5Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_5_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmaMacro5_8Macro5Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_5_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::aStereoMainOscillatorCzPmPmPmbMacro5_8Macro5Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_5_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmbMacro5_8Macro5Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_5_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::aStereoMainOscillatorCzPmPmPmcMacro5_8Macro5Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_5_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmcMacro5_8Macro5Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_5_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::aStereoMainOscillatorCzPmPmPmdMacro5_8Macro5Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_5_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmdMacro5_8Macro5Pmd));
    
    const auto macro_5_B_top0 = macrotabInsideTop0 + 2 * sectionHeight;
    const auto macro_5_B_top1 = macro_5_B_top0 + labelY;
    tabviewMacro->addWidget(macro_5,
      addGroupLabel(macrotabInsideLeft0, macro_5_B_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "B"));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_5_B_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::bStereoMainOscillatorCzPmCzIndexMacro5_8Macro5Index));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_5_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmCzIndexMacro5_8Macro5Index));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_5_B_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::bStereoMainOscillatorCzPmCzOctaveMacro5_8Macro5Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_5_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmCzOctaveMacro5_8Macro5Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_5_B_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::bStereoMainOscillatorCzPmCzPhaseMacro5_8Macro5Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_5_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmCzPhaseMacro5_8Macro5Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_5_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::bStereoMainOscillatorCzPmPmPmaMacro5_8Macro5Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_5_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmaMacro5_8Macro5Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_5_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::bStereoMainOscillatorCzPmPmPmbMacro5_8Macro5Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_5_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmbMacro5_8Macro5Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_5_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::bStereoMainOscillatorCzPmPmPmcMacro5_8Macro5Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_5_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmcMacro5_8Macro5Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_5_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::bStereoMainOscillatorCzPmPmPmdMacro5_8Macro5Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_5_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmdMacro5_8Macro5Pmd));
    
    const auto macro_5_C_top0 = macrotabInsideTop0 + 3 * sectionHeight;
    const auto macro_5_C_top1 = macro_5_C_top0 + labelY;
    tabviewMacro->addWidget(macro_5,
      addGroupLabel(macrotabInsideLeft0, macro_5_C_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "C"));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_5_C_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::cStereoMainOscillatorCzPmCzIndexMacro5_8Macro5Index));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_5_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmCzIndexMacro5_8Macro5Index));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_5_C_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::cStereoMainOscillatorCzPmCzOctaveMacro5_8Macro5Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_5_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmCzOctaveMacro5_8Macro5Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_5_C_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::cStereoMainOscillatorCzPmCzPhaseMacro5_8Macro5Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_5_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmCzPhaseMacro5_8Macro5Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_5_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::cStereoMainOscillatorCzPmPmPmaMacro5_8Macro5Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_5_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmaMacro5_8Macro5Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_5_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::cStereoMainOscillatorCzPmPmPmbMacro5_8Macro5Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_5_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmbMacro5_8Macro5Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_5_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::cStereoMainOscillatorCzPmPmPmcMacro5_8Macro5Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_5_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmcMacro5_8Macro5Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_5_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::cStereoMainOscillatorCzPmPmPmdMacro5_8Macro5Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_5_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmdMacro5_8Macro5Pmd));
    
    const auto macro_5_D_top0 = macrotabInsideTop0 + 4 * sectionHeight;
    const auto macro_5_D_top1 = macro_5_D_top0 + labelY;
    tabviewMacro->addWidget(macro_5,
      addGroupLabel(macrotabInsideLeft0, macro_5_D_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "D"));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_5_D_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::dStereoMainOscillatorCzPmCzIndexMacro5_8Macro5Index));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_5_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmCzIndexMacro5_8Macro5Index));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_5_D_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::dStereoMainOscillatorCzPmCzOctaveMacro5_8Macro5Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_5_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmCzOctaveMacro5_8Macro5Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_5_D_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::dStereoMainOscillatorCzPmCzPhaseMacro5_8Macro5Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_5_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmCzPhaseMacro5_8Macro5Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_5_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::dStereoMainOscillatorCzPmPmPmaMacro5_8Macro5Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_5_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmaMacro5_8Macro5Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_5_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::dStereoMainOscillatorCzPmPmPmbMacro5_8Macro5Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_5_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmbMacro5_8Macro5Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_5_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::dStereoMainOscillatorCzPmPmPmcMacro5_8Macro5Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_5_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmcMacro5_8Macro5Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_5_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::dStereoMainOscillatorCzPmPmPmdMacro5_8Macro5Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_5_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmdMacro5_8Macro5Pmd));
    
    
    const auto macro_6_filter_top0 = macrotabInsideTop0 + 0 * sectionHeight;
    const auto macro_6_filter_top1 = macro_6_filter_top0 + labelY;
    tabviewMacro->addWidget(macro_6,
      addGroupLabel(macrotabInsideLeft0, macro_6_filter_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "Filter"));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_6_filter_top1,
        knobWidth, margin, uiTextSize,
        "SVF", ID::filterStereoMainMixTweakMixPrefilterSvfMacro5_8Macro6Level));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_6_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakMixPrefilterSvfMacro5_8Macro6Level));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_6_filter_top1,
        knobWidth, margin, uiTextSize,
        "ms20", ID::filterStereoMainMixTweakMixPrefilterMs20Macro5_8Macro6Level));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_6_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakMixPrefilterMs20Macro5_8Macro6Level));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_6_filter_top1,
        knobWidth, margin, uiTextSize,
        "oberheim", ID::filterStereoMainMixTweakMixPrefilterOberheimMacro5_8Macro6Level));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_6_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakMixPrefilterOberheimMacro5_8Macro6Level));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_6_filter_top1,
        knobWidth, margin, uiTextSize,
        "normFreq", ID::filterStereoMainMixTweakTweakPrefilterFreqMacro5_8Macro6Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_6_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakTweakPrefilterFreqMacro5_8Macro6Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_6_filter_top1,
        knobWidth, margin, uiTextSize,
        "Q", ID::filterStereoMainMixTweakTweakPrefilterQMacro5_8Macro6Q));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_6_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakTweakPrefilterQMacro5_8Macro6Q));
    
    const auto macro_6_A_top0 = macrotabInsideTop0 + 1 * sectionHeight;
    const auto macro_6_A_top1 = macro_6_A_top0 + labelY;
    tabviewMacro->addWidget(macro_6,
      addGroupLabel(macrotabInsideLeft0, macro_6_A_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "A"));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_6_A_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::aStereoMainOscillatorCzPmCzIndexMacro5_8Macro6Index));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_6_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmCzIndexMacro5_8Macro6Index));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_6_A_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::aStereoMainOscillatorCzPmCzOctaveMacro5_8Macro6Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_6_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmCzOctaveMacro5_8Macro6Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_6_A_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::aStereoMainOscillatorCzPmCzPhaseMacro5_8Macro6Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_6_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmCzPhaseMacro5_8Macro6Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_6_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::aStereoMainOscillatorCzPmPmPmaMacro5_8Macro6Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_6_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmaMacro5_8Macro6Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_6_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::aStereoMainOscillatorCzPmPmPmbMacro5_8Macro6Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_6_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmbMacro5_8Macro6Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_6_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::aStereoMainOscillatorCzPmPmPmcMacro5_8Macro6Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_6_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmcMacro5_8Macro6Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_6_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::aStereoMainOscillatorCzPmPmPmdMacro5_8Macro6Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_6_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmdMacro5_8Macro6Pmd));
    
    const auto macro_6_B_top0 = macrotabInsideTop0 + 2 * sectionHeight;
    const auto macro_6_B_top1 = macro_6_B_top0 + labelY;
    tabviewMacro->addWidget(macro_6,
      addGroupLabel(macrotabInsideLeft0, macro_6_B_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "B"));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_6_B_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::bStereoMainOscillatorCzPmCzIndexMacro5_8Macro6Index));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_6_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmCzIndexMacro5_8Macro6Index));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_6_B_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::bStereoMainOscillatorCzPmCzOctaveMacro5_8Macro6Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_6_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmCzOctaveMacro5_8Macro6Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_6_B_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::bStereoMainOscillatorCzPmCzPhaseMacro5_8Macro6Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_6_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmCzPhaseMacro5_8Macro6Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_6_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::bStereoMainOscillatorCzPmPmPmaMacro5_8Macro6Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_6_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmaMacro5_8Macro6Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_6_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::bStereoMainOscillatorCzPmPmPmbMacro5_8Macro6Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_6_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmbMacro5_8Macro6Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_6_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::bStereoMainOscillatorCzPmPmPmcMacro5_8Macro6Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_6_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmcMacro5_8Macro6Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_6_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::bStereoMainOscillatorCzPmPmPmdMacro5_8Macro6Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_6_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmdMacro5_8Macro6Pmd));
    
    const auto macro_6_C_top0 = macrotabInsideTop0 + 3 * sectionHeight;
    const auto macro_6_C_top1 = macro_6_C_top0 + labelY;
    tabviewMacro->addWidget(macro_6,
      addGroupLabel(macrotabInsideLeft0, macro_6_C_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "C"));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_6_C_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::cStereoMainOscillatorCzPmCzIndexMacro5_8Macro6Index));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_6_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmCzIndexMacro5_8Macro6Index));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_6_C_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::cStereoMainOscillatorCzPmCzOctaveMacro5_8Macro6Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_6_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmCzOctaveMacro5_8Macro6Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_6_C_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::cStereoMainOscillatorCzPmCzPhaseMacro5_8Macro6Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_6_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmCzPhaseMacro5_8Macro6Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_6_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::cStereoMainOscillatorCzPmPmPmaMacro5_8Macro6Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_6_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmaMacro5_8Macro6Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_6_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::cStereoMainOscillatorCzPmPmPmbMacro5_8Macro6Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_6_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmbMacro5_8Macro6Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_6_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::cStereoMainOscillatorCzPmPmPmcMacro5_8Macro6Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_6_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmcMacro5_8Macro6Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_6_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::cStereoMainOscillatorCzPmPmPmdMacro5_8Macro6Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_6_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmdMacro5_8Macro6Pmd));
    
    const auto macro_6_D_top0 = macrotabInsideTop0 + 4 * sectionHeight;
    const auto macro_6_D_top1 = macro_6_D_top0 + labelY;
    tabviewMacro->addWidget(macro_6,
      addGroupLabel(macrotabInsideLeft0, macro_6_D_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "D"));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_6_D_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::dStereoMainOscillatorCzPmCzIndexMacro5_8Macro6Index));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_6_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmCzIndexMacro5_8Macro6Index));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_6_D_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::dStereoMainOscillatorCzPmCzOctaveMacro5_8Macro6Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_6_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmCzOctaveMacro5_8Macro6Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_6_D_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::dStereoMainOscillatorCzPmCzPhaseMacro5_8Macro6Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_6_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmCzPhaseMacro5_8Macro6Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_6_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::dStereoMainOscillatorCzPmPmPmaMacro5_8Macro6Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_6_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmaMacro5_8Macro6Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_6_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::dStereoMainOscillatorCzPmPmPmbMacro5_8Macro6Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_6_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmbMacro5_8Macro6Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_6_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::dStereoMainOscillatorCzPmPmPmcMacro5_8Macro6Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_6_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmcMacro5_8Macro6Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_6_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::dStereoMainOscillatorCzPmPmPmdMacro5_8Macro6Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_6_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmdMacro5_8Macro6Pmd));
    
    
    const auto macro_7_filter_top0 = macrotabInsideTop0 + 0 * sectionHeight;
    const auto macro_7_filter_top1 = macro_7_filter_top0 + labelY;
    tabviewMacro->addWidget(macro_7,
      addGroupLabel(macrotabInsideLeft0, macro_7_filter_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "Filter"));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_7_filter_top1,
        knobWidth, margin, uiTextSize,
        "SVF", ID::filterStereoMainMixTweakMixPrefilterSvfMacro5_8Macro7Level));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_7_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakMixPrefilterSvfMacro5_8Macro7Level));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_7_filter_top1,
        knobWidth, margin, uiTextSize,
        "ms20", ID::filterStereoMainMixTweakMixPrefilterMs20Macro5_8Macro7Level));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_7_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakMixPrefilterMs20Macro5_8Macro7Level));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_7_filter_top1,
        knobWidth, margin, uiTextSize,
        "oberheim", ID::filterStereoMainMixTweakMixPrefilterOberheimMacro5_8Macro7Level));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_7_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakMixPrefilterOberheimMacro5_8Macro7Level));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_7_filter_top1,
        knobWidth, margin, uiTextSize,
        "normFreq", ID::filterStereoMainMixTweakTweakPrefilterFreqMacro5_8Macro7Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_7_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakTweakPrefilterFreqMacro5_8Macro7Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_7_filter_top1,
        knobWidth, margin, uiTextSize,
        "Q", ID::filterStereoMainMixTweakTweakPrefilterQMacro5_8Macro7Q));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_7_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakTweakPrefilterQMacro5_8Macro7Q));
    
    const auto macro_7_A_top0 = macrotabInsideTop0 + 1 * sectionHeight;
    const auto macro_7_A_top1 = macro_7_A_top0 + labelY;
    tabviewMacro->addWidget(macro_7,
      addGroupLabel(macrotabInsideLeft0, macro_7_A_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "A"));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_7_A_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::aStereoMainOscillatorCzPmCzIndexMacro5_8Macro7Index));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_7_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmCzIndexMacro5_8Macro7Index));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_7_A_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::aStereoMainOscillatorCzPmCzOctaveMacro5_8Macro7Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_7_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmCzOctaveMacro5_8Macro7Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_7_A_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::aStereoMainOscillatorCzPmCzPhaseMacro5_8Macro7Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_7_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmCzPhaseMacro5_8Macro7Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_7_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::aStereoMainOscillatorCzPmPmPmaMacro5_8Macro7Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_7_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmaMacro5_8Macro7Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_7_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::aStereoMainOscillatorCzPmPmPmbMacro5_8Macro7Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_7_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmbMacro5_8Macro7Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_7_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::aStereoMainOscillatorCzPmPmPmcMacro5_8Macro7Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_7_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmcMacro5_8Macro7Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_7_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::aStereoMainOscillatorCzPmPmPmdMacro5_8Macro7Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_7_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmdMacro5_8Macro7Pmd));
    
    const auto macro_7_B_top0 = macrotabInsideTop0 + 2 * sectionHeight;
    const auto macro_7_B_top1 = macro_7_B_top0 + labelY;
    tabviewMacro->addWidget(macro_7,
      addGroupLabel(macrotabInsideLeft0, macro_7_B_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "B"));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_7_B_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::bStereoMainOscillatorCzPmCzIndexMacro5_8Macro7Index));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_7_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmCzIndexMacro5_8Macro7Index));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_7_B_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::bStereoMainOscillatorCzPmCzOctaveMacro5_8Macro7Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_7_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmCzOctaveMacro5_8Macro7Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_7_B_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::bStereoMainOscillatorCzPmCzPhaseMacro5_8Macro7Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_7_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmCzPhaseMacro5_8Macro7Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_7_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::bStereoMainOscillatorCzPmPmPmaMacro5_8Macro7Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_7_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmaMacro5_8Macro7Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_7_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::bStereoMainOscillatorCzPmPmPmbMacro5_8Macro7Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_7_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmbMacro5_8Macro7Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_7_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::bStereoMainOscillatorCzPmPmPmcMacro5_8Macro7Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_7_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmcMacro5_8Macro7Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_7_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::bStereoMainOscillatorCzPmPmPmdMacro5_8Macro7Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_7_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmdMacro5_8Macro7Pmd));
    
    const auto macro_7_C_top0 = macrotabInsideTop0 + 3 * sectionHeight;
    const auto macro_7_C_top1 = macro_7_C_top0 + labelY;
    tabviewMacro->addWidget(macro_7,
      addGroupLabel(macrotabInsideLeft0, macro_7_C_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "C"));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_7_C_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::cStereoMainOscillatorCzPmCzIndexMacro5_8Macro7Index));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_7_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmCzIndexMacro5_8Macro7Index));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_7_C_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::cStereoMainOscillatorCzPmCzOctaveMacro5_8Macro7Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_7_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmCzOctaveMacro5_8Macro7Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_7_C_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::cStereoMainOscillatorCzPmCzPhaseMacro5_8Macro7Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_7_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmCzPhaseMacro5_8Macro7Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_7_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::cStereoMainOscillatorCzPmPmPmaMacro5_8Macro7Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_7_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmaMacro5_8Macro7Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_7_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::cStereoMainOscillatorCzPmPmPmbMacro5_8Macro7Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_7_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmbMacro5_8Macro7Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_7_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::cStereoMainOscillatorCzPmPmPmcMacro5_8Macro7Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_7_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmcMacro5_8Macro7Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_7_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::cStereoMainOscillatorCzPmPmPmdMacro5_8Macro7Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_7_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmdMacro5_8Macro7Pmd));
    
    const auto macro_7_D_top0 = macrotabInsideTop0 + 4 * sectionHeight;
    const auto macro_7_D_top1 = macro_7_D_top0 + labelY;
    tabviewMacro->addWidget(macro_7,
      addGroupLabel(macrotabInsideLeft0, macro_7_D_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "D"));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_7_D_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::dStereoMainOscillatorCzPmCzIndexMacro5_8Macro7Index));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_7_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmCzIndexMacro5_8Macro7Index));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_7_D_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::dStereoMainOscillatorCzPmCzOctaveMacro5_8Macro7Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_7_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmCzOctaveMacro5_8Macro7Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_7_D_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::dStereoMainOscillatorCzPmCzPhaseMacro5_8Macro7Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_7_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmCzPhaseMacro5_8Macro7Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_7_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::dStereoMainOscillatorCzPmPmPmaMacro5_8Macro7Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_7_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmaMacro5_8Macro7Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_7_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::dStereoMainOscillatorCzPmPmPmbMacro5_8Macro7Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_7_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmbMacro5_8Macro7Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_7_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::dStereoMainOscillatorCzPmPmPmcMacro5_8Macro7Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_7_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmcMacro5_8Macro7Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_7_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::dStereoMainOscillatorCzPmPmPmdMacro5_8Macro7Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_7_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmdMacro5_8Macro7Pmd));
    
    
    const auto macro_8_filter_top0 = macrotabInsideTop0 + 0 * sectionHeight;
    const auto macro_8_filter_top1 = macro_8_filter_top0 + labelY;
    tabviewMacro->addWidget(macro_8,
      addGroupLabel(macrotabInsideLeft0, macro_8_filter_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "Filter"));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_8_filter_top1,
        knobWidth, margin, uiTextSize,
        "SVF", ID::filterStereoMainMixTweakMixPrefilterSvfMacro5_8Macro8Level));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_8_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakMixPrefilterSvfMacro5_8Macro8Level));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_8_filter_top1,
        knobWidth, margin, uiTextSize,
        "ms20", ID::filterStereoMainMixTweakMixPrefilterMs20Macro5_8Macro8Level));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_8_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakMixPrefilterMs20Macro5_8Macro8Level));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_8_filter_top1,
        knobWidth, margin, uiTextSize,
        "oberheim", ID::filterStereoMainMixTweakMixPrefilterOberheimMacro5_8Macro8Level));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_8_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakMixPrefilterOberheimMacro5_8Macro8Level));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_8_filter_top1,
        knobWidth, margin, uiTextSize,
        "normFreq", ID::filterStereoMainMixTweakTweakPrefilterFreqMacro5_8Macro8Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_8_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakTweakPrefilterFreqMacro5_8Macro8Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_8_filter_top1,
        knobWidth, margin, uiTextSize,
        "Q", ID::filterStereoMainMixTweakTweakPrefilterQMacro5_8Macro8Q));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_8_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMixTweakTweakPrefilterQMacro5_8Macro8Q));
    
    const auto macro_8_A_top0 = macrotabInsideTop0 + 1 * sectionHeight;
    const auto macro_8_A_top1 = macro_8_A_top0 + labelY;
    tabviewMacro->addWidget(macro_8,
      addGroupLabel(macrotabInsideLeft0, macro_8_A_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "A"));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_8_A_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::aStereoMainOscillatorCzPmCzIndexMacro5_8Macro8Index));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_8_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmCzIndexMacro5_8Macro8Index));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_8_A_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::aStereoMainOscillatorCzPmCzOctaveMacro5_8Macro8Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_8_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmCzOctaveMacro5_8Macro8Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_8_A_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::aStereoMainOscillatorCzPmCzPhaseMacro5_8Macro8Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_8_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmCzPhaseMacro5_8Macro8Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_8_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::aStereoMainOscillatorCzPmPmPmaMacro5_8Macro8Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_8_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmaMacro5_8Macro8Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_8_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::aStereoMainOscillatorCzPmPmPmbMacro5_8Macro8Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_8_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmbMacro5_8Macro8Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_8_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::aStereoMainOscillatorCzPmPmPmcMacro5_8Macro8Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_8_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmcMacro5_8Macro8Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_8_A_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::aStereoMainOscillatorCzPmPmPmdMacro5_8Macro8Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_8_A_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetOscillatorCzPmPmPmdMacro5_8Macro8Pmd));
    
    const auto macro_8_B_top0 = macrotabInsideTop0 + 2 * sectionHeight;
    const auto macro_8_B_top1 = macro_8_B_top0 + labelY;
    tabviewMacro->addWidget(macro_8,
      addGroupLabel(macrotabInsideLeft0, macro_8_B_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "B"));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_8_B_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::bStereoMainOscillatorCzPmCzIndexMacro5_8Macro8Index));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_8_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmCzIndexMacro5_8Macro8Index));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_8_B_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::bStereoMainOscillatorCzPmCzOctaveMacro5_8Macro8Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_8_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmCzOctaveMacro5_8Macro8Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_8_B_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::bStereoMainOscillatorCzPmCzPhaseMacro5_8Macro8Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_8_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmCzPhaseMacro5_8Macro8Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_8_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::bStereoMainOscillatorCzPmPmPmaMacro5_8Macro8Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_8_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmaMacro5_8Macro8Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_8_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::bStereoMainOscillatorCzPmPmPmbMacro5_8Macro8Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_8_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmbMacro5_8Macro8Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_8_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::bStereoMainOscillatorCzPmPmPmcMacro5_8Macro8Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_8_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmcMacro5_8Macro8Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_8_B_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::bStereoMainOscillatorCzPmPmPmdMacro5_8Macro8Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_8_B_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetOscillatorCzPmPmPmdMacro5_8Macro8Pmd));
    
    const auto macro_8_C_top0 = macrotabInsideTop0 + 3 * sectionHeight;
    const auto macro_8_C_top1 = macro_8_C_top0 + labelY;
    tabviewMacro->addWidget(macro_8,
      addGroupLabel(macrotabInsideLeft0, macro_8_C_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "C"));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_8_C_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::cStereoMainOscillatorCzPmCzIndexMacro5_8Macro8Index));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_8_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmCzIndexMacro5_8Macro8Index));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_8_C_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::cStereoMainOscillatorCzPmCzOctaveMacro5_8Macro8Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_8_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmCzOctaveMacro5_8Macro8Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_8_C_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::cStereoMainOscillatorCzPmCzPhaseMacro5_8Macro8Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_8_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmCzPhaseMacro5_8Macro8Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_8_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::cStereoMainOscillatorCzPmPmPmaMacro5_8Macro8Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_8_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmaMacro5_8Macro8Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_8_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::cStereoMainOscillatorCzPmPmPmbMacro5_8Macro8Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_8_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmbMacro5_8Macro8Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_8_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::cStereoMainOscillatorCzPmPmPmcMacro5_8Macro8Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_8_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmcMacro5_8Macro8Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_8_C_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::cStereoMainOscillatorCzPmPmPmdMacro5_8Macro8Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_8_C_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetOscillatorCzPmPmPmdMacro5_8Macro8Pmd));
    
    const auto macro_8_D_top0 = macrotabInsideTop0 + 4 * sectionHeight;
    const auto macro_8_D_top1 = macro_8_D_top0 + labelY;
    tabviewMacro->addWidget(macro_8,
      addGroupLabel(macrotabInsideLeft0, macro_8_D_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "D"));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro_8_D_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::dStereoMainOscillatorCzPmCzIndexMacro5_8Macro8Index));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro_8_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmCzIndexMacro5_8Macro8Index));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro_8_D_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::dStereoMainOscillatorCzPmCzOctaveMacro5_8Macro8Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro_8_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmCzOctaveMacro5_8Macro8Octave));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro_8_D_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::dStereoMainOscillatorCzPmCzPhaseMacro5_8Macro8Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro_8_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmCzPhaseMacro5_8Macro8Phase));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro_8_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_A", ID::dStereoMainOscillatorCzPmPmPmaMacro5_8Macro8Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro_8_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmaMacro5_8Macro8Pma));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro_8_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_B", ID::dStereoMainOscillatorCzPmPmPmbMacro5_8Macro8Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro_8_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmbMacro5_8Macro8Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro_8_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_C", ID::dStereoMainOscillatorCzPmPmPmcMacro5_8Macro8Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro_8_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmcMacro5_8Macro8Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro_8_D_top1,
        knobWidth, margin, uiTextSize,
        "PM_D", ID::dStereoMainOscillatorCzPmPmPmdMacro5_8Macro8Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro_8_D_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetOscillatorCzPmPmPmdMacro5_8Macro8Pmd));
    
    
    const auto abcd_crossfade_top0 = macrotabInsideTop0 + 5 * sectionHeight + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ab-cd", ID::globalStereoMainVectorAb_cdMacro1_4Macro1Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAb_cdMacro1_4Macro1Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ac-bd", ID::globalStereoMainVectorAc_bdMacro1_4Macro1Ac_bd));
    tabviewMacro->addWidget(macrotabIndex::macro_1,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAc_bdMacro1_4Macro1Ac_bd));
    
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ab-cd", ID::globalStereoMainVectorAb_cdMacro1_4Macro2Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAb_cdMacro1_4Macro2Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ac-bd", ID::globalStereoMainVectorAc_bdMacro1_4Macro2Ac_bd));
    tabviewMacro->addWidget(macrotabIndex::macro_2,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAc_bdMacro1_4Macro2Ac_bd));
    
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ab-cd", ID::globalStereoMainVectorAb_cdMacro1_4Macro3Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAb_cdMacro1_4Macro3Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ac-bd", ID::globalStereoMainVectorAc_bdMacro1_4Macro3Ac_bd));
    tabviewMacro->addWidget(macrotabIndex::macro_3,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAc_bdMacro1_4Macro3Ac_bd));
    
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ab-cd", ID::globalStereoMainVectorAb_cdMacro1_4Macro4Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAb_cdMacro1_4Macro4Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ac-bd", ID::globalStereoMainVectorAc_bdMacro1_4Macro4Ac_bd));
    tabviewMacro->addWidget(macrotabIndex::macro_4,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAc_bdMacro1_4Macro4Ac_bd));
    
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ab-cd", ID::globalStereoMainVectorAb_cdMacro5_8Macro5Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAb_cdMacro5_8Macro5Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ac-bd", ID::globalStereoMainVectorAc_bdMacro5_8Macro5Ac_bd));
    tabviewMacro->addWidget(macrotabIndex::macro_5,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAc_bdMacro5_8Macro5Ac_bd));
    
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ab-cd", ID::globalStereoMainVectorAb_cdMacro5_8Macro6Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAb_cdMacro5_8Macro6Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ac-bd", ID::globalStereoMainVectorAc_bdMacro5_8Macro6Ac_bd));
    tabviewMacro->addWidget(macrotabIndex::macro_6,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAc_bdMacro5_8Macro6Ac_bd));
    
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ab-cd", ID::globalStereoMainVectorAb_cdMacro5_8Macro7Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAb_cdMacro5_8Macro7Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ac-bd", ID::globalStereoMainVectorAc_bdMacro5_8Macro7Ac_bd));
    tabviewMacro->addWidget(macrotabIndex::macro_7,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAc_bdMacro5_8Macro7Ac_bd));
    
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ab-cd", ID::globalStereoMainVectorAb_cdMacro5_8Macro8Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAb_cdMacro5_8Macro8Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ac-bd", ID::globalStereoMainVectorAc_bdMacro5_8Macro8Ac_bd));
    tabviewMacro->addWidget(macrotabIndex::macro_8,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAc_bdMacro5_8Macro8Ac_bd));
    
    tabviewMacro->refreshTab();

    std::vector<std::string> osc_type_A_options = {
      "Sine-Noise",
      "Sawtooth",
      "Square",
      "Pulse",
      "Sine-Pulse",
      "Half Sine",
      "Resonant Saw",
      "Resonant Tri",
      "Resonant Trap",
      
    };
    addOptionMenu(
      macrotabInsideLeft0, macrotabInsideTop0 + 1 * sectionHeight,
      2 * knobX, labelHeight, uiTextSize,
      ID::aType, osc_type_A_options);
    std::vector<std::string> osc_type_B_options = {
      "Sine-Noise",
      "Sawtooth",
      "Square",
      "Pulse",
      "Sine-Pulse",
      "Half Sine",
      "Resonant Saw",
      "Resonant Tri",
      "Resonant Trap",
      
    };
    addOptionMenu(
      macrotabInsideLeft0, macrotabInsideTop0 + 2 * sectionHeight,
      2 * knobX, labelHeight, uiTextSize,
      ID::bType, osc_type_B_options);
    std::vector<std::string> osc_type_C_options = {
      "Sine-Noise",
      "Sawtooth",
      "Square",
      "Pulse",
      "Sine-Pulse",
      "Half Sine",
      "Resonant Saw",
      "Resonant Tri",
      "Resonant Trap",
      
    };
    addOptionMenu(
      macrotabInsideLeft0, macrotabInsideTop0 + 3 * sectionHeight,
      2 * knobX, labelHeight, uiTextSize,
      ID::cType, osc_type_C_options);
    std::vector<std::string> osc_type_D_options = {
      "Sine-Noise",
      "Sawtooth",
      "Square",
      "Pulse",
      "Sine-Pulse",
      "Half Sine",
      "Resonant Saw",
      "Resonant Tri",
      "Resonant Trap",
      
    };
    addOptionMenu(
      macrotabInsideLeft0, macrotabInsideTop0 + 4 * sectionHeight,
      2 * knobX, labelHeight, uiTextSize,
      ID::dType, osc_type_D_options);
    

    const auto tabLeft1 = tabLeft0 + macrotabWidth + uiMargin;
    const auto globaltabInnerWidth = 10 * knobX;
    const auto globaltabWidth = globaltabInnerWidth + 2 * uiMargin;
    const auto globaltabHeight = innerHeight;
    std::vector<std::string> globalTabs = {
      "Global",
      "Envelopes",
      "LFOs",
      "Modulation",
    };
    auto tabviewGlobal
      = addTabView(tabLeft1, tabTop0, globaltabWidth, globaltabHeight,
        uiTextSize, labelY, globalTabs);

    const auto globaltabInsideTop0 = tabTop0 + labelY + uiMargin;
    const auto globaltabInsideLeft0 = tabLeft1 + uiMargin;

    const auto global_top0 = globaltabInsideTop0;
    const auto global_top1 = global_top0 + labelY;
    const auto global_top2 = global_top1 + knobY;
    const auto global_left1 = globaltabInsideLeft0 + 2 * knobX;
    tabviewGlobal->addWidget(globaltabIndex::global,
      addKnob(globaltabInsideLeft0 + 0 * 2 * knobX, global_top1,
        knobWidth, margin, uiTextSize,
        "masterphase", ID::globalMasterphase));
    tabviewGlobal->addWidget(globaltabIndex::global,
      addKnob(globaltabInsideLeft0 + 1 * 2 * knobX, global_top1,
        knobWidth, margin, uiTextSize,
        "portamento", ID::globalPortamento));
    
    std::vector<std::string> portaoff_auto_on_options = {
      "off",
      "auto",
      "on",
      
    };
    tabviewGlobal->addWidget(globaltabIndex::global,
      addOptionMenu(
        globaltabInsideLeft0, global_top2 + 0 * labelY,
        knobX, labelHeight, uiTextSize,
        ID::globalPortaoff_auto_on, portaoff_auto_on_options));
    
    tabviewGlobal->addWidget(globaltabIndex::global,
      addCheckbox(
        global_left1, global_top2 + 0 * labelY,
        2 * knobX, labelHeight, uiTextSize,
        "freefloatosc", ID::globalFreefloatosc));
    

    const auto envelope_1_top0 = globaltabInsideTop0 + 0 * sectionHeight;
    const auto envelope_1_top1 = envelope_1_top0 + labelY;
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addGroupLabel(globaltabInsideLeft0, envelope_1_top0, globaltabInnerWidth,
        labelHeight, midTextSize, "Envelope_1"));
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addKnob(globaltabInsideLeft0 + 0 * knobX, envelope_1_top1,
        knobWidth, margin, uiTextSize,
        "attack", ID::envelopesEnvelope_1Attack));
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addKnob(globaltabInsideLeft0 + 1 * knobX, envelope_1_top1,
        knobWidth, margin, uiTextSize,
        "decay", ID::envelopesEnvelope_1Decay));
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addKnob(globaltabInsideLeft0 + 2 * knobX, envelope_1_top1,
        knobWidth, margin, uiTextSize,
        "sustain", ID::envelopesEnvelope_1Sustain));
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addKnob(globaltabInsideLeft0 + 3 * knobX, envelope_1_top1,
        knobWidth, margin, uiTextSize,
        "release", ID::envelopesEnvelope_1Release));
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addKnob(globaltabInsideLeft0 + 4 * knobX, envelope_1_top1,
        knobWidth, margin, uiTextSize,
        "velsens", ID::envelopesEnvelope_1Velsens));
    
    const auto envelope0_top0 = globaltabInsideTop0 + 1 * sectionHeight;
    const auto envelope0_top1 = envelope0_top0 + labelY;
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addGroupLabel(globaltabInsideLeft0, envelope0_top0, globaltabInnerWidth,
        labelHeight, midTextSize, "Envelope0"));
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addKnob(globaltabInsideLeft0 + 0 * knobX, envelope0_top1,
        knobWidth, margin, uiTextSize,
        "attack", ID::envelopesEnvelope0Attack));
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addKnob(globaltabInsideLeft0 + 1 * knobX, envelope0_top1,
        knobWidth, margin, uiTextSize,
        "decay", ID::envelopesEnvelope0Decay));
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addKnob(globaltabInsideLeft0 + 2 * knobX, envelope0_top1,
        knobWidth, margin, uiTextSize,
        "sustain", ID::envelopesEnvelope0Sustain));
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addKnob(globaltabInsideLeft0 + 3 * knobX, envelope0_top1,
        knobWidth, margin, uiTextSize,
        "release", ID::envelopesEnvelope0Release));
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addKnob(globaltabInsideLeft0 + 4 * knobX, envelope0_top1,
        knobWidth, margin, uiTextSize,
        "velsens", ID::envelopesEnvelope0Velsens));
    
    const auto envelope1_top0 = globaltabInsideTop0 + 2 * sectionHeight;
    const auto envelope1_top1 = envelope1_top0 + labelY;
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addGroupLabel(globaltabInsideLeft0, envelope1_top0, globaltabInnerWidth,
        labelHeight, midTextSize, "Envelope1"));
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addKnob(globaltabInsideLeft0 + 0 * knobX, envelope1_top1,
        knobWidth, margin, uiTextSize,
        "attack", ID::envelopesEnvelope1Attack));
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addKnob(globaltabInsideLeft0 + 1 * knobX, envelope1_top1,
        knobWidth, margin, uiTextSize,
        "decay", ID::envelopesEnvelope1Decay));
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addKnob(globaltabInsideLeft0 + 2 * knobX, envelope1_top1,
        knobWidth, margin, uiTextSize,
        "sustain", ID::envelopesEnvelope1Sustain));
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addKnob(globaltabInsideLeft0 + 3 * knobX, envelope1_top1,
        knobWidth, margin, uiTextSize,
        "release", ID::envelopesEnvelope1Release));
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addKnob(globaltabInsideLeft0 + 4 * knobX, envelope1_top1,
        knobWidth, margin, uiTextSize,
        "velsens", ID::envelopesEnvelope1Velsens));
    
    const auto envelope2_top0 = globaltabInsideTop0 + 3 * sectionHeight;
    const auto envelope2_top1 = envelope2_top0 + labelY;
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addGroupLabel(globaltabInsideLeft0, envelope2_top0, globaltabInnerWidth,
        labelHeight, midTextSize, "Envelope2"));
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addKnob(globaltabInsideLeft0 + 0 * knobX, envelope2_top1,
        knobWidth, margin, uiTextSize,
        "attack", ID::envelopesEnvelope2Attack));
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addKnob(globaltabInsideLeft0 + 1 * knobX, envelope2_top1,
        knobWidth, margin, uiTextSize,
        "decay", ID::envelopesEnvelope2Decay));
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addKnob(globaltabInsideLeft0 + 2 * knobX, envelope2_top1,
        knobWidth, margin, uiTextSize,
        "sustain", ID::envelopesEnvelope2Sustain));
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addKnob(globaltabInsideLeft0 + 3 * knobX, envelope2_top1,
        knobWidth, margin, uiTextSize,
        "release", ID::envelopesEnvelope2Release));
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addKnob(globaltabInsideLeft0 + 4 * knobX, envelope2_top1,
        knobWidth, margin, uiTextSize,
        "velsens", ID::envelopesEnvelope2Velsens));
    
    const auto envelope3_top0 = globaltabInsideTop0 + 4 * sectionHeight;
    const auto envelope3_top1 = envelope3_top0 + labelY;
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addGroupLabel(globaltabInsideLeft0, envelope3_top0, globaltabInnerWidth,
        labelHeight, midTextSize, "Envelope3"));
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addKnob(globaltabInsideLeft0 + 0 * knobX, envelope3_top1,
        knobWidth, margin, uiTextSize,
        "attack", ID::envelopesEnvelope3Attack));
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addKnob(globaltabInsideLeft0 + 1 * knobX, envelope3_top1,
        knobWidth, margin, uiTextSize,
        "decay", ID::envelopesEnvelope3Decay));
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addKnob(globaltabInsideLeft0 + 2 * knobX, envelope3_top1,
        knobWidth, margin, uiTextSize,
        "sustain", ID::envelopesEnvelope3Sustain));
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addKnob(globaltabInsideLeft0 + 3 * knobX, envelope3_top1,
        knobWidth, margin, uiTextSize,
        "release", ID::envelopesEnvelope3Release));
    tabviewGlobal->addWidget(globaltabIndex::envelopes,
      addKnob(globaltabInsideLeft0 + 4 * knobX, envelope3_top1,
        knobWidth, margin, uiTextSize,
        "velsens", ID::envelopesEnvelope3Velsens));
    
    const auto lfo0_top0 = globaltabInsideTop0 + 0 * sectionHeight;
    const auto lfo0_top1 = lfo0_top0 + labelY;
    tabviewGlobal->addWidget(globaltabIndex::LFOs,
      addGroupLabel(globaltabInsideLeft0, lfo0_top0, globaltabInnerWidth,
        labelHeight, midTextSize, "Lfo0"));
    tabviewGlobal->addWidget(globaltabIndex::LFOs,
      addKnob(globaltabInsideLeft0 + 0 * knobX, lfo0_top1,
        knobWidth, margin, uiTextSize,
        "lfofreq", ID::lfosLfo0Lfofreq));
    
    const auto lfo1_top0 = globaltabInsideTop0 + 1 * sectionHeight;
    const auto lfo1_top1 = lfo1_top0 + labelY;
    tabviewGlobal->addWidget(globaltabIndex::LFOs,
      addGroupLabel(globaltabInsideLeft0, lfo1_top0, globaltabInnerWidth,
        labelHeight, midTextSize, "Lfo1"));
    tabviewGlobal->addWidget(globaltabIndex::LFOs,
      addKnob(globaltabInsideLeft0 + 0 * knobX, lfo1_top1,
        knobWidth, margin, uiTextSize,
        "lfofreq", ID::lfosLfo1Lfofreq));
    
    const auto lfo2_top0 = globaltabInsideTop0 + 2 * sectionHeight;
    const auto lfo2_top1 = lfo2_top0 + labelY;
    tabviewGlobal->addWidget(globaltabIndex::LFOs,
      addGroupLabel(globaltabInsideLeft0, lfo2_top0, globaltabInnerWidth,
        labelHeight, midTextSize, "Lfo2"));
    tabviewGlobal->addWidget(globaltabIndex::LFOs,
      addKnob(globaltabInsideLeft0 + 0 * knobX, lfo2_top1,
        knobWidth, margin, uiTextSize,
        "lfofreq", ID::lfosLfo2Lfofreq));
    
    const auto lfo3_top0 = globaltabInsideTop0 + 3 * sectionHeight;
    const auto lfo3_top1 = lfo3_top0 + labelY;
    tabviewGlobal->addWidget(globaltabIndex::LFOs,
      addGroupLabel(globaltabInsideLeft0, lfo3_top0, globaltabInnerWidth,
        labelHeight, midTextSize, "Lfo3"));
    tabviewGlobal->addWidget(globaltabIndex::LFOs,
      addKnob(globaltabInsideLeft0 + 0 * knobX, lfo3_top1,
        knobWidth, margin, uiTextSize,
        "lfofreq", ID::lfosLfo3Lfofreq));
    
    const auto modulationTop0 = globaltabInsideTop0;
    const auto modulationTop1 = globaltabInsideTop0 + 2 * knobY;
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 0 * knobX, modulationTop0,
        knobWidth, margin, uiTextSize,
        "Axis 1", ID::modulation1Macro));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 1 * knobX, modulationTop0,
        knobWidth, margin, uiTextSize,
        "Axis 2", ID::modulation2Macro));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 2 * knobX, modulationTop0,
        knobWidth, margin, uiTextSize,
        "Axis 3", ID::modulation3Macro));
    
    const auto mod1_top0 = modulationTop1 + 0 * sectionHeight;
    const auto mod1_top1 = mod1_top0 + labelY;
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addGroupLabel(globaltabInsideLeft0, mod1_top0, globaltabInnerWidth,
        labelHeight, midTextSize, "1"));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 0 * knobX, mod1_top1,
        knobWidth, margin, uiTextSize,
        "up time", ID::modulation1Uptime));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 1 * knobX, mod1_top1,
        knobWidth, margin, uiTextSize,
        "down time", ID::modulation1Downtime));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 2 * knobX, mod1_top1,
        knobWidth, margin, uiTextSize,
        "env0", ID::modulation1Env0));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 3 * knobX, mod1_top1,
        knobWidth, margin, uiTextSize,
        "env1", ID::modulation1Env1));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 4 * knobX, mod1_top1,
        knobWidth, margin, uiTextSize,
        "env2", ID::modulation1Env2));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 5 * knobX, mod1_top1,
        knobWidth, margin, uiTextSize,
        "env3", ID::modulation1Env3));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 6 * knobX, mod1_top1,
        knobWidth, margin, uiTextSize,
        "lfo0", ID::modulation1Lfo0));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 7 * knobX, mod1_top1,
        knobWidth, margin, uiTextSize,
        "lfo1", ID::modulation1Lfo1));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 8 * knobX, mod1_top1,
        knobWidth, margin, uiTextSize,
        "lfo2", ID::modulation1Lfo2));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 9 * knobX, mod1_top1,
        knobWidth, margin, uiTextSize,
        "lfo3", ID::modulation1Lfo3));
    
    const auto mod2_top0 = modulationTop1 + 1 * sectionHeight;
    const auto mod2_top1 = mod2_top0 + labelY;
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addGroupLabel(globaltabInsideLeft0, mod2_top0, globaltabInnerWidth,
        labelHeight, midTextSize, "2"));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 0 * knobX, mod2_top1,
        knobWidth, margin, uiTextSize,
        "up time", ID::modulation2Uptime));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 1 * knobX, mod2_top1,
        knobWidth, margin, uiTextSize,
        "down time", ID::modulation2Downtime));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 2 * knobX, mod2_top1,
        knobWidth, margin, uiTextSize,
        "env0", ID::modulation2Env0));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 3 * knobX, mod2_top1,
        knobWidth, margin, uiTextSize,
        "env1", ID::modulation2Env1));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 4 * knobX, mod2_top1,
        knobWidth, margin, uiTextSize,
        "env2", ID::modulation2Env2));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 5 * knobX, mod2_top1,
        knobWidth, margin, uiTextSize,
        "env3", ID::modulation2Env3));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 6 * knobX, mod2_top1,
        knobWidth, margin, uiTextSize,
        "lfo0", ID::modulation2Lfo0));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 7 * knobX, mod2_top1,
        knobWidth, margin, uiTextSize,
        "lfo1", ID::modulation2Lfo1));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 8 * knobX, mod2_top1,
        knobWidth, margin, uiTextSize,
        "lfo2", ID::modulation2Lfo2));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 9 * knobX, mod2_top1,
        knobWidth, margin, uiTextSize,
        "lfo3", ID::modulation2Lfo3));
    
    const auto mod3_top0 = modulationTop1 + 2 * sectionHeight;
    const auto mod3_top1 = mod3_top0 + labelY;
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addGroupLabel(globaltabInsideLeft0, mod3_top0, globaltabInnerWidth,
        labelHeight, midTextSize, "3"));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 0 * knobX, mod3_top1,
        knobWidth, margin, uiTextSize,
        "up time", ID::modulation3Uptime));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 1 * knobX, mod3_top1,
        knobWidth, margin, uiTextSize,
        "down time", ID::modulation3Downtime));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 2 * knobX, mod3_top1,
        knobWidth, margin, uiTextSize,
        "env0", ID::modulation3Env0));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 3 * knobX, mod3_top1,
        knobWidth, margin, uiTextSize,
        "env1", ID::modulation3Env1));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 4 * knobX, mod3_top1,
        knobWidth, margin, uiTextSize,
        "env2", ID::modulation3Env2));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 5 * knobX, mod3_top1,
        knobWidth, margin, uiTextSize,
        "env3", ID::modulation3Env3));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 6 * knobX, mod3_top1,
        knobWidth, margin, uiTextSize,
        "lfo0", ID::modulation3Lfo0));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 7 * knobX, mod3_top1,
        knobWidth, margin, uiTextSize,
        "lfo1", ID::modulation3Lfo1));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 8 * knobX, mod3_top1,
        knobWidth, margin, uiTextSize,
        "lfo2", ID::modulation3Lfo2));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 9 * knobX, mod3_top1,
        knobWidth, margin, uiTextSize,
        "lfo3", ID::modulation3Lfo3));
    
    tabviewGlobal->refreshTab();
  }
};

UI *createUI() { return new DigiDrieUI(); }

END_NAMESPACE_DISTRHO
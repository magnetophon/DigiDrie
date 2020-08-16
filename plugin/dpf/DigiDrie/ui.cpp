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
  macro1,
  macro2,
  macro3,
  macro4,
  macro5,
  macro6,
  macro7,
  macro8,
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

    const auto macro1_filter_top0 = macrotabInsideTop0 + 0 * sectionHeight;
    const auto macro1_filter_top1 = macro1_filter_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addGroupLabel(macrotabInsideLeft0, macro1_filter_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "Filter"));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro1_filter_top1,
        knobWidth, margin, uiTextSize,
        "svf", ID::filterStereoMainMix_tweakMixSvfMacro1_4Macro1Level));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro1_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakMixSvfMacro1_4Macro1Level));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro1_filter_top1,
        knobWidth, margin, uiTextSize,
        "ms20", ID::filterStereoMainMix_tweakMixMs20Macro1_4Macro1Level));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro1_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakMixMs20Macro1_4Macro1Level));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro1_filter_top1,
        knobWidth, margin, uiTextSize,
        "oberheim", ID::filterStereoMainMix_tweakMixOberheimMacro1_4Macro1Level));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro1_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakMixOberheimMacro1_4Macro1Level));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro1_filter_top1,
        knobWidth, margin, uiTextSize,
        "normfreq", ID::filterStereoMainMix_tweakTweakFreqMacro1_4Macro1Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro1_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakTweakFreqMacro1_4Macro1Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro1_filter_top1,
        knobWidth, margin, uiTextSize,
        "q", ID::filterStereoMainMix_tweakTweakQMacro1_4Macro1Q));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro1_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakTweakQMacro1_4Macro1Q));
    
    const auto macro1_a_top0 = macrotabInsideTop0 + 1 * sectionHeight;
    const auto macro1_a_top1 = macro1_a_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addGroupLabel(macrotabInsideLeft0, macro1_a_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "A"));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro1_a_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::aStereoMainCz_pmCzIndexMacro1_4Macro1Index));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro1_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmCzIndexMacro1_4Macro1Index));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro1_a_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::aStereoMainCz_pmCzOctaveMacro1_4Macro1Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro1_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmCzOctaveMacro1_4Macro1Octave));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro1_a_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::aStereoMainCz_pmCzPhaseMacro1_4Macro1Phase));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro1_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmCzPhaseMacro1_4Macro1Phase));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro1_a_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::aStereoMainCz_pmPmPmaMacro1_4Macro1Pma));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro1_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmaMacro1_4Macro1Pma));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro1_a_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::aStereoMainCz_pmPmPmbMacro1_4Macro1Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro1_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmbMacro1_4Macro1Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro1_a_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::aStereoMainCz_pmPmPmcMacro1_4Macro1Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro1_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmcMacro1_4Macro1Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro1_a_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::aStereoMainCz_pmPmPmdMacro1_4Macro1Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro1_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmdMacro1_4Macro1Pmd));
    
    const auto macro1_b_top0 = macrotabInsideTop0 + 2 * sectionHeight;
    const auto macro1_b_top1 = macro1_b_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addGroupLabel(macrotabInsideLeft0, macro1_b_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "B"));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro1_b_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::bStereoMainCz_pmCzIndexMacro1_4Macro1Index));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro1_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmCzIndexMacro1_4Macro1Index));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro1_b_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::bStereoMainCz_pmCzOctaveMacro1_4Macro1Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro1_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmCzOctaveMacro1_4Macro1Octave));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro1_b_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::bStereoMainCz_pmCzPhaseMacro1_4Macro1Phase));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro1_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmCzPhaseMacro1_4Macro1Phase));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro1_b_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::bStereoMainCz_pmPmPmaMacro1_4Macro1Pma));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro1_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmaMacro1_4Macro1Pma));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro1_b_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::bStereoMainCz_pmPmPmbMacro1_4Macro1Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro1_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmbMacro1_4Macro1Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro1_b_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::bStereoMainCz_pmPmPmcMacro1_4Macro1Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro1_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmcMacro1_4Macro1Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro1_b_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::bStereoMainCz_pmPmPmdMacro1_4Macro1Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro1_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmdMacro1_4Macro1Pmd));
    
    const auto macro1_c_top0 = macrotabInsideTop0 + 3 * sectionHeight;
    const auto macro1_c_top1 = macro1_c_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addGroupLabel(macrotabInsideLeft0, macro1_c_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "C"));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro1_c_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::cStereoMainCz_pmCzIndexMacro1_4Macro1Index));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro1_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmCzIndexMacro1_4Macro1Index));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro1_c_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::cStereoMainCz_pmCzOctaveMacro1_4Macro1Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro1_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmCzOctaveMacro1_4Macro1Octave));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro1_c_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::cStereoMainCz_pmCzPhaseMacro1_4Macro1Phase));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro1_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmCzPhaseMacro1_4Macro1Phase));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro1_c_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::cStereoMainCz_pmPmPmaMacro1_4Macro1Pma));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro1_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmaMacro1_4Macro1Pma));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro1_c_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::cStereoMainCz_pmPmPmbMacro1_4Macro1Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro1_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmbMacro1_4Macro1Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro1_c_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::cStereoMainCz_pmPmPmcMacro1_4Macro1Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro1_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmcMacro1_4Macro1Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro1_c_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::cStereoMainCz_pmPmPmdMacro1_4Macro1Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro1_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmdMacro1_4Macro1Pmd));
    
    const auto macro1_d_top0 = macrotabInsideTop0 + 4 * sectionHeight;
    const auto macro1_d_top1 = macro1_d_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addGroupLabel(macrotabInsideLeft0, macro1_d_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "D"));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro1_d_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::dStereoMainCz_pmCzIndexMacro1_4Macro1Index));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro1_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmCzIndexMacro1_4Macro1Index));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro1_d_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::dStereoMainCz_pmCzOctaveMacro1_4Macro1Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro1_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmCzOctaveMacro1_4Macro1Octave));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro1_d_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::dStereoMainCz_pmCzPhaseMacro1_4Macro1Phase));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro1_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmCzPhaseMacro1_4Macro1Phase));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro1_d_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::dStereoMainCz_pmPmPmaMacro1_4Macro1Pma));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro1_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmaMacro1_4Macro1Pma));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro1_d_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::dStereoMainCz_pmPmPmbMacro1_4Macro1Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro1_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmbMacro1_4Macro1Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro1_d_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::dStereoMainCz_pmPmPmcMacro1_4Macro1Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro1_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmcMacro1_4Macro1Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro1_d_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::dStereoMainCz_pmPmPmdMacro1_4Macro1Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro1_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmdMacro1_4Macro1Pmd));
    
    
    const auto macro2_filter_top0 = macrotabInsideTop0 + 0 * sectionHeight;
    const auto macro2_filter_top1 = macro2_filter_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addGroupLabel(macrotabInsideLeft0, macro2_filter_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "Filter"));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro2_filter_top1,
        knobWidth, margin, uiTextSize,
        "svf", ID::filterStereoMainMix_tweakMixSvfMacro1_4Macro2Level));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro2_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakMixSvfMacro1_4Macro2Level));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro2_filter_top1,
        knobWidth, margin, uiTextSize,
        "ms20", ID::filterStereoMainMix_tweakMixMs20Macro1_4Macro2Level));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro2_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakMixMs20Macro1_4Macro2Level));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro2_filter_top1,
        knobWidth, margin, uiTextSize,
        "oberheim", ID::filterStereoMainMix_tweakMixOberheimMacro1_4Macro2Level));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro2_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakMixOberheimMacro1_4Macro2Level));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro2_filter_top1,
        knobWidth, margin, uiTextSize,
        "normfreq", ID::filterStereoMainMix_tweakTweakFreqMacro1_4Macro2Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro2_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakTweakFreqMacro1_4Macro2Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro2_filter_top1,
        knobWidth, margin, uiTextSize,
        "q", ID::filterStereoMainMix_tweakTweakQMacro1_4Macro2Q));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro2_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakTweakQMacro1_4Macro2Q));
    
    const auto macro2_a_top0 = macrotabInsideTop0 + 1 * sectionHeight;
    const auto macro2_a_top1 = macro2_a_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addGroupLabel(macrotabInsideLeft0, macro2_a_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "A"));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro2_a_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::aStereoMainCz_pmCzIndexMacro1_4Macro2Index));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro2_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmCzIndexMacro1_4Macro2Index));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro2_a_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::aStereoMainCz_pmCzOctaveMacro1_4Macro2Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro2_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmCzOctaveMacro1_4Macro2Octave));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro2_a_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::aStereoMainCz_pmCzPhaseMacro1_4Macro2Phase));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro2_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmCzPhaseMacro1_4Macro2Phase));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro2_a_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::aStereoMainCz_pmPmPmaMacro1_4Macro2Pma));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro2_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmaMacro1_4Macro2Pma));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro2_a_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::aStereoMainCz_pmPmPmbMacro1_4Macro2Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro2_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmbMacro1_4Macro2Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro2_a_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::aStereoMainCz_pmPmPmcMacro1_4Macro2Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro2_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmcMacro1_4Macro2Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro2_a_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::aStereoMainCz_pmPmPmdMacro1_4Macro2Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro2_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmdMacro1_4Macro2Pmd));
    
    const auto macro2_b_top0 = macrotabInsideTop0 + 2 * sectionHeight;
    const auto macro2_b_top1 = macro2_b_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addGroupLabel(macrotabInsideLeft0, macro2_b_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "B"));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro2_b_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::bStereoMainCz_pmCzIndexMacro1_4Macro2Index));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro2_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmCzIndexMacro1_4Macro2Index));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro2_b_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::bStereoMainCz_pmCzOctaveMacro1_4Macro2Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro2_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmCzOctaveMacro1_4Macro2Octave));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro2_b_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::bStereoMainCz_pmCzPhaseMacro1_4Macro2Phase));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro2_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmCzPhaseMacro1_4Macro2Phase));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro2_b_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::bStereoMainCz_pmPmPmaMacro1_4Macro2Pma));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro2_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmaMacro1_4Macro2Pma));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro2_b_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::bStereoMainCz_pmPmPmbMacro1_4Macro2Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro2_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmbMacro1_4Macro2Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro2_b_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::bStereoMainCz_pmPmPmcMacro1_4Macro2Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro2_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmcMacro1_4Macro2Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro2_b_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::bStereoMainCz_pmPmPmdMacro1_4Macro2Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro2_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmdMacro1_4Macro2Pmd));
    
    const auto macro2_c_top0 = macrotabInsideTop0 + 3 * sectionHeight;
    const auto macro2_c_top1 = macro2_c_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addGroupLabel(macrotabInsideLeft0, macro2_c_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "C"));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro2_c_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::cStereoMainCz_pmCzIndexMacro1_4Macro2Index));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro2_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmCzIndexMacro1_4Macro2Index));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro2_c_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::cStereoMainCz_pmCzOctaveMacro1_4Macro2Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro2_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmCzOctaveMacro1_4Macro2Octave));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro2_c_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::cStereoMainCz_pmCzPhaseMacro1_4Macro2Phase));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro2_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmCzPhaseMacro1_4Macro2Phase));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro2_c_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::cStereoMainCz_pmPmPmaMacro1_4Macro2Pma));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro2_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmaMacro1_4Macro2Pma));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro2_c_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::cStereoMainCz_pmPmPmbMacro1_4Macro2Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro2_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmbMacro1_4Macro2Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro2_c_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::cStereoMainCz_pmPmPmcMacro1_4Macro2Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro2_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmcMacro1_4Macro2Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro2_c_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::cStereoMainCz_pmPmPmdMacro1_4Macro2Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro2_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmdMacro1_4Macro2Pmd));
    
    const auto macro2_d_top0 = macrotabInsideTop0 + 4 * sectionHeight;
    const auto macro2_d_top1 = macro2_d_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addGroupLabel(macrotabInsideLeft0, macro2_d_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "D"));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro2_d_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::dStereoMainCz_pmCzIndexMacro1_4Macro2Index));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro2_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmCzIndexMacro1_4Macro2Index));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro2_d_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::dStereoMainCz_pmCzOctaveMacro1_4Macro2Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro2_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmCzOctaveMacro1_4Macro2Octave));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro2_d_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::dStereoMainCz_pmCzPhaseMacro1_4Macro2Phase));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro2_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmCzPhaseMacro1_4Macro2Phase));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro2_d_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::dStereoMainCz_pmPmPmaMacro1_4Macro2Pma));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro2_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmaMacro1_4Macro2Pma));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro2_d_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::dStereoMainCz_pmPmPmbMacro1_4Macro2Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro2_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmbMacro1_4Macro2Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro2_d_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::dStereoMainCz_pmPmPmcMacro1_4Macro2Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro2_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmcMacro1_4Macro2Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro2_d_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::dStereoMainCz_pmPmPmdMacro1_4Macro2Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro2_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmdMacro1_4Macro2Pmd));
    
    
    const auto macro3_filter_top0 = macrotabInsideTop0 + 0 * sectionHeight;
    const auto macro3_filter_top1 = macro3_filter_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addGroupLabel(macrotabInsideLeft0, macro3_filter_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "Filter"));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro3_filter_top1,
        knobWidth, margin, uiTextSize,
        "svf", ID::filterStereoMainMix_tweakMixSvfMacro1_4Macro3Level));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro3_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakMixSvfMacro1_4Macro3Level));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro3_filter_top1,
        knobWidth, margin, uiTextSize,
        "ms20", ID::filterStereoMainMix_tweakMixMs20Macro1_4Macro3Level));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro3_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakMixMs20Macro1_4Macro3Level));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro3_filter_top1,
        knobWidth, margin, uiTextSize,
        "oberheim", ID::filterStereoMainMix_tweakMixOberheimMacro1_4Macro3Level));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro3_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakMixOberheimMacro1_4Macro3Level));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro3_filter_top1,
        knobWidth, margin, uiTextSize,
        "normfreq", ID::filterStereoMainMix_tweakTweakFreqMacro1_4Macro3Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro3_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakTweakFreqMacro1_4Macro3Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro3_filter_top1,
        knobWidth, margin, uiTextSize,
        "q", ID::filterStereoMainMix_tweakTweakQMacro1_4Macro3Q));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro3_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakTweakQMacro1_4Macro3Q));
    
    const auto macro3_a_top0 = macrotabInsideTop0 + 1 * sectionHeight;
    const auto macro3_a_top1 = macro3_a_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addGroupLabel(macrotabInsideLeft0, macro3_a_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "A"));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro3_a_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::aStereoMainCz_pmCzIndexMacro1_4Macro3Index));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro3_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmCzIndexMacro1_4Macro3Index));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro3_a_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::aStereoMainCz_pmCzOctaveMacro1_4Macro3Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro3_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmCzOctaveMacro1_4Macro3Octave));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro3_a_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::aStereoMainCz_pmCzPhaseMacro1_4Macro3Phase));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro3_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmCzPhaseMacro1_4Macro3Phase));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro3_a_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::aStereoMainCz_pmPmPmaMacro1_4Macro3Pma));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro3_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmaMacro1_4Macro3Pma));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro3_a_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::aStereoMainCz_pmPmPmbMacro1_4Macro3Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro3_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmbMacro1_4Macro3Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro3_a_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::aStereoMainCz_pmPmPmcMacro1_4Macro3Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro3_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmcMacro1_4Macro3Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro3_a_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::aStereoMainCz_pmPmPmdMacro1_4Macro3Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro3_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmdMacro1_4Macro3Pmd));
    
    const auto macro3_b_top0 = macrotabInsideTop0 + 2 * sectionHeight;
    const auto macro3_b_top1 = macro3_b_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addGroupLabel(macrotabInsideLeft0, macro3_b_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "B"));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro3_b_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::bStereoMainCz_pmCzIndexMacro1_4Macro3Index));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro3_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmCzIndexMacro1_4Macro3Index));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro3_b_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::bStereoMainCz_pmCzOctaveMacro1_4Macro3Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro3_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmCzOctaveMacro1_4Macro3Octave));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro3_b_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::bStereoMainCz_pmCzPhaseMacro1_4Macro3Phase));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro3_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmCzPhaseMacro1_4Macro3Phase));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro3_b_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::bStereoMainCz_pmPmPmaMacro1_4Macro3Pma));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro3_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmaMacro1_4Macro3Pma));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro3_b_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::bStereoMainCz_pmPmPmbMacro1_4Macro3Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro3_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmbMacro1_4Macro3Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro3_b_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::bStereoMainCz_pmPmPmcMacro1_4Macro3Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro3_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmcMacro1_4Macro3Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro3_b_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::bStereoMainCz_pmPmPmdMacro1_4Macro3Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro3_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmdMacro1_4Macro3Pmd));
    
    const auto macro3_c_top0 = macrotabInsideTop0 + 3 * sectionHeight;
    const auto macro3_c_top1 = macro3_c_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addGroupLabel(macrotabInsideLeft0, macro3_c_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "C"));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro3_c_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::cStereoMainCz_pmCzIndexMacro1_4Macro3Index));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro3_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmCzIndexMacro1_4Macro3Index));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro3_c_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::cStereoMainCz_pmCzOctaveMacro1_4Macro3Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro3_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmCzOctaveMacro1_4Macro3Octave));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro3_c_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::cStereoMainCz_pmCzPhaseMacro1_4Macro3Phase));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro3_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmCzPhaseMacro1_4Macro3Phase));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro3_c_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::cStereoMainCz_pmPmPmaMacro1_4Macro3Pma));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro3_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmaMacro1_4Macro3Pma));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro3_c_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::cStereoMainCz_pmPmPmbMacro1_4Macro3Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro3_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmbMacro1_4Macro3Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro3_c_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::cStereoMainCz_pmPmPmcMacro1_4Macro3Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro3_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmcMacro1_4Macro3Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro3_c_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::cStereoMainCz_pmPmPmdMacro1_4Macro3Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro3_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmdMacro1_4Macro3Pmd));
    
    const auto macro3_d_top0 = macrotabInsideTop0 + 4 * sectionHeight;
    const auto macro3_d_top1 = macro3_d_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addGroupLabel(macrotabInsideLeft0, macro3_d_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "D"));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro3_d_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::dStereoMainCz_pmCzIndexMacro1_4Macro3Index));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro3_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmCzIndexMacro1_4Macro3Index));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro3_d_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::dStereoMainCz_pmCzOctaveMacro1_4Macro3Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro3_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmCzOctaveMacro1_4Macro3Octave));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro3_d_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::dStereoMainCz_pmCzPhaseMacro1_4Macro3Phase));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro3_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmCzPhaseMacro1_4Macro3Phase));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro3_d_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::dStereoMainCz_pmPmPmaMacro1_4Macro3Pma));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro3_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmaMacro1_4Macro3Pma));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro3_d_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::dStereoMainCz_pmPmPmbMacro1_4Macro3Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro3_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmbMacro1_4Macro3Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro3_d_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::dStereoMainCz_pmPmPmcMacro1_4Macro3Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro3_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmcMacro1_4Macro3Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro3_d_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::dStereoMainCz_pmPmPmdMacro1_4Macro3Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro3_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmdMacro1_4Macro3Pmd));
    
    
    const auto macro4_filter_top0 = macrotabInsideTop0 + 0 * sectionHeight;
    const auto macro4_filter_top1 = macro4_filter_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addGroupLabel(macrotabInsideLeft0, macro4_filter_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "Filter"));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro4_filter_top1,
        knobWidth, margin, uiTextSize,
        "svf", ID::filterStereoMainMix_tweakMixSvfMacro1_4Macro4Level));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro4_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakMixSvfMacro1_4Macro4Level));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro4_filter_top1,
        knobWidth, margin, uiTextSize,
        "ms20", ID::filterStereoMainMix_tweakMixMs20Macro1_4Macro4Level));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro4_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakMixMs20Macro1_4Macro4Level));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro4_filter_top1,
        knobWidth, margin, uiTextSize,
        "oberheim", ID::filterStereoMainMix_tweakMixOberheimMacro1_4Macro4Level));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro4_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakMixOberheimMacro1_4Macro4Level));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro4_filter_top1,
        knobWidth, margin, uiTextSize,
        "normfreq", ID::filterStereoMainMix_tweakTweakFreqMacro1_4Macro4Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro4_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakTweakFreqMacro1_4Macro4Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro4_filter_top1,
        knobWidth, margin, uiTextSize,
        "q", ID::filterStereoMainMix_tweakTweakQMacro1_4Macro4Q));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro4_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakTweakQMacro1_4Macro4Q));
    
    const auto macro4_a_top0 = macrotabInsideTop0 + 1 * sectionHeight;
    const auto macro4_a_top1 = macro4_a_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addGroupLabel(macrotabInsideLeft0, macro4_a_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "A"));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro4_a_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::aStereoMainCz_pmCzIndexMacro1_4Macro4Index));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro4_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmCzIndexMacro1_4Macro4Index));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro4_a_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::aStereoMainCz_pmCzOctaveMacro1_4Macro4Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro4_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmCzOctaveMacro1_4Macro4Octave));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro4_a_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::aStereoMainCz_pmCzPhaseMacro1_4Macro4Phase));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro4_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmCzPhaseMacro1_4Macro4Phase));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro4_a_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::aStereoMainCz_pmPmPmaMacro1_4Macro4Pma));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro4_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmaMacro1_4Macro4Pma));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro4_a_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::aStereoMainCz_pmPmPmbMacro1_4Macro4Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro4_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmbMacro1_4Macro4Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro4_a_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::aStereoMainCz_pmPmPmcMacro1_4Macro4Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro4_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmcMacro1_4Macro4Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro4_a_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::aStereoMainCz_pmPmPmdMacro1_4Macro4Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro4_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmdMacro1_4Macro4Pmd));
    
    const auto macro4_b_top0 = macrotabInsideTop0 + 2 * sectionHeight;
    const auto macro4_b_top1 = macro4_b_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addGroupLabel(macrotabInsideLeft0, macro4_b_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "B"));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro4_b_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::bStereoMainCz_pmCzIndexMacro1_4Macro4Index));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro4_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmCzIndexMacro1_4Macro4Index));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro4_b_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::bStereoMainCz_pmCzOctaveMacro1_4Macro4Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro4_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmCzOctaveMacro1_4Macro4Octave));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro4_b_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::bStereoMainCz_pmCzPhaseMacro1_4Macro4Phase));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro4_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmCzPhaseMacro1_4Macro4Phase));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro4_b_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::bStereoMainCz_pmPmPmaMacro1_4Macro4Pma));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro4_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmaMacro1_4Macro4Pma));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro4_b_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::bStereoMainCz_pmPmPmbMacro1_4Macro4Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro4_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmbMacro1_4Macro4Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro4_b_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::bStereoMainCz_pmPmPmcMacro1_4Macro4Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro4_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmcMacro1_4Macro4Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro4_b_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::bStereoMainCz_pmPmPmdMacro1_4Macro4Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro4_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmdMacro1_4Macro4Pmd));
    
    const auto macro4_c_top0 = macrotabInsideTop0 + 3 * sectionHeight;
    const auto macro4_c_top1 = macro4_c_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addGroupLabel(macrotabInsideLeft0, macro4_c_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "C"));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro4_c_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::cStereoMainCz_pmCzIndexMacro1_4Macro4Index));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro4_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmCzIndexMacro1_4Macro4Index));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro4_c_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::cStereoMainCz_pmCzOctaveMacro1_4Macro4Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro4_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmCzOctaveMacro1_4Macro4Octave));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro4_c_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::cStereoMainCz_pmCzPhaseMacro1_4Macro4Phase));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro4_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmCzPhaseMacro1_4Macro4Phase));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro4_c_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::cStereoMainCz_pmPmPmaMacro1_4Macro4Pma));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro4_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmaMacro1_4Macro4Pma));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro4_c_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::cStereoMainCz_pmPmPmbMacro1_4Macro4Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro4_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmbMacro1_4Macro4Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro4_c_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::cStereoMainCz_pmPmPmcMacro1_4Macro4Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro4_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmcMacro1_4Macro4Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro4_c_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::cStereoMainCz_pmPmPmdMacro1_4Macro4Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro4_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmdMacro1_4Macro4Pmd));
    
    const auto macro4_d_top0 = macrotabInsideTop0 + 4 * sectionHeight;
    const auto macro4_d_top1 = macro4_d_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addGroupLabel(macrotabInsideLeft0, macro4_d_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "D"));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro4_d_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::dStereoMainCz_pmCzIndexMacro1_4Macro4Index));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro4_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmCzIndexMacro1_4Macro4Index));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro4_d_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::dStereoMainCz_pmCzOctaveMacro1_4Macro4Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro4_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmCzOctaveMacro1_4Macro4Octave));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro4_d_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::dStereoMainCz_pmCzPhaseMacro1_4Macro4Phase));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro4_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmCzPhaseMacro1_4Macro4Phase));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro4_d_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::dStereoMainCz_pmPmPmaMacro1_4Macro4Pma));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro4_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmaMacro1_4Macro4Pma));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro4_d_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::dStereoMainCz_pmPmPmbMacro1_4Macro4Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro4_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmbMacro1_4Macro4Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro4_d_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::dStereoMainCz_pmPmPmcMacro1_4Macro4Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro4_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmcMacro1_4Macro4Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro4_d_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::dStereoMainCz_pmPmPmdMacro1_4Macro4Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro4_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmdMacro1_4Macro4Pmd));
    
    
    const auto macro5_filter_top0 = macrotabInsideTop0 + 0 * sectionHeight;
    const auto macro5_filter_top1 = macro5_filter_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addGroupLabel(macrotabInsideLeft0, macro5_filter_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "Filter"));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro5_filter_top1,
        knobWidth, margin, uiTextSize,
        "svf", ID::filterStereoMainMix_tweakMixSvfMacro5_8Macro5Level));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro5_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakMixSvfMacro5_8Macro5Level));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro5_filter_top1,
        knobWidth, margin, uiTextSize,
        "ms20", ID::filterStereoMainMix_tweakMixMs20Macro5_8Macro5Level));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro5_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakMixMs20Macro5_8Macro5Level));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro5_filter_top1,
        knobWidth, margin, uiTextSize,
        "oberheim", ID::filterStereoMainMix_tweakMixOberheimMacro5_8Macro5Level));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro5_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakMixOberheimMacro5_8Macro5Level));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro5_filter_top1,
        knobWidth, margin, uiTextSize,
        "normfreq", ID::filterStereoMainMix_tweakTweakFreqMacro5_8Macro5Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro5_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakTweakFreqMacro5_8Macro5Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro5_filter_top1,
        knobWidth, margin, uiTextSize,
        "q", ID::filterStereoMainMix_tweakTweakQMacro5_8Macro5Q));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro5_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakTweakQMacro5_8Macro5Q));
    
    const auto macro5_a_top0 = macrotabInsideTop0 + 1 * sectionHeight;
    const auto macro5_a_top1 = macro5_a_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addGroupLabel(macrotabInsideLeft0, macro5_a_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "A"));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro5_a_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::aStereoMainCz_pmCzIndexMacro5_8Macro5Index));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro5_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmCzIndexMacro5_8Macro5Index));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro5_a_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::aStereoMainCz_pmCzOctaveMacro5_8Macro5Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro5_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmCzOctaveMacro5_8Macro5Octave));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro5_a_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::aStereoMainCz_pmCzPhaseMacro5_8Macro5Phase));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro5_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmCzPhaseMacro5_8Macro5Phase));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro5_a_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::aStereoMainCz_pmPmPmaMacro5_8Macro5Pma));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro5_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmaMacro5_8Macro5Pma));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro5_a_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::aStereoMainCz_pmPmPmbMacro5_8Macro5Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro5_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmbMacro5_8Macro5Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro5_a_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::aStereoMainCz_pmPmPmcMacro5_8Macro5Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro5_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmcMacro5_8Macro5Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro5_a_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::aStereoMainCz_pmPmPmdMacro5_8Macro5Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro5_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmdMacro5_8Macro5Pmd));
    
    const auto macro5_b_top0 = macrotabInsideTop0 + 2 * sectionHeight;
    const auto macro5_b_top1 = macro5_b_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addGroupLabel(macrotabInsideLeft0, macro5_b_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "B"));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro5_b_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::bStereoMainCz_pmCzIndexMacro5_8Macro5Index));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro5_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmCzIndexMacro5_8Macro5Index));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro5_b_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::bStereoMainCz_pmCzOctaveMacro5_8Macro5Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro5_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmCzOctaveMacro5_8Macro5Octave));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro5_b_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::bStereoMainCz_pmCzPhaseMacro5_8Macro5Phase));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro5_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmCzPhaseMacro5_8Macro5Phase));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro5_b_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::bStereoMainCz_pmPmPmaMacro5_8Macro5Pma));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro5_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmaMacro5_8Macro5Pma));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro5_b_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::bStereoMainCz_pmPmPmbMacro5_8Macro5Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro5_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmbMacro5_8Macro5Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro5_b_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::bStereoMainCz_pmPmPmcMacro5_8Macro5Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro5_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmcMacro5_8Macro5Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro5_b_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::bStereoMainCz_pmPmPmdMacro5_8Macro5Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro5_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmdMacro5_8Macro5Pmd));
    
    const auto macro5_c_top0 = macrotabInsideTop0 + 3 * sectionHeight;
    const auto macro5_c_top1 = macro5_c_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addGroupLabel(macrotabInsideLeft0, macro5_c_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "C"));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro5_c_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::cStereoMainCz_pmCzIndexMacro5_8Macro5Index));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro5_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmCzIndexMacro5_8Macro5Index));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro5_c_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::cStereoMainCz_pmCzOctaveMacro5_8Macro5Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro5_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmCzOctaveMacro5_8Macro5Octave));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro5_c_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::cStereoMainCz_pmCzPhaseMacro5_8Macro5Phase));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro5_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmCzPhaseMacro5_8Macro5Phase));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro5_c_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::cStereoMainCz_pmPmPmaMacro5_8Macro5Pma));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro5_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmaMacro5_8Macro5Pma));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro5_c_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::cStereoMainCz_pmPmPmbMacro5_8Macro5Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro5_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmbMacro5_8Macro5Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro5_c_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::cStereoMainCz_pmPmPmcMacro5_8Macro5Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro5_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmcMacro5_8Macro5Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro5_c_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::cStereoMainCz_pmPmPmdMacro5_8Macro5Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro5_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmdMacro5_8Macro5Pmd));
    
    const auto macro5_d_top0 = macrotabInsideTop0 + 4 * sectionHeight;
    const auto macro5_d_top1 = macro5_d_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addGroupLabel(macrotabInsideLeft0, macro5_d_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "D"));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro5_d_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::dStereoMainCz_pmCzIndexMacro5_8Macro5Index));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro5_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmCzIndexMacro5_8Macro5Index));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro5_d_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::dStereoMainCz_pmCzOctaveMacro5_8Macro5Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro5_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmCzOctaveMacro5_8Macro5Octave));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro5_d_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::dStereoMainCz_pmCzPhaseMacro5_8Macro5Phase));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro5_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmCzPhaseMacro5_8Macro5Phase));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro5_d_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::dStereoMainCz_pmPmPmaMacro5_8Macro5Pma));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro5_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmaMacro5_8Macro5Pma));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro5_d_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::dStereoMainCz_pmPmPmbMacro5_8Macro5Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro5_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmbMacro5_8Macro5Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro5_d_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::dStereoMainCz_pmPmPmcMacro5_8Macro5Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro5_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmcMacro5_8Macro5Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro5_d_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::dStereoMainCz_pmPmPmdMacro5_8Macro5Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro5_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmdMacro5_8Macro5Pmd));
    
    
    const auto macro6_filter_top0 = macrotabInsideTop0 + 0 * sectionHeight;
    const auto macro6_filter_top1 = macro6_filter_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addGroupLabel(macrotabInsideLeft0, macro6_filter_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "Filter"));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro6_filter_top1,
        knobWidth, margin, uiTextSize,
        "svf", ID::filterStereoMainMix_tweakMixSvfMacro5_8Macro6Level));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro6_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakMixSvfMacro5_8Macro6Level));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro6_filter_top1,
        knobWidth, margin, uiTextSize,
        "ms20", ID::filterStereoMainMix_tweakMixMs20Macro5_8Macro6Level));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro6_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakMixMs20Macro5_8Macro6Level));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro6_filter_top1,
        knobWidth, margin, uiTextSize,
        "oberheim", ID::filterStereoMainMix_tweakMixOberheimMacro5_8Macro6Level));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro6_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakMixOberheimMacro5_8Macro6Level));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro6_filter_top1,
        knobWidth, margin, uiTextSize,
        "normfreq", ID::filterStereoMainMix_tweakTweakFreqMacro5_8Macro6Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro6_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakTweakFreqMacro5_8Macro6Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro6_filter_top1,
        knobWidth, margin, uiTextSize,
        "q", ID::filterStereoMainMix_tweakTweakQMacro5_8Macro6Q));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro6_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakTweakQMacro5_8Macro6Q));
    
    const auto macro6_a_top0 = macrotabInsideTop0 + 1 * sectionHeight;
    const auto macro6_a_top1 = macro6_a_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addGroupLabel(macrotabInsideLeft0, macro6_a_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "A"));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro6_a_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::aStereoMainCz_pmCzIndexMacro5_8Macro6Index));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro6_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmCzIndexMacro5_8Macro6Index));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro6_a_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::aStereoMainCz_pmCzOctaveMacro5_8Macro6Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro6_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmCzOctaveMacro5_8Macro6Octave));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro6_a_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::aStereoMainCz_pmCzPhaseMacro5_8Macro6Phase));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro6_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmCzPhaseMacro5_8Macro6Phase));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro6_a_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::aStereoMainCz_pmPmPmaMacro5_8Macro6Pma));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro6_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmaMacro5_8Macro6Pma));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro6_a_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::aStereoMainCz_pmPmPmbMacro5_8Macro6Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro6_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmbMacro5_8Macro6Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro6_a_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::aStereoMainCz_pmPmPmcMacro5_8Macro6Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro6_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmcMacro5_8Macro6Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro6_a_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::aStereoMainCz_pmPmPmdMacro5_8Macro6Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro6_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmdMacro5_8Macro6Pmd));
    
    const auto macro6_b_top0 = macrotabInsideTop0 + 2 * sectionHeight;
    const auto macro6_b_top1 = macro6_b_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addGroupLabel(macrotabInsideLeft0, macro6_b_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "B"));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro6_b_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::bStereoMainCz_pmCzIndexMacro5_8Macro6Index));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro6_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmCzIndexMacro5_8Macro6Index));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro6_b_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::bStereoMainCz_pmCzOctaveMacro5_8Macro6Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro6_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmCzOctaveMacro5_8Macro6Octave));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro6_b_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::bStereoMainCz_pmCzPhaseMacro5_8Macro6Phase));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro6_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmCzPhaseMacro5_8Macro6Phase));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro6_b_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::bStereoMainCz_pmPmPmaMacro5_8Macro6Pma));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro6_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmaMacro5_8Macro6Pma));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro6_b_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::bStereoMainCz_pmPmPmbMacro5_8Macro6Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro6_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmbMacro5_8Macro6Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro6_b_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::bStereoMainCz_pmPmPmcMacro5_8Macro6Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro6_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmcMacro5_8Macro6Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro6_b_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::bStereoMainCz_pmPmPmdMacro5_8Macro6Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro6_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmdMacro5_8Macro6Pmd));
    
    const auto macro6_c_top0 = macrotabInsideTop0 + 3 * sectionHeight;
    const auto macro6_c_top1 = macro6_c_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addGroupLabel(macrotabInsideLeft0, macro6_c_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "C"));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro6_c_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::cStereoMainCz_pmCzIndexMacro5_8Macro6Index));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro6_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmCzIndexMacro5_8Macro6Index));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro6_c_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::cStereoMainCz_pmCzOctaveMacro5_8Macro6Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro6_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmCzOctaveMacro5_8Macro6Octave));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro6_c_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::cStereoMainCz_pmCzPhaseMacro5_8Macro6Phase));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro6_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmCzPhaseMacro5_8Macro6Phase));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro6_c_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::cStereoMainCz_pmPmPmaMacro5_8Macro6Pma));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro6_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmaMacro5_8Macro6Pma));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro6_c_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::cStereoMainCz_pmPmPmbMacro5_8Macro6Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro6_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmbMacro5_8Macro6Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro6_c_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::cStereoMainCz_pmPmPmcMacro5_8Macro6Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro6_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmcMacro5_8Macro6Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro6_c_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::cStereoMainCz_pmPmPmdMacro5_8Macro6Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro6_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmdMacro5_8Macro6Pmd));
    
    const auto macro6_d_top0 = macrotabInsideTop0 + 4 * sectionHeight;
    const auto macro6_d_top1 = macro6_d_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addGroupLabel(macrotabInsideLeft0, macro6_d_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "D"));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro6_d_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::dStereoMainCz_pmCzIndexMacro5_8Macro6Index));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro6_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmCzIndexMacro5_8Macro6Index));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro6_d_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::dStereoMainCz_pmCzOctaveMacro5_8Macro6Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro6_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmCzOctaveMacro5_8Macro6Octave));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro6_d_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::dStereoMainCz_pmCzPhaseMacro5_8Macro6Phase));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro6_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmCzPhaseMacro5_8Macro6Phase));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro6_d_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::dStereoMainCz_pmPmPmaMacro5_8Macro6Pma));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro6_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmaMacro5_8Macro6Pma));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro6_d_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::dStereoMainCz_pmPmPmbMacro5_8Macro6Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro6_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmbMacro5_8Macro6Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro6_d_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::dStereoMainCz_pmPmPmcMacro5_8Macro6Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro6_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmcMacro5_8Macro6Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro6_d_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::dStereoMainCz_pmPmPmdMacro5_8Macro6Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro6_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmdMacro5_8Macro6Pmd));
    
    
    const auto macro7_filter_top0 = macrotabInsideTop0 + 0 * sectionHeight;
    const auto macro7_filter_top1 = macro7_filter_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addGroupLabel(macrotabInsideLeft0, macro7_filter_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "Filter"));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro7_filter_top1,
        knobWidth, margin, uiTextSize,
        "svf", ID::filterStereoMainMix_tweakMixSvfMacro5_8Macro7Level));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro7_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakMixSvfMacro5_8Macro7Level));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro7_filter_top1,
        knobWidth, margin, uiTextSize,
        "ms20", ID::filterStereoMainMix_tweakMixMs20Macro5_8Macro7Level));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro7_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakMixMs20Macro5_8Macro7Level));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro7_filter_top1,
        knobWidth, margin, uiTextSize,
        "oberheim", ID::filterStereoMainMix_tweakMixOberheimMacro5_8Macro7Level));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro7_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakMixOberheimMacro5_8Macro7Level));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro7_filter_top1,
        knobWidth, margin, uiTextSize,
        "normfreq", ID::filterStereoMainMix_tweakTweakFreqMacro5_8Macro7Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro7_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakTweakFreqMacro5_8Macro7Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro7_filter_top1,
        knobWidth, margin, uiTextSize,
        "q", ID::filterStereoMainMix_tweakTweakQMacro5_8Macro7Q));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro7_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakTweakQMacro5_8Macro7Q));
    
    const auto macro7_a_top0 = macrotabInsideTop0 + 1 * sectionHeight;
    const auto macro7_a_top1 = macro7_a_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addGroupLabel(macrotabInsideLeft0, macro7_a_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "A"));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro7_a_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::aStereoMainCz_pmCzIndexMacro5_8Macro7Index));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro7_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmCzIndexMacro5_8Macro7Index));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro7_a_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::aStereoMainCz_pmCzOctaveMacro5_8Macro7Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro7_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmCzOctaveMacro5_8Macro7Octave));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro7_a_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::aStereoMainCz_pmCzPhaseMacro5_8Macro7Phase));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro7_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmCzPhaseMacro5_8Macro7Phase));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro7_a_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::aStereoMainCz_pmPmPmaMacro5_8Macro7Pma));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro7_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmaMacro5_8Macro7Pma));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro7_a_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::aStereoMainCz_pmPmPmbMacro5_8Macro7Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro7_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmbMacro5_8Macro7Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro7_a_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::aStereoMainCz_pmPmPmcMacro5_8Macro7Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro7_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmcMacro5_8Macro7Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro7_a_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::aStereoMainCz_pmPmPmdMacro5_8Macro7Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro7_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmdMacro5_8Macro7Pmd));
    
    const auto macro7_b_top0 = macrotabInsideTop0 + 2 * sectionHeight;
    const auto macro7_b_top1 = macro7_b_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addGroupLabel(macrotabInsideLeft0, macro7_b_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "B"));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro7_b_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::bStereoMainCz_pmCzIndexMacro5_8Macro7Index));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro7_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmCzIndexMacro5_8Macro7Index));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro7_b_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::bStereoMainCz_pmCzOctaveMacro5_8Macro7Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro7_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmCzOctaveMacro5_8Macro7Octave));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro7_b_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::bStereoMainCz_pmCzPhaseMacro5_8Macro7Phase));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro7_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmCzPhaseMacro5_8Macro7Phase));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro7_b_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::bStereoMainCz_pmPmPmaMacro5_8Macro7Pma));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro7_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmaMacro5_8Macro7Pma));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro7_b_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::bStereoMainCz_pmPmPmbMacro5_8Macro7Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro7_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmbMacro5_8Macro7Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro7_b_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::bStereoMainCz_pmPmPmcMacro5_8Macro7Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro7_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmcMacro5_8Macro7Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro7_b_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::bStereoMainCz_pmPmPmdMacro5_8Macro7Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro7_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmdMacro5_8Macro7Pmd));
    
    const auto macro7_c_top0 = macrotabInsideTop0 + 3 * sectionHeight;
    const auto macro7_c_top1 = macro7_c_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addGroupLabel(macrotabInsideLeft0, macro7_c_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "C"));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro7_c_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::cStereoMainCz_pmCzIndexMacro5_8Macro7Index));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro7_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmCzIndexMacro5_8Macro7Index));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro7_c_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::cStereoMainCz_pmCzOctaveMacro5_8Macro7Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro7_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmCzOctaveMacro5_8Macro7Octave));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro7_c_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::cStereoMainCz_pmCzPhaseMacro5_8Macro7Phase));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro7_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmCzPhaseMacro5_8Macro7Phase));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro7_c_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::cStereoMainCz_pmPmPmaMacro5_8Macro7Pma));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro7_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmaMacro5_8Macro7Pma));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro7_c_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::cStereoMainCz_pmPmPmbMacro5_8Macro7Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro7_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmbMacro5_8Macro7Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro7_c_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::cStereoMainCz_pmPmPmcMacro5_8Macro7Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro7_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmcMacro5_8Macro7Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro7_c_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::cStereoMainCz_pmPmPmdMacro5_8Macro7Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro7_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmdMacro5_8Macro7Pmd));
    
    const auto macro7_d_top0 = macrotabInsideTop0 + 4 * sectionHeight;
    const auto macro7_d_top1 = macro7_d_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addGroupLabel(macrotabInsideLeft0, macro7_d_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "D"));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro7_d_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::dStereoMainCz_pmCzIndexMacro5_8Macro7Index));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro7_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmCzIndexMacro5_8Macro7Index));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro7_d_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::dStereoMainCz_pmCzOctaveMacro5_8Macro7Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro7_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmCzOctaveMacro5_8Macro7Octave));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro7_d_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::dStereoMainCz_pmCzPhaseMacro5_8Macro7Phase));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro7_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmCzPhaseMacro5_8Macro7Phase));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro7_d_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::dStereoMainCz_pmPmPmaMacro5_8Macro7Pma));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro7_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmaMacro5_8Macro7Pma));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro7_d_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::dStereoMainCz_pmPmPmbMacro5_8Macro7Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro7_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmbMacro5_8Macro7Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro7_d_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::dStereoMainCz_pmPmPmcMacro5_8Macro7Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro7_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmcMacro5_8Macro7Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro7_d_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::dStereoMainCz_pmPmPmdMacro5_8Macro7Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro7_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmdMacro5_8Macro7Pmd));
    
    
    const auto macro8_filter_top0 = macrotabInsideTop0 + 0 * sectionHeight;
    const auto macro8_filter_top1 = macro8_filter_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addGroupLabel(macrotabInsideLeft0, macro8_filter_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "Filter"));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro8_filter_top1,
        knobWidth, margin, uiTextSize,
        "svf", ID::filterStereoMainMix_tweakMixSvfMacro5_8Macro8Level));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro8_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakMixSvfMacro5_8Macro8Level));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro8_filter_top1,
        knobWidth, margin, uiTextSize,
        "ms20", ID::filterStereoMainMix_tweakMixMs20Macro5_8Macro8Level));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro8_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakMixMs20Macro5_8Macro8Level));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro8_filter_top1,
        knobWidth, margin, uiTextSize,
        "oberheim", ID::filterStereoMainMix_tweakMixOberheimMacro5_8Macro8Level));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro8_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakMixOberheimMacro5_8Macro8Level));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro8_filter_top1,
        knobWidth, margin, uiTextSize,
        "normfreq", ID::filterStereoMainMix_tweakTweakFreqMacro5_8Macro8Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro8_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakTweakFreqMacro5_8Macro8Normfreq));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro8_filter_top1,
        knobWidth, margin, uiTextSize,
        "q", ID::filterStereoMainMix_tweakTweakQMacro5_8Macro8Q));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro8_filter_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::filterStereoL_roffsetMix_tweakTweakQMacro5_8Macro8Q));
    
    const auto macro8_a_top0 = macrotabInsideTop0 + 1 * sectionHeight;
    const auto macro8_a_top1 = macro8_a_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addGroupLabel(macrotabInsideLeft0, macro8_a_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "A"));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro8_a_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::aStereoMainCz_pmCzIndexMacro5_8Macro8Index));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro8_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmCzIndexMacro5_8Macro8Index));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro8_a_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::aStereoMainCz_pmCzOctaveMacro5_8Macro8Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro8_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmCzOctaveMacro5_8Macro8Octave));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro8_a_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::aStereoMainCz_pmCzPhaseMacro5_8Macro8Phase));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro8_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmCzPhaseMacro5_8Macro8Phase));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro8_a_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::aStereoMainCz_pmPmPmaMacro5_8Macro8Pma));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro8_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmaMacro5_8Macro8Pma));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro8_a_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::aStereoMainCz_pmPmPmbMacro5_8Macro8Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro8_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmbMacro5_8Macro8Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro8_a_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::aStereoMainCz_pmPmPmcMacro5_8Macro8Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro8_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmcMacro5_8Macro8Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro8_a_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::aStereoMainCz_pmPmPmdMacro5_8Macro8Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro8_a_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::aStereoL_roffsetCz_pmPmPmdMacro5_8Macro8Pmd));
    
    const auto macro8_b_top0 = macrotabInsideTop0 + 2 * sectionHeight;
    const auto macro8_b_top1 = macro8_b_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addGroupLabel(macrotabInsideLeft0, macro8_b_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "B"));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro8_b_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::bStereoMainCz_pmCzIndexMacro5_8Macro8Index));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro8_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmCzIndexMacro5_8Macro8Index));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro8_b_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::bStereoMainCz_pmCzOctaveMacro5_8Macro8Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro8_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmCzOctaveMacro5_8Macro8Octave));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro8_b_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::bStereoMainCz_pmCzPhaseMacro5_8Macro8Phase));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro8_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmCzPhaseMacro5_8Macro8Phase));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro8_b_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::bStereoMainCz_pmPmPmaMacro5_8Macro8Pma));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro8_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmaMacro5_8Macro8Pma));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro8_b_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::bStereoMainCz_pmPmPmbMacro5_8Macro8Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro8_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmbMacro5_8Macro8Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro8_b_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::bStereoMainCz_pmPmPmcMacro5_8Macro8Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro8_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmcMacro5_8Macro8Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro8_b_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::bStereoMainCz_pmPmPmdMacro5_8Macro8Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro8_b_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::bStereoL_roffsetCz_pmPmPmdMacro5_8Macro8Pmd));
    
    const auto macro8_c_top0 = macrotabInsideTop0 + 3 * sectionHeight;
    const auto macro8_c_top1 = macro8_c_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addGroupLabel(macrotabInsideLeft0, macro8_c_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "C"));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro8_c_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::cStereoMainCz_pmCzIndexMacro5_8Macro8Index));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro8_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmCzIndexMacro5_8Macro8Index));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro8_c_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::cStereoMainCz_pmCzOctaveMacro5_8Macro8Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro8_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmCzOctaveMacro5_8Macro8Octave));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro8_c_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::cStereoMainCz_pmCzPhaseMacro5_8Macro8Phase));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro8_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmCzPhaseMacro5_8Macro8Phase));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro8_c_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::cStereoMainCz_pmPmPmaMacro5_8Macro8Pma));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro8_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmaMacro5_8Macro8Pma));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro8_c_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::cStereoMainCz_pmPmPmbMacro5_8Macro8Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro8_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmbMacro5_8Macro8Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro8_c_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::cStereoMainCz_pmPmPmcMacro5_8Macro8Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro8_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmcMacro5_8Macro8Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro8_c_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::cStereoMainCz_pmPmPmdMacro5_8Macro8Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro8_c_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::cStereoL_roffsetCz_pmPmPmdMacro5_8Macro8Pmd));
    
    const auto macro8_d_top0 = macrotabInsideTop0 + 4 * sectionHeight;
    const auto macro8_d_top1 = macro8_d_top0 + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addGroupLabel(macrotabInsideLeft0, macro8_d_top0, macrotabInnerWidth,
        labelHeight, midTextSize, "D"));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, macro8_d_top1,
        knobWidth, margin, uiTextSize,
        "index", ID::dStereoMainCz_pmCzIndexMacro5_8Macro8Index));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, macro8_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmCzIndexMacro5_8Macro8Index));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addNumberKnob(macrotabInsideLeft0 + 1 * knobPairWidth, macro8_d_top1,
        knobWidth, margin, uiTextSize,
        "octave", ID::dStereoMainCz_pmCzOctaveMacro5_8Macro8Octave, Scales::octave));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, macro8_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmCzOctaveMacro5_8Macro8Octave));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth, macro8_d_top1,
        knobWidth, margin, uiTextSize,
        "phase", ID::dStereoMainCz_pmCzPhaseMacro5_8Macro8Phase));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 2 * knobPairWidth + knobWidth - margin, macro8_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmCzPhaseMacro5_8Macro8Phase));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth, macro8_d_top1,
        knobWidth, margin, uiTextSize,
        "pma", ID::dStereoMainCz_pmPmPmaMacro5_8Macro8Pma));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 3 * knobPairWidth + knobWidth - margin, macro8_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmaMacro5_8Macro8Pma));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth, macro8_d_top1,
        knobWidth, margin, uiTextSize,
        "pmb", ID::dStereoMainCz_pmPmPmbMacro5_8Macro8Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 4 * knobPairWidth + knobWidth - margin, macro8_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmbMacro5_8Macro8Pmb));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth, macro8_d_top1,
        knobWidth, margin, uiTextSize,
        "pmc", ID::dStereoMainCz_pmPmPmcMacro5_8Macro8Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 5 * knobPairWidth + knobWidth - margin, macro8_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmcMacro5_8Macro8Pmc));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth, macro8_d_top1,
        knobWidth, margin, uiTextSize,
        "pmd", ID::dStereoMainCz_pmPmPmdMacro5_8Macro8Pmd));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 6 * knobPairWidth + knobWidth - margin, macro8_d_top1,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::dStereoL_roffsetCz_pmPmPmdMacro5_8Macro8Pmd));
    
    
    const auto abcd_crossfade_top0 = macrotabInsideTop0 + 5 * sectionHeight + labelY;
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ab_cd", ID::globalStereoMainVectorAb_cdMacro1_4Macro1Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAb_cdMacro1_4Macro1Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ac_bd", ID::globalStereoMainVectorAc_bdMacro1_4Macro1Ac_bd));
    tabviewMacro->addWidget(macrotabIndex::macro1,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAc_bdMacro1_4Macro1Ac_bd));
    
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ab_cd", ID::globalStereoMainVectorAb_cdMacro1_4Macro2Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAb_cdMacro1_4Macro2Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ac_bd", ID::globalStereoMainVectorAc_bdMacro1_4Macro2Ac_bd));
    tabviewMacro->addWidget(macrotabIndex::macro2,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAc_bdMacro1_4Macro2Ac_bd));
    
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ab_cd", ID::globalStereoMainVectorAb_cdMacro1_4Macro3Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAb_cdMacro1_4Macro3Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ac_bd", ID::globalStereoMainVectorAc_bdMacro1_4Macro3Ac_bd));
    tabviewMacro->addWidget(macrotabIndex::macro3,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAc_bdMacro1_4Macro3Ac_bd));
    
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ab_cd", ID::globalStereoMainVectorAb_cdMacro1_4Macro4Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAb_cdMacro1_4Macro4Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ac_bd", ID::globalStereoMainVectorAc_bdMacro1_4Macro4Ac_bd));
    tabviewMacro->addWidget(macrotabIndex::macro4,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAc_bdMacro1_4Macro4Ac_bd));
    
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ab_cd", ID::globalStereoMainVectorAb_cdMacro5_8Macro5Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAb_cdMacro5_8Macro5Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ac_bd", ID::globalStereoMainVectorAc_bdMacro5_8Macro5Ac_bd));
    tabviewMacro->addWidget(macrotabIndex::macro5,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAc_bdMacro5_8Macro5Ac_bd));
    
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ab_cd", ID::globalStereoMainVectorAb_cdMacro5_8Macro6Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAb_cdMacro5_8Macro6Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ac_bd", ID::globalStereoMainVectorAc_bdMacro5_8Macro6Ac_bd));
    tabviewMacro->addWidget(macrotabIndex::macro6,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAc_bdMacro5_8Macro6Ac_bd));
    
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ab_cd", ID::globalStereoMainVectorAb_cdMacro5_8Macro7Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAb_cdMacro5_8Macro7Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ac_bd", ID::globalStereoMainVectorAc_bdMacro5_8Macro7Ac_bd));
    tabviewMacro->addWidget(macrotabIndex::macro7,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAc_bdMacro5_8Macro7Ac_bd));
    
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ab_cd", ID::globalStereoMainVectorAb_cdMacro5_8Macro8Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 0 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAb_cdMacro5_8Macro8Ab_cd));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth, abcd_crossfade_top0,
        knobWidth, margin, uiTextSize,
        "ac_bd", ID::globalStereoMainVectorAc_bdMacro5_8Macro8Ac_bd));
    tabviewMacro->addWidget(macrotabIndex::macro8,
      addKnob(macrotabInsideLeft0 + 1 * knobPairWidth + knobWidth - margin, abcd_crossfade_top0,
        spreadKnobWidth + 10, margin, uiTextSize,
        "", ID::globalStereoL_roffsetVectorAc_bdMacro5_8Macro8Ac_bd));
    
    tabviewMacro->refreshTab();

    std::vector<std::string> osc_type_a_options = {
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
      ID::aType, osc_type_a_options);
    std::vector<std::string> osc_type_b_options = {
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
      ID::bType, osc_type_b_options);
    std::vector<std::string> osc_type_c_options = {
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
      ID::cType, osc_type_c_options);
    std::vector<std::string> osc_type_d_options = {
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
      ID::dType, osc_type_d_options);
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
        "positivebendrange", ID::global0x00Positivebendrange));
    tabviewGlobal->addWidget(globaltabIndex::global,
      addKnob(globaltabInsideLeft0 + 1 * 2 * knobX, global_top1,
        knobWidth, margin, uiTextSize,
        "negativebendrange", ID::global0x00Negativebendrange));
    tabviewGlobal->addWidget(globaltabIndex::global,
      addKnob(globaltabInsideLeft0 + 2 * 2 * knobX, global_top1,
        knobWidth, margin, uiTextSize,
        "masterphase", ID::globalMasterphase));
    tabviewGlobal->addWidget(globaltabIndex::global,
      addKnob(globaltabInsideLeft0 + 3 * 2 * knobX, global_top1,
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
        ID::global0x00Portaoff_auto_on, portaoff_auto_on_options));
    
    tabviewGlobal->addWidget(globaltabIndex::global,
      addCheckbox(
        global_left1, global_top2 + 0 * labelY,
        2 * knobX, labelHeight, uiTextSize,
        "freefloatosc", ID::global0x00Freefloatosc));
    

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
        "uptime", ID::modulation1Uptime));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 1 * knobX, mod1_top1,
        knobWidth, margin, uiTextSize,
        "downtime", ID::modulation1Downtime));
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
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 10 * knobX, mod1_top1,
        knobWidth, margin, uiTextSize,
        "after_touch", ID::modulation1After_touch));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 11 * knobX, mod1_top1,
        knobWidth, margin, uiTextSize,
        "note", ID::modulation1Note));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 12 * knobX, mod1_top1,
        knobWidth, margin, uiTextSize,
        "velocity", ID::modulation1Velocity));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 13 * knobX, mod1_top1,
        knobWidth, margin, uiTextSize,
        "mod_wheel", ID::modulation1Mod_wheel));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 14 * knobX, mod1_top1,
        knobWidth, margin, uiTextSize,
        "pitch_wheel", ID::modulation1Pitch_wheel));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 15 * knobX, mod1_top1,
        knobWidth, margin, uiTextSize,
        "random", ID::modulation1Random));
    
    const auto mod2_top0 = modulationTop1 + 1 * sectionHeight;
    const auto mod2_top1 = mod2_top0 + labelY;
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addGroupLabel(globaltabInsideLeft0, mod2_top0, globaltabInnerWidth,
        labelHeight, midTextSize, "2"));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 0 * knobX, mod2_top1,
        knobWidth, margin, uiTextSize,
        "uptime", ID::modulation2Uptime));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 1 * knobX, mod2_top1,
        knobWidth, margin, uiTextSize,
        "downtime", ID::modulation2Downtime));
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
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 10 * knobX, mod2_top1,
        knobWidth, margin, uiTextSize,
        "after_touch", ID::modulation2After_touch));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 11 * knobX, mod2_top1,
        knobWidth, margin, uiTextSize,
        "note", ID::modulation2Note));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 12 * knobX, mod2_top1,
        knobWidth, margin, uiTextSize,
        "velocity", ID::modulation2Velocity));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 13 * knobX, mod2_top1,
        knobWidth, margin, uiTextSize,
        "mod_wheel", ID::modulation2Mod_wheel));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 14 * knobX, mod2_top1,
        knobWidth, margin, uiTextSize,
        "pitch_wheel", ID::modulation2Pitch_wheel));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 15 * knobX, mod2_top1,
        knobWidth, margin, uiTextSize,
        "random", ID::modulation2Random));
    
    const auto mod3_top0 = modulationTop1 + 2 * sectionHeight;
    const auto mod3_top1 = mod3_top0 + labelY;
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addGroupLabel(globaltabInsideLeft0, mod3_top0, globaltabInnerWidth,
        labelHeight, midTextSize, "3"));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 0 * knobX, mod3_top1,
        knobWidth, margin, uiTextSize,
        "uptime", ID::modulation3Uptime));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 1 * knobX, mod3_top1,
        knobWidth, margin, uiTextSize,
        "downtime", ID::modulation3Downtime));
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
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 10 * knobX, mod3_top1,
        knobWidth, margin, uiTextSize,
        "after_touch", ID::modulation3After_touch));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 11 * knobX, mod3_top1,
        knobWidth, margin, uiTextSize,
        "note", ID::modulation3Note));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 12 * knobX, mod3_top1,
        knobWidth, margin, uiTextSize,
        "velocity", ID::modulation3Velocity));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 13 * knobX, mod3_top1,
        knobWidth, margin, uiTextSize,
        "mod_wheel", ID::modulation3Mod_wheel));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 14 * knobX, mod3_top1,
        knobWidth, margin, uiTextSize,
        "pitch_wheel", ID::modulation3Pitch_wheel));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 15 * knobX, mod3_top1,
        knobWidth, margin, uiTextSize,
        "random", ID::modulation3Random));
    
    tabviewGlobal->refreshTab();
  }
};

UI *createUI() { return new DigiDrieUI(); }

END_NAMESPACE_DISTRHO
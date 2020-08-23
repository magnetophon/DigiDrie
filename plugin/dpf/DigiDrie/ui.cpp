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
constexpr float xyPadSize = 128.0f;
constexpr float matrixKnobSize = labelHeight;
constexpr float crossfade_width = xyPadSize + knobX + uiMargin;
constexpr float crossfade_height = xyPadSize + labelY + uiMargin;

constexpr float sectionHeight = labelY + knobY;
constexpr float knobPairWidth = knobX + spreadKnobWidth;
constexpr float innerWidth = 1400;
constexpr float innerHeight = 800;

constexpr uint32_t defaultWidth = uint32_t(2 * uiMargin + innerWidth);
constexpr uint32_t defaultHeight = uint32_t(2 * uiMargin + innerHeight);

enum globaltabIndex {
  global,
  main,
  l_roffset,
  envelope,
  lfo,
  modulation,
};

class DigiDrieUI : public PluginUIBase {
protected:
  std::shared_ptr<XYPad> xypad_abcd_macro1_main;
  std::shared_ptr<XYPad> xypad_abcd_macro1_offset;
  std::shared_ptr<ValueWidget> widget_macro1_ab_cd_main;
  std::shared_ptr<ValueWidget> widget_macro1_ab_cd_offset;
  std::shared_ptr<ValueWidget> widget_macro1_ac_bd_main;
  std::shared_ptr<ValueWidget> widget_macro1_ac_bd_offset;
  
  std::shared_ptr<XYPad> xypad_abcd_macro2_main;
  std::shared_ptr<XYPad> xypad_abcd_macro2_offset;
  std::shared_ptr<ValueWidget> widget_macro2_ab_cd_main;
  std::shared_ptr<ValueWidget> widget_macro2_ab_cd_offset;
  std::shared_ptr<ValueWidget> widget_macro2_ac_bd_main;
  std::shared_ptr<ValueWidget> widget_macro2_ac_bd_offset;
  
  std::shared_ptr<XYPad> xypad_abcd_macro3_main;
  std::shared_ptr<XYPad> xypad_abcd_macro3_offset;
  std::shared_ptr<ValueWidget> widget_macro3_ab_cd_main;
  std::shared_ptr<ValueWidget> widget_macro3_ab_cd_offset;
  std::shared_ptr<ValueWidget> widget_macro3_ac_bd_main;
  std::shared_ptr<ValueWidget> widget_macro3_ac_bd_offset;
  
  std::shared_ptr<XYPad> xypad_abcd_macro4_main;
  std::shared_ptr<XYPad> xypad_abcd_macro4_offset;
  std::shared_ptr<ValueWidget> widget_macro4_ab_cd_main;
  std::shared_ptr<ValueWidget> widget_macro4_ab_cd_offset;
  std::shared_ptr<ValueWidget> widget_macro4_ac_bd_main;
  std::shared_ptr<ValueWidget> widget_macro4_ac_bd_offset;
  
  std::shared_ptr<XYPad> xypad_abcd_macro5_main;
  std::shared_ptr<XYPad> xypad_abcd_macro5_offset;
  std::shared_ptr<ValueWidget> widget_macro5_ab_cd_main;
  std::shared_ptr<ValueWidget> widget_macro5_ab_cd_offset;
  std::shared_ptr<ValueWidget> widget_macro5_ac_bd_main;
  std::shared_ptr<ValueWidget> widget_macro5_ac_bd_offset;
  
  std::shared_ptr<XYPad> xypad_abcd_macro6_main;
  std::shared_ptr<XYPad> xypad_abcd_macro6_offset;
  std::shared_ptr<ValueWidget> widget_macro6_ab_cd_main;
  std::shared_ptr<ValueWidget> widget_macro6_ab_cd_offset;
  std::shared_ptr<ValueWidget> widget_macro6_ac_bd_main;
  std::shared_ptr<ValueWidget> widget_macro6_ac_bd_offset;
  
  std::shared_ptr<XYPad> xypad_abcd_macro7_main;
  std::shared_ptr<XYPad> xypad_abcd_macro7_offset;
  std::shared_ptr<ValueWidget> widget_macro7_ab_cd_main;
  std::shared_ptr<ValueWidget> widget_macro7_ab_cd_offset;
  std::shared_ptr<ValueWidget> widget_macro7_ac_bd_main;
  std::shared_ptr<ValueWidget> widget_macro7_ac_bd_offset;
  
  std::shared_ptr<XYPad> xypad_abcd_macro8_main;
  std::shared_ptr<XYPad> xypad_abcd_macro8_offset;
  std::shared_ptr<ValueWidget> widget_macro8_ab_cd_main;
  std::shared_ptr<ValueWidget> widget_macro8_ab_cd_offset;
  std::shared_ptr<ValueWidget> widget_macro8_ac_bd_main;
  std::shared_ptr<ValueWidget> widget_macro8_ac_bd_offset;
  
  

  std::shared_ptr<XYPad> xypad_xy;
  std::shared_ptr<XYPad> xypad_xz;
  std::shared_ptr<XYPad> xypad_zy;
  std::shared_ptr<ValueWidget> widget_axis1;
  std::shared_ptr<ValueWidget> widget_axis2;
  std::shared_ptr<ValueWidget> widget_axis3;

  void onNanoDisplay() override
  {
    beginPath();
    rect(0, 0, getWidth(), getHeight());
    fillColor(palette.background());
    fill();
  }

  void parameterChanged(uint32_t index, float value) override
  {
    PluginUIBase::parameterChanged(index, value);
  }

  bool syncUI(uint32_t id, float normalized) {
    using ID = ParameterID::ID;

    switch (id) {
      case ID::globalStereoMainVectorAb_cdMacro1_4Macro1Ab_cd:
        xypad_abcd_macro1_main->setValueAt(0, normalized);
        widget_macro1_ab_cd_main->setValue(normalized);
        break;

      case ID::globalStereoL_roffsetVectorAb_cdMacro1_4Macro1Ab_cd:
        xypad_abcd_macro1_offset->setValueAt(0, normalized);
        widget_macro1_ab_cd_offset->setValue(normalized);
        break;
      case ID::globalStereoMainVectorAc_bdMacro1_4Macro1Ac_bd:
        xypad_abcd_macro1_main->setValueAt(1, normalized);
        widget_macro1_ac_bd_main->setValue(normalized);
        break;

      case ID::globalStereoL_roffsetVectorAc_bdMacro1_4Macro1Ac_bd:
        xypad_abcd_macro1_offset->setValueAt(1, normalized);
        widget_macro1_ac_bd_offset->setValue(normalized);
        break;
      
      case ID::globalStereoMainVectorAb_cdMacro1_4Macro2Ab_cd:
        xypad_abcd_macro2_main->setValueAt(0, normalized);
        widget_macro2_ab_cd_main->setValue(normalized);
        break;

      case ID::globalStereoL_roffsetVectorAb_cdMacro1_4Macro2Ab_cd:
        xypad_abcd_macro2_offset->setValueAt(0, normalized);
        widget_macro2_ab_cd_offset->setValue(normalized);
        break;
      case ID::globalStereoMainVectorAc_bdMacro1_4Macro2Ac_bd:
        xypad_abcd_macro2_main->setValueAt(1, normalized);
        widget_macro2_ac_bd_main->setValue(normalized);
        break;

      case ID::globalStereoL_roffsetVectorAc_bdMacro1_4Macro2Ac_bd:
        xypad_abcd_macro2_offset->setValueAt(1, normalized);
        widget_macro2_ac_bd_offset->setValue(normalized);
        break;
      
      case ID::globalStereoMainVectorAb_cdMacro1_4Macro3Ab_cd:
        xypad_abcd_macro3_main->setValueAt(0, normalized);
        widget_macro3_ab_cd_main->setValue(normalized);
        break;

      case ID::globalStereoL_roffsetVectorAb_cdMacro1_4Macro3Ab_cd:
        xypad_abcd_macro3_offset->setValueAt(0, normalized);
        widget_macro3_ab_cd_offset->setValue(normalized);
        break;
      case ID::globalStereoMainVectorAc_bdMacro1_4Macro3Ac_bd:
        xypad_abcd_macro3_main->setValueAt(1, normalized);
        widget_macro3_ac_bd_main->setValue(normalized);
        break;

      case ID::globalStereoL_roffsetVectorAc_bdMacro1_4Macro3Ac_bd:
        xypad_abcd_macro3_offset->setValueAt(1, normalized);
        widget_macro3_ac_bd_offset->setValue(normalized);
        break;
      
      case ID::globalStereoMainVectorAb_cdMacro1_4Macro4Ab_cd:
        xypad_abcd_macro4_main->setValueAt(0, normalized);
        widget_macro4_ab_cd_main->setValue(normalized);
        break;

      case ID::globalStereoL_roffsetVectorAb_cdMacro1_4Macro4Ab_cd:
        xypad_abcd_macro4_offset->setValueAt(0, normalized);
        widget_macro4_ab_cd_offset->setValue(normalized);
        break;
      case ID::globalStereoMainVectorAc_bdMacro1_4Macro4Ac_bd:
        xypad_abcd_macro4_main->setValueAt(1, normalized);
        widget_macro4_ac_bd_main->setValue(normalized);
        break;

      case ID::globalStereoL_roffsetVectorAc_bdMacro1_4Macro4Ac_bd:
        xypad_abcd_macro4_offset->setValueAt(1, normalized);
        widget_macro4_ac_bd_offset->setValue(normalized);
        break;
      
      case ID::globalStereoMainVectorAb_cdMacro5_8Macro5Ab_cd:
        xypad_abcd_macro5_main->setValueAt(0, normalized);
        widget_macro5_ab_cd_main->setValue(normalized);
        break;

      case ID::globalStereoL_roffsetVectorAb_cdMacro5_8Macro5Ab_cd:
        xypad_abcd_macro5_offset->setValueAt(0, normalized);
        widget_macro5_ab_cd_offset->setValue(normalized);
        break;
      case ID::globalStereoMainVectorAc_bdMacro5_8Macro5Ac_bd:
        xypad_abcd_macro5_main->setValueAt(1, normalized);
        widget_macro5_ac_bd_main->setValue(normalized);
        break;

      case ID::globalStereoL_roffsetVectorAc_bdMacro5_8Macro5Ac_bd:
        xypad_abcd_macro5_offset->setValueAt(1, normalized);
        widget_macro5_ac_bd_offset->setValue(normalized);
        break;
      
      case ID::globalStereoMainVectorAb_cdMacro5_8Macro6Ab_cd:
        xypad_abcd_macro6_main->setValueAt(0, normalized);
        widget_macro6_ab_cd_main->setValue(normalized);
        break;

      case ID::globalStereoL_roffsetVectorAb_cdMacro5_8Macro6Ab_cd:
        xypad_abcd_macro6_offset->setValueAt(0, normalized);
        widget_macro6_ab_cd_offset->setValue(normalized);
        break;
      case ID::globalStereoMainVectorAc_bdMacro5_8Macro6Ac_bd:
        xypad_abcd_macro6_main->setValueAt(1, normalized);
        widget_macro6_ac_bd_main->setValue(normalized);
        break;

      case ID::globalStereoL_roffsetVectorAc_bdMacro5_8Macro6Ac_bd:
        xypad_abcd_macro6_offset->setValueAt(1, normalized);
        widget_macro6_ac_bd_offset->setValue(normalized);
        break;
      
      case ID::globalStereoMainVectorAb_cdMacro5_8Macro7Ab_cd:
        xypad_abcd_macro7_main->setValueAt(0, normalized);
        widget_macro7_ab_cd_main->setValue(normalized);
        break;

      case ID::globalStereoL_roffsetVectorAb_cdMacro5_8Macro7Ab_cd:
        xypad_abcd_macro7_offset->setValueAt(0, normalized);
        widget_macro7_ab_cd_offset->setValue(normalized);
        break;
      case ID::globalStereoMainVectorAc_bdMacro5_8Macro7Ac_bd:
        xypad_abcd_macro7_main->setValueAt(1, normalized);
        widget_macro7_ac_bd_main->setValue(normalized);
        break;

      case ID::globalStereoL_roffsetVectorAc_bdMacro5_8Macro7Ac_bd:
        xypad_abcd_macro7_offset->setValueAt(1, normalized);
        widget_macro7_ac_bd_offset->setValue(normalized);
        break;
      
      case ID::globalStereoMainVectorAb_cdMacro5_8Macro8Ab_cd:
        xypad_abcd_macro8_main->setValueAt(0, normalized);
        widget_macro8_ab_cd_main->setValue(normalized);
        break;

      case ID::globalStereoL_roffsetVectorAb_cdMacro5_8Macro8Ab_cd:
        xypad_abcd_macro8_offset->setValueAt(0, normalized);
        widget_macro8_ab_cd_offset->setValue(normalized);
        break;
      case ID::globalStereoMainVectorAc_bdMacro5_8Macro8Ac_bd:
        xypad_abcd_macro8_main->setValueAt(1, normalized);
        widget_macro8_ac_bd_main->setValue(normalized);
        break;

      case ID::globalStereoL_roffsetVectorAc_bdMacro5_8Macro8Ac_bd:
        xypad_abcd_macro8_offset->setValueAt(1, normalized);
        widget_macro8_ac_bd_offset->setValue(normalized);
        break;
      
      

      case ID::modulation1Macro:
        xypad_xy->setValueAt(0, normalized);
        xypad_xz->setValueAt(0, normalized);
        widget_axis1->setValue(normalized);
        break;

      case ID::modulation2Macro:
        xypad_xy->setValueAt(1, normalized);
        xypad_zy->setValueAt(1, normalized);
        widget_axis2->setValue(normalized);
        break;

      case ID::modulation3Macro:
        xypad_xz->setValueAt(1, normalized);
        xypad_zy->setValueAt(0, normalized);
        widget_axis3->setValue(normalized);
        break;

      default:
        return false;
    }
    repaint();
    return true;
  }

  void updateUI(uint32_t id, float normalized) override
  {
    if (syncUI(id, normalized)) return;
    PluginUIBase::updateUI(id, normalized);
    return;
  }

  void updateValue(uint32_t id, float normalized) override
  {
    syncUI(id, normalized);
    PluginUIBase::updateValue(id, normalized);
    return;
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
    const auto globaltabInnerWidth = 10 * knobPairWidth;
    const auto globaltabWidth = globaltabInnerWidth + 2 * uiMargin;
    const auto globaltabHeight = innerHeight;
    std::vector<std::string> globalTabs = {
      "Global",
      "Main",
      "L-R Offset",
      "Envelope",
      "LFO",
      "Modulation",
    };
    auto tabviewGlobal
      = addTabView(tabLeft0, tabTop0, globaltabWidth, globaltabHeight,
        uiTextSize, labelY, globalTabs);

    const auto globaltabInsideTop0 = tabTop0 + labelY + uiMargin;
    const auto globaltabInsideLeft0 = tabLeft0 + uiMargin;

    constexpr uint32_t nRow = 33;
    constexpr uint32_t nCol = 8;
    constexpr uint32_t matrixWidth = nCol * matrixKnobSize;
    constexpr uint32_t matrixHeight = nRow * matrixKnobSize;
    constexpr float matrixLabelWidth = 2 * knobX - margin;
    const auto macroTop0 = globaltabInsideTop0;
    const auto macroTop1 = macroTop0 + 2 * labelHeight;
    const auto macroTop2 = macroTop1 + matrixHeight + margin;
    const auto macroLeft0 = globaltabInsideLeft0;
    const auto macroLeft1 = macroLeft0 + 2 * knobX;
    std::vector<uint32_t> mainMatrixId(nRow * nCol);
    std::vector<uint32_t> offsetMatrixId(nRow * nCol);
    
    constexpr uint32_t macro1_index = 0;
    
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 0 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "filter.normfreq", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 0 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "filter.normfreq", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 0 * nCol]
      = ID::filterStereoMainMix_tweakTweakFreqMacro1_4Macro1Normfreq;
    offsetMatrixId[macro1_index + 0 * nCol]
      = ID::filterStereoL_roffsetMix_tweakTweakFreqMacro1_4Macro1Normfreq;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 1 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "filter.q", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 1 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "filter.q", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 1 * nCol]
      = ID::filterStereoMainMix_tweakTweakQMacro1_4Macro1Q;
    offsetMatrixId[macro1_index + 1 * nCol]
      = ID::filterStereoL_roffsetMix_tweakTweakQMacro1_4Macro1Q;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 2 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "filter.svf", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 2 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "filter.svf", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 2 * nCol]
      = ID::filterStereoMainMix_tweakMixSvfMacro1_4Macro1Level;
    offsetMatrixId[macro1_index + 2 * nCol]
      = ID::filterStereoL_roffsetMix_tweakMixSvfMacro1_4Macro1Level;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 3 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "filter.ms20", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 3 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "filter.ms20", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 3 * nCol]
      = ID::filterStereoMainMix_tweakMixMs20Macro1_4Macro1Level;
    offsetMatrixId[macro1_index + 3 * nCol]
      = ID::filterStereoL_roffsetMix_tweakMixMs20Macro1_4Macro1Level;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 4 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "filter.oberheim", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 4 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "filter.oberheim", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 4 * nCol]
      = ID::filterStereoMainMix_tweakMixOberheimMacro1_4Macro1Level;
    offsetMatrixId[macro1_index + 4 * nCol]
      = ID::filterStereoL_roffsetMix_tweakMixOberheimMacro1_4Macro1Level;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 5 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "a.index", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 5 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "a.index", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 5 * nCol]
      = ID::aStereoMainCz_pmCzIndexMacro1_4Macro1Index;
    offsetMatrixId[macro1_index + 5 * nCol]
      = ID::aStereoL_roffsetCz_pmCzIndexMacro1_4Macro1Index;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 6 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "a.octave", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 6 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "a.octave", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 6 * nCol]
      = ID::aStereoMainCz_pmCzOctaveMacro1_4Macro1Octave;
    offsetMatrixId[macro1_index + 6 * nCol]
      = ID::aStereoL_roffsetCz_pmCzOctaveMacro1_4Macro1Octave;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 7 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "a.phase", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 7 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "a.phase", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 7 * nCol]
      = ID::aStereoMainCz_pmCzPhaseMacro1_4Macro1Phase;
    offsetMatrixId[macro1_index + 7 * nCol]
      = ID::aStereoL_roffsetCz_pmCzPhaseMacro1_4Macro1Phase;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 8 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "a.pma", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 8 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "a.pma", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 8 * nCol]
      = ID::aStereoMainCz_pmPmPmaMacro1_4Macro1Pma;
    offsetMatrixId[macro1_index + 8 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmaMacro1_4Macro1Pma;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 9 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "a.pmb", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 9 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "a.pmb", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 9 * nCol]
      = ID::aStereoMainCz_pmPmPmbMacro1_4Macro1Pmb;
    offsetMatrixId[macro1_index + 9 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmbMacro1_4Macro1Pmb;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 10 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "a.pmc", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 10 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "a.pmc", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 10 * nCol]
      = ID::aStereoMainCz_pmPmPmcMacro1_4Macro1Pmc;
    offsetMatrixId[macro1_index + 10 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmcMacro1_4Macro1Pmc;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 11 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "a.pmd", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 11 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "a.pmd", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 11 * nCol]
      = ID::aStereoMainCz_pmPmPmdMacro1_4Macro1Pmd;
    offsetMatrixId[macro1_index + 11 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmdMacro1_4Macro1Pmd;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 12 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "b.index", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 12 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "b.index", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 12 * nCol]
      = ID::bStereoMainCz_pmCzIndexMacro1_4Macro1Index;
    offsetMatrixId[macro1_index + 12 * nCol]
      = ID::bStereoL_roffsetCz_pmCzIndexMacro1_4Macro1Index;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 13 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "b.octave", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 13 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "b.octave", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 13 * nCol]
      = ID::bStereoMainCz_pmCzOctaveMacro1_4Macro1Octave;
    offsetMatrixId[macro1_index + 13 * nCol]
      = ID::bStereoL_roffsetCz_pmCzOctaveMacro1_4Macro1Octave;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 14 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "b.phase", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 14 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "b.phase", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 14 * nCol]
      = ID::bStereoMainCz_pmCzPhaseMacro1_4Macro1Phase;
    offsetMatrixId[macro1_index + 14 * nCol]
      = ID::bStereoL_roffsetCz_pmCzPhaseMacro1_4Macro1Phase;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 15 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "b.pma", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 15 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "b.pma", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 15 * nCol]
      = ID::bStereoMainCz_pmPmPmaMacro1_4Macro1Pma;
    offsetMatrixId[macro1_index + 15 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmaMacro1_4Macro1Pma;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 16 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "b.pmb", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 16 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "b.pmb", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 16 * nCol]
      = ID::bStereoMainCz_pmPmPmbMacro1_4Macro1Pmb;
    offsetMatrixId[macro1_index + 16 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmbMacro1_4Macro1Pmb;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 17 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "b.pmc", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 17 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "b.pmc", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 17 * nCol]
      = ID::bStereoMainCz_pmPmPmcMacro1_4Macro1Pmc;
    offsetMatrixId[macro1_index + 17 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmcMacro1_4Macro1Pmc;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 18 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "b.pmd", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 18 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "b.pmd", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 18 * nCol]
      = ID::bStereoMainCz_pmPmPmdMacro1_4Macro1Pmd;
    offsetMatrixId[macro1_index + 18 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmdMacro1_4Macro1Pmd;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 19 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "c.index", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 19 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "c.index", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 19 * nCol]
      = ID::cStereoMainCz_pmCzIndexMacro1_4Macro1Index;
    offsetMatrixId[macro1_index + 19 * nCol]
      = ID::cStereoL_roffsetCz_pmCzIndexMacro1_4Macro1Index;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 20 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "c.octave", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 20 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "c.octave", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 20 * nCol]
      = ID::cStereoMainCz_pmCzOctaveMacro1_4Macro1Octave;
    offsetMatrixId[macro1_index + 20 * nCol]
      = ID::cStereoL_roffsetCz_pmCzOctaveMacro1_4Macro1Octave;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 21 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "c.phase", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 21 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "c.phase", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 21 * nCol]
      = ID::cStereoMainCz_pmCzPhaseMacro1_4Macro1Phase;
    offsetMatrixId[macro1_index + 21 * nCol]
      = ID::cStereoL_roffsetCz_pmCzPhaseMacro1_4Macro1Phase;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 22 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "c.pma", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 22 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "c.pma", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 22 * nCol]
      = ID::cStereoMainCz_pmPmPmaMacro1_4Macro1Pma;
    offsetMatrixId[macro1_index + 22 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmaMacro1_4Macro1Pma;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 23 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "c.pmb", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 23 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "c.pmb", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 23 * nCol]
      = ID::cStereoMainCz_pmPmPmbMacro1_4Macro1Pmb;
    offsetMatrixId[macro1_index + 23 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmbMacro1_4Macro1Pmb;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 24 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "c.pmc", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 24 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "c.pmc", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 24 * nCol]
      = ID::cStereoMainCz_pmPmPmcMacro1_4Macro1Pmc;
    offsetMatrixId[macro1_index + 24 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmcMacro1_4Macro1Pmc;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 25 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "c.pmd", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 25 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "c.pmd", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 25 * nCol]
      = ID::cStereoMainCz_pmPmPmdMacro1_4Macro1Pmd;
    offsetMatrixId[macro1_index + 25 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmdMacro1_4Macro1Pmd;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 26 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "d.index", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 26 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "d.index", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 26 * nCol]
      = ID::dStereoMainCz_pmCzIndexMacro1_4Macro1Index;
    offsetMatrixId[macro1_index + 26 * nCol]
      = ID::dStereoL_roffsetCz_pmCzIndexMacro1_4Macro1Index;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 27 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "d.octave", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 27 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "d.octave", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 27 * nCol]
      = ID::dStereoMainCz_pmCzOctaveMacro1_4Macro1Octave;
    offsetMatrixId[macro1_index + 27 * nCol]
      = ID::dStereoL_roffsetCz_pmCzOctaveMacro1_4Macro1Octave;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 28 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "d.phase", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 28 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "d.phase", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 28 * nCol]
      = ID::dStereoMainCz_pmCzPhaseMacro1_4Macro1Phase;
    offsetMatrixId[macro1_index + 28 * nCol]
      = ID::dStereoL_roffsetCz_pmCzPhaseMacro1_4Macro1Phase;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 29 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "d.pma", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 29 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "d.pma", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 29 * nCol]
      = ID::dStereoMainCz_pmPmPmaMacro1_4Macro1Pma;
    offsetMatrixId[macro1_index + 29 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmaMacro1_4Macro1Pma;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 30 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "d.pmb", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 30 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "d.pmb", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 30 * nCol]
      = ID::dStereoMainCz_pmPmPmbMacro1_4Macro1Pmb;
    offsetMatrixId[macro1_index + 30 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmbMacro1_4Macro1Pmb;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 31 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "d.pmc", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 31 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "d.pmc", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 31 * nCol]
      = ID::dStereoMainCz_pmPmPmcMacro1_4Macro1Pmc;
    offsetMatrixId[macro1_index + 31 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmcMacro1_4Macro1Pmc;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft0, macroTop1 + 32 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "d.pmd", ALIGN_RIGHT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft0, macroTop1 + 32 * matrixKnobSize,
        matrixLabelWidth, matrixKnobSize, uiTextSize,
        "d.pmd", ALIGN_RIGHT | ALIGN_MIDDLE));
    mainMatrixId[macro1_index + 32 * nCol]
      = ID::dStereoMainCz_pmPmPmdMacro1_4Macro1Pmd;
    offsetMatrixId[macro1_index + 32 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmdMacro1_4Macro1Pmd;
    
    constexpr uint32_t macro2_index = 1;
    
    mainMatrixId[macro2_index + 0 * nCol]
      = ID::filterStereoMainMix_tweakTweakFreqMacro1_4Macro2Normfreq;
    offsetMatrixId[macro2_index + 0 * nCol]
      = ID::filterStereoL_roffsetMix_tweakTweakFreqMacro1_4Macro2Normfreq;
    mainMatrixId[macro2_index + 1 * nCol]
      = ID::filterStereoMainMix_tweakTweakQMacro1_4Macro2Q;
    offsetMatrixId[macro2_index + 1 * nCol]
      = ID::filterStereoL_roffsetMix_tweakTweakQMacro1_4Macro2Q;
    mainMatrixId[macro2_index + 2 * nCol]
      = ID::filterStereoMainMix_tweakMixSvfMacro1_4Macro2Level;
    offsetMatrixId[macro2_index + 2 * nCol]
      = ID::filterStereoL_roffsetMix_tweakMixSvfMacro1_4Macro2Level;
    mainMatrixId[macro2_index + 3 * nCol]
      = ID::filterStereoMainMix_tweakMixMs20Macro1_4Macro2Level;
    offsetMatrixId[macro2_index + 3 * nCol]
      = ID::filterStereoL_roffsetMix_tweakMixMs20Macro1_4Macro2Level;
    mainMatrixId[macro2_index + 4 * nCol]
      = ID::filterStereoMainMix_tweakMixOberheimMacro1_4Macro2Level;
    offsetMatrixId[macro2_index + 4 * nCol]
      = ID::filterStereoL_roffsetMix_tweakMixOberheimMacro1_4Macro2Level;
    mainMatrixId[macro2_index + 5 * nCol]
      = ID::aStereoMainCz_pmCzIndexMacro1_4Macro2Index;
    offsetMatrixId[macro2_index + 5 * nCol]
      = ID::aStereoL_roffsetCz_pmCzIndexMacro1_4Macro2Index;
    mainMatrixId[macro2_index + 6 * nCol]
      = ID::aStereoMainCz_pmCzOctaveMacro1_4Macro2Octave;
    offsetMatrixId[macro2_index + 6 * nCol]
      = ID::aStereoL_roffsetCz_pmCzOctaveMacro1_4Macro2Octave;
    mainMatrixId[macro2_index + 7 * nCol]
      = ID::aStereoMainCz_pmCzPhaseMacro1_4Macro2Phase;
    offsetMatrixId[macro2_index + 7 * nCol]
      = ID::aStereoL_roffsetCz_pmCzPhaseMacro1_4Macro2Phase;
    mainMatrixId[macro2_index + 8 * nCol]
      = ID::aStereoMainCz_pmPmPmaMacro1_4Macro2Pma;
    offsetMatrixId[macro2_index + 8 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmaMacro1_4Macro2Pma;
    mainMatrixId[macro2_index + 9 * nCol]
      = ID::aStereoMainCz_pmPmPmbMacro1_4Macro2Pmb;
    offsetMatrixId[macro2_index + 9 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmbMacro1_4Macro2Pmb;
    mainMatrixId[macro2_index + 10 * nCol]
      = ID::aStereoMainCz_pmPmPmcMacro1_4Macro2Pmc;
    offsetMatrixId[macro2_index + 10 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmcMacro1_4Macro2Pmc;
    mainMatrixId[macro2_index + 11 * nCol]
      = ID::aStereoMainCz_pmPmPmdMacro1_4Macro2Pmd;
    offsetMatrixId[macro2_index + 11 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmdMacro1_4Macro2Pmd;
    mainMatrixId[macro2_index + 12 * nCol]
      = ID::bStereoMainCz_pmCzIndexMacro1_4Macro2Index;
    offsetMatrixId[macro2_index + 12 * nCol]
      = ID::bStereoL_roffsetCz_pmCzIndexMacro1_4Macro2Index;
    mainMatrixId[macro2_index + 13 * nCol]
      = ID::bStereoMainCz_pmCzOctaveMacro1_4Macro2Octave;
    offsetMatrixId[macro2_index + 13 * nCol]
      = ID::bStereoL_roffsetCz_pmCzOctaveMacro1_4Macro2Octave;
    mainMatrixId[macro2_index + 14 * nCol]
      = ID::bStereoMainCz_pmCzPhaseMacro1_4Macro2Phase;
    offsetMatrixId[macro2_index + 14 * nCol]
      = ID::bStereoL_roffsetCz_pmCzPhaseMacro1_4Macro2Phase;
    mainMatrixId[macro2_index + 15 * nCol]
      = ID::bStereoMainCz_pmPmPmaMacro1_4Macro2Pma;
    offsetMatrixId[macro2_index + 15 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmaMacro1_4Macro2Pma;
    mainMatrixId[macro2_index + 16 * nCol]
      = ID::bStereoMainCz_pmPmPmbMacro1_4Macro2Pmb;
    offsetMatrixId[macro2_index + 16 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmbMacro1_4Macro2Pmb;
    mainMatrixId[macro2_index + 17 * nCol]
      = ID::bStereoMainCz_pmPmPmcMacro1_4Macro2Pmc;
    offsetMatrixId[macro2_index + 17 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmcMacro1_4Macro2Pmc;
    mainMatrixId[macro2_index + 18 * nCol]
      = ID::bStereoMainCz_pmPmPmdMacro1_4Macro2Pmd;
    offsetMatrixId[macro2_index + 18 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmdMacro1_4Macro2Pmd;
    mainMatrixId[macro2_index + 19 * nCol]
      = ID::cStereoMainCz_pmCzIndexMacro1_4Macro2Index;
    offsetMatrixId[macro2_index + 19 * nCol]
      = ID::cStereoL_roffsetCz_pmCzIndexMacro1_4Macro2Index;
    mainMatrixId[macro2_index + 20 * nCol]
      = ID::cStereoMainCz_pmCzOctaveMacro1_4Macro2Octave;
    offsetMatrixId[macro2_index + 20 * nCol]
      = ID::cStereoL_roffsetCz_pmCzOctaveMacro1_4Macro2Octave;
    mainMatrixId[macro2_index + 21 * nCol]
      = ID::cStereoMainCz_pmCzPhaseMacro1_4Macro2Phase;
    offsetMatrixId[macro2_index + 21 * nCol]
      = ID::cStereoL_roffsetCz_pmCzPhaseMacro1_4Macro2Phase;
    mainMatrixId[macro2_index + 22 * nCol]
      = ID::cStereoMainCz_pmPmPmaMacro1_4Macro2Pma;
    offsetMatrixId[macro2_index + 22 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmaMacro1_4Macro2Pma;
    mainMatrixId[macro2_index + 23 * nCol]
      = ID::cStereoMainCz_pmPmPmbMacro1_4Macro2Pmb;
    offsetMatrixId[macro2_index + 23 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmbMacro1_4Macro2Pmb;
    mainMatrixId[macro2_index + 24 * nCol]
      = ID::cStereoMainCz_pmPmPmcMacro1_4Macro2Pmc;
    offsetMatrixId[macro2_index + 24 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmcMacro1_4Macro2Pmc;
    mainMatrixId[macro2_index + 25 * nCol]
      = ID::cStereoMainCz_pmPmPmdMacro1_4Macro2Pmd;
    offsetMatrixId[macro2_index + 25 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmdMacro1_4Macro2Pmd;
    mainMatrixId[macro2_index + 26 * nCol]
      = ID::dStereoMainCz_pmCzIndexMacro1_4Macro2Index;
    offsetMatrixId[macro2_index + 26 * nCol]
      = ID::dStereoL_roffsetCz_pmCzIndexMacro1_4Macro2Index;
    mainMatrixId[macro2_index + 27 * nCol]
      = ID::dStereoMainCz_pmCzOctaveMacro1_4Macro2Octave;
    offsetMatrixId[macro2_index + 27 * nCol]
      = ID::dStereoL_roffsetCz_pmCzOctaveMacro1_4Macro2Octave;
    mainMatrixId[macro2_index + 28 * nCol]
      = ID::dStereoMainCz_pmCzPhaseMacro1_4Macro2Phase;
    offsetMatrixId[macro2_index + 28 * nCol]
      = ID::dStereoL_roffsetCz_pmCzPhaseMacro1_4Macro2Phase;
    mainMatrixId[macro2_index + 29 * nCol]
      = ID::dStereoMainCz_pmPmPmaMacro1_4Macro2Pma;
    offsetMatrixId[macro2_index + 29 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmaMacro1_4Macro2Pma;
    mainMatrixId[macro2_index + 30 * nCol]
      = ID::dStereoMainCz_pmPmPmbMacro1_4Macro2Pmb;
    offsetMatrixId[macro2_index + 30 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmbMacro1_4Macro2Pmb;
    mainMatrixId[macro2_index + 31 * nCol]
      = ID::dStereoMainCz_pmPmPmcMacro1_4Macro2Pmc;
    offsetMatrixId[macro2_index + 31 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmcMacro1_4Macro2Pmc;
    mainMatrixId[macro2_index + 32 * nCol]
      = ID::dStereoMainCz_pmPmPmdMacro1_4Macro2Pmd;
    offsetMatrixId[macro2_index + 32 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmdMacro1_4Macro2Pmd;
    
    constexpr uint32_t macro3_index = 2;
    
    mainMatrixId[macro3_index + 0 * nCol]
      = ID::filterStereoMainMix_tweakTweakFreqMacro1_4Macro3Normfreq;
    offsetMatrixId[macro3_index + 0 * nCol]
      = ID::filterStereoL_roffsetMix_tweakTweakFreqMacro1_4Macro3Normfreq;
    mainMatrixId[macro3_index + 1 * nCol]
      = ID::filterStereoMainMix_tweakTweakQMacro1_4Macro3Q;
    offsetMatrixId[macro3_index + 1 * nCol]
      = ID::filterStereoL_roffsetMix_tweakTweakQMacro1_4Macro3Q;
    mainMatrixId[macro3_index + 2 * nCol]
      = ID::filterStereoMainMix_tweakMixSvfMacro1_4Macro3Level;
    offsetMatrixId[macro3_index + 2 * nCol]
      = ID::filterStereoL_roffsetMix_tweakMixSvfMacro1_4Macro3Level;
    mainMatrixId[macro3_index + 3 * nCol]
      = ID::filterStereoMainMix_tweakMixMs20Macro1_4Macro3Level;
    offsetMatrixId[macro3_index + 3 * nCol]
      = ID::filterStereoL_roffsetMix_tweakMixMs20Macro1_4Macro3Level;
    mainMatrixId[macro3_index + 4 * nCol]
      = ID::filterStereoMainMix_tweakMixOberheimMacro1_4Macro3Level;
    offsetMatrixId[macro3_index + 4 * nCol]
      = ID::filterStereoL_roffsetMix_tweakMixOberheimMacro1_4Macro3Level;
    mainMatrixId[macro3_index + 5 * nCol]
      = ID::aStereoMainCz_pmCzIndexMacro1_4Macro3Index;
    offsetMatrixId[macro3_index + 5 * nCol]
      = ID::aStereoL_roffsetCz_pmCzIndexMacro1_4Macro3Index;
    mainMatrixId[macro3_index + 6 * nCol]
      = ID::aStereoMainCz_pmCzOctaveMacro1_4Macro3Octave;
    offsetMatrixId[macro3_index + 6 * nCol]
      = ID::aStereoL_roffsetCz_pmCzOctaveMacro1_4Macro3Octave;
    mainMatrixId[macro3_index + 7 * nCol]
      = ID::aStereoMainCz_pmCzPhaseMacro1_4Macro3Phase;
    offsetMatrixId[macro3_index + 7 * nCol]
      = ID::aStereoL_roffsetCz_pmCzPhaseMacro1_4Macro3Phase;
    mainMatrixId[macro3_index + 8 * nCol]
      = ID::aStereoMainCz_pmPmPmaMacro1_4Macro3Pma;
    offsetMatrixId[macro3_index + 8 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmaMacro1_4Macro3Pma;
    mainMatrixId[macro3_index + 9 * nCol]
      = ID::aStereoMainCz_pmPmPmbMacro1_4Macro3Pmb;
    offsetMatrixId[macro3_index + 9 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmbMacro1_4Macro3Pmb;
    mainMatrixId[macro3_index + 10 * nCol]
      = ID::aStereoMainCz_pmPmPmcMacro1_4Macro3Pmc;
    offsetMatrixId[macro3_index + 10 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmcMacro1_4Macro3Pmc;
    mainMatrixId[macro3_index + 11 * nCol]
      = ID::aStereoMainCz_pmPmPmdMacro1_4Macro3Pmd;
    offsetMatrixId[macro3_index + 11 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmdMacro1_4Macro3Pmd;
    mainMatrixId[macro3_index + 12 * nCol]
      = ID::bStereoMainCz_pmCzIndexMacro1_4Macro3Index;
    offsetMatrixId[macro3_index + 12 * nCol]
      = ID::bStereoL_roffsetCz_pmCzIndexMacro1_4Macro3Index;
    mainMatrixId[macro3_index + 13 * nCol]
      = ID::bStereoMainCz_pmCzOctaveMacro1_4Macro3Octave;
    offsetMatrixId[macro3_index + 13 * nCol]
      = ID::bStereoL_roffsetCz_pmCzOctaveMacro1_4Macro3Octave;
    mainMatrixId[macro3_index + 14 * nCol]
      = ID::bStereoMainCz_pmCzPhaseMacro1_4Macro3Phase;
    offsetMatrixId[macro3_index + 14 * nCol]
      = ID::bStereoL_roffsetCz_pmCzPhaseMacro1_4Macro3Phase;
    mainMatrixId[macro3_index + 15 * nCol]
      = ID::bStereoMainCz_pmPmPmaMacro1_4Macro3Pma;
    offsetMatrixId[macro3_index + 15 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmaMacro1_4Macro3Pma;
    mainMatrixId[macro3_index + 16 * nCol]
      = ID::bStereoMainCz_pmPmPmbMacro1_4Macro3Pmb;
    offsetMatrixId[macro3_index + 16 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmbMacro1_4Macro3Pmb;
    mainMatrixId[macro3_index + 17 * nCol]
      = ID::bStereoMainCz_pmPmPmcMacro1_4Macro3Pmc;
    offsetMatrixId[macro3_index + 17 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmcMacro1_4Macro3Pmc;
    mainMatrixId[macro3_index + 18 * nCol]
      = ID::bStereoMainCz_pmPmPmdMacro1_4Macro3Pmd;
    offsetMatrixId[macro3_index + 18 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmdMacro1_4Macro3Pmd;
    mainMatrixId[macro3_index + 19 * nCol]
      = ID::cStereoMainCz_pmCzIndexMacro1_4Macro3Index;
    offsetMatrixId[macro3_index + 19 * nCol]
      = ID::cStereoL_roffsetCz_pmCzIndexMacro1_4Macro3Index;
    mainMatrixId[macro3_index + 20 * nCol]
      = ID::cStereoMainCz_pmCzOctaveMacro1_4Macro3Octave;
    offsetMatrixId[macro3_index + 20 * nCol]
      = ID::cStereoL_roffsetCz_pmCzOctaveMacro1_4Macro3Octave;
    mainMatrixId[macro3_index + 21 * nCol]
      = ID::cStereoMainCz_pmCzPhaseMacro1_4Macro3Phase;
    offsetMatrixId[macro3_index + 21 * nCol]
      = ID::cStereoL_roffsetCz_pmCzPhaseMacro1_4Macro3Phase;
    mainMatrixId[macro3_index + 22 * nCol]
      = ID::cStereoMainCz_pmPmPmaMacro1_4Macro3Pma;
    offsetMatrixId[macro3_index + 22 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmaMacro1_4Macro3Pma;
    mainMatrixId[macro3_index + 23 * nCol]
      = ID::cStereoMainCz_pmPmPmbMacro1_4Macro3Pmb;
    offsetMatrixId[macro3_index + 23 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmbMacro1_4Macro3Pmb;
    mainMatrixId[macro3_index + 24 * nCol]
      = ID::cStereoMainCz_pmPmPmcMacro1_4Macro3Pmc;
    offsetMatrixId[macro3_index + 24 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmcMacro1_4Macro3Pmc;
    mainMatrixId[macro3_index + 25 * nCol]
      = ID::cStereoMainCz_pmPmPmdMacro1_4Macro3Pmd;
    offsetMatrixId[macro3_index + 25 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmdMacro1_4Macro3Pmd;
    mainMatrixId[macro3_index + 26 * nCol]
      = ID::dStereoMainCz_pmCzIndexMacro1_4Macro3Index;
    offsetMatrixId[macro3_index + 26 * nCol]
      = ID::dStereoL_roffsetCz_pmCzIndexMacro1_4Macro3Index;
    mainMatrixId[macro3_index + 27 * nCol]
      = ID::dStereoMainCz_pmCzOctaveMacro1_4Macro3Octave;
    offsetMatrixId[macro3_index + 27 * nCol]
      = ID::dStereoL_roffsetCz_pmCzOctaveMacro1_4Macro3Octave;
    mainMatrixId[macro3_index + 28 * nCol]
      = ID::dStereoMainCz_pmCzPhaseMacro1_4Macro3Phase;
    offsetMatrixId[macro3_index + 28 * nCol]
      = ID::dStereoL_roffsetCz_pmCzPhaseMacro1_4Macro3Phase;
    mainMatrixId[macro3_index + 29 * nCol]
      = ID::dStereoMainCz_pmPmPmaMacro1_4Macro3Pma;
    offsetMatrixId[macro3_index + 29 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmaMacro1_4Macro3Pma;
    mainMatrixId[macro3_index + 30 * nCol]
      = ID::dStereoMainCz_pmPmPmbMacro1_4Macro3Pmb;
    offsetMatrixId[macro3_index + 30 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmbMacro1_4Macro3Pmb;
    mainMatrixId[macro3_index + 31 * nCol]
      = ID::dStereoMainCz_pmPmPmcMacro1_4Macro3Pmc;
    offsetMatrixId[macro3_index + 31 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmcMacro1_4Macro3Pmc;
    mainMatrixId[macro3_index + 32 * nCol]
      = ID::dStereoMainCz_pmPmPmdMacro1_4Macro3Pmd;
    offsetMatrixId[macro3_index + 32 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmdMacro1_4Macro3Pmd;
    
    constexpr uint32_t macro4_index = 3;
    
    mainMatrixId[macro4_index + 0 * nCol]
      = ID::filterStereoMainMix_tweakTweakFreqMacro1_4Macro4Normfreq;
    offsetMatrixId[macro4_index + 0 * nCol]
      = ID::filterStereoL_roffsetMix_tweakTweakFreqMacro1_4Macro4Normfreq;
    mainMatrixId[macro4_index + 1 * nCol]
      = ID::filterStereoMainMix_tweakTweakQMacro1_4Macro4Q;
    offsetMatrixId[macro4_index + 1 * nCol]
      = ID::filterStereoL_roffsetMix_tweakTweakQMacro1_4Macro4Q;
    mainMatrixId[macro4_index + 2 * nCol]
      = ID::filterStereoMainMix_tweakMixSvfMacro1_4Macro4Level;
    offsetMatrixId[macro4_index + 2 * nCol]
      = ID::filterStereoL_roffsetMix_tweakMixSvfMacro1_4Macro4Level;
    mainMatrixId[macro4_index + 3 * nCol]
      = ID::filterStereoMainMix_tweakMixMs20Macro1_4Macro4Level;
    offsetMatrixId[macro4_index + 3 * nCol]
      = ID::filterStereoL_roffsetMix_tweakMixMs20Macro1_4Macro4Level;
    mainMatrixId[macro4_index + 4 * nCol]
      = ID::filterStereoMainMix_tweakMixOberheimMacro1_4Macro4Level;
    offsetMatrixId[macro4_index + 4 * nCol]
      = ID::filterStereoL_roffsetMix_tweakMixOberheimMacro1_4Macro4Level;
    mainMatrixId[macro4_index + 5 * nCol]
      = ID::aStereoMainCz_pmCzIndexMacro1_4Macro4Index;
    offsetMatrixId[macro4_index + 5 * nCol]
      = ID::aStereoL_roffsetCz_pmCzIndexMacro1_4Macro4Index;
    mainMatrixId[macro4_index + 6 * nCol]
      = ID::aStereoMainCz_pmCzOctaveMacro1_4Macro4Octave;
    offsetMatrixId[macro4_index + 6 * nCol]
      = ID::aStereoL_roffsetCz_pmCzOctaveMacro1_4Macro4Octave;
    mainMatrixId[macro4_index + 7 * nCol]
      = ID::aStereoMainCz_pmCzPhaseMacro1_4Macro4Phase;
    offsetMatrixId[macro4_index + 7 * nCol]
      = ID::aStereoL_roffsetCz_pmCzPhaseMacro1_4Macro4Phase;
    mainMatrixId[macro4_index + 8 * nCol]
      = ID::aStereoMainCz_pmPmPmaMacro1_4Macro4Pma;
    offsetMatrixId[macro4_index + 8 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmaMacro1_4Macro4Pma;
    mainMatrixId[macro4_index + 9 * nCol]
      = ID::aStereoMainCz_pmPmPmbMacro1_4Macro4Pmb;
    offsetMatrixId[macro4_index + 9 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmbMacro1_4Macro4Pmb;
    mainMatrixId[macro4_index + 10 * nCol]
      = ID::aStereoMainCz_pmPmPmcMacro1_4Macro4Pmc;
    offsetMatrixId[macro4_index + 10 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmcMacro1_4Macro4Pmc;
    mainMatrixId[macro4_index + 11 * nCol]
      = ID::aStereoMainCz_pmPmPmdMacro1_4Macro4Pmd;
    offsetMatrixId[macro4_index + 11 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmdMacro1_4Macro4Pmd;
    mainMatrixId[macro4_index + 12 * nCol]
      = ID::bStereoMainCz_pmCzIndexMacro1_4Macro4Index;
    offsetMatrixId[macro4_index + 12 * nCol]
      = ID::bStereoL_roffsetCz_pmCzIndexMacro1_4Macro4Index;
    mainMatrixId[macro4_index + 13 * nCol]
      = ID::bStereoMainCz_pmCzOctaveMacro1_4Macro4Octave;
    offsetMatrixId[macro4_index + 13 * nCol]
      = ID::bStereoL_roffsetCz_pmCzOctaveMacro1_4Macro4Octave;
    mainMatrixId[macro4_index + 14 * nCol]
      = ID::bStereoMainCz_pmCzPhaseMacro1_4Macro4Phase;
    offsetMatrixId[macro4_index + 14 * nCol]
      = ID::bStereoL_roffsetCz_pmCzPhaseMacro1_4Macro4Phase;
    mainMatrixId[macro4_index + 15 * nCol]
      = ID::bStereoMainCz_pmPmPmaMacro1_4Macro4Pma;
    offsetMatrixId[macro4_index + 15 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmaMacro1_4Macro4Pma;
    mainMatrixId[macro4_index + 16 * nCol]
      = ID::bStereoMainCz_pmPmPmbMacro1_4Macro4Pmb;
    offsetMatrixId[macro4_index + 16 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmbMacro1_4Macro4Pmb;
    mainMatrixId[macro4_index + 17 * nCol]
      = ID::bStereoMainCz_pmPmPmcMacro1_4Macro4Pmc;
    offsetMatrixId[macro4_index + 17 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmcMacro1_4Macro4Pmc;
    mainMatrixId[macro4_index + 18 * nCol]
      = ID::bStereoMainCz_pmPmPmdMacro1_4Macro4Pmd;
    offsetMatrixId[macro4_index + 18 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmdMacro1_4Macro4Pmd;
    mainMatrixId[macro4_index + 19 * nCol]
      = ID::cStereoMainCz_pmCzIndexMacro1_4Macro4Index;
    offsetMatrixId[macro4_index + 19 * nCol]
      = ID::cStereoL_roffsetCz_pmCzIndexMacro1_4Macro4Index;
    mainMatrixId[macro4_index + 20 * nCol]
      = ID::cStereoMainCz_pmCzOctaveMacro1_4Macro4Octave;
    offsetMatrixId[macro4_index + 20 * nCol]
      = ID::cStereoL_roffsetCz_pmCzOctaveMacro1_4Macro4Octave;
    mainMatrixId[macro4_index + 21 * nCol]
      = ID::cStereoMainCz_pmCzPhaseMacro1_4Macro4Phase;
    offsetMatrixId[macro4_index + 21 * nCol]
      = ID::cStereoL_roffsetCz_pmCzPhaseMacro1_4Macro4Phase;
    mainMatrixId[macro4_index + 22 * nCol]
      = ID::cStereoMainCz_pmPmPmaMacro1_4Macro4Pma;
    offsetMatrixId[macro4_index + 22 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmaMacro1_4Macro4Pma;
    mainMatrixId[macro4_index + 23 * nCol]
      = ID::cStereoMainCz_pmPmPmbMacro1_4Macro4Pmb;
    offsetMatrixId[macro4_index + 23 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmbMacro1_4Macro4Pmb;
    mainMatrixId[macro4_index + 24 * nCol]
      = ID::cStereoMainCz_pmPmPmcMacro1_4Macro4Pmc;
    offsetMatrixId[macro4_index + 24 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmcMacro1_4Macro4Pmc;
    mainMatrixId[macro4_index + 25 * nCol]
      = ID::cStereoMainCz_pmPmPmdMacro1_4Macro4Pmd;
    offsetMatrixId[macro4_index + 25 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmdMacro1_4Macro4Pmd;
    mainMatrixId[macro4_index + 26 * nCol]
      = ID::dStereoMainCz_pmCzIndexMacro1_4Macro4Index;
    offsetMatrixId[macro4_index + 26 * nCol]
      = ID::dStereoL_roffsetCz_pmCzIndexMacro1_4Macro4Index;
    mainMatrixId[macro4_index + 27 * nCol]
      = ID::dStereoMainCz_pmCzOctaveMacro1_4Macro4Octave;
    offsetMatrixId[macro4_index + 27 * nCol]
      = ID::dStereoL_roffsetCz_pmCzOctaveMacro1_4Macro4Octave;
    mainMatrixId[macro4_index + 28 * nCol]
      = ID::dStereoMainCz_pmCzPhaseMacro1_4Macro4Phase;
    offsetMatrixId[macro4_index + 28 * nCol]
      = ID::dStereoL_roffsetCz_pmCzPhaseMacro1_4Macro4Phase;
    mainMatrixId[macro4_index + 29 * nCol]
      = ID::dStereoMainCz_pmPmPmaMacro1_4Macro4Pma;
    offsetMatrixId[macro4_index + 29 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmaMacro1_4Macro4Pma;
    mainMatrixId[macro4_index + 30 * nCol]
      = ID::dStereoMainCz_pmPmPmbMacro1_4Macro4Pmb;
    offsetMatrixId[macro4_index + 30 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmbMacro1_4Macro4Pmb;
    mainMatrixId[macro4_index + 31 * nCol]
      = ID::dStereoMainCz_pmPmPmcMacro1_4Macro4Pmc;
    offsetMatrixId[macro4_index + 31 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmcMacro1_4Macro4Pmc;
    mainMatrixId[macro4_index + 32 * nCol]
      = ID::dStereoMainCz_pmPmPmdMacro1_4Macro4Pmd;
    offsetMatrixId[macro4_index + 32 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmdMacro1_4Macro4Pmd;
    
    constexpr uint32_t macro5_index = 4;
    
    mainMatrixId[macro5_index + 0 * nCol]
      = ID::filterStereoMainMix_tweakTweakFreqMacro5_8Macro5Normfreq;
    offsetMatrixId[macro5_index + 0 * nCol]
      = ID::filterStereoL_roffsetMix_tweakTweakFreqMacro5_8Macro5Normfreq;
    mainMatrixId[macro5_index + 1 * nCol]
      = ID::filterStereoMainMix_tweakTweakQMacro5_8Macro5Q;
    offsetMatrixId[macro5_index + 1 * nCol]
      = ID::filterStereoL_roffsetMix_tweakTweakQMacro5_8Macro5Q;
    mainMatrixId[macro5_index + 2 * nCol]
      = ID::filterStereoMainMix_tweakMixSvfMacro5_8Macro5Level;
    offsetMatrixId[macro5_index + 2 * nCol]
      = ID::filterStereoL_roffsetMix_tweakMixSvfMacro5_8Macro5Level;
    mainMatrixId[macro5_index + 3 * nCol]
      = ID::filterStereoMainMix_tweakMixMs20Macro5_8Macro5Level;
    offsetMatrixId[macro5_index + 3 * nCol]
      = ID::filterStereoL_roffsetMix_tweakMixMs20Macro5_8Macro5Level;
    mainMatrixId[macro5_index + 4 * nCol]
      = ID::filterStereoMainMix_tweakMixOberheimMacro5_8Macro5Level;
    offsetMatrixId[macro5_index + 4 * nCol]
      = ID::filterStereoL_roffsetMix_tweakMixOberheimMacro5_8Macro5Level;
    mainMatrixId[macro5_index + 5 * nCol]
      = ID::aStereoMainCz_pmCzIndexMacro5_8Macro5Index;
    offsetMatrixId[macro5_index + 5 * nCol]
      = ID::aStereoL_roffsetCz_pmCzIndexMacro5_8Macro5Index;
    mainMatrixId[macro5_index + 6 * nCol]
      = ID::aStereoMainCz_pmCzOctaveMacro5_8Macro5Octave;
    offsetMatrixId[macro5_index + 6 * nCol]
      = ID::aStereoL_roffsetCz_pmCzOctaveMacro5_8Macro5Octave;
    mainMatrixId[macro5_index + 7 * nCol]
      = ID::aStereoMainCz_pmCzPhaseMacro5_8Macro5Phase;
    offsetMatrixId[macro5_index + 7 * nCol]
      = ID::aStereoL_roffsetCz_pmCzPhaseMacro5_8Macro5Phase;
    mainMatrixId[macro5_index + 8 * nCol]
      = ID::aStereoMainCz_pmPmPmaMacro5_8Macro5Pma;
    offsetMatrixId[macro5_index + 8 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmaMacro5_8Macro5Pma;
    mainMatrixId[macro5_index + 9 * nCol]
      = ID::aStereoMainCz_pmPmPmbMacro5_8Macro5Pmb;
    offsetMatrixId[macro5_index + 9 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmbMacro5_8Macro5Pmb;
    mainMatrixId[macro5_index + 10 * nCol]
      = ID::aStereoMainCz_pmPmPmcMacro5_8Macro5Pmc;
    offsetMatrixId[macro5_index + 10 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmcMacro5_8Macro5Pmc;
    mainMatrixId[macro5_index + 11 * nCol]
      = ID::aStereoMainCz_pmPmPmdMacro5_8Macro5Pmd;
    offsetMatrixId[macro5_index + 11 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmdMacro5_8Macro5Pmd;
    mainMatrixId[macro5_index + 12 * nCol]
      = ID::bStereoMainCz_pmCzIndexMacro5_8Macro5Index;
    offsetMatrixId[macro5_index + 12 * nCol]
      = ID::bStereoL_roffsetCz_pmCzIndexMacro5_8Macro5Index;
    mainMatrixId[macro5_index + 13 * nCol]
      = ID::bStereoMainCz_pmCzOctaveMacro5_8Macro5Octave;
    offsetMatrixId[macro5_index + 13 * nCol]
      = ID::bStereoL_roffsetCz_pmCzOctaveMacro5_8Macro5Octave;
    mainMatrixId[macro5_index + 14 * nCol]
      = ID::bStereoMainCz_pmCzPhaseMacro5_8Macro5Phase;
    offsetMatrixId[macro5_index + 14 * nCol]
      = ID::bStereoL_roffsetCz_pmCzPhaseMacro5_8Macro5Phase;
    mainMatrixId[macro5_index + 15 * nCol]
      = ID::bStereoMainCz_pmPmPmaMacro5_8Macro5Pma;
    offsetMatrixId[macro5_index + 15 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmaMacro5_8Macro5Pma;
    mainMatrixId[macro5_index + 16 * nCol]
      = ID::bStereoMainCz_pmPmPmbMacro5_8Macro5Pmb;
    offsetMatrixId[macro5_index + 16 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmbMacro5_8Macro5Pmb;
    mainMatrixId[macro5_index + 17 * nCol]
      = ID::bStereoMainCz_pmPmPmcMacro5_8Macro5Pmc;
    offsetMatrixId[macro5_index + 17 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmcMacro5_8Macro5Pmc;
    mainMatrixId[macro5_index + 18 * nCol]
      = ID::bStereoMainCz_pmPmPmdMacro5_8Macro5Pmd;
    offsetMatrixId[macro5_index + 18 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmdMacro5_8Macro5Pmd;
    mainMatrixId[macro5_index + 19 * nCol]
      = ID::cStereoMainCz_pmCzIndexMacro5_8Macro5Index;
    offsetMatrixId[macro5_index + 19 * nCol]
      = ID::cStereoL_roffsetCz_pmCzIndexMacro5_8Macro5Index;
    mainMatrixId[macro5_index + 20 * nCol]
      = ID::cStereoMainCz_pmCzOctaveMacro5_8Macro5Octave;
    offsetMatrixId[macro5_index + 20 * nCol]
      = ID::cStereoL_roffsetCz_pmCzOctaveMacro5_8Macro5Octave;
    mainMatrixId[macro5_index + 21 * nCol]
      = ID::cStereoMainCz_pmCzPhaseMacro5_8Macro5Phase;
    offsetMatrixId[macro5_index + 21 * nCol]
      = ID::cStereoL_roffsetCz_pmCzPhaseMacro5_8Macro5Phase;
    mainMatrixId[macro5_index + 22 * nCol]
      = ID::cStereoMainCz_pmPmPmaMacro5_8Macro5Pma;
    offsetMatrixId[macro5_index + 22 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmaMacro5_8Macro5Pma;
    mainMatrixId[macro5_index + 23 * nCol]
      = ID::cStereoMainCz_pmPmPmbMacro5_8Macro5Pmb;
    offsetMatrixId[macro5_index + 23 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmbMacro5_8Macro5Pmb;
    mainMatrixId[macro5_index + 24 * nCol]
      = ID::cStereoMainCz_pmPmPmcMacro5_8Macro5Pmc;
    offsetMatrixId[macro5_index + 24 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmcMacro5_8Macro5Pmc;
    mainMatrixId[macro5_index + 25 * nCol]
      = ID::cStereoMainCz_pmPmPmdMacro5_8Macro5Pmd;
    offsetMatrixId[macro5_index + 25 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmdMacro5_8Macro5Pmd;
    mainMatrixId[macro5_index + 26 * nCol]
      = ID::dStereoMainCz_pmCzIndexMacro5_8Macro5Index;
    offsetMatrixId[macro5_index + 26 * nCol]
      = ID::dStereoL_roffsetCz_pmCzIndexMacro5_8Macro5Index;
    mainMatrixId[macro5_index + 27 * nCol]
      = ID::dStereoMainCz_pmCzOctaveMacro5_8Macro5Octave;
    offsetMatrixId[macro5_index + 27 * nCol]
      = ID::dStereoL_roffsetCz_pmCzOctaveMacro5_8Macro5Octave;
    mainMatrixId[macro5_index + 28 * nCol]
      = ID::dStereoMainCz_pmCzPhaseMacro5_8Macro5Phase;
    offsetMatrixId[macro5_index + 28 * nCol]
      = ID::dStereoL_roffsetCz_pmCzPhaseMacro5_8Macro5Phase;
    mainMatrixId[macro5_index + 29 * nCol]
      = ID::dStereoMainCz_pmPmPmaMacro5_8Macro5Pma;
    offsetMatrixId[macro5_index + 29 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmaMacro5_8Macro5Pma;
    mainMatrixId[macro5_index + 30 * nCol]
      = ID::dStereoMainCz_pmPmPmbMacro5_8Macro5Pmb;
    offsetMatrixId[macro5_index + 30 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmbMacro5_8Macro5Pmb;
    mainMatrixId[macro5_index + 31 * nCol]
      = ID::dStereoMainCz_pmPmPmcMacro5_8Macro5Pmc;
    offsetMatrixId[macro5_index + 31 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmcMacro5_8Macro5Pmc;
    mainMatrixId[macro5_index + 32 * nCol]
      = ID::dStereoMainCz_pmPmPmdMacro5_8Macro5Pmd;
    offsetMatrixId[macro5_index + 32 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmdMacro5_8Macro5Pmd;
    
    constexpr uint32_t macro6_index = 5;
    
    mainMatrixId[macro6_index + 0 * nCol]
      = ID::filterStereoMainMix_tweakTweakFreqMacro5_8Macro6Normfreq;
    offsetMatrixId[macro6_index + 0 * nCol]
      = ID::filterStereoL_roffsetMix_tweakTweakFreqMacro5_8Macro6Normfreq;
    mainMatrixId[macro6_index + 1 * nCol]
      = ID::filterStereoMainMix_tweakTweakQMacro5_8Macro6Q;
    offsetMatrixId[macro6_index + 1 * nCol]
      = ID::filterStereoL_roffsetMix_tweakTweakQMacro5_8Macro6Q;
    mainMatrixId[macro6_index + 2 * nCol]
      = ID::filterStereoMainMix_tweakMixSvfMacro5_8Macro6Level;
    offsetMatrixId[macro6_index + 2 * nCol]
      = ID::filterStereoL_roffsetMix_tweakMixSvfMacro5_8Macro6Level;
    mainMatrixId[macro6_index + 3 * nCol]
      = ID::filterStereoMainMix_tweakMixMs20Macro5_8Macro6Level;
    offsetMatrixId[macro6_index + 3 * nCol]
      = ID::filterStereoL_roffsetMix_tweakMixMs20Macro5_8Macro6Level;
    mainMatrixId[macro6_index + 4 * nCol]
      = ID::filterStereoMainMix_tweakMixOberheimMacro5_8Macro6Level;
    offsetMatrixId[macro6_index + 4 * nCol]
      = ID::filterStereoL_roffsetMix_tweakMixOberheimMacro5_8Macro6Level;
    mainMatrixId[macro6_index + 5 * nCol]
      = ID::aStereoMainCz_pmCzIndexMacro5_8Macro6Index;
    offsetMatrixId[macro6_index + 5 * nCol]
      = ID::aStereoL_roffsetCz_pmCzIndexMacro5_8Macro6Index;
    mainMatrixId[macro6_index + 6 * nCol]
      = ID::aStereoMainCz_pmCzOctaveMacro5_8Macro6Octave;
    offsetMatrixId[macro6_index + 6 * nCol]
      = ID::aStereoL_roffsetCz_pmCzOctaveMacro5_8Macro6Octave;
    mainMatrixId[macro6_index + 7 * nCol]
      = ID::aStereoMainCz_pmCzPhaseMacro5_8Macro6Phase;
    offsetMatrixId[macro6_index + 7 * nCol]
      = ID::aStereoL_roffsetCz_pmCzPhaseMacro5_8Macro6Phase;
    mainMatrixId[macro6_index + 8 * nCol]
      = ID::aStereoMainCz_pmPmPmaMacro5_8Macro6Pma;
    offsetMatrixId[macro6_index + 8 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmaMacro5_8Macro6Pma;
    mainMatrixId[macro6_index + 9 * nCol]
      = ID::aStereoMainCz_pmPmPmbMacro5_8Macro6Pmb;
    offsetMatrixId[macro6_index + 9 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmbMacro5_8Macro6Pmb;
    mainMatrixId[macro6_index + 10 * nCol]
      = ID::aStereoMainCz_pmPmPmcMacro5_8Macro6Pmc;
    offsetMatrixId[macro6_index + 10 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmcMacro5_8Macro6Pmc;
    mainMatrixId[macro6_index + 11 * nCol]
      = ID::aStereoMainCz_pmPmPmdMacro5_8Macro6Pmd;
    offsetMatrixId[macro6_index + 11 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmdMacro5_8Macro6Pmd;
    mainMatrixId[macro6_index + 12 * nCol]
      = ID::bStereoMainCz_pmCzIndexMacro5_8Macro6Index;
    offsetMatrixId[macro6_index + 12 * nCol]
      = ID::bStereoL_roffsetCz_pmCzIndexMacro5_8Macro6Index;
    mainMatrixId[macro6_index + 13 * nCol]
      = ID::bStereoMainCz_pmCzOctaveMacro5_8Macro6Octave;
    offsetMatrixId[macro6_index + 13 * nCol]
      = ID::bStereoL_roffsetCz_pmCzOctaveMacro5_8Macro6Octave;
    mainMatrixId[macro6_index + 14 * nCol]
      = ID::bStereoMainCz_pmCzPhaseMacro5_8Macro6Phase;
    offsetMatrixId[macro6_index + 14 * nCol]
      = ID::bStereoL_roffsetCz_pmCzPhaseMacro5_8Macro6Phase;
    mainMatrixId[macro6_index + 15 * nCol]
      = ID::bStereoMainCz_pmPmPmaMacro5_8Macro6Pma;
    offsetMatrixId[macro6_index + 15 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmaMacro5_8Macro6Pma;
    mainMatrixId[macro6_index + 16 * nCol]
      = ID::bStereoMainCz_pmPmPmbMacro5_8Macro6Pmb;
    offsetMatrixId[macro6_index + 16 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmbMacro5_8Macro6Pmb;
    mainMatrixId[macro6_index + 17 * nCol]
      = ID::bStereoMainCz_pmPmPmcMacro5_8Macro6Pmc;
    offsetMatrixId[macro6_index + 17 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmcMacro5_8Macro6Pmc;
    mainMatrixId[macro6_index + 18 * nCol]
      = ID::bStereoMainCz_pmPmPmdMacro5_8Macro6Pmd;
    offsetMatrixId[macro6_index + 18 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmdMacro5_8Macro6Pmd;
    mainMatrixId[macro6_index + 19 * nCol]
      = ID::cStereoMainCz_pmCzIndexMacro5_8Macro6Index;
    offsetMatrixId[macro6_index + 19 * nCol]
      = ID::cStereoL_roffsetCz_pmCzIndexMacro5_8Macro6Index;
    mainMatrixId[macro6_index + 20 * nCol]
      = ID::cStereoMainCz_pmCzOctaveMacro5_8Macro6Octave;
    offsetMatrixId[macro6_index + 20 * nCol]
      = ID::cStereoL_roffsetCz_pmCzOctaveMacro5_8Macro6Octave;
    mainMatrixId[macro6_index + 21 * nCol]
      = ID::cStereoMainCz_pmCzPhaseMacro5_8Macro6Phase;
    offsetMatrixId[macro6_index + 21 * nCol]
      = ID::cStereoL_roffsetCz_pmCzPhaseMacro5_8Macro6Phase;
    mainMatrixId[macro6_index + 22 * nCol]
      = ID::cStereoMainCz_pmPmPmaMacro5_8Macro6Pma;
    offsetMatrixId[macro6_index + 22 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmaMacro5_8Macro6Pma;
    mainMatrixId[macro6_index + 23 * nCol]
      = ID::cStereoMainCz_pmPmPmbMacro5_8Macro6Pmb;
    offsetMatrixId[macro6_index + 23 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmbMacro5_8Macro6Pmb;
    mainMatrixId[macro6_index + 24 * nCol]
      = ID::cStereoMainCz_pmPmPmcMacro5_8Macro6Pmc;
    offsetMatrixId[macro6_index + 24 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmcMacro5_8Macro6Pmc;
    mainMatrixId[macro6_index + 25 * nCol]
      = ID::cStereoMainCz_pmPmPmdMacro5_8Macro6Pmd;
    offsetMatrixId[macro6_index + 25 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmdMacro5_8Macro6Pmd;
    mainMatrixId[macro6_index + 26 * nCol]
      = ID::dStereoMainCz_pmCzIndexMacro5_8Macro6Index;
    offsetMatrixId[macro6_index + 26 * nCol]
      = ID::dStereoL_roffsetCz_pmCzIndexMacro5_8Macro6Index;
    mainMatrixId[macro6_index + 27 * nCol]
      = ID::dStereoMainCz_pmCzOctaveMacro5_8Macro6Octave;
    offsetMatrixId[macro6_index + 27 * nCol]
      = ID::dStereoL_roffsetCz_pmCzOctaveMacro5_8Macro6Octave;
    mainMatrixId[macro6_index + 28 * nCol]
      = ID::dStereoMainCz_pmCzPhaseMacro5_8Macro6Phase;
    offsetMatrixId[macro6_index + 28 * nCol]
      = ID::dStereoL_roffsetCz_pmCzPhaseMacro5_8Macro6Phase;
    mainMatrixId[macro6_index + 29 * nCol]
      = ID::dStereoMainCz_pmPmPmaMacro5_8Macro6Pma;
    offsetMatrixId[macro6_index + 29 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmaMacro5_8Macro6Pma;
    mainMatrixId[macro6_index + 30 * nCol]
      = ID::dStereoMainCz_pmPmPmbMacro5_8Macro6Pmb;
    offsetMatrixId[macro6_index + 30 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmbMacro5_8Macro6Pmb;
    mainMatrixId[macro6_index + 31 * nCol]
      = ID::dStereoMainCz_pmPmPmcMacro5_8Macro6Pmc;
    offsetMatrixId[macro6_index + 31 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmcMacro5_8Macro6Pmc;
    mainMatrixId[macro6_index + 32 * nCol]
      = ID::dStereoMainCz_pmPmPmdMacro5_8Macro6Pmd;
    offsetMatrixId[macro6_index + 32 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmdMacro5_8Macro6Pmd;
    
    constexpr uint32_t macro7_index = 6;
    
    mainMatrixId[macro7_index + 0 * nCol]
      = ID::filterStereoMainMix_tweakTweakFreqMacro5_8Macro7Normfreq;
    offsetMatrixId[macro7_index + 0 * nCol]
      = ID::filterStereoL_roffsetMix_tweakTweakFreqMacro5_8Macro7Normfreq;
    mainMatrixId[macro7_index + 1 * nCol]
      = ID::filterStereoMainMix_tweakTweakQMacro5_8Macro7Q;
    offsetMatrixId[macro7_index + 1 * nCol]
      = ID::filterStereoL_roffsetMix_tweakTweakQMacro5_8Macro7Q;
    mainMatrixId[macro7_index + 2 * nCol]
      = ID::filterStereoMainMix_tweakMixSvfMacro5_8Macro7Level;
    offsetMatrixId[macro7_index + 2 * nCol]
      = ID::filterStereoL_roffsetMix_tweakMixSvfMacro5_8Macro7Level;
    mainMatrixId[macro7_index + 3 * nCol]
      = ID::filterStereoMainMix_tweakMixMs20Macro5_8Macro7Level;
    offsetMatrixId[macro7_index + 3 * nCol]
      = ID::filterStereoL_roffsetMix_tweakMixMs20Macro5_8Macro7Level;
    mainMatrixId[macro7_index + 4 * nCol]
      = ID::filterStereoMainMix_tweakMixOberheimMacro5_8Macro7Level;
    offsetMatrixId[macro7_index + 4 * nCol]
      = ID::filterStereoL_roffsetMix_tweakMixOberheimMacro5_8Macro7Level;
    mainMatrixId[macro7_index + 5 * nCol]
      = ID::aStereoMainCz_pmCzIndexMacro5_8Macro7Index;
    offsetMatrixId[macro7_index + 5 * nCol]
      = ID::aStereoL_roffsetCz_pmCzIndexMacro5_8Macro7Index;
    mainMatrixId[macro7_index + 6 * nCol]
      = ID::aStereoMainCz_pmCzOctaveMacro5_8Macro7Octave;
    offsetMatrixId[macro7_index + 6 * nCol]
      = ID::aStereoL_roffsetCz_pmCzOctaveMacro5_8Macro7Octave;
    mainMatrixId[macro7_index + 7 * nCol]
      = ID::aStereoMainCz_pmCzPhaseMacro5_8Macro7Phase;
    offsetMatrixId[macro7_index + 7 * nCol]
      = ID::aStereoL_roffsetCz_pmCzPhaseMacro5_8Macro7Phase;
    mainMatrixId[macro7_index + 8 * nCol]
      = ID::aStereoMainCz_pmPmPmaMacro5_8Macro7Pma;
    offsetMatrixId[macro7_index + 8 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmaMacro5_8Macro7Pma;
    mainMatrixId[macro7_index + 9 * nCol]
      = ID::aStereoMainCz_pmPmPmbMacro5_8Macro7Pmb;
    offsetMatrixId[macro7_index + 9 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmbMacro5_8Macro7Pmb;
    mainMatrixId[macro7_index + 10 * nCol]
      = ID::aStereoMainCz_pmPmPmcMacro5_8Macro7Pmc;
    offsetMatrixId[macro7_index + 10 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmcMacro5_8Macro7Pmc;
    mainMatrixId[macro7_index + 11 * nCol]
      = ID::aStereoMainCz_pmPmPmdMacro5_8Macro7Pmd;
    offsetMatrixId[macro7_index + 11 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmdMacro5_8Macro7Pmd;
    mainMatrixId[macro7_index + 12 * nCol]
      = ID::bStereoMainCz_pmCzIndexMacro5_8Macro7Index;
    offsetMatrixId[macro7_index + 12 * nCol]
      = ID::bStereoL_roffsetCz_pmCzIndexMacro5_8Macro7Index;
    mainMatrixId[macro7_index + 13 * nCol]
      = ID::bStereoMainCz_pmCzOctaveMacro5_8Macro7Octave;
    offsetMatrixId[macro7_index + 13 * nCol]
      = ID::bStereoL_roffsetCz_pmCzOctaveMacro5_8Macro7Octave;
    mainMatrixId[macro7_index + 14 * nCol]
      = ID::bStereoMainCz_pmCzPhaseMacro5_8Macro7Phase;
    offsetMatrixId[macro7_index + 14 * nCol]
      = ID::bStereoL_roffsetCz_pmCzPhaseMacro5_8Macro7Phase;
    mainMatrixId[macro7_index + 15 * nCol]
      = ID::bStereoMainCz_pmPmPmaMacro5_8Macro7Pma;
    offsetMatrixId[macro7_index + 15 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmaMacro5_8Macro7Pma;
    mainMatrixId[macro7_index + 16 * nCol]
      = ID::bStereoMainCz_pmPmPmbMacro5_8Macro7Pmb;
    offsetMatrixId[macro7_index + 16 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmbMacro5_8Macro7Pmb;
    mainMatrixId[macro7_index + 17 * nCol]
      = ID::bStereoMainCz_pmPmPmcMacro5_8Macro7Pmc;
    offsetMatrixId[macro7_index + 17 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmcMacro5_8Macro7Pmc;
    mainMatrixId[macro7_index + 18 * nCol]
      = ID::bStereoMainCz_pmPmPmdMacro5_8Macro7Pmd;
    offsetMatrixId[macro7_index + 18 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmdMacro5_8Macro7Pmd;
    mainMatrixId[macro7_index + 19 * nCol]
      = ID::cStereoMainCz_pmCzIndexMacro5_8Macro7Index;
    offsetMatrixId[macro7_index + 19 * nCol]
      = ID::cStereoL_roffsetCz_pmCzIndexMacro5_8Macro7Index;
    mainMatrixId[macro7_index + 20 * nCol]
      = ID::cStereoMainCz_pmCzOctaveMacro5_8Macro7Octave;
    offsetMatrixId[macro7_index + 20 * nCol]
      = ID::cStereoL_roffsetCz_pmCzOctaveMacro5_8Macro7Octave;
    mainMatrixId[macro7_index + 21 * nCol]
      = ID::cStereoMainCz_pmCzPhaseMacro5_8Macro7Phase;
    offsetMatrixId[macro7_index + 21 * nCol]
      = ID::cStereoL_roffsetCz_pmCzPhaseMacro5_8Macro7Phase;
    mainMatrixId[macro7_index + 22 * nCol]
      = ID::cStereoMainCz_pmPmPmaMacro5_8Macro7Pma;
    offsetMatrixId[macro7_index + 22 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmaMacro5_8Macro7Pma;
    mainMatrixId[macro7_index + 23 * nCol]
      = ID::cStereoMainCz_pmPmPmbMacro5_8Macro7Pmb;
    offsetMatrixId[macro7_index + 23 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmbMacro5_8Macro7Pmb;
    mainMatrixId[macro7_index + 24 * nCol]
      = ID::cStereoMainCz_pmPmPmcMacro5_8Macro7Pmc;
    offsetMatrixId[macro7_index + 24 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmcMacro5_8Macro7Pmc;
    mainMatrixId[macro7_index + 25 * nCol]
      = ID::cStereoMainCz_pmPmPmdMacro5_8Macro7Pmd;
    offsetMatrixId[macro7_index + 25 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmdMacro5_8Macro7Pmd;
    mainMatrixId[macro7_index + 26 * nCol]
      = ID::dStereoMainCz_pmCzIndexMacro5_8Macro7Index;
    offsetMatrixId[macro7_index + 26 * nCol]
      = ID::dStereoL_roffsetCz_pmCzIndexMacro5_8Macro7Index;
    mainMatrixId[macro7_index + 27 * nCol]
      = ID::dStereoMainCz_pmCzOctaveMacro5_8Macro7Octave;
    offsetMatrixId[macro7_index + 27 * nCol]
      = ID::dStereoL_roffsetCz_pmCzOctaveMacro5_8Macro7Octave;
    mainMatrixId[macro7_index + 28 * nCol]
      = ID::dStereoMainCz_pmCzPhaseMacro5_8Macro7Phase;
    offsetMatrixId[macro7_index + 28 * nCol]
      = ID::dStereoL_roffsetCz_pmCzPhaseMacro5_8Macro7Phase;
    mainMatrixId[macro7_index + 29 * nCol]
      = ID::dStereoMainCz_pmPmPmaMacro5_8Macro7Pma;
    offsetMatrixId[macro7_index + 29 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmaMacro5_8Macro7Pma;
    mainMatrixId[macro7_index + 30 * nCol]
      = ID::dStereoMainCz_pmPmPmbMacro5_8Macro7Pmb;
    offsetMatrixId[macro7_index + 30 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmbMacro5_8Macro7Pmb;
    mainMatrixId[macro7_index + 31 * nCol]
      = ID::dStereoMainCz_pmPmPmcMacro5_8Macro7Pmc;
    offsetMatrixId[macro7_index + 31 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmcMacro5_8Macro7Pmc;
    mainMatrixId[macro7_index + 32 * nCol]
      = ID::dStereoMainCz_pmPmPmdMacro5_8Macro7Pmd;
    offsetMatrixId[macro7_index + 32 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmdMacro5_8Macro7Pmd;
    
    constexpr uint32_t macro8_index = 7;
    
    mainMatrixId[macro8_index + 0 * nCol]
      = ID::filterStereoMainMix_tweakTweakFreqMacro5_8Macro8Normfreq;
    offsetMatrixId[macro8_index + 0 * nCol]
      = ID::filterStereoL_roffsetMix_tweakTweakFreqMacro5_8Macro8Normfreq;
    mainMatrixId[macro8_index + 1 * nCol]
      = ID::filterStereoMainMix_tweakTweakQMacro5_8Macro8Q;
    offsetMatrixId[macro8_index + 1 * nCol]
      = ID::filterStereoL_roffsetMix_tweakTweakQMacro5_8Macro8Q;
    mainMatrixId[macro8_index + 2 * nCol]
      = ID::filterStereoMainMix_tweakMixSvfMacro5_8Macro8Level;
    offsetMatrixId[macro8_index + 2 * nCol]
      = ID::filterStereoL_roffsetMix_tweakMixSvfMacro5_8Macro8Level;
    mainMatrixId[macro8_index + 3 * nCol]
      = ID::filterStereoMainMix_tweakMixMs20Macro5_8Macro8Level;
    offsetMatrixId[macro8_index + 3 * nCol]
      = ID::filterStereoL_roffsetMix_tweakMixMs20Macro5_8Macro8Level;
    mainMatrixId[macro8_index + 4 * nCol]
      = ID::filterStereoMainMix_tweakMixOberheimMacro5_8Macro8Level;
    offsetMatrixId[macro8_index + 4 * nCol]
      = ID::filterStereoL_roffsetMix_tweakMixOberheimMacro5_8Macro8Level;
    mainMatrixId[macro8_index + 5 * nCol]
      = ID::aStereoMainCz_pmCzIndexMacro5_8Macro8Index;
    offsetMatrixId[macro8_index + 5 * nCol]
      = ID::aStereoL_roffsetCz_pmCzIndexMacro5_8Macro8Index;
    mainMatrixId[macro8_index + 6 * nCol]
      = ID::aStereoMainCz_pmCzOctaveMacro5_8Macro8Octave;
    offsetMatrixId[macro8_index + 6 * nCol]
      = ID::aStereoL_roffsetCz_pmCzOctaveMacro5_8Macro8Octave;
    mainMatrixId[macro8_index + 7 * nCol]
      = ID::aStereoMainCz_pmCzPhaseMacro5_8Macro8Phase;
    offsetMatrixId[macro8_index + 7 * nCol]
      = ID::aStereoL_roffsetCz_pmCzPhaseMacro5_8Macro8Phase;
    mainMatrixId[macro8_index + 8 * nCol]
      = ID::aStereoMainCz_pmPmPmaMacro5_8Macro8Pma;
    offsetMatrixId[macro8_index + 8 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmaMacro5_8Macro8Pma;
    mainMatrixId[macro8_index + 9 * nCol]
      = ID::aStereoMainCz_pmPmPmbMacro5_8Macro8Pmb;
    offsetMatrixId[macro8_index + 9 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmbMacro5_8Macro8Pmb;
    mainMatrixId[macro8_index + 10 * nCol]
      = ID::aStereoMainCz_pmPmPmcMacro5_8Macro8Pmc;
    offsetMatrixId[macro8_index + 10 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmcMacro5_8Macro8Pmc;
    mainMatrixId[macro8_index + 11 * nCol]
      = ID::aStereoMainCz_pmPmPmdMacro5_8Macro8Pmd;
    offsetMatrixId[macro8_index + 11 * nCol]
      = ID::aStereoL_roffsetCz_pmPmPmdMacro5_8Macro8Pmd;
    mainMatrixId[macro8_index + 12 * nCol]
      = ID::bStereoMainCz_pmCzIndexMacro5_8Macro8Index;
    offsetMatrixId[macro8_index + 12 * nCol]
      = ID::bStereoL_roffsetCz_pmCzIndexMacro5_8Macro8Index;
    mainMatrixId[macro8_index + 13 * nCol]
      = ID::bStereoMainCz_pmCzOctaveMacro5_8Macro8Octave;
    offsetMatrixId[macro8_index + 13 * nCol]
      = ID::bStereoL_roffsetCz_pmCzOctaveMacro5_8Macro8Octave;
    mainMatrixId[macro8_index + 14 * nCol]
      = ID::bStereoMainCz_pmCzPhaseMacro5_8Macro8Phase;
    offsetMatrixId[macro8_index + 14 * nCol]
      = ID::bStereoL_roffsetCz_pmCzPhaseMacro5_8Macro8Phase;
    mainMatrixId[macro8_index + 15 * nCol]
      = ID::bStereoMainCz_pmPmPmaMacro5_8Macro8Pma;
    offsetMatrixId[macro8_index + 15 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmaMacro5_8Macro8Pma;
    mainMatrixId[macro8_index + 16 * nCol]
      = ID::bStereoMainCz_pmPmPmbMacro5_8Macro8Pmb;
    offsetMatrixId[macro8_index + 16 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmbMacro5_8Macro8Pmb;
    mainMatrixId[macro8_index + 17 * nCol]
      = ID::bStereoMainCz_pmPmPmcMacro5_8Macro8Pmc;
    offsetMatrixId[macro8_index + 17 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmcMacro5_8Macro8Pmc;
    mainMatrixId[macro8_index + 18 * nCol]
      = ID::bStereoMainCz_pmPmPmdMacro5_8Macro8Pmd;
    offsetMatrixId[macro8_index + 18 * nCol]
      = ID::bStereoL_roffsetCz_pmPmPmdMacro5_8Macro8Pmd;
    mainMatrixId[macro8_index + 19 * nCol]
      = ID::cStereoMainCz_pmCzIndexMacro5_8Macro8Index;
    offsetMatrixId[macro8_index + 19 * nCol]
      = ID::cStereoL_roffsetCz_pmCzIndexMacro5_8Macro8Index;
    mainMatrixId[macro8_index + 20 * nCol]
      = ID::cStereoMainCz_pmCzOctaveMacro5_8Macro8Octave;
    offsetMatrixId[macro8_index + 20 * nCol]
      = ID::cStereoL_roffsetCz_pmCzOctaveMacro5_8Macro8Octave;
    mainMatrixId[macro8_index + 21 * nCol]
      = ID::cStereoMainCz_pmCzPhaseMacro5_8Macro8Phase;
    offsetMatrixId[macro8_index + 21 * nCol]
      = ID::cStereoL_roffsetCz_pmCzPhaseMacro5_8Macro8Phase;
    mainMatrixId[macro8_index + 22 * nCol]
      = ID::cStereoMainCz_pmPmPmaMacro5_8Macro8Pma;
    offsetMatrixId[macro8_index + 22 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmaMacro5_8Macro8Pma;
    mainMatrixId[macro8_index + 23 * nCol]
      = ID::cStereoMainCz_pmPmPmbMacro5_8Macro8Pmb;
    offsetMatrixId[macro8_index + 23 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmbMacro5_8Macro8Pmb;
    mainMatrixId[macro8_index + 24 * nCol]
      = ID::cStereoMainCz_pmPmPmcMacro5_8Macro8Pmc;
    offsetMatrixId[macro8_index + 24 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmcMacro5_8Macro8Pmc;
    mainMatrixId[macro8_index + 25 * nCol]
      = ID::cStereoMainCz_pmPmPmdMacro5_8Macro8Pmd;
    offsetMatrixId[macro8_index + 25 * nCol]
      = ID::cStereoL_roffsetCz_pmPmPmdMacro5_8Macro8Pmd;
    mainMatrixId[macro8_index + 26 * nCol]
      = ID::dStereoMainCz_pmCzIndexMacro5_8Macro8Index;
    offsetMatrixId[macro8_index + 26 * nCol]
      = ID::dStereoL_roffsetCz_pmCzIndexMacro5_8Macro8Index;
    mainMatrixId[macro8_index + 27 * nCol]
      = ID::dStereoMainCz_pmCzOctaveMacro5_8Macro8Octave;
    offsetMatrixId[macro8_index + 27 * nCol]
      = ID::dStereoL_roffsetCz_pmCzOctaveMacro5_8Macro8Octave;
    mainMatrixId[macro8_index + 28 * nCol]
      = ID::dStereoMainCz_pmCzPhaseMacro5_8Macro8Phase;
    offsetMatrixId[macro8_index + 28 * nCol]
      = ID::dStereoL_roffsetCz_pmCzPhaseMacro5_8Macro8Phase;
    mainMatrixId[macro8_index + 29 * nCol]
      = ID::dStereoMainCz_pmPmPmaMacro5_8Macro8Pma;
    offsetMatrixId[macro8_index + 29 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmaMacro5_8Macro8Pma;
    mainMatrixId[macro8_index + 30 * nCol]
      = ID::dStereoMainCz_pmPmPmbMacro5_8Macro8Pmb;
    offsetMatrixId[macro8_index + 30 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmbMacro5_8Macro8Pmb;
    mainMatrixId[macro8_index + 31 * nCol]
      = ID::dStereoMainCz_pmPmPmcMacro5_8Macro8Pmc;
    offsetMatrixId[macro8_index + 31 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmcMacro5_8Macro8Pmc;
    mainMatrixId[macro8_index + 32 * nCol]
      = ID::dStereoMainCz_pmPmPmdMacro5_8Macro8Pmd;
    offsetMatrixId[macro8_index + 32 * nCol]
      = ID::dStereoL_roffsetCz_pmPmPmdMacro5_8Macro8Pmd;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft1, macroTop0 - margin,
        matrixWidth, matrixKnobSize, uiTextSize, "Macro"));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft1, macroTop0 - margin,
        matrixWidth, matrixKnobSize, uiTextSize, "Macro"));
    
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft1 + 0 * matrixKnobSize, macroTop0 + matrixKnobSize,
        matrixKnobSize, matrixKnobSize, uiTextSize, "1"));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft1 + 0 * matrixKnobSize, macroTop0 + matrixKnobSize,
        matrixKnobSize, matrixKnobSize, uiTextSize, "1"));
    
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft1 + 1 * matrixKnobSize, macroTop0 + matrixKnobSize,
        matrixKnobSize, matrixKnobSize, uiTextSize, "2"));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft1 + 1 * matrixKnobSize, macroTop0 + matrixKnobSize,
        matrixKnobSize, matrixKnobSize, uiTextSize, "2"));
    
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft1 + 2 * matrixKnobSize, macroTop0 + matrixKnobSize,
        matrixKnobSize, matrixKnobSize, uiTextSize, "3"));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft1 + 2 * matrixKnobSize, macroTop0 + matrixKnobSize,
        matrixKnobSize, matrixKnobSize, uiTextSize, "3"));
    
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft1 + 3 * matrixKnobSize, macroTop0 + matrixKnobSize,
        matrixKnobSize, matrixKnobSize, uiTextSize, "4"));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft1 + 3 * matrixKnobSize, macroTop0 + matrixKnobSize,
        matrixKnobSize, matrixKnobSize, uiTextSize, "4"));
    
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft1 + 4 * matrixKnobSize, macroTop0 + matrixKnobSize,
        matrixKnobSize, matrixKnobSize, uiTextSize, "5"));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft1 + 4 * matrixKnobSize, macroTop0 + matrixKnobSize,
        matrixKnobSize, matrixKnobSize, uiTextSize, "5"));
    
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft1 + 5 * matrixKnobSize, macroTop0 + matrixKnobSize,
        matrixKnobSize, matrixKnobSize, uiTextSize, "6"));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft1 + 5 * matrixKnobSize, macroTop0 + matrixKnobSize,
        matrixKnobSize, matrixKnobSize, uiTextSize, "6"));
    
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft1 + 6 * matrixKnobSize, macroTop0 + matrixKnobSize,
        matrixKnobSize, matrixKnobSize, uiTextSize, "7"));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft1 + 6 * matrixKnobSize, macroTop0 + matrixKnobSize,
        matrixKnobSize, matrixKnobSize, uiTextSize, "7"));
    
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(macroLeft1 + 7 * matrixKnobSize, macroTop0 + matrixKnobSize,
        matrixKnobSize, matrixKnobSize, uiTextSize, "8"));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(macroLeft1 + 7 * matrixKnobSize, macroTop0 + matrixKnobSize,
        matrixKnobSize, matrixKnobSize, uiTextSize, "8"));
    

    auto textViewMainStatus = addTextView(
      macroLeft0, macroTop2, matrixWidth + knobX + margin, 2 * labelHeight,
      uiTextSize, "Initialized.");
    tabviewGlobal->addWidget(globaltabIndex::main, textViewMainStatus);
    tabviewGlobal->addWidget(globaltabIndex::main,
      addMatrixKnob(
        macroLeft1, macroTop1, matrixWidth, matrixHeight,
        nRow, nCol, mainMatrixId, textViewMainStatus));

    auto textViewOffsetStatus = addTextView(
      macroLeft0, macroTop2, matrixWidth + knobX + margin, 2 * labelHeight,
      uiTextSize, "Initialized.");
    tabviewGlobal->addWidget(globaltabIndex::l_roffset, textViewOffsetStatus);
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addMatrixKnob(
        macroLeft1, macroTop1, matrixWidth, matrixHeight,
        nRow, nCol, offsetMatrixId, textViewOffsetStatus));

    const auto abcd_crossfade_top0 = globaltabInsideTop0;
    const auto abcd_crossfade_left0
      = globaltabInsideLeft0 + 2 * knobX + matrixWidth + uiMargin;
    const auto abcd_crossfade_top0_macro1
      = abcd_crossfade_top0 + 0 * crossfade_height;
    const auto abcd_crossfade_top1_macro1
      = abcd_crossfade_top0_macro1 + knobY;
    const auto abcd_crossfade_left0_macro1
      = abcd_crossfade_left0 + 0 * crossfade_width;
    const auto abcd_crossfade_left1_macro1
      = abcd_crossfade_left0_macro1 + xyPadSize + 2 * margin;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(abcd_crossfade_left0_macro1, abcd_crossfade_top0_macro1,
        xyPadSize, labelHeight, uiTextSize, "macro1"));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(abcd_crossfade_left0_macro1, abcd_crossfade_top0_macro1,
        xyPadSize, labelHeight, uiTextSize, "macro1"));
    xypad_abcd_macro1_main = addXYPad(
      abcd_crossfade_left0_macro1, abcd_crossfade_top0_macro1 + labelY,
      xyPadSize, xyPadSize,
      ID::globalStereoMainVectorAb_cdMacro1_4Macro1Ab_cd, ID::globalStereoMainVectorAc_bdMacro1_4Macro1Ac_bd);
    tabviewGlobal->addWidget(globaltabIndex::main, xypad_abcd_macro1_main);
    xypad_abcd_macro1_offset = addXYPad(
      abcd_crossfade_left0_macro1, abcd_crossfade_top0_macro1 + labelY,
      xyPadSize, xyPadSize,
      ID::globalStereoL_roffsetVectorAb_cdMacro1_4Macro1Ab_cd, ID::globalStereoL_roffsetVectorAc_bdMacro1_4Macro1Ac_bd);
    tabviewGlobal->addWidget(globaltabIndex::l_roffset, xypad_abcd_macro1_offset);
    auto tuple_macro1_ab_cd_main = addKnob(
      abcd_crossfade_left1_macro1, abcd_crossfade_top0_macro1,
      knobWidth, margin, uiTextSize,
      "ab_cd", ID::globalStereoMainVectorAb_cdMacro1_4Macro1Ab_cd);
    widget_macro1_ab_cd_main = std::get<0>(tuple_macro1_ab_cd_main);
    tabviewGlobal->addWidget(globaltabIndex::main, tuple_macro1_ab_cd_main);
    auto tuple_macro1_ab_cd_offset = addKnob(
      abcd_crossfade_left1_macro1, abcd_crossfade_top0_macro1,
      knobWidth, margin, uiTextSize,
      "ab_cd", ID::globalStereoL_roffsetVectorAb_cdMacro1_4Macro1Ab_cd);
    widget_macro1_ab_cd_offset = std::get<0>(tuple_macro1_ab_cd_offset);
    tabviewGlobal->addWidget(globaltabIndex::l_roffset, tuple_macro1_ab_cd_offset);
    auto tuple_macro1_ac_bd_main = addKnob(
      abcd_crossfade_left1_macro1, abcd_crossfade_top1_macro1,
      knobWidth, margin, uiTextSize,
      "ac_bd", ID::globalStereoMainVectorAc_bdMacro1_4Macro1Ac_bd);
    widget_macro1_ac_bd_main = std::get<0>(tuple_macro1_ac_bd_main);
    tabviewGlobal->addWidget(globaltabIndex::main, tuple_macro1_ac_bd_main);
    auto tuple_macro1_ac_bd_offset = addKnob(
      abcd_crossfade_left1_macro1, abcd_crossfade_top1_macro1,
      knobWidth, margin, uiTextSize,
      "ac_bd", ID::globalStereoL_roffsetVectorAc_bdMacro1_4Macro1Ac_bd);
    widget_macro1_ac_bd_offset = std::get<0>(tuple_macro1_ac_bd_offset);
    tabviewGlobal->addWidget(globaltabIndex::l_roffset, tuple_macro1_ac_bd_offset);
    
    const auto abcd_crossfade_top0_macro2
      = abcd_crossfade_top0 + 1 * crossfade_height;
    const auto abcd_crossfade_top1_macro2
      = abcd_crossfade_top0_macro2 + knobY;
    const auto abcd_crossfade_left0_macro2
      = abcd_crossfade_left0 + 0 * crossfade_width;
    const auto abcd_crossfade_left1_macro2
      = abcd_crossfade_left0_macro2 + xyPadSize + 2 * margin;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(abcd_crossfade_left0_macro2, abcd_crossfade_top0_macro2,
        xyPadSize, labelHeight, uiTextSize, "macro2"));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(abcd_crossfade_left0_macro2, abcd_crossfade_top0_macro2,
        xyPadSize, labelHeight, uiTextSize, "macro2"));
    xypad_abcd_macro2_main = addXYPad(
      abcd_crossfade_left0_macro2, abcd_crossfade_top0_macro2 + labelY,
      xyPadSize, xyPadSize,
      ID::globalStereoMainVectorAb_cdMacro1_4Macro2Ab_cd, ID::globalStereoMainVectorAc_bdMacro1_4Macro2Ac_bd);
    tabviewGlobal->addWidget(globaltabIndex::main, xypad_abcd_macro2_main);
    xypad_abcd_macro2_offset = addXYPad(
      abcd_crossfade_left0_macro2, abcd_crossfade_top0_macro2 + labelY,
      xyPadSize, xyPadSize,
      ID::globalStereoL_roffsetVectorAb_cdMacro1_4Macro2Ab_cd, ID::globalStereoL_roffsetVectorAc_bdMacro1_4Macro2Ac_bd);
    tabviewGlobal->addWidget(globaltabIndex::l_roffset, xypad_abcd_macro2_offset);
    auto tuple_macro2_ab_cd_main = addKnob(
      abcd_crossfade_left1_macro2, abcd_crossfade_top0_macro2,
      knobWidth, margin, uiTextSize,
      "ab_cd", ID::globalStereoMainVectorAb_cdMacro1_4Macro2Ab_cd);
    widget_macro2_ab_cd_main = std::get<0>(tuple_macro2_ab_cd_main);
    tabviewGlobal->addWidget(globaltabIndex::main, tuple_macro2_ab_cd_main);
    auto tuple_macro2_ab_cd_offset = addKnob(
      abcd_crossfade_left1_macro2, abcd_crossfade_top0_macro2,
      knobWidth, margin, uiTextSize,
      "ab_cd", ID::globalStereoL_roffsetVectorAb_cdMacro1_4Macro2Ab_cd);
    widget_macro2_ab_cd_offset = std::get<0>(tuple_macro2_ab_cd_offset);
    tabviewGlobal->addWidget(globaltabIndex::l_roffset, tuple_macro2_ab_cd_offset);
    auto tuple_macro2_ac_bd_main = addKnob(
      abcd_crossfade_left1_macro2, abcd_crossfade_top1_macro2,
      knobWidth, margin, uiTextSize,
      "ac_bd", ID::globalStereoMainVectorAc_bdMacro1_4Macro2Ac_bd);
    widget_macro2_ac_bd_main = std::get<0>(tuple_macro2_ac_bd_main);
    tabviewGlobal->addWidget(globaltabIndex::main, tuple_macro2_ac_bd_main);
    auto tuple_macro2_ac_bd_offset = addKnob(
      abcd_crossfade_left1_macro2, abcd_crossfade_top1_macro2,
      knobWidth, margin, uiTextSize,
      "ac_bd", ID::globalStereoL_roffsetVectorAc_bdMacro1_4Macro2Ac_bd);
    widget_macro2_ac_bd_offset = std::get<0>(tuple_macro2_ac_bd_offset);
    tabviewGlobal->addWidget(globaltabIndex::l_roffset, tuple_macro2_ac_bd_offset);
    
    const auto abcd_crossfade_top0_macro3
      = abcd_crossfade_top0 + 2 * crossfade_height;
    const auto abcd_crossfade_top1_macro3
      = abcd_crossfade_top0_macro3 + knobY;
    const auto abcd_crossfade_left0_macro3
      = abcd_crossfade_left0 + 0 * crossfade_width;
    const auto abcd_crossfade_left1_macro3
      = abcd_crossfade_left0_macro3 + xyPadSize + 2 * margin;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(abcd_crossfade_left0_macro3, abcd_crossfade_top0_macro3,
        xyPadSize, labelHeight, uiTextSize, "macro3"));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(abcd_crossfade_left0_macro3, abcd_crossfade_top0_macro3,
        xyPadSize, labelHeight, uiTextSize, "macro3"));
    xypad_abcd_macro3_main = addXYPad(
      abcd_crossfade_left0_macro3, abcd_crossfade_top0_macro3 + labelY,
      xyPadSize, xyPadSize,
      ID::globalStereoMainVectorAb_cdMacro1_4Macro3Ab_cd, ID::globalStereoMainVectorAc_bdMacro1_4Macro3Ac_bd);
    tabviewGlobal->addWidget(globaltabIndex::main, xypad_abcd_macro3_main);
    xypad_abcd_macro3_offset = addXYPad(
      abcd_crossfade_left0_macro3, abcd_crossfade_top0_macro3 + labelY,
      xyPadSize, xyPadSize,
      ID::globalStereoL_roffsetVectorAb_cdMacro1_4Macro3Ab_cd, ID::globalStereoL_roffsetVectorAc_bdMacro1_4Macro3Ac_bd);
    tabviewGlobal->addWidget(globaltabIndex::l_roffset, xypad_abcd_macro3_offset);
    auto tuple_macro3_ab_cd_main = addKnob(
      abcd_crossfade_left1_macro3, abcd_crossfade_top0_macro3,
      knobWidth, margin, uiTextSize,
      "ab_cd", ID::globalStereoMainVectorAb_cdMacro1_4Macro3Ab_cd);
    widget_macro3_ab_cd_main = std::get<0>(tuple_macro3_ab_cd_main);
    tabviewGlobal->addWidget(globaltabIndex::main, tuple_macro3_ab_cd_main);
    auto tuple_macro3_ab_cd_offset = addKnob(
      abcd_crossfade_left1_macro3, abcd_crossfade_top0_macro3,
      knobWidth, margin, uiTextSize,
      "ab_cd", ID::globalStereoL_roffsetVectorAb_cdMacro1_4Macro3Ab_cd);
    widget_macro3_ab_cd_offset = std::get<0>(tuple_macro3_ab_cd_offset);
    tabviewGlobal->addWidget(globaltabIndex::l_roffset, tuple_macro3_ab_cd_offset);
    auto tuple_macro3_ac_bd_main = addKnob(
      abcd_crossfade_left1_macro3, abcd_crossfade_top1_macro3,
      knobWidth, margin, uiTextSize,
      "ac_bd", ID::globalStereoMainVectorAc_bdMacro1_4Macro3Ac_bd);
    widget_macro3_ac_bd_main = std::get<0>(tuple_macro3_ac_bd_main);
    tabviewGlobal->addWidget(globaltabIndex::main, tuple_macro3_ac_bd_main);
    auto tuple_macro3_ac_bd_offset = addKnob(
      abcd_crossfade_left1_macro3, abcd_crossfade_top1_macro3,
      knobWidth, margin, uiTextSize,
      "ac_bd", ID::globalStereoL_roffsetVectorAc_bdMacro1_4Macro3Ac_bd);
    widget_macro3_ac_bd_offset = std::get<0>(tuple_macro3_ac_bd_offset);
    tabviewGlobal->addWidget(globaltabIndex::l_roffset, tuple_macro3_ac_bd_offset);
    
    const auto abcd_crossfade_top0_macro4
      = abcd_crossfade_top0 + 3 * crossfade_height;
    const auto abcd_crossfade_top1_macro4
      = abcd_crossfade_top0_macro4 + knobY;
    const auto abcd_crossfade_left0_macro4
      = abcd_crossfade_left0 + 0 * crossfade_width;
    const auto abcd_crossfade_left1_macro4
      = abcd_crossfade_left0_macro4 + xyPadSize + 2 * margin;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(abcd_crossfade_left0_macro4, abcd_crossfade_top0_macro4,
        xyPadSize, labelHeight, uiTextSize, "macro4"));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(abcd_crossfade_left0_macro4, abcd_crossfade_top0_macro4,
        xyPadSize, labelHeight, uiTextSize, "macro4"));
    xypad_abcd_macro4_main = addXYPad(
      abcd_crossfade_left0_macro4, abcd_crossfade_top0_macro4 + labelY,
      xyPadSize, xyPadSize,
      ID::globalStereoMainVectorAb_cdMacro1_4Macro4Ab_cd, ID::globalStereoMainVectorAc_bdMacro1_4Macro4Ac_bd);
    tabviewGlobal->addWidget(globaltabIndex::main, xypad_abcd_macro4_main);
    xypad_abcd_macro4_offset = addXYPad(
      abcd_crossfade_left0_macro4, abcd_crossfade_top0_macro4 + labelY,
      xyPadSize, xyPadSize,
      ID::globalStereoL_roffsetVectorAb_cdMacro1_4Macro4Ab_cd, ID::globalStereoL_roffsetVectorAc_bdMacro1_4Macro4Ac_bd);
    tabviewGlobal->addWidget(globaltabIndex::l_roffset, xypad_abcd_macro4_offset);
    auto tuple_macro4_ab_cd_main = addKnob(
      abcd_crossfade_left1_macro4, abcd_crossfade_top0_macro4,
      knobWidth, margin, uiTextSize,
      "ab_cd", ID::globalStereoMainVectorAb_cdMacro1_4Macro4Ab_cd);
    widget_macro4_ab_cd_main = std::get<0>(tuple_macro4_ab_cd_main);
    tabviewGlobal->addWidget(globaltabIndex::main, tuple_macro4_ab_cd_main);
    auto tuple_macro4_ab_cd_offset = addKnob(
      abcd_crossfade_left1_macro4, abcd_crossfade_top0_macro4,
      knobWidth, margin, uiTextSize,
      "ab_cd", ID::globalStereoL_roffsetVectorAb_cdMacro1_4Macro4Ab_cd);
    widget_macro4_ab_cd_offset = std::get<0>(tuple_macro4_ab_cd_offset);
    tabviewGlobal->addWidget(globaltabIndex::l_roffset, tuple_macro4_ab_cd_offset);
    auto tuple_macro4_ac_bd_main = addKnob(
      abcd_crossfade_left1_macro4, abcd_crossfade_top1_macro4,
      knobWidth, margin, uiTextSize,
      "ac_bd", ID::globalStereoMainVectorAc_bdMacro1_4Macro4Ac_bd);
    widget_macro4_ac_bd_main = std::get<0>(tuple_macro4_ac_bd_main);
    tabviewGlobal->addWidget(globaltabIndex::main, tuple_macro4_ac_bd_main);
    auto tuple_macro4_ac_bd_offset = addKnob(
      abcd_crossfade_left1_macro4, abcd_crossfade_top1_macro4,
      knobWidth, margin, uiTextSize,
      "ac_bd", ID::globalStereoL_roffsetVectorAc_bdMacro1_4Macro4Ac_bd);
    widget_macro4_ac_bd_offset = std::get<0>(tuple_macro4_ac_bd_offset);
    tabviewGlobal->addWidget(globaltabIndex::l_roffset, tuple_macro4_ac_bd_offset);
    
    const auto abcd_crossfade_top0_macro5
      = abcd_crossfade_top0 + 0 * crossfade_height;
    const auto abcd_crossfade_top1_macro5
      = abcd_crossfade_top0_macro5 + knobY;
    const auto abcd_crossfade_left0_macro5
      = abcd_crossfade_left0 + 1 * crossfade_width;
    const auto abcd_crossfade_left1_macro5
      = abcd_crossfade_left0_macro5 + xyPadSize + 2 * margin;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(abcd_crossfade_left0_macro5, abcd_crossfade_top0_macro5,
        xyPadSize, labelHeight, uiTextSize, "macro5"));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(abcd_crossfade_left0_macro5, abcd_crossfade_top0_macro5,
        xyPadSize, labelHeight, uiTextSize, "macro5"));
    xypad_abcd_macro5_main = addXYPad(
      abcd_crossfade_left0_macro5, abcd_crossfade_top0_macro5 + labelY,
      xyPadSize, xyPadSize,
      ID::globalStereoMainVectorAb_cdMacro5_8Macro5Ab_cd, ID::globalStereoMainVectorAc_bdMacro5_8Macro5Ac_bd);
    tabviewGlobal->addWidget(globaltabIndex::main, xypad_abcd_macro5_main);
    xypad_abcd_macro5_offset = addXYPad(
      abcd_crossfade_left0_macro5, abcd_crossfade_top0_macro5 + labelY,
      xyPadSize, xyPadSize,
      ID::globalStereoL_roffsetVectorAb_cdMacro5_8Macro5Ab_cd, ID::globalStereoL_roffsetVectorAc_bdMacro5_8Macro5Ac_bd);
    tabviewGlobal->addWidget(globaltabIndex::l_roffset, xypad_abcd_macro5_offset);
    auto tuple_macro5_ab_cd_main = addKnob(
      abcd_crossfade_left1_macro5, abcd_crossfade_top0_macro5,
      knobWidth, margin, uiTextSize,
      "ab_cd", ID::globalStereoMainVectorAb_cdMacro5_8Macro5Ab_cd);
    widget_macro5_ab_cd_main = std::get<0>(tuple_macro5_ab_cd_main);
    tabviewGlobal->addWidget(globaltabIndex::main, tuple_macro5_ab_cd_main);
    auto tuple_macro5_ab_cd_offset = addKnob(
      abcd_crossfade_left1_macro5, abcd_crossfade_top0_macro5,
      knobWidth, margin, uiTextSize,
      "ab_cd", ID::globalStereoL_roffsetVectorAb_cdMacro5_8Macro5Ab_cd);
    widget_macro5_ab_cd_offset = std::get<0>(tuple_macro5_ab_cd_offset);
    tabviewGlobal->addWidget(globaltabIndex::l_roffset, tuple_macro5_ab_cd_offset);
    auto tuple_macro5_ac_bd_main = addKnob(
      abcd_crossfade_left1_macro5, abcd_crossfade_top1_macro5,
      knobWidth, margin, uiTextSize,
      "ac_bd", ID::globalStereoMainVectorAc_bdMacro5_8Macro5Ac_bd);
    widget_macro5_ac_bd_main = std::get<0>(tuple_macro5_ac_bd_main);
    tabviewGlobal->addWidget(globaltabIndex::main, tuple_macro5_ac_bd_main);
    auto tuple_macro5_ac_bd_offset = addKnob(
      abcd_crossfade_left1_macro5, abcd_crossfade_top1_macro5,
      knobWidth, margin, uiTextSize,
      "ac_bd", ID::globalStereoL_roffsetVectorAc_bdMacro5_8Macro5Ac_bd);
    widget_macro5_ac_bd_offset = std::get<0>(tuple_macro5_ac_bd_offset);
    tabviewGlobal->addWidget(globaltabIndex::l_roffset, tuple_macro5_ac_bd_offset);
    
    const auto abcd_crossfade_top0_macro6
      = abcd_crossfade_top0 + 1 * crossfade_height;
    const auto abcd_crossfade_top1_macro6
      = abcd_crossfade_top0_macro6 + knobY;
    const auto abcd_crossfade_left0_macro6
      = abcd_crossfade_left0 + 1 * crossfade_width;
    const auto abcd_crossfade_left1_macro6
      = abcd_crossfade_left0_macro6 + xyPadSize + 2 * margin;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(abcd_crossfade_left0_macro6, abcd_crossfade_top0_macro6,
        xyPadSize, labelHeight, uiTextSize, "macro6"));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(abcd_crossfade_left0_macro6, abcd_crossfade_top0_macro6,
        xyPadSize, labelHeight, uiTextSize, "macro6"));
    xypad_abcd_macro6_main = addXYPad(
      abcd_crossfade_left0_macro6, abcd_crossfade_top0_macro6 + labelY,
      xyPadSize, xyPadSize,
      ID::globalStereoMainVectorAb_cdMacro5_8Macro6Ab_cd, ID::globalStereoMainVectorAc_bdMacro5_8Macro6Ac_bd);
    tabviewGlobal->addWidget(globaltabIndex::main, xypad_abcd_macro6_main);
    xypad_abcd_macro6_offset = addXYPad(
      abcd_crossfade_left0_macro6, abcd_crossfade_top0_macro6 + labelY,
      xyPadSize, xyPadSize,
      ID::globalStereoL_roffsetVectorAb_cdMacro5_8Macro6Ab_cd, ID::globalStereoL_roffsetVectorAc_bdMacro5_8Macro6Ac_bd);
    tabviewGlobal->addWidget(globaltabIndex::l_roffset, xypad_abcd_macro6_offset);
    auto tuple_macro6_ab_cd_main = addKnob(
      abcd_crossfade_left1_macro6, abcd_crossfade_top0_macro6,
      knobWidth, margin, uiTextSize,
      "ab_cd", ID::globalStereoMainVectorAb_cdMacro5_8Macro6Ab_cd);
    widget_macro6_ab_cd_main = std::get<0>(tuple_macro6_ab_cd_main);
    tabviewGlobal->addWidget(globaltabIndex::main, tuple_macro6_ab_cd_main);
    auto tuple_macro6_ab_cd_offset = addKnob(
      abcd_crossfade_left1_macro6, abcd_crossfade_top0_macro6,
      knobWidth, margin, uiTextSize,
      "ab_cd", ID::globalStereoL_roffsetVectorAb_cdMacro5_8Macro6Ab_cd);
    widget_macro6_ab_cd_offset = std::get<0>(tuple_macro6_ab_cd_offset);
    tabviewGlobal->addWidget(globaltabIndex::l_roffset, tuple_macro6_ab_cd_offset);
    auto tuple_macro6_ac_bd_main = addKnob(
      abcd_crossfade_left1_macro6, abcd_crossfade_top1_macro6,
      knobWidth, margin, uiTextSize,
      "ac_bd", ID::globalStereoMainVectorAc_bdMacro5_8Macro6Ac_bd);
    widget_macro6_ac_bd_main = std::get<0>(tuple_macro6_ac_bd_main);
    tabviewGlobal->addWidget(globaltabIndex::main, tuple_macro6_ac_bd_main);
    auto tuple_macro6_ac_bd_offset = addKnob(
      abcd_crossfade_left1_macro6, abcd_crossfade_top1_macro6,
      knobWidth, margin, uiTextSize,
      "ac_bd", ID::globalStereoL_roffsetVectorAc_bdMacro5_8Macro6Ac_bd);
    widget_macro6_ac_bd_offset = std::get<0>(tuple_macro6_ac_bd_offset);
    tabviewGlobal->addWidget(globaltabIndex::l_roffset, tuple_macro6_ac_bd_offset);
    
    const auto abcd_crossfade_top0_macro7
      = abcd_crossfade_top0 + 2 * crossfade_height;
    const auto abcd_crossfade_top1_macro7
      = abcd_crossfade_top0_macro7 + knobY;
    const auto abcd_crossfade_left0_macro7
      = abcd_crossfade_left0 + 1 * crossfade_width;
    const auto abcd_crossfade_left1_macro7
      = abcd_crossfade_left0_macro7 + xyPadSize + 2 * margin;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(abcd_crossfade_left0_macro7, abcd_crossfade_top0_macro7,
        xyPadSize, labelHeight, uiTextSize, "macro7"));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(abcd_crossfade_left0_macro7, abcd_crossfade_top0_macro7,
        xyPadSize, labelHeight, uiTextSize, "macro7"));
    xypad_abcd_macro7_main = addXYPad(
      abcd_crossfade_left0_macro7, abcd_crossfade_top0_macro7 + labelY,
      xyPadSize, xyPadSize,
      ID::globalStereoMainVectorAb_cdMacro5_8Macro7Ab_cd, ID::globalStereoMainVectorAc_bdMacro5_8Macro7Ac_bd);
    tabviewGlobal->addWidget(globaltabIndex::main, xypad_abcd_macro7_main);
    xypad_abcd_macro7_offset = addXYPad(
      abcd_crossfade_left0_macro7, abcd_crossfade_top0_macro7 + labelY,
      xyPadSize, xyPadSize,
      ID::globalStereoL_roffsetVectorAb_cdMacro5_8Macro7Ab_cd, ID::globalStereoL_roffsetVectorAc_bdMacro5_8Macro7Ac_bd);
    tabviewGlobal->addWidget(globaltabIndex::l_roffset, xypad_abcd_macro7_offset);
    auto tuple_macro7_ab_cd_main = addKnob(
      abcd_crossfade_left1_macro7, abcd_crossfade_top0_macro7,
      knobWidth, margin, uiTextSize,
      "ab_cd", ID::globalStereoMainVectorAb_cdMacro5_8Macro7Ab_cd);
    widget_macro7_ab_cd_main = std::get<0>(tuple_macro7_ab_cd_main);
    tabviewGlobal->addWidget(globaltabIndex::main, tuple_macro7_ab_cd_main);
    auto tuple_macro7_ab_cd_offset = addKnob(
      abcd_crossfade_left1_macro7, abcd_crossfade_top0_macro7,
      knobWidth, margin, uiTextSize,
      "ab_cd", ID::globalStereoL_roffsetVectorAb_cdMacro5_8Macro7Ab_cd);
    widget_macro7_ab_cd_offset = std::get<0>(tuple_macro7_ab_cd_offset);
    tabviewGlobal->addWidget(globaltabIndex::l_roffset, tuple_macro7_ab_cd_offset);
    auto tuple_macro7_ac_bd_main = addKnob(
      abcd_crossfade_left1_macro7, abcd_crossfade_top1_macro7,
      knobWidth, margin, uiTextSize,
      "ac_bd", ID::globalStereoMainVectorAc_bdMacro5_8Macro7Ac_bd);
    widget_macro7_ac_bd_main = std::get<0>(tuple_macro7_ac_bd_main);
    tabviewGlobal->addWidget(globaltabIndex::main, tuple_macro7_ac_bd_main);
    auto tuple_macro7_ac_bd_offset = addKnob(
      abcd_crossfade_left1_macro7, abcd_crossfade_top1_macro7,
      knobWidth, margin, uiTextSize,
      "ac_bd", ID::globalStereoL_roffsetVectorAc_bdMacro5_8Macro7Ac_bd);
    widget_macro7_ac_bd_offset = std::get<0>(tuple_macro7_ac_bd_offset);
    tabviewGlobal->addWidget(globaltabIndex::l_roffset, tuple_macro7_ac_bd_offset);
    
    const auto abcd_crossfade_top0_macro8
      = abcd_crossfade_top0 + 3 * crossfade_height;
    const auto abcd_crossfade_top1_macro8
      = abcd_crossfade_top0_macro8 + knobY;
    const auto abcd_crossfade_left0_macro8
      = abcd_crossfade_left0 + 1 * crossfade_width;
    const auto abcd_crossfade_left1_macro8
      = abcd_crossfade_left0_macro8 + xyPadSize + 2 * margin;
    tabviewGlobal->addWidget(globaltabIndex::main,
      addLabel(abcd_crossfade_left0_macro8, abcd_crossfade_top0_macro8,
        xyPadSize, labelHeight, uiTextSize, "macro8"));
    tabviewGlobal->addWidget(globaltabIndex::l_roffset,
      addLabel(abcd_crossfade_left0_macro8, abcd_crossfade_top0_macro8,
        xyPadSize, labelHeight, uiTextSize, "macro8"));
    xypad_abcd_macro8_main = addXYPad(
      abcd_crossfade_left0_macro8, abcd_crossfade_top0_macro8 + labelY,
      xyPadSize, xyPadSize,
      ID::globalStereoMainVectorAb_cdMacro5_8Macro8Ab_cd, ID::globalStereoMainVectorAc_bdMacro5_8Macro8Ac_bd);
    tabviewGlobal->addWidget(globaltabIndex::main, xypad_abcd_macro8_main);
    xypad_abcd_macro8_offset = addXYPad(
      abcd_crossfade_left0_macro8, abcd_crossfade_top0_macro8 + labelY,
      xyPadSize, xyPadSize,
      ID::globalStereoL_roffsetVectorAb_cdMacro5_8Macro8Ab_cd, ID::globalStereoL_roffsetVectorAc_bdMacro5_8Macro8Ac_bd);
    tabviewGlobal->addWidget(globaltabIndex::l_roffset, xypad_abcd_macro8_offset);
    auto tuple_macro8_ab_cd_main = addKnob(
      abcd_crossfade_left1_macro8, abcd_crossfade_top0_macro8,
      knobWidth, margin, uiTextSize,
      "ab_cd", ID::globalStereoMainVectorAb_cdMacro5_8Macro8Ab_cd);
    widget_macro8_ab_cd_main = std::get<0>(tuple_macro8_ab_cd_main);
    tabviewGlobal->addWidget(globaltabIndex::main, tuple_macro8_ab_cd_main);
    auto tuple_macro8_ab_cd_offset = addKnob(
      abcd_crossfade_left1_macro8, abcd_crossfade_top0_macro8,
      knobWidth, margin, uiTextSize,
      "ab_cd", ID::globalStereoL_roffsetVectorAb_cdMacro5_8Macro8Ab_cd);
    widget_macro8_ab_cd_offset = std::get<0>(tuple_macro8_ab_cd_offset);
    tabviewGlobal->addWidget(globaltabIndex::l_roffset, tuple_macro8_ab_cd_offset);
    auto tuple_macro8_ac_bd_main = addKnob(
      abcd_crossfade_left1_macro8, abcd_crossfade_top1_macro8,
      knobWidth, margin, uiTextSize,
      "ac_bd", ID::globalStereoMainVectorAc_bdMacro5_8Macro8Ac_bd);
    widget_macro8_ac_bd_main = std::get<0>(tuple_macro8_ac_bd_main);
    tabviewGlobal->addWidget(globaltabIndex::main, tuple_macro8_ac_bd_main);
    auto tuple_macro8_ac_bd_offset = addKnob(
      abcd_crossfade_left1_macro8, abcd_crossfade_top1_macro8,
      knobWidth, margin, uiTextSize,
      "ac_bd", ID::globalStereoL_roffsetVectorAc_bdMacro5_8Macro8Ac_bd);
    widget_macro8_ac_bd_offset = std::get<0>(tuple_macro8_ac_bd_offset);
    tabviewGlobal->addWidget(globaltabIndex::l_roffset, tuple_macro8_ac_bd_offset);
    
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
    //tabviewGlobal->addWidget(globaltabIndex::main,
    //  addOptionMenu(
    //    macrotabInsideLeft0 + knobPairWidth,
    //    macrotabInsideTop0 + 1 * sectionHeight,
    //    2 * knobX, labelHeight, uiTextSize,
    //    ID::aType, osc_type_a_options));
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
    //tabviewGlobal->addWidget(globaltabIndex::main,
    //  addOptionMenu(
    //    macrotabInsideLeft0 + knobPairWidth,
    //    macrotabInsideTop0 + 2 * sectionHeight,
    //    2 * knobX, labelHeight, uiTextSize,
    //    ID::bType, osc_type_b_options));
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
    //tabviewGlobal->addWidget(globaltabIndex::main,
    //  addOptionMenu(
    //    macrotabInsideLeft0 + knobPairWidth,
    //    macrotabInsideTop0 + 3 * sectionHeight,
    //    2 * knobX, labelHeight, uiTextSize,
    //    ID::cType, osc_type_c_options));
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
    //tabviewGlobal->addWidget(globaltabIndex::main,
    //  addOptionMenu(
    //    macrotabInsideLeft0 + knobPairWidth,
    //    macrotabInsideTop0 + 4 * sectionHeight,
    //    2 * knobX, labelHeight, uiTextSize,
    //    ID::dType, osc_type_d_options));
    const auto global_top0 = globaltabInsideTop0;
    const auto global_top1 = global_top0 + labelY;
    const auto global_top2 = global_top1 + knobY;
    const auto global_left1 = globaltabInsideLeft0 + 2 * knobX;
    ////tabviewGlobal->addWidget(globaltabIndex::global,
    //  addKnob(globaltabInsideLeft0 + 0 * 2 * knobX, global_top1,
    //    knobWidth, margin, uiTextSize,
    //    "positivebendrange", ID::{'address': 'globalSwitchesPositivebendrange', 'scale': 'positivebendrange'}));
    ////tabviewGlobal->addWidget(globaltabIndex::global,
    //  addKnob(globaltabInsideLeft0 + 1 * 2 * knobX, global_top1,
    //    knobWidth, margin, uiTextSize,
    //    "negativebendrange", ID::{'address': 'globalSwitchesNegativebendrange', 'scale': 'negativebendrange'}));
    ////tabviewGlobal->addWidget(globaltabIndex::global,
    //  addKnob(globaltabInsideLeft0 + 2 * 2 * knobX, global_top1,
    //    knobWidth, margin, uiTextSize,
    //    "masterphase", ID::{'address': 'globalMasterphase', 'scale': 'masterphase'}));
    ////tabviewGlobal->addWidget(globaltabIndex::global,
    //  addKnob(globaltabInsideLeft0 + 3 * 2 * knobX, global_top1,
    //    knobWidth, margin, uiTextSize,
    //    "portamento", ID::{'address': 'globalPortamento', 'scale': 'portamento'}));
    //
    tabviewGlobal->addWidget(globaltabIndex::global,
      addLabel(globaltabInsideLeft0 + 0 * 2 * knobX, global_top1,
        knobX, labelHeight, uiTextSize,
        "positivebendrange"));
    tabviewGlobal->addWidget(globaltabIndex::global,
      addTextKnob(globaltabInsideLeft0 + 0 * 2 * knobX, global_top1 + labelY,
        knobWidth, labelHeight, uiTextSize,
        ID::globalSwitchesPositivebendrange,
        Scales::positivebendrange, false, 3));
    tabviewGlobal->addWidget(globaltabIndex::global,
      addLabel(globaltabInsideLeft0 + 1 * 2 * knobX, global_top1,
        knobX, labelHeight, uiTextSize,
        "negativebendrange"));
    tabviewGlobal->addWidget(globaltabIndex::global,
      addTextKnob(globaltabInsideLeft0 + 1 * 2 * knobX, global_top1 + labelY,
        knobWidth, labelHeight, uiTextSize,
        ID::globalSwitchesNegativebendrange,
        Scales::negativebendrange, false, 3));
    tabviewGlobal->addWidget(globaltabIndex::global,
      addLabel(globaltabInsideLeft0 + 2 * 2 * knobX, global_top1,
        knobX, labelHeight, uiTextSize,
        "masterphase"));
    tabviewGlobal->addWidget(globaltabIndex::global,
      addTextKnob(globaltabInsideLeft0 + 2 * 2 * knobX, global_top1 + labelY,
        knobWidth, labelHeight, uiTextSize,
        ID::globalMasterphase,
        Scales::masterphase, false, 3));
    tabviewGlobal->addWidget(globaltabIndex::global,
      addLabel(globaltabInsideLeft0 + 3 * 2 * knobX, global_top1,
        knobX, labelHeight, uiTextSize,
        "portamento"));
    tabviewGlobal->addWidget(globaltabIndex::global,
      addTextKnob(globaltabInsideLeft0 + 3 * 2 * knobX, global_top1 + labelY,
        knobWidth, labelHeight, uiTextSize,
        ID::globalPortamento,
        Scales::portamento, false, 3));
    
    std::vector<std::string> portaoff_auto_on_options = {
      "off",
      "auto",
      "on",
      
    };
    tabviewGlobal->addWidget(globaltabIndex::global,
      addOptionMenu(
        globaltabInsideLeft0, global_top2 + 0 * labelY,
        knobX, labelHeight, uiTextSize,
        ID::globalSwitchesPortaoff_auto_on, portaoff_auto_on_options));
    
    tabviewGlobal->addWidget(globaltabIndex::global,
      addCheckbox(
        global_left1, global_top2 + 0 * labelY,
        2 * knobX, labelHeight, uiTextSize,
        "freefloatosc", ID::globalSwitchesFreefloatosc));
    

    const auto envelope_1_top0 = globaltabInsideTop0 + 0 * sectionHeight;
    const auto envelope_1_top1 = envelope_1_top0 + labelY;
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addGroupLabel(globaltabInsideLeft0, envelope_1_top0, globaltabInnerWidth,
        labelHeight, midTextSize, "Envelope_1",
        ALIGN_LEFT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addKnob(globaltabInsideLeft0 + 0 * knobX, envelope_1_top1,
        knobWidth, margin, uiTextSize,
        "attack", ID::envelopesEnvelope_1Attack));
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addKnob(globaltabInsideLeft0 + 1 * knobX, envelope_1_top1,
        knobWidth, margin, uiTextSize,
        "decay", ID::envelopesEnvelope_1Decay));
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addKnob(globaltabInsideLeft0 + 2 * knobX, envelope_1_top1,
        knobWidth, margin, uiTextSize,
        "sustain", ID::envelopesEnvelope_1Sustain));
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addKnob(globaltabInsideLeft0 + 3 * knobX, envelope_1_top1,
        knobWidth, margin, uiTextSize,
        "release", ID::envelopesEnvelope_1Release));
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addKnob(globaltabInsideLeft0 + 4 * knobX, envelope_1_top1,
        knobWidth, margin, uiTextSize,
        "velsens", ID::envelopesEnvelope_1Velsens));
    
    const auto envelope0_top0 = globaltabInsideTop0 + 1 * sectionHeight;
    const auto envelope0_top1 = envelope0_top0 + labelY;
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addGroupLabel(globaltabInsideLeft0, envelope0_top0, globaltabInnerWidth,
        labelHeight, midTextSize, "Envelope0",
        ALIGN_LEFT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addKnob(globaltabInsideLeft0 + 0 * knobX, envelope0_top1,
        knobWidth, margin, uiTextSize,
        "attack", ID::envelopesEnvelope0Attack));
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addKnob(globaltabInsideLeft0 + 1 * knobX, envelope0_top1,
        knobWidth, margin, uiTextSize,
        "decay", ID::envelopesEnvelope0Decay));
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addKnob(globaltabInsideLeft0 + 2 * knobX, envelope0_top1,
        knobWidth, margin, uiTextSize,
        "sustain", ID::envelopesEnvelope0Sustain));
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addKnob(globaltabInsideLeft0 + 3 * knobX, envelope0_top1,
        knobWidth, margin, uiTextSize,
        "release", ID::envelopesEnvelope0Release));
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addKnob(globaltabInsideLeft0 + 4 * knobX, envelope0_top1,
        knobWidth, margin, uiTextSize,
        "velsens", ID::envelopesEnvelope0Velsens));
    
    const auto envelope1_top0 = globaltabInsideTop0 + 2 * sectionHeight;
    const auto envelope1_top1 = envelope1_top0 + labelY;
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addGroupLabel(globaltabInsideLeft0, envelope1_top0, globaltabInnerWidth,
        labelHeight, midTextSize, "Envelope1",
        ALIGN_LEFT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addKnob(globaltabInsideLeft0 + 0 * knobX, envelope1_top1,
        knobWidth, margin, uiTextSize,
        "attack", ID::envelopesEnvelope1Attack));
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addKnob(globaltabInsideLeft0 + 1 * knobX, envelope1_top1,
        knobWidth, margin, uiTextSize,
        "decay", ID::envelopesEnvelope1Decay));
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addKnob(globaltabInsideLeft0 + 2 * knobX, envelope1_top1,
        knobWidth, margin, uiTextSize,
        "sustain", ID::envelopesEnvelope1Sustain));
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addKnob(globaltabInsideLeft0 + 3 * knobX, envelope1_top1,
        knobWidth, margin, uiTextSize,
        "release", ID::envelopesEnvelope1Release));
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addKnob(globaltabInsideLeft0 + 4 * knobX, envelope1_top1,
        knobWidth, margin, uiTextSize,
        "velsens", ID::envelopesEnvelope1Velsens));
    
    const auto envelope2_top0 = globaltabInsideTop0 + 3 * sectionHeight;
    const auto envelope2_top1 = envelope2_top0 + labelY;
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addGroupLabel(globaltabInsideLeft0, envelope2_top0, globaltabInnerWidth,
        labelHeight, midTextSize, "Envelope2",
        ALIGN_LEFT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addKnob(globaltabInsideLeft0 + 0 * knobX, envelope2_top1,
        knobWidth, margin, uiTextSize,
        "attack", ID::envelopesEnvelope2Attack));
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addKnob(globaltabInsideLeft0 + 1 * knobX, envelope2_top1,
        knobWidth, margin, uiTextSize,
        "decay", ID::envelopesEnvelope2Decay));
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addKnob(globaltabInsideLeft0 + 2 * knobX, envelope2_top1,
        knobWidth, margin, uiTextSize,
        "sustain", ID::envelopesEnvelope2Sustain));
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addKnob(globaltabInsideLeft0 + 3 * knobX, envelope2_top1,
        knobWidth, margin, uiTextSize,
        "release", ID::envelopesEnvelope2Release));
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addKnob(globaltabInsideLeft0 + 4 * knobX, envelope2_top1,
        knobWidth, margin, uiTextSize,
        "velsens", ID::envelopesEnvelope2Velsens));
    
    const auto envelope3_top0 = globaltabInsideTop0 + 4 * sectionHeight;
    const auto envelope3_top1 = envelope3_top0 + labelY;
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addGroupLabel(globaltabInsideLeft0, envelope3_top0, globaltabInnerWidth,
        labelHeight, midTextSize, "Envelope3",
        ALIGN_LEFT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addKnob(globaltabInsideLeft0 + 0 * knobX, envelope3_top1,
        knobWidth, margin, uiTextSize,
        "attack", ID::envelopesEnvelope3Attack));
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addKnob(globaltabInsideLeft0 + 1 * knobX, envelope3_top1,
        knobWidth, margin, uiTextSize,
        "decay", ID::envelopesEnvelope3Decay));
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addKnob(globaltabInsideLeft0 + 2 * knobX, envelope3_top1,
        knobWidth, margin, uiTextSize,
        "sustain", ID::envelopesEnvelope3Sustain));
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addKnob(globaltabInsideLeft0 + 3 * knobX, envelope3_top1,
        knobWidth, margin, uiTextSize,
        "release", ID::envelopesEnvelope3Release));
    tabviewGlobal->addWidget(globaltabIndex::envelope,
      addKnob(globaltabInsideLeft0 + 4 * knobX, envelope3_top1,
        knobWidth, margin, uiTextSize,
        "velsens", ID::envelopesEnvelope3Velsens));
    
    const auto lfo0_top0 = globaltabInsideTop0 + 0 * sectionHeight;
    const auto lfo0_top1 = lfo0_top0 + labelY;
    tabviewGlobal->addWidget(globaltabIndex::lfo,
      addGroupLabel(globaltabInsideLeft0, lfo0_top0, globaltabInnerWidth,
        labelHeight, midTextSize, "Lfo0",
        ALIGN_LEFT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::lfo,
      addKnob(globaltabInsideLeft0 + 0 * knobX, lfo0_top1,
        knobWidth, margin, uiTextSize,
        "lfofreq", ID::lfosLfo0Lfofreq));
    
    const auto lfo1_top0 = globaltabInsideTop0 + 1 * sectionHeight;
    const auto lfo1_top1 = lfo1_top0 + labelY;
    tabviewGlobal->addWidget(globaltabIndex::lfo,
      addGroupLabel(globaltabInsideLeft0, lfo1_top0, globaltabInnerWidth,
        labelHeight, midTextSize, "Lfo1",
        ALIGN_LEFT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::lfo,
      addKnob(globaltabInsideLeft0 + 0 * knobX, lfo1_top1,
        knobWidth, margin, uiTextSize,
        "lfofreq", ID::lfosLfo1Lfofreq));
    
    const auto lfo2_top0 = globaltabInsideTop0 + 2 * sectionHeight;
    const auto lfo2_top1 = lfo2_top0 + labelY;
    tabviewGlobal->addWidget(globaltabIndex::lfo,
      addGroupLabel(globaltabInsideLeft0, lfo2_top0, globaltabInnerWidth,
        labelHeight, midTextSize, "Lfo2",
        ALIGN_LEFT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::lfo,
      addKnob(globaltabInsideLeft0 + 0 * knobX, lfo2_top1,
        knobWidth, margin, uiTextSize,
        "lfofreq", ID::lfosLfo2Lfofreq));
    
    const auto lfo3_top0 = globaltabInsideTop0 + 3 * sectionHeight;
    const auto lfo3_top1 = lfo3_top0 + labelY;
    tabviewGlobal->addWidget(globaltabIndex::lfo,
      addGroupLabel(globaltabInsideLeft0, lfo3_top0, globaltabInnerWidth,
        labelHeight, midTextSize, "Lfo3",
        ALIGN_LEFT | ALIGN_MIDDLE));
    tabviewGlobal->addWidget(globaltabIndex::lfo,
      addKnob(globaltabInsideLeft0 + 0 * knobX, lfo3_top1,
        knobWidth, margin, uiTextSize,
        "lfofreq", ID::lfosLfo3Lfofreq));
    
    const auto modulationTop0 = globaltabInsideTop0;
    const auto mod1_top0 = modulationTop0 + 0 * (sectionHeight + knobY);
    const auto mod1_top1 = mod1_top0 + labelY;
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addGroupLabel(globaltabInsideLeft0, mod1_top0, globaltabInnerWidth,
        labelHeight, midTextSize, "1",
        ALIGN_LEFT | ALIGN_MIDDLE));
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
      addKnob(globaltabInsideLeft0 + 0 * knobX, mod1_top1 + knobY,
        knobWidth, margin, uiTextSize,
        "lfo2", ID::modulation1Lfo2));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 1 * knobX, mod1_top1 + knobY,
        knobWidth, margin, uiTextSize,
        "lfo3", ID::modulation1Lfo3));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 2 * knobX, mod1_top1 + knobY,
        knobWidth, margin, uiTextSize,
        "after_touch", ID::modulation1After_touch));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 3 * knobX, mod1_top1 + knobY,
        knobWidth, margin, uiTextSize,
        "note", ID::modulation1Note));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 4 * knobX, mod1_top1 + knobY,
        knobWidth, margin, uiTextSize,
        "velocity", ID::modulation1Velocity));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 5 * knobX, mod1_top1 + knobY,
        knobWidth, margin, uiTextSize,
        "mod_wheel", ID::modulation1Mod_wheel));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 6 * knobX, mod1_top1 + knobY,
        knobWidth, margin, uiTextSize,
        "pitch_wheel", ID::modulation1Pitch_wheel));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 7 * knobX, mod1_top1 + knobY,
        knobWidth, margin, uiTextSize,
        "random", ID::modulation1Random));
    
    const auto mod2_top0 = modulationTop0 + 1 * (sectionHeight + knobY);
    const auto mod2_top1 = mod2_top0 + labelY;
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addGroupLabel(globaltabInsideLeft0, mod2_top0, globaltabInnerWidth,
        labelHeight, midTextSize, "2",
        ALIGN_LEFT | ALIGN_MIDDLE));
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
      addKnob(globaltabInsideLeft0 + 0 * knobX, mod2_top1 + knobY,
        knobWidth, margin, uiTextSize,
        "lfo2", ID::modulation2Lfo2));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 1 * knobX, mod2_top1 + knobY,
        knobWidth, margin, uiTextSize,
        "lfo3", ID::modulation2Lfo3));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 2 * knobX, mod2_top1 + knobY,
        knobWidth, margin, uiTextSize,
        "after_touch", ID::modulation2After_touch));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 3 * knobX, mod2_top1 + knobY,
        knobWidth, margin, uiTextSize,
        "note", ID::modulation2Note));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 4 * knobX, mod2_top1 + knobY,
        knobWidth, margin, uiTextSize,
        "velocity", ID::modulation2Velocity));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 5 * knobX, mod2_top1 + knobY,
        knobWidth, margin, uiTextSize,
        "mod_wheel", ID::modulation2Mod_wheel));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 6 * knobX, mod2_top1 + knobY,
        knobWidth, margin, uiTextSize,
        "pitch_wheel", ID::modulation2Pitch_wheel));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 7 * knobX, mod2_top1 + knobY,
        knobWidth, margin, uiTextSize,
        "random", ID::modulation2Random));
    
    const auto mod3_top0 = modulationTop0 + 2 * (sectionHeight + knobY);
    const auto mod3_top1 = mod3_top0 + labelY;
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addGroupLabel(globaltabInsideLeft0, mod3_top0, globaltabInnerWidth,
        labelHeight, midTextSize, "3",
        ALIGN_LEFT | ALIGN_MIDDLE));
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
      addKnob(globaltabInsideLeft0 + 0 * knobX, mod3_top1 + knobY,
        knobWidth, margin, uiTextSize,
        "lfo2", ID::modulation3Lfo2));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 1 * knobX, mod3_top1 + knobY,
        knobWidth, margin, uiTextSize,
        "lfo3", ID::modulation3Lfo3));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 2 * knobX, mod3_top1 + knobY,
        knobWidth, margin, uiTextSize,
        "after_touch", ID::modulation3After_touch));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 3 * knobX, mod3_top1 + knobY,
        knobWidth, margin, uiTextSize,
        "note", ID::modulation3Note));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 4 * knobX, mod3_top1 + knobY,
        knobWidth, margin, uiTextSize,
        "velocity", ID::modulation3Velocity));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 5 * knobX, mod3_top1 + knobY,
        knobWidth, margin, uiTextSize,
        "mod_wheel", ID::modulation3Mod_wheel));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 6 * knobX, mod3_top1 + knobY,
        knobWidth, margin, uiTextSize,
        "pitch_wheel", ID::modulation3Pitch_wheel));
    tabviewGlobal->addWidget(globaltabIndex::modulation,
      addKnob(globaltabInsideLeft0 + 7 * knobX, mod3_top1 + knobY,
        knobWidth, margin, uiTextSize,
        "random", ID::modulation3Random));
    
    tabviewGlobal->refreshTab();

    const auto xyz_crossfade_top0 = top0;
    const auto xyz_crossfade_left0 = left0 + uiMargin + globaltabWidth;
    const auto xyz_crossfade_left1 = xyz_crossfade_left0 + xyPadSize + uiMargin;
    auto tuple_axis1 = addKnob(
      xyz_crossfade_left1, xyz_crossfade_top0 + 0 * knobY,
      knobWidth, margin, uiTextSize,
      "Axis 1", ID::modulation1Macro);
    widget_axis1 = std::get<0>(tuple_axis1);
    auto tuple_axis2 = addKnob(
      xyz_crossfade_left1, xyz_crossfade_top0 + 1 * knobY,
      knobWidth, margin, uiTextSize,
      "Axis 2", ID::modulation2Macro);
    widget_axis2 = std::get<0>(tuple_axis2);
    auto tuple_axis3 = addKnob(
      xyz_crossfade_left1, xyz_crossfade_top0 + 2 * knobY,
      knobWidth, margin, uiTextSize,
      "Axis 3", ID::modulation3Macro);
    widget_axis3 = std::get<0>(tuple_axis3);
    
    const auto xyz_crossfade_top1 = xyz_crossfade_top0;
    addLabel(xyz_crossfade_left0, xyz_crossfade_top1,
      xyPadSize, labelHeight, uiTextSize, "X-Y");
    xypad_xy = addXYPad(
      xyz_crossfade_left0, xyz_crossfade_top1 + labelY,
      xyPadSize, xyPadSize,
      ID::modulation1Macro, ID::modulation2Macro);
    const auto xyz_crossfade_top2 = xyz_crossfade_top1 + crossfade_height;
    addLabel(xyz_crossfade_left0, xyz_crossfade_top2,
      xyPadSize, labelHeight, uiTextSize, "X-Z");
    xypad_xz = addXYPad(
      xyz_crossfade_left0, xyz_crossfade_top2 + labelY,
      xyPadSize, xyPadSize,
      ID::modulation1Macro, ID::modulation3Macro);
    const auto xyz_crossfade_top3 = xyz_crossfade_top2 + crossfade_height;
    addLabel(xyz_crossfade_left0, xyz_crossfade_top3,
      xyPadSize, labelHeight, uiTextSize, "Z-Y");
    xypad_zy = addXYPad(
      xyz_crossfade_left0, xyz_crossfade_top3 + labelY,
      xyPadSize, xyPadSize,
      ID::modulation3Macro, ID::modulation2Macro);
  }
};

UI *createUI() { return new DigiDrieUI(); }

END_NAMESPACE_DISTRHO
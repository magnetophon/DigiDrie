// (c) 2020 Takamitsu Endo
//
// This file is part of Uhhyou Plugins.
//
// Uhhyou Plugins is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Uhhyou Plugins is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Uhhyou Plugins.  If not, see <https://www.gnu.org/licenses/>.

#pragma once

#include "parameterinterface.hpp"
#include "ui.hpp"

#include "gui/TinosBoldItalic.hpp"
#include "gui/barbox.hpp"
#include "gui/button.hpp"
#include "gui/checkbox.hpp"
#include "gui/knob.hpp"
#include "gui/label.hpp"
#include "gui/optionmenu.hpp"
#include "gui/rotaryknob.hpp"
#include "gui/scrollbar.hpp"
#include "gui/splash.hpp"
#include "gui/style.hpp"
#include "gui/tabview.hpp"
#include "gui/textview.hpp"
#include "gui/vslider.hpp"

#include <memory>
#include <tuple>
#include <unordered_map>
#include <vector>

class PluginUIBase : public PluginUI {
public:
  PluginUIBase(uint width = 0, uint height = 0) : PluginUI(width, height) {}

protected:
  std::unique_ptr<ParameterInterface> param;

  FontId fontId = -1;
  Palette palette;

  std::vector<std::shared_ptr<Widget>> widget;
  std::unordered_map<int, std::shared_ptr<ValueWidget>> valueWidget;
  std::unordered_map<int, std::shared_ptr<ArrayWidget>> arrayWidget;
  std::unordered_map<std::string, std::shared_ptr<StateWidget>> stateWidget;

  void parameterChanged(uint32_t index, float value) override
  {
    updateUI(index, param->parameterChanged(index, value));
  }

  void updateUI(uint32_t id, float normalized)
  {
    auto vWidget = valueWidget.find(id);
    if (vWidget != valueWidget.end()) {
      vWidget->second->setValue(normalized);
      repaint();
      return;
    }

    auto aWidget = arrayWidget.find(id);
    if (aWidget != arrayWidget.end()) {
      aWidget->second->setValueFromId(id, normalized);
      repaint();
      return;
    }
  }

  void updateValue(uint32_t id, float normalized) override
  {
    if (id >= param->idLength()) return;
    setParameterValue(id, param->updateValue(id, normalized));
    repaint();
  }

  void programLoaded(uint32_t index) override
  {
    param->loadProgram(index);

    for (auto &vPair : valueWidget) {
      if (vPair.second->id >= param->idLength()) continue;
      vPair.second->setValue(param->getNormalized(vPair.second->id));
    }

    for (auto &aPair : arrayWidget) {
      auto &aWidget = aPair.second;
      for (size_t idx = 0; idx < aWidget->id.size(); ++idx) {
        if (aWidget->id[idx] >= param->idLength()) continue;
        aWidget->setValueAt(idx, param->getNormalized(aWidget->id[idx]));
      }
    }

    repaint();
  }

#if DISTRHO_PLUGIN_WANT_STATE
  void stateChanged(const char * /* key */, const char * /* value */)
  {
    // This method is required by DPF.
  }

  void updateState(std::string key, std::string value)
  {
    setState(key.c_str(), value.c_str());
  }
#else
  void updateState(std::string, std::string) {}
  void stateChanged(const char *, const char *) {}
#endif

  template<typename Scale>
  std::shared_ptr<BarBox<Scale>> addBarBox(
    float left,
    float top,
    float width,
    float height,
    uint32_t id0,
    size_t nElement,
    Scale &scale)
  {
    std::vector<uint32_t> id(nElement);
    for (size_t i = 0; i < id.size(); ++i) id[i] = id0 + i;
    std::vector<double> value(id.size());
    for (size_t i = 0; i < value.size(); ++i)
      value[i] = param->getDefaultNormalized(id[i]);
    std::vector<double> defaultValue(value);

    auto barBox = std::make_shared<BarBox<Scale>>(
      this, this, id, scale, value, defaultValue, fontId, palette);
    barBox->setSize(width, height);
    barBox->setAbsolutePos(left, top);

    for (size_t i = 0; i < value.size(); ++i)
      arrayWidget.emplace(std::make_pair(id0 + i, barBox));
    return barBox;
  }

  template<typename Parent>
  auto addScrollBar(
    float left, float top, float width, float height, std::shared_ptr<Parent> parent)
  {
    auto scrollBar = std::make_shared<ScrollBar<Parent>>(this, parent, palette);
    scrollBar->setSize(width, height);
    scrollBar->setAbsolutePos(left, top);
    widget.push_back(scrollBar);
    return scrollBar;
  }

  template<Style style = Style::common>
  auto addKickButton(
    float left,
    float top,
    float width,
    float height,
    float textSize,
    std::string title,
    uint32_t id)
  {
    auto button = std::make_shared<KickButton<style>>(this, this, title, fontId, palette);
    button->id = id;
    button->setSize(width, height);
    button->setAbsolutePos(left, top);
    button->setTextSize(textSize);
    valueWidget.emplace(std::make_pair(id, button));
    return button;
  }

  template<Style style = Style::common>
  auto addToggleButton(
    float left,
    float top,
    float width,
    float height,
    float textSize,
    std::string title,
    uint32_t id)
  {
    auto button
      = std::make_shared<ToggleButton<style>>(this, this, title, fontId, palette);
    button->id = id;
    button->setSize(width, height);
    button->setAbsolutePos(left, top);
    button->setTextSize(textSize);
    valueWidget.emplace(std::make_pair(id, button));
    return button;
  }

  template<Style style = Style::common>
  auto addCheckbox(
    float left,
    float top,
    float width,
    float height,
    float textSize,
    std::string title,
    uint32_t id)
  {
    auto checkbox = std::make_shared<CheckBox<style>>(this, this, title, fontId, palette);
    checkbox->id = id;
    checkbox->setSize(width, height);
    checkbox->setAbsolutePos(left, top);
    checkbox->setTextSize(textSize);
    valueWidget.emplace(std::make_pair(id, checkbox));
    return checkbox;
  }

  std::shared_ptr<Label> addLabel(
    int left,
    int top,
    float width,
    float height,
    float textSize,
    std::string name,
    int textAlign = ALIGN_CENTER | ALIGN_MIDDLE)
  {
    auto label = std::make_shared<Label>(this, name, fontId, palette);
    label->setSize(width, height);
    label->setAbsolutePos(left, top);
    label->drawBorder = false;
    label->setTextSize(textSize);
    label->setTextAlign(textAlign);
    widget.push_back(label);
    return label;
  }

  std::shared_ptr<Label> addGroupLabel(
    int left,
    int top,
    float width,
    float height,
    float textSize,
    std::string name,
    int textAlign = ALIGN_CENTER | ALIGN_MIDDLE)
  {
    auto label = std::make_shared<Label>(this, name, fontId, palette);
    label->setSize(width, height);
    label->setAbsolutePos(left, top);
    label->drawBorder = true;
    label->setBorderWidth(2.0f);
    label->setTextSize(textSize);
    label->setTextAlign(textAlign);
    widget.push_back(label);
    return label;
  }

  std::shared_ptr<VLabel> addGroupVerticalLabel(
    int left,
    int top,
    float width,
    float height,
    float textSize,
    std::string name,
    int textAlign = ALIGN_CENTER | ALIGN_MIDDLE)
  {
    auto label = std::make_shared<VLabel>(this, name, fontId, palette);
    label->setSize(width, height);
    label->setAbsolutePos(left, top);
    label->drawBorder = false;
    label->setBorderWidth(2.0f);
    label->setTextSize(textSize);
    label->setTextAlign(textAlign);
    widget.push_back(label);
    return label;
  };

  enum class LabelPosition {
    top,
    left,
    bottom,
    right,
  };

  template<Style style = Style::common>
  auto addKnob(
    float left,
    float top,
    float width,
    float margin,
    float textSize,
    std::string name,
    uint32_t id,
    LabelPosition labelPosition = LabelPosition::bottom,
    float labelMargin = 10.0f)
  {
    auto height = width - 2.0f * margin;

    auto knob = std::make_shared<Knob<style>>(this, this, palette);
    knob->id = id;
    knob->setSize(width - 2.0f * margin, height);
    knob->setAbsolutePos(left + margin, top + margin);
    auto defaultValue = param->getDefaultNormalized(id);
    knob->setDefaultValue(defaultValue);
    knob->setValue(defaultValue);
    valueWidget.emplace(std::make_pair(id, knob));

    auto label = addKnobLabel(
      left, top, width, height, labelMargin, textSize, name, labelPosition);
    return std::make_tuple(knob, label);
  }

  template<Style style = Style::common, typename Scale>
  auto addNumberKnob(
    float left,
    float top,
    float width,
    float margin,
    float textSize,
    std::string name,
    uint32_t id,
    Scale &scale,
    uint32_t offset = 0,
    LabelPosition labelPosition = LabelPosition::bottom,
    float labelMargin = 10.0f)
  {
    auto height = width - 2.0f * margin;

    auto knob = std::make_shared<NumberKnob<Scale, style>>(
      this, this, fontId, palette, scale, offset);
    knob->id = id;
    knob->setSize(width - 2.0f * margin, height);
    knob->setAbsolutePos(left + margin, top + margin);
    auto defaultValue = param->getDefaultNormalized(id);
    knob->setDefaultValue(defaultValue);
    knob->setValue(defaultValue);
    valueWidget.emplace(std::make_pair(id, knob));

    auto label = addKnobLabel(
      left, top, width, height, labelMargin, textSize, name, labelPosition);
    return std::make_tuple(knob, label);
  }

  template<Style style = Style::common>
  auto addRotaryKnob(
    float left,
    float top,
    float width,
    float margin,
    float textSize,
    std::string name,
    uint32_t id,
    LabelPosition labelPosition = LabelPosition::bottom,
    float labelMargin = 10.0f)
  {
    auto height = width - 2.0f * margin;

    auto knob = std::make_shared<RotaryKnob<style>>(this, this, palette);
    knob->id = id;
    knob->setSize(width - 2.0f * margin, height);
    knob->setAbsolutePos(left + margin, top + margin);
    auto defaultValue = param->getDefaultNormalized(id);
    knob->setDefaultValue(defaultValue);
    knob->setValue(defaultValue);
    valueWidget.emplace(std::make_pair(id, knob));

    auto label = addKnobLabel(
      left, top, width, height, labelMargin, textSize, name, labelPosition);
    return std::make_tuple(knob, label);
  }

  std::shared_ptr<Label> addKnobLabel(
    float left,
    float top,
    float width,
    float height,
    float margin,
    float textSize,
    std::string name,
    LabelPosition labelPosition)
  {
    switch (labelPosition) {
      default:
      case LabelPosition::bottom:
        top = top + height;
        height = 30.0f;
        break;

      case LabelPosition::right:
        height = width;
        left = left + width + margin;
        width *= 2.0f;
        break;
    }

    auto label = std::make_shared<Label>(this, name, fontId, palette);
    label->setSize(width, height);
    label->setAbsolutePos(left, top);
    label->setTextSize(textSize);
    if (labelPosition == LabelPosition::right)
      label->setTextAlign(ALIGN_LEFT | ALIGN_MIDDLE);
    widget.push_back(label);
    return label;
  }

  template<Style style = Style::common, typename Scale>
  auto addTextKnob(
    float left,
    float top,
    float width,
    float height,
    float textSize,
    uint32_t id,
    Scale &scale,
    bool isDecibel = false,
    uint32_t precision = 0,
    int32_t offset = 0)
  {
    auto knob = std::make_shared<TextKnob<Scale, style>>(
      this, this, fontId, palette, scale, isDecibel);
    knob->id = id;
    knob->setSize(width, height);
    knob->setAbsolutePos(left, top);
    auto defaultValue = param->getDefaultNormalized(id);
    knob->setDefaultValue(defaultValue);
    knob->setValue(defaultValue);
    knob->setPrecision(precision);
    knob->offset = offset;
    knob->setTextSize(textSize);
    valueWidget.emplace(std::make_pair(id, knob));
    return knob;
  }

  template<Style style = Style::common>
  auto addOptionMenu(
    float left,
    float top,
    float width,
    float height,
    float textSize,
    uint32_t id,
    const std::vector<std::string> &items)
  {
    auto menu = std::make_shared<OptionMenu<style>>(this, this, items, fontId, palette);
    menu->id = id;
    menu->setSize(width, height);
    menu->setAbsolutePos(left, top);
    menu->setDefaultValue(param->getDefaultNormalized(id));
    menu->setTextSize(textSize);
    valueWidget.emplace(std::make_pair(id, menu));
    return menu;
  }

  std::shared_ptr<TabView> addTabView(
    float left,
    float top,
    float width,
    float hegiht,
    float textSize,
    float tabHeight,
    std::vector<std::string> tabs)
  {
    auto tabview = std::make_shared<TabView>(
      this, tabs, fontId, palette, tabHeight, left, top, width, hegiht);
    tabview->setTextSize(textSize);
    widget.push_back(tabview);
    return tabview;
  }

  void addSplashScreen(
    float buttonLeft,
    float buttonTop,
    float buttonWidth,
    float buttonHeight,
    float splashLeft,
    float splashTop,
    float splashWidth,
    float splashHeight,
    float buttonTextSize,
    std::string name)
  {
    auto button = std::make_shared<SplashButton>(this, name, fontId, palette);
    button->setSize(buttonWidth, buttonHeight);
    button->setAbsolutePos(buttonLeft, buttonTop);
    button->setTextSize(buttonTextSize);
    widget.push_back(button);

    auto credit = std::make_shared<CreditSplash>(this, name, fontId, palette);
    credit->setSize(splashWidth, splashHeight);
    credit->setAbsolutePos(splashLeft, splashTop);
    button->setSplashWidget(credit);
    widget.push_back(credit);
  }

  auto addTextView(
    float left, float top, float width, float height, float textSize, std::string text)
  {
    auto view = std::make_shared<TextView>(this, text, fontId, palette);
    view->setSize(width, height);
    view->setAbsolutePos(left, top);
    view->textSize = textSize;
    widget.push_back(view);
    return view;
  }

  auto addTextTableView(
    float left,
    float top,
    float width,
    float height,
    float textSize,
    std::string text,
    float cellWidth)
  {
    auto view = std::make_shared<TextTableView>(this, text, cellWidth, fontId, palette);
    view->setSize(width, height);
    view->setAbsolutePos(left, top);
    view->textSize = textSize;
    widget.push_back(view);
    return view;
  }

  template<Style style = Style::common>
  auto addVSlider(
    float left,
    float top,
    float width,
    float height,
    float margin,
    float labelHeight,
    float textSize,
    std::string name,
    uint32_t id)
  {
    auto slider = std::make_shared<VSlider<style>>(this, this, palette);
    slider->id = id;
    slider->setSize(width, height);
    slider->setAbsolutePos(left, top);
    auto defaultValue = param->getDefaultNormalized(id);
    slider->setDefaultValue(defaultValue);
    slider->setValue(defaultValue);
    valueWidget.emplace(std::make_pair(id, slider));

    top += height + margin;

    auto label = std::make_shared<Label>(this, name, fontId, palette);
    label->setSize(width, labelHeight);
    label->setAbsolutePos(left, top);
    label->setTextSize(textSize);
    widget.push_back(label);

    return std::make_tuple(slider, label);
  }
};

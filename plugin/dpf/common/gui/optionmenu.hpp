// (c) 2019-2020 Takamitsu Endo
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

#include "style.hpp"
#include "valuewidget.hpp"

#include <string>

template<Style style = Style::common> class OptionMenu : public ValueWidget {
public:
  explicit OptionMenu(
    NanoWidget *group,
    PluginUI *ui,
    std::vector<std::string> item,
    FontId fontId,
    Palette &palette)
    : ValueWidget(group, ui, 0.0f), item(item), fontId(fontId), pal(palette)
  {
  }

  void onNanoDisplay() override
  {
    resetTransform();
    translate(getAbsoluteX(), getAbsoluteY());

    const auto width = getWidth();
    const auto height = getHeight();

    // Border.
    beginPath();
    rect(0, 0, width, height);
    if constexpr (style == Style::accent) {
      strokeColor(isMouseEntered ? pal.highlightAccent() : pal.border());
    } else if (style == Style::warning) {
      strokeColor(isMouseEntered ? pal.highlightWarning() : pal.border());
    } else {
      strokeColor(isMouseEntered ? pal.highlightMain() : pal.border());
    }
    fillColor(pal.boxBackground());
    fill();
    strokeWidth(borderWidth);
    stroke();

    // Text.
    if (item.size() == 0 || item.size() <= index) return;
    fillColor(pal.foreground());
    fontFaceId(fontId);
    fontSize(textSize);
    textAlign(ALIGN_CENTER | ALIGN_MIDDLE);
    text(
      width / 2, height / 2 * (1.0f + 0.5f * diff / sensitivity), item[index].c_str(),
      nullptr);
  }

  bool onMouse(const MouseEvent &ev) override
  {
    if (ev.press && contains(ev.pos)) {
      if (ev.button == 1) {
        isMouseLeftDown = true;
        anchorPoint = ev.pos;
      }
      repaint();
      return true;
    }
    diff = 0;
    isMouseLeftDown = false;
    repaint();
    return false;
  }

  bool onMotion(const MotionEvent &ev) override
  {
    if (isMouseLeftDown) {
      auto oldIndex = index;

      diff = ev.pos.getY() - anchorPoint.getY();
      if (diff <= -sensitivity && index < item.size() - 1) {
        index += 1;
        anchorPoint = ev.pos;
      } else if (diff >= sensitivity && index != 0) {
        index -= 1;
        anchorPoint = ev.pos;
      }

      if (index >= item.size() - 1 && diff < 0) diff = 0;
      if (index == 0 && diff > 0) diff = 0;

      isMouseEntered = true;
      if (oldIndex != index) updateValue();
      repaint();
      return true;
    }
    isMouseEntered = contains(ev.pos);
    repaint();
    return false;
  }

  bool onScroll(const ScrollEvent &ev) override
  {
    if (!contains(ev.pos)) return false;
    if (ev.delta.getY() < 0 && index != 0)
      index -= 1;
    else if (ev.delta.getY() > 0 && index < item.size() - 1)
      index += 1;
    updateValue();
    repaint();
    return true;
  }

  void setTextSize(float size) { textSize = size < 0.0f ? 0.0f : size; }

  void setDefaultValue(uint32_t index)
  {
    if (index >= item.size()) return;
    defaultValue = index;
    this->index = index;
  }

  void setValue(double normalized) override
  {
    index = uint32_t(std::min<double>(item.size() - 1, normalized * (item.size())));
  }

  double getValue() override { return index / double(item.size() - 1); }

  void updateValue()
  {
    if (ui == nullptr) return;
    ui->updateValue(id, index / double(item.size() - 1));
  }

protected:
  uint32_t defaultValue = 0;
  uint32_t index = 0;
  std::vector<std::string> item{};

  float borderWidth = 1.0f;
  float textSize = 18.0f;
  FontId fontId = -1;
  Palette &pal;

  const float sensitivity = 24.0f; // Pixels.

  Point<int> anchorPoint{0, 0};
  float diff = 0;
  bool isMouseLeftDown = false;
  bool isMouseEntered = false;
};

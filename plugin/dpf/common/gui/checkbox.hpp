// (c) 2019-2020 Takamitsu Endo
// (c) 2020 Konstantin Voinov
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

template<Style style = Style::common> class CheckBox : public ValueWidget {
public:
  bool drawBackground = false;

  explicit CheckBox(
    NanoWidget *group,
    PluginUI *ui,
    std::string labelText,
    FontId fontId,
    Palette &palette)
    : ValueWidget(group, ui, 0.0f), labelText(labelText), fontId(fontId), pal(palette)
  {
  }

  void onNanoDisplay() override
  {
    resetTransform();
    translate(getAbsoluteX(), getAbsoluteY());

    const auto width = getWidth();
    const auto height = getHeight();
    const auto centerY = height / 2;

    // Background.
    if (drawBackground) {
      beginPath();
      rect(0, 0, width, height);
      fillColor(pal.background());
      fill();
    }

    // Box.
    beginPath();
    rect(2, centerY - boxSize / 2, boxSize, boxSize);
    strokeWidth(2.0f);
    if constexpr (style == Style::accent) {
      strokeColor(isMouseEntered ? pal.highlightAccent() : pal.borderCheckbox());
    } else if (style == Style::warning) {
      strokeColor(isMouseEntered ? pal.highlightWarning() : pal.borderCheckbox());
    } else {
      strokeColor(isMouseEntered ? pal.highlightMain() : pal.borderCheckbox());
    }
    fillColor(pal.boxBackground());
    fill();
    stroke();

    if (value) {
      const auto innerBoxSize = boxSize - 4;
      beginPath();
      rect(
        2 + (boxSize - innerBoxSize) / 2, centerY - innerBoxSize / 2, innerBoxSize,
        innerBoxSize);
      if constexpr (style == Style::accent) {
        fillColor(isMouseEntered ? pal.highlightAccent() : pal.foreground());
      } else if (style == Style::warning) {
        fillColor(isMouseEntered ? pal.highlightWarning() : pal.foreground());
      } else {
        fillColor(isMouseEntered ? pal.highlightMain() : pal.foreground());
      }
      fill();
    }

    // Text.
    if (labelText.size() == 0) return;
    fillColor(pal.foreground());
    fontFaceId(fontId);
    fontSize(textSize);
    textAlign(align);
    text(boxSize + textSize / 2.0f, centerY, labelText.c_str(), nullptr);
  }

  bool onMouse(const MouseEvent &ev) override
  {
    if (ev.press && contains(ev.pos)) {
      value = value == 0.0;
      updateValue();
      repaint();
      return true;
    }
    return false;
  }

  bool onMotion(const MotionEvent &ev) override
  {
    isMouseEntered = contains(ev.pos);
    repaint();
    return false;
  }

  bool onScroll(const ScrollEvent &ev) override
  {
    if (!contains(ev.pos)) return false;
    if (ev.delta.getY() < 0)
      value = true;
    else if (ev.delta.getY() > 0)
      value = false;
    updateValue();
    repaint();
    return true;
  }

  void setTextSize(float size) { textSize = size < 0.0f ? 0.0f : size; }

protected:
  std::string labelText;
  int align = ALIGN_LEFT | ALIGN_MIDDLE;
  int32_t boxSize = 10;
  float textSize = 14.0f;
  FontId fontId = -1;
  Palette &pal;

  bool isMouseEntered = false;
};

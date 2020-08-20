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

#include "style.hpp"
#include "valuewidget.hpp"

#include <cmath>

class XYPad : public ArrayWidget {
private:
  constexpr static int8_t nGrid = 8;

  std::vector<double> defaultValue;

  Point<int> cursor{-1, -1};
  bool isMouseEntered = false;
  bool wasMouseEntered = false;
  bool isMouseLeftDown = false;

  Palette &pal;

public:
  float borderWidth = 2.0f;

  explicit XYPad(
    NanoWidget *group,
    PluginUI *ui,
    std::vector<uint32_t> id,
    std::vector<double> value,
    std::vector<double> defaultValue,
    Palette &palette)
    : ArrayWidget(group, ui, id, value), defaultValue(defaultValue), pal(palette)
  {
  }

  void onNanoDisplay() override
  {
    resetTransform();
    translate(getAbsoluteX(), getAbsoluteY());

    const auto width = getWidth();
    const auto height = getHeight();

    // Background.
    beginPath();
    rect(0, 0, width, height);
    fillColor(pal.boxBackground());
    fill();

    // Grid.
    fillColor(pal.foregroundInactive());
    for (int16_t ix = 1; ix < nGrid; ++ix) {
      for (int16_t iy = 1; iy < nGrid; ++iy) {
        beginPath();
        circle(ix * getWidth() / nGrid, iy * getHeight() / nGrid, 2.0f);
        fill();
      }
    }

    // Cursor.
    if (isMouseEntered) {
      strokeColor(pal.highlightMain());

      beginPath();
      moveTo(0, cursor.getY());
      lineTo(width, cursor.getY());
      strokeWidth(1.0f);
      stroke();

      beginPath();
      moveTo(cursor.getX(), 0);
      lineTo(cursor.getX(), height);
      strokeWidth(1.0f);
      stroke();
    }

    // Value.
    float valueX = value[0] * width;
    float valueY = value[1] * height;
    beginPath();
    circle(valueX, valueY, 8.0f);
    strokeWidth(2.0f);
    strokeColor(pal.foreground());
    stroke();

    beginPath();
    moveTo(0, valueY);
    lineTo(width, valueY);
    strokeWidth(1.0f);
    stroke();

    beginPath();
    moveTo(valueX, 0);
    lineTo(valueX, height);
    strokeWidth(1.0f);
    stroke();

    // Border.
    beginPath();
    rect(0, 0, width, height);
    strokeWidth(borderWidth);
    strokeColor(isMouseEntered || isMouseLeftDown ? pal.highlightMain() : pal.border());
    stroke();
  }

  bool onMouse(const MouseEvent &ev) override
  {
    if (ev.press && contains(ev.pos)) {
      if (ev.button == 1) {
        isMouseLeftDown = true;
        updateValueFromPos(ev.pos);
      }
      repaint();
      return true;
    }
    isMouseLeftDown = false;
    repaint();
    return false;
  }

  bool onMotion(const MotionEvent &ev) override
  {
    if (isMouseLeftDown) {
      updateValueFromPos(ev.pos);
    }
    isMouseEntered = contains(ev.pos);
    if (isMouseEntered) cursor = ev.pos;
    repaint();
    return isMouseEntered || isMouseLeftDown;
  }

private:
  void updateValueFromPos(const Point<int> &pos)
  {
    value[0] = std::clamp<int>(pos.getX(), 0, getWidth()) / double(getWidth());
    value[1] = std::clamp<int>(pos.getY(), 0, getHeight()) / double(getHeight());
    updateValue();
  }
};

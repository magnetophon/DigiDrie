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

#include "../dsp/constants.hpp"
#include "style.hpp"
#include "valuewidget.hpp"

#include <algorithm>
#include <sstream>
#include <string>

// Incremental encoder.
template<Style style = Style::common> class RotaryKnob : public ValueWidget {
public:
  explicit RotaryKnob(NanoWidget *group, PluginUI *ui, Palette &palette)
    : ValueWidget(group, ui, 0.1f), pal(palette)
  {
  }

  void onNanoDisplay() override
  {
    resetTransform();
    translate(getAbsoluteX(), getAbsoluteY());

    const auto width = getWidth();
    const auto height = getHeight();
    const auto centerX = width / 2;
    const auto centerY = height / 2;

    // Arc.
    if constexpr (style == Style::accent) {
      strokeColor(isMouseEntered ? pal.highlightAccent() : pal.unfocused());
    } else if (style == Style::warning) {
      strokeColor(isMouseEntered ? pal.highlightWarning() : pal.unfocused());
    } else {
      strokeColor(isMouseEntered ? pal.highlightMain() : pal.unfocused());
    }
    lineCap(ROUND);
    lineJoin(ROUND);
    strokeWidth(halfArcWidth * 2.0f);
    const auto radius = (centerX > centerY ? centerY : centerX) - halfArcWidth;
    beginPath();
    circle(centerX, centerY, radius);
    stroke();

    // Tick for default value. Sharing color and style with Arc.
    strokeWidth(halfArcWidth / 2.0f);
    beginPath();
    auto point = mapValueToArc(defaultValue, -radius * defaultTickLength);
    moveTo(point.getX() + centerX, point.getY() + centerY);
    point = mapValueToArc(defaultValue, -radius);
    lineTo(point.getX() + centerX, point.getY() + centerY);
    stroke();

    // Line from center to tip.
    strokeColor(pal.foreground());
    beginPath();
    moveTo(centerX, centerY);
    const auto tip = mapValueToArc(value, -radius);
    lineTo(tip.getX() + centerX, tip.getY() + centerY);
    stroke();

    // Tip.
    fillColor(pal.foreground());
    beginPath();
    circle(tip.getX() + centerX, tip.getY() + centerY, halfArcWidth);
    fill();
  }

  bool onMouse(const MouseEvent &ev) override
  {
    if (ev.press && contains(ev.pos)) {
      if (ev.button == 1) {
        isMouseLeftDown = true;
        anchorPoint = ev.pos;
        if (ev.mod & kModifierControl) {
          value = defaultValue;
          updateValue();
        }
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
      auto sensi = (ev.mod & kModifierShift) ? lowSensitivity : sensitivity;
      value += (float)((anchorPoint.getY() - ev.pos.getY()) * sensi);
      value = value > 1.0 || value < 0.0 ? value - floor(value) : value;
      updateValue();

      anchorPoint = ev.pos;

      isMouseEntered = true;
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
    auto sensi = (ev.mod & kModifierShift) ? lowSensitivity : 8.0f * sensitivity;
    value += ev.delta.getY() * sensi;
    value = value > 1.0 || value < 0.0 ? value - floor(value) : value;
    updateValue();
    repaint();
    return true;
  }

  void setDefaultValue(double value) { defaultValue = std::clamp(value, 0.0, 1.0); }
  void setValue(double value) override { this->value = std::clamp(value, 0.0, 1.0); }

  void setArcWidth(float width)
  {
    if (width > 0.0f) halfArcWidth = width / 2.0f;
  }

protected:
  Point<float> mapValueToArc(float normalized, float length)
  {
    auto radian = 2.0 * normalized * SomeDSP::pi;
    return Point<float>(-sin(radian) * length, cos(radian) * length);
  }

  double defaultValue = 0.5;

  float halfArcWidth = 4.0f;
  const float arcNotchHalf = float(SomeDSP::pi) / 6.0f; // Radian.
  float defaultTickLength = 0.5f;

  float sensitivity = 0.004f; // MovedPixel * sensitivity = valueChanged.
  float lowSensitivity = sensitivity / 5.0f;

  Point<int> anchorPoint{0, 0};
  bool isMouseLeftDown = false;
  bool isMouseEntered = false;

  Palette &pal;
};

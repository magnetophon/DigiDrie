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

#include "Widget.hpp"
#include "style.hpp"

#include <memory>
#include <sstream>
#include <string>

class CreditSplash : public NanoWidget {
public:
  explicit CreditSplash(
    NanoWidget *group, std::string name, FontId fontId, Palette &palette)
    : NanoWidget(group), name(name), fontId(fontId), pal(palette)
  {
    hide();
  }

  void onNanoDisplay() override;

  bool onMouse(const MouseEvent &ev) override
  {
    if (contains(ev.pos) && ev.press) {
      hide();
      repaint();
    }
    return true;
  }

  bool onMotion(const MotionEvent &ev) override
  {
    isMouseEntered = contains(ev.pos);
    repaint();
    return false;
  }

  void setTextSize(float size) { textSize = size < 0.0f ? 0.0f : size; }

protected:
  void drawTextBlock(
    float left,
    float top,
    float lineHeight,
    float blockWidth,
    std::string str,
    char colDelimiter = '|',
    char rowDelimiter = '\n')
  {
    std::stringstream ssText(str);
    std::string line;
    std::string cell;
    float leftStart = left;
    while (std::getline(ssText, line, rowDelimiter)) {
      std::stringstream ssLine(line);
      left = leftStart;
      while (std::getline(ssLine, cell, colDelimiter)) {
        if (cell.size() > 0) text(left, top, cell.c_str(), nullptr);
        left += blockWidth;
      }
      top += lineHeight;
    }
  }

  bool isMouseEntered = false;

  std::string name = nullptr;
  FontId fontId = -1;
  int align = ALIGN_BASELINE | ALIGN_MIDDLE;
  float borderWidth = 8.0f;
  float textSize = 18.0f;

  Palette &pal;
};

class SplashButton : public NanoWidget {
public:
  explicit SplashButton(
    NanoWidget *group, std::string labelText, FontId fontId, Palette &palette)
    : NanoWidget(group), labelText(labelText), fontId(fontId), pal(palette)
  {
  }

  void onNanoDisplay() override
  {
    resetTransform();
    translate(getAbsoluteX(), getAbsoluteY());

    const auto width = getWidth();
    const auto height = getHeight();

    // Rect.
    beginPath();
    rect(0, 0, width, height);
    fillColor(pal.boxBackground());
    fill();
    strokeColor(isMouseEntered ? pal.highlightMain() : pal.border());
    strokeWidth(borderWidth);
    stroke();

    // Text.
    if (labelText.size() == 0) return;
    fillColor(pal.foreground());
    fontFaceId(fontId);
    fontSize(textSize);
    textAlign(align);
    text(width / 2, height / 2, labelText.c_str(), nullptr);
  }

  bool onMouse(const MouseEvent &ev) override
  {
    if (splashWidget != nullptr && ev.press && contains(ev.pos)) {
      splashWidget->show();
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

  void setTextSize(float size) { textSize = size < 0.0f ? 0.0f : size; }

  /**
    Drawing order of widgets are same as the order of instantiation. This causes a problem
    that a widget is unintentionally drawn over another widget. setSplashWidget() is a
    workaround of this drawing order problem.

    Usage:
    1. Instantiate SplashButton.
    2. Create some splashWidget.
    3. Pass splashWidget to SplashButton via setSplashWidget().
  */
  void setSplashWidget(std::shared_ptr<Widget> splashWidget)
  {
    this->splashWidget = splashWidget;
  }

protected:
  bool isMouseEntered = false;

  std::string labelText = nullptr;
  FontId fontId = -1;
  Palette &pal;
  int align = ALIGN_CENTER | ALIGN_MIDDLE;
  float borderWidth = 2.0f;
  float textSize = 18.0f;
  float margin = 20.0f;

  std::shared_ptr<Widget> splashWidget = nullptr;
};

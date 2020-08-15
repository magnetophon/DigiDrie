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

#include "../ui.hpp"
#include "Widget.hpp"
#include "style.hpp"

#include <algorithm>
#include <cmath>
#include <memory>

template<typename Scrollable> class ScrollBar : public NanoWidget {
public:
  explicit ScrollBar(
    NanoWidget *group, std::shared_ptr<Scrollable> parent, Palette &palette)
    : NanoWidget(group), parent(parent), pal(palette)
  {
  }

  void onNanoDisplay() override
  {
    resetTransform();
    translate(getAbsoluteX(), getAbsoluteY());

    const auto width = getWidth();
    const auto height = getHeight();

    strokeWidth(2.0f);
    strokeColor(pal.border());

    // Bar.
    auto rightHandleL = rightPos * width - handleWidth;
    auto barL = leftPos * width + handleWidth;
    beginPath();
    rect(barL, 0, rightHandleL - barL, height);
    fillColor(pointed == Part::bar ? pal.highlightButton() : pal.highlightMain());
    fill();
    stroke();

    // Left handle.
    beginPath();
    rect(leftPos * width, 0, handleWidth, height);
    fillColor(pointed == Part::leftHandle ? pal.highlightButton() : pal.unfocused());
    fill();
    stroke();

    // Right handle.
    beginPath();
    rect(rightHandleL, 0, handleWidth, height);
    fillColor(pointed == Part::rightHandle ? pal.highlightButton() : pal.unfocused());
    fill();
    stroke();
  }

  bool onMouse(const MouseEvent &ev) override
  {
    if (contains(ev.pos) && ev.press) {
      if (ev.button == 1) { // Left down. Grab scroll bar.
        grabbed = pointed = hitTest(ev.pos);

        if (grabbed == Part::leftHandle)
          grabOffset = int(leftPos * getWidth()) - ev.pos.getX();
        else if (grabbed == Part::rightHandle)
          grabOffset = int(rightPos * getWidth()) - ev.pos.getX();
        else if (grabbed == Part::bar)
          grabOffset = int(leftPos * getWidth()) - ev.pos.getX();
      } else if (ev.button == 3) { // Right down. Reset zoom.
        leftPos = 0;
        rightPos = 1;
        parent->setViewRange(leftPos, rightPos);
        repaint();
      }

      return true;
    }

    grabbed = Part::background;
    return false;
  }

  bool onMotion(const MotionEvent &ev) override
  {
    auto posX
      = std::clamp<int>(ev.pos.getX() + grabOffset, 0, getWidth()) / float(getWidth());
    switch (grabbed) {
      case Part::bar: {
        auto barWidth = rightPos - leftPos;
        leftPos = posX;
        rightPos = leftPos + barWidth;
        if (leftPos < 0.0f) {
          rightPos = barWidth;
          leftPos = 0.0f;
        } else if (rightPos > 1.0f) {
          leftPos = 1.0f - barWidth;
          rightPos = 1.0f;
        }

        // Just in case.
        leftPos = std::clamp(leftPos, 0.0f, 1.0f);
        rightPos = std::clamp(rightPos, 0.0f, 1.0f);
      } break;

      case Part::leftHandle: {
        setLeftPos(posX);
      } break;

      case Part::rightHandle: {
        setRightPos(posX);
      } break;

      default:
        pointed = hitTest(ev.pos);
        repaint();
        return false;
    }

    parent->setViewRange(leftPos, rightPos);
    repaint();

    return true;
  }

  bool onScroll(const ScrollEvent &ev) override
  {
    if (!contains(ev.pos)) return false;

    const auto mouseX = float(ev.pos.getX()) / getWidth();
    const auto delta = ev.delta.getY();

    float amountL, amountR;
    if (delta > 0) {
      amountL = 0.5f * zoomSensi;
      amountR = 0.5f * zoomSensi;
    } else {
      const auto bias = (mouseX - leftPos) / (rightPos - leftPos);
      amountL = zoomSensi * std::clamp(bias, 0.0f, 1.0f);
      amountR = zoomSensi * std::clamp((1.0f - bias), 0.0f, 1.0f);
    }
    setLeftPos(leftPos - amountL * delta);
    setRightPos(rightPos + amountR * delta);

    parent->setViewRange(leftPos, rightPos);
    repaint();

    return true;
  }

  void setHandleWidth(float width) { handleWidth = std::max(width, 0.0f); }

protected:
  enum class Part : uint8_t { background = 0, bar, leftHandle, rightHandle };

  inline void setLeftPos(float x)
  {
    auto rightMost = std::max(rightPos - 3 * handleWidth / getWidth(), 0.0f);
    leftPos = std::clamp(x, 0.0f, rightMost);
  }

  inline void setRightPos(float x)
  {
    auto leftMost = std::min(leftPos + 3 * handleWidth / getWidth(), 1.0f);
    rightPos = std::clamp(x, leftMost, 1.0f);
  }

  Part hitTest(Point<int> point)
  {
    if (point.getY() < 0 || point.getY() > int(getHeight())) return Part::background;

    auto left = leftPos * getWidth();
    auto right = rightPos * getWidth();
    auto width = handleWidth;
    auto px = point.getX();

    auto leftHandleR = left + width;
    if (px >= left && px <= leftHandleR) return Part::leftHandle;

    auto rightHandleL = right - width;
    if (px >= rightHandleL && px <= right) return Part::rightHandle;

    if (px > leftHandleR && px < rightHandleL) return Part::bar;

    return Part::background;
  }

  float zoomSensi = 0.05f;
  float handleWidth = 10;
  float leftPos = 0;
  float rightPos = 1;
  int grabOffset = 0;

  Part pointed = Part::background;
  Part grabbed = Part::background;

  std::shared_ptr<Scrollable> parent;
  Palette &pal;
};

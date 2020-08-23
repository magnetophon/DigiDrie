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

#include "../dsp/constants.hpp"
#include "style.hpp"
#include "textview.hpp"
#include "valuewidget.hpp"

#include <algorithm>
#include <assert.h>
#include <cmath>
#include <functional>
#include <memory>
#include <random>

#include <iostream> // debug

class MatrixKnob : public ArrayWidget {
private:
  enum CommandMode : int32_t {
    modeNeutral = 0x0,
    modeRow = 0x1,
    modeColumn = 0x2,
    modeLink = 0x4,
  };

  constexpr static float arcNotchHalf = float(SomeDSP::pi) / 6.0f; // Radian.
  constexpr static float defaultTickLength = 0.5f;
  constexpr static float arcWidth = 2.0f;
  constexpr static float halfArcWidth = 1.0f;

  std::vector<double> defaultValue;
  std::vector<std::vector<double>> undoValue;
  std::vector<double> copyRow;
  std::vector<double> copyCol;

  const uint32_t nRow;
  const uint32_t nCol; // col is short for column.

  uint32_t focusRow = 1;
  uint32_t focusCol = 1;

  Point<int> cursor{-1, -1};
  Point<int> anchor{0, 0};
  bool isMouseLeftDown = false;
  bool isMouseEntered = false;
  bool isGrabbing = false;

  std::shared_ptr<TextView> textView;
  int32_t mode = 0;

  Palette &pal;

public:
  float sensitivity = 0.004f; // MovedPixel * sensitivity = valueChanged.
  float lowSensitivity = sensitivity / 5.0f;

  explicit MatrixKnob(
    NanoWidget *group,
    PluginUI *ui,
    std::vector<uint32_t> id,
    std::vector<double> value,
    std::vector<double> defaultValue,
    uint32_t nRow,
    uint32_t nCol,
    std::shared_ptr<TextView> textView,
    Palette &palette)
    : ArrayWidget(group, ui, id, value)
    , defaultValue(defaultValue)
    , nRow(nRow)
    , nCol(nCol)
    , textView(textView)
    , pal(palette)
  {
    assert(nRow * nCol != id.size());

    for (size_t i = 0; i < 4; ++i) undoValue.emplace_back(defaultValue);
    copyRow.resize(nRow);
    copyCol.resize(nCol);
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

    // Arc.
    const auto cellHeight = getHeight() / float(nRow);
    const auto cellWidth = getWidth() / float(nCol);
    const auto radius
      = (cellHeight > cellWidth ? cellWidth : cellHeight) / 2.0f - arcWidth;
    float centerX = 0;
    float centerY = 0;
    uint32_t focusIndex = focusRow * nCol + focusCol;
    lineCap(ROUND);
    lineJoin(ROUND);
    strokeWidth(2.0f);
    for (uint32_t row = 0; row < nRow; ++row) {
      for (uint32_t col = 0; col < nCol; ++col) {
        uint32_t idx = getIndex(row, col);
        translatePoint(row, col, centerX, centerY);

        strokeColor(idx == focusIndex ? pal.highlightMain() : pal.unfocused());
        beginPath();
        arc(
          centerX, centerY, radius, float(SomeDSP::pi) / 2.0f - arcNotchHalf,
          float(SomeDSP::pi) / 2.0f + arcNotchHalf, CCW);
        stroke();

        // Tick for default value. Sharing color and style with Arc.
        beginPath();
        auto point = mapValueToArc(defaultValue[idx], -radius * defaultTickLength);
        moveTo(point.getX() + centerX, point.getY() + centerY);
        point = mapValueToArc(defaultValue[idx], -radius);
        lineTo(point.getX() + centerX, point.getY() + centerY);
        stroke();

        // Line from center to tip.
        strokeColor(value[idx] == defaultValue[idx] ? pal.unfocused() : pal.foreground());
        beginPath();
        moveTo(centerX, centerY);
        const auto tip = mapValueToArc(value[idx], -radius);
        lineTo(tip.getX() + centerX, tip.getY() + centerY);
        stroke();
      }
    }

    // Overlay.
    if (isGrabbing || isMouseEntered) {
      float rx = (cursor.getX() * nCol / width) * width / nCol;
      float ry = (cursor.getY() * nRow / height) * height / nRow;
      float rw = float(width) / nCol;
      float rh = float(height) / nRow;

      fillColor(mode & modeRow ? pal.overlayHighlight() : pal.overlayFaint());
      beginPath();
      rect(0, ry, width, rh);
      fill();

      fillColor(mode & modeColumn ? pal.overlayHighlight() : pal.overlayFaint());
      beginPath();
      rect(rx, 0, rw, height);
      fill();
    }
  }

  bool onMouse(const MouseEvent &ev) override
  {
    if (contains(ev.pos) && ev.press) {
      if (ev.button == 1) {
        isMouseLeftDown = true;
        setFocus(ev.pos);
        if (ev.mod & kModifierControl) {
          uint32_t idx = getIndex(focusRow, focusCol);
          value[idx] = defaultValue[idx];
          updateValueAt(idx);
        } else {
          isGrabbing = true;
          cursor = ev.pos;
          anchor = ev.pos;
        }
      }
      repaint();
      return true;
    }
    isMouseLeftDown = false;
    isGrabbing = false;
    repaint();
    return false;
  }

  bool onMotion(const MotionEvent &ev) override
  {
    isMouseEntered = contains(ev.pos);
    if (isMouseLeftDown) {
      if (isGrabbing) {
        auto sensi = (ev.mod & kModifierShift) ? lowSensitivity : sensitivity;
        setValueFromDelta((anchor.getY() - ev.pos.getY()) * sensi);

        anchor = ev.pos;

        repaint();
        return true;
      } else if (ev.mod & kModifierControl) {
        uint32_t idx = getIndex(focusRow, focusCol);
        value[idx] = defaultValue[idx];
        updateValueAt(idx);
      }
    }

    if (isMouseEntered) {
      cursor = ev.pos;
      setFocus(ev.pos);
    } else {
      focusCol = nCol;
      focusRow = nRow;
    }
    repaint();
    return false;
  }

  bool onScroll(const ScrollEvent &ev) override
  {
    if (!contains(ev.pos)) return false;

    auto sensi = (ev.mod & kModifierShift) ? lowSensitivity : 8.0f * sensitivity;
    setValueFromDelta(ev.delta.getY() * sensi);
    updateValue();
    repaint();
    return true;
  }

  bool onKeyboard(const KeyboardEvent &ev)
  {
    if (!isMouseEntered || !ev.press) return false;
    handleKey(ev);
    return true;
  }

  void updateValue() override
  {
    ArrayWidget::updateValue();

    std::rotate(undoValue.begin(), undoValue.begin() + 1, undoValue.end());
    undoValue.back() = value;
  }

  void setValueFromDelta(double delta)
  {
    bool linked = mode & modeLink;
    bool colMode = mode & modeColumn;
    bool rowMode = mode & modeRow;

    uint32_t focusIndex = getIndex(focusRow, focusCol);
    value[focusIndex] = std::clamp(value[focusIndex] + delta, 0.0, 1.0);

    if (!linked || (linked && !colMode && !rowMode)) {
      updateValueAt(focusIndex);
      return;
    }

    if (colMode) {
      for (uint32_t row = 0; row < nRow; ++row) {
        auto idx = row * nCol + focusCol;
        if (idx == focusIndex) continue;
        if (idx >= value.size()) break;
        value[idx] = std::clamp(value[idx] + delta, 0.0, 1.0);
      }
    }
    if (rowMode) {
      for (uint32_t col = 0; col < nCol; ++col) {
        auto idx = focusRow * nCol + col;
        if (idx == focusIndex) continue;
        if (idx >= value.size()) break;
        value[idx] = std::clamp(value[idx] + delta, 0.0, 1.0);
      }
    }
    updateValue();
  }

private:
  void handleKey(const KeyboardEvent &ev)
  {
    if (ev.key == 8) { // Backspace
      updateTextView("Backspace.");
    } else if (ev.key == 13) { // Carriage return.
      updateTextView("Carriage return.");
    } else if (ev.key == 'c') { // Copy.
      if (mode == modeNeutral) {
        updateTextView("c: Copy failed. Enable column(1)/row(2) mode to copy.");
        repaint();
        return;
      }
      copy();
      updateTextView("c: Copy: Done.");
    } else if (ev.key == 'd') {
      resetToDefault();
      updateTextView("d: Reset to default: Done.");
    } else if (ev.key == 'l') {
      mode ^= modeLink;
      updateTextView("l: Toggle link mode.");
    } else if (ev.key == 'q') {
      mode ^= modeColumn;
      updateTextView("q: Toggle column mode.");
    } else if (ev.key == 'r') {
      totalRandomize();
      updateTextView("r: Randomize: Done.");
    } else if (ev.key == 't') { // subTle randomize. Random walk.
      randomize(0.02);
      updateTextView("t: Subtle Randomize: Done.");
    } else if (ev.key == 'v') { // Paste.
      if (mode == modeNeutral) {
        updateTextView("v: Paste failed. Enable column(1)/row(2) mode to paste.");
        repaint();
        return;
      }
      paste();
      updateTextView("v: Paste: Done.");
    } else if (ev.key == 'w') {
      mode ^= modeRow;
      updateTextView("w: Toggle row mode.");
    } else if (ev.key == 'z') { // Undo
      undo();
      ArrayWidget::updateValue();
      updateTextView("Undo: Done.");
      repaint();
      return;
    } else if (ev.key == 'Z') { // Redo
      redo();
      ArrayWidget::updateValue();
      updateTextView("Redo: Done.");
      repaint();
      return;
    } else {
      std::string str("No bind on key ");
      updateTextView(str + std::to_string(ev.key));
      return;
    }
    updateValue();
    repaint();
  }

  void updateTextView(std::string text)
  {
    std::string modeStr;
    if (mode & modeColumn) modeStr += "Column, ";
    if (mode & modeRow) modeStr += "Row, ";
    if (mode & modeLink) modeStr += "Link, ";
    textView->setText(text + "\n" + modeStr);
  }

  void undo()
  {
    std::rotate(undoValue.rbegin(), undoValue.rbegin() + 1, undoValue.rend());
    value = undoValue.back();
  }

  void redo()
  {
    std::rotate(undoValue.begin(), undoValue.begin() + 1, undoValue.end());
    value = undoValue.back();
  }

  void resetToDefault()
  {
    for (size_t i = 0; i < value.size(); ++i) value[i] = defaultValue[i];
  }

  void copy()
  {
    if (mode & modeColumn && copyCol.size() >= nCol) {
      for (uint32_t row = 0; row < nRow; ++row) {
        auto index = row * nCol + focusCol;
        if (index >= value.size()) break;
        copyRow[row] = value[index];
      }
    }
    if (mode & modeRow && copyRow.size() >= nRow) {
      for (uint32_t col = 0; col < nCol; ++col) {
        auto index = focusRow * nCol + col;
        if (index >= value.size()) break;
        copyCol[col] = value[index];
      }
    }
  }

  void paste()
  {
    if (mode & modeColumn && copyCol.size() >= nCol) {
      for (uint32_t row = 0; row < nRow; ++row) {
        auto index = row * nCol + focusCol;
        if (index >= value.size()) break;
        value[index] = copyRow[row];
      }
    }
    if (mode & modeRow && copyRow.size() >= nRow) {
      for (uint32_t col = 0; col < nCol; ++col) {
        auto index = focusRow * nCol + col;
        if (index >= value.size()) break;
        value[index] = copyCol[col];
      }
    }
  }

  void applyRandomize(std::function<double(double)> func)
  {
    if (mode == modeNeutral) {
      for (size_t i = 0; i < value.size(); ++i) value[i] = func(value[i]);
      return;
    }
    if (mode & modeColumn && copyCol.size() >= nCol) {
      for (uint32_t row = 0; row < nRow; ++row) {
        auto index = row * nCol + focusCol;
        if (index >= value.size()) break;
        value[index] = func(value[index]);
      }
    }
    if (mode & modeRow && copyRow.size() >= nRow) {
      for (uint32_t col = 0; col < nCol; ++col) {
        auto index = focusRow * nCol + col;
        if (index >= value.size()) break;
        value[index] = func(value[index]);
      }
    }
  }

  void totalRandomize()
  {
    std::random_device dev;
    std::mt19937_64 rng(dev());
    std::uniform_real_distribution<double> dist(0.0, 1.0);
    applyRandomize([&](double /* val */) { return dist(rng); });
  }

  void randomize(double amount)
  {
    std::random_device dev;
    std::mt19937_64 rng(dev());
    amount /= 2;
    applyRandomize([&](double val) {
      std::uniform_real_distribution<double> dist(val - amount, val + amount);
      return std::clamp(dist(rng), 0.0, 1.0);
    });
  }

  Point<float> mapValueToArc(float normalized, float length)
  {
    auto radian = (2.0 * normalized - 1.0) * (SomeDSP::pi - arcNotchHalf);
    return Point<float>(-sin(radian) * length, cos(radian) * length);
  }

  void translatePoint(uint32_t row, uint32_t col, float &x, float &y)
  {
    x = (col + 0.5f) * getWidth() / float(nCol);
    y = (row + 0.5f) * getHeight() / float(nRow);
  }

  void setFocus(const Point<int> &pos)
  {
    focusCol = pos.getX() * nCol / getWidth();
    focusRow = pos.getY() * nRow / getHeight();
  }

  uint32_t getIndex(uint32_t row, uint32_t col) { return row * nCol + col; }
};

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

#include <algorithm>
#include <cmath>
#include <memory>
#include <sstream>
#include <string>

template<typename Scale> class BarBox : public ArrayWidget {
private:
  enum class BarState : uint8_t { active, lock };

  std::vector<double> defaultValue;
  std::vector<std::vector<double>> undoValue;
  std::vector<BarState> barState;
  std::vector<double> active, locked; // Used to store temporary values.
  float sliderWidth = 0;
  float sliderMargin = 2.0f;
  float borderWidth = 2.0f;
  float highlightBorderWidth = 4.0f;
  float scrollBarheight = 8.0f;

  float textSize = 9.0f;
  FontId fontId = -1;
  Palette &pal;

  Scale &scale;

  Point<int> mousePosition{-1, -1};
  Point<int> anchor{0, 0};
  BarState anchorState = BarState::active;
  int indexL = 0;
  int indexR = 0;
  int indexRange = 0;
  bool isMouseLeftDown = false;
  bool isMouseRightDown = false;
  bool isMouseEntered = false;

public:
  float sliderZero = 0.0f;
  int32_t indexOffset = 0;
  bool liveUpdateLineEdit = true; // Set this false when line edit is slow.
  double scrollSensitivity = 0.01;
  double altScrollSensitivity = 0.001;
  std::vector<double> snapValue;

  explicit BarBox(
    NanoWidget *group,
    PluginUI *ui,
    std::vector<uint32_t> id,
    Scale &scale,
    std::vector<double> value,
    std::vector<double> defaultValue,
    FontId fontId,
    Palette &palette)
    : ArrayWidget(group, ui, id, value)
    , defaultValue(defaultValue)
    , fontId(fontId)
    , pal(palette)
    , scale(scale)
    , indexR(value.size())
    , indexRange(value.size() - indexL)
  {
    for (size_t i = 0; i < 4; ++i) undoValue.emplace_back(defaultValue);

    barState.resize(defaultValue.size(), BarState::active);
    active.reserve(value.size());
    locked.reserve(value.size());
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

    // Value bar.
    float sliderZeroHeight = height * (1.0f - sliderZero);
    for (int i = indexL; i < indexR; ++i) {
      float rectH = value[i] >= sliderZero ? (value[i] - sliderZero) * height
                                           : (sliderZero - value[i]) * height;
      float rectY = value[i] >= sliderZero ? sliderZeroHeight - rectH : sliderZeroHeight;
      fillColor(
        barState[i] == BarState::active ? pal.highlightMain() : pal.foregroundInactive());
      beginPath();
      rect((i - indexL) * sliderWidth, rectY, sliderWidth - sliderMargin, rectH);
      fill();
    }

    // Index text.
    fontFaceId(fontId);
    if (sliderWidth >= 8.0f) {
      fillColor(pal.foreground());
      fontSize(textSize);
      textAlign(ALIGN_CENTER | ALIGN_MIDDLE);
      for (int i = 0; i < indexRange; ++i) {
        text(
          (i + 0.5f) * sliderWidth, height - 4,
          std::to_string(i + indexL + indexOffset).c_str(), nullptr);
        if (barState[i] != BarState::active) {
          text((i + 0.5f) * sliderWidth, textSize + 4, "L", nullptr);
        }
      }
    }

    // Additional index text for zoom in.
    if (value.size() != size_t(indexRange)) {
      fillColor(pal.overlay());
      fontSize(textSize * 2.0f);
      textAlign(ALIGN_LEFT | ALIGN_TOP);
      std::string str = "<- #" + std::to_string(indexL);
      text(0, 0, str.c_str(), nullptr);
    }

    // Border.
    beginPath();
    rect(0, 0, width, height);
    strokeWidth(borderWidth);
    strokeColor(pal.border());
    stroke();

    // Highlight.
    if (uint(mousePosition.getY()) <= height && uint(mousePosition.getX()) <= width) {
      int index = int(indexL + indexRange * mousePosition.getX() / width);
      if (indexL <= index && index < indexR) {
        beginPath();
        rect((index - indexL) * sliderWidth, 0, sliderWidth, height);
        fillColor(pal.overlayHighlight());
        fill();

        // Index text.
        fillColor(pal.overlay());
        fontFaceId(fontId);
        fontSize(textSize * 4.0f);
        textAlign(ALIGN_CENTER | ALIGN_MIDDLE);
        std::ostringstream os;
        os << "#" << std::to_string(index + indexOffset) << ": "
           << std::to_string(scale.map(value[index]));
        std::string indexText(os.str());
        text(width / 2, height / 2, indexText.c_str(), nullptr);

        if (barState[index] != BarState::active) {
          fontSize(textSize * 2.0f);
          text(width / 2, height / 2 + textSize * 4.0f, "Locked", nullptr);
        }
      }
    }
  }

  bool onKeyboard(const KeyboardEvent &ev)
  {
    if (!isMouseEntered || !ev.press) return false;
    handleKey(ev);
    return true;
  }

#define APPLY_ALGORITHM(START, FUNC)                                                     \
  active.resize(0);                                                                      \
  locked.resize(0);                                                                      \
                                                                                         \
  for (size_t i = START; i < value.size(); ++i) {                                        \
    if (barState[i] == BarState::active)                                                 \
      active.push_back(value[i]);                                                        \
    else                                                                                 \
      locked.push_back(value[i]);                                                        \
  }                                                                                      \
                                                                                         \
  FUNC;                                                                                  \
                                                                                         \
  size_t activeIndex = 0;                                                                \
  size_t lockedIndex = 0;                                                                \
  for (size_t i = START; i < value.size(); ++i) {                                        \
    if (barState[i] == BarState::active) {                                               \
      value[i] = active[activeIndex];                                                    \
      ++activeIndex;                                                                     \
    } else {                                                                             \
      value[i] = locked[lockedIndex];                                                    \
      ++lockedIndex;                                                                     \
    }                                                                                    \
  }

  void handleKey(const KeyboardEvent &ev)
  {
    size_t index = calcIndex(mousePosition);
    if (index >= value.size()) index = value.size() - 1;

    if (ev.key == 'a') {
      alternateSign(index);
    } else if (ev.key == 'd') {
      resetToDefault();
    } else if (ev.key == 'D') {
      toggleMinMidMax(index);
    } else if (ev.key == 'e') {
      emphasizeLow(index);
    } else if (ev.key == 'E') {
      emphasizeHigh(index);
    } else if (ev.key == 'f') {
      averageLowpass(index);
    } else if (ev.key == 'F') {
      highpass(index);
    } else if (ev.key == 'i') {
      invertInRange(index);
    } else if (ev.key == 'I') {
      invertFull(index);
    } else if (ev.key == 'l') {
      barState[index]
        = barState[index] == BarState::active ? BarState::lock : BarState::active;
    } else if (ev.key == 'L') {
      lockAll(index);
    } else if (ev.key == 'n') {
      normalizeInRange(index);
    } else if (ev.key == 'N') {
      normalizeFull(index);
    } else if (ev.key == 'p') { // Permute.
      APPLY_ALGORITHM(index, {
        std::random_device device;
        std::mt19937 rng(device());
        std::shuffle(active.begin(), active.end(), rng);
      });
    } else if (ev.key == 'r') {
      totalRandomize(index);
    } else if (ev.key == 'R') {
      sparseRandomize(index);
    } else if (ev.key == 's') { // Sort descending order.
      APPLY_ALGORITHM(
        index, { std::sort(active.begin(), active.end(), std::greater<>()); });
    } else if (ev.key == 'S') { // Sort ascending order.
      APPLY_ALGORITHM(index, { std::sort(active.begin(), active.end()); });
    } else if (ev.key == 't') { // subTle randomize. Random walk.
      randomize(index, 0.02);
    } else if (ev.key == 'T') { // subTle randomize. Converge to sliderZero.
      mixRandomize(index, 0.02);
    } else if (ev.key == 'z') { // Undo
      undo();
      ArrayWidget::updateValue();
      repaint();
      return;
    } else if (ev.key == 'Z') { // Redo
      redo();
      ArrayWidget::updateValue();
      repaint();
      return;
    } else if (ev.key == ',') { // Rotate back.
      APPLY_ALGORITHM(
        index, { std::rotate(active.begin(), active.begin() + 1, active.end()); });
    } else if (ev.key == '.') { // Rotate forward.
      APPLY_ALGORITHM(
        index, { std::rotate(active.rbegin(), active.rbegin() + 1, active.rend()); });
    } else if (ev.key == '1') { // Decrease.
      multiplySkip(index, 1);
    } else if (ev.key == '2') { // Decrease even.
      multiplySkip(index, 2);
    } else if (ev.key == '3') { // Decrease 3n.
      multiplySkip(index, 3);
    } else if (ev.key == '4') { // Decrease 4n.
      multiplySkip(index, 4);
    } else if (ev.key == '5') { // Decrease 5n.
      multiplySkip(index, 5);
    } else if (ev.key == '6') { // Decrease 6n.
      multiplySkip(index, 6);
    } else if (ev.key == '7') { // Decrease 7n.
      multiplySkip(index, 7);
    } else if (ev.key == '8') { // Decrease 8n.
      multiplySkip(index, 8);
    } else if (ev.key == '9') { // Decrease 9n.
      multiplySkip(index, 9);
    } else {
      return;
    }
    updateValue();
    repaint();
  }

  void updateValue() override
  {
    ArrayWidget::updateValue();

    std::rotate(undoValue.begin(), undoValue.begin() + 1, undoValue.end());
    undoValue.back() = value;
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
    for (size_t i = 0; i < value.size(); ++i) {
      if (barState[i] == BarState::active) value[i] = defaultValue[i];
    }
  }

  void toggleMinMidMax(size_t start)
  {
    double filler = 0;
    for (size_t i = start; i < value.size(); ++i) {
      if (barState[i] != BarState::active) continue;
      filler = value[i] == 0 ? 0.5 : value[i] == 0.5 ? 1.0 : 0.0;
      start = i;
      break;
    }

    for (size_t i = start; i < value.size(); ++i) {
      if (barState[i] == BarState::active) value[i] = filler;
    }
  }

  void lockAll(size_t index)
  {
    std::fill(
      barState.begin(), barState.end(),
      barState[index] == BarState::active ? BarState::lock : BarState::active);
  }

  void alternateSign(size_t start)
  {
    for (size_t i = start; i < value.size(); i += 2) {
      if (barState[i] != BarState::active) continue;
      setValueAt(i, 2 * sliderZero - value[i]);
    }
  }

  void averageLowpass(size_t start)
  {
    const int32_t range = 1;

    std::vector<double> result(value);
    for (size_t i = start; i < value.size(); ++i) {
      if (barState[i] != BarState::active) continue;
      result[i] = 0.0;
      for (int32_t j = -range; j <= range; ++j) {
        size_t index = i + j; // Note that index is unsigned.
        if (index >= value.size()) continue;
        result[i] += value[index] - sliderZero;
      }
      setValueAt(i, sliderZero + result[i] / double(2 * range + 1));
    }
  }

  /**
  Highpass equation is:
    `value[i] = sum((-0.5, 1.0, -0.5) * value[(i - 1, i, i + 1)])`
  Value of index outside of array is assumed to be same as closest element.
  */
  void highpass(size_t start)
  {
    std::vector<double> result(value);
    size_t last = value.size() - 1;
    for (size_t i = start; i < value.size(); ++i) {
      if (barState[i] != BarState::active) continue;
      auto val = value[i] - sliderZero;
      result[i] = 0.0;
      result[i] -= (i >= 1) ? value[i - 1] - sliderZero : val;
      result[i] -= (i < last) ? value[i + 1] - sliderZero : val;
      result[i] = val + 0.5f * result[i];
      setValueAt(i, sliderZero + result[i]);
    }
  }

  void totalRandomize(size_t start)
  {
    std::random_device dev;
    std::mt19937_64 rng(dev());
    std::uniform_real_distribution<double> dist(0.0, 1.0);
    for (size_t i = start; i < value.size(); ++i) {
      if (barState[i] != BarState::active) continue;
      value[i] = dist(rng);
    }
  }

  void randomize(size_t start, double amount)
  {
    std::random_device dev;
    std::mt19937_64 rng(dev());
    amount /= 2;
    for (size_t i = start; i < value.size(); ++i) {
      if (barState[i] != BarState::active) continue;
      std::uniform_real_distribution<double> dist(value[i] - amount, value[i] + amount);
      setValueAt(i, dist(rng));
    }
  }

  void mixRandomize(size_t start, double mix)
  {
    std::random_device dev;
    std::mt19937_64 rng(dev());
    std::uniform_real_distribution<double> dist(sliderZero - 0.5, sliderZero + 0.5);
    for (size_t i = start; i < value.size(); ++i) {
      if (barState[i] != BarState::active) continue;
      setValueAt(i, value[i] + mix * (dist(rng) - value[i]));
    }
  }

  void sparseRandomize(size_t start)
  {
    std::random_device device;
    std::mt19937_64 rng(device());
    std::uniform_real_distribution<double> dist(0.0, 1.0);
    for (size_t i = start; i < value.size(); ++i) {
      if (barState[i] != BarState::active) continue;
      if (dist(rng) < 0.1f) value[i] = dist(rng);
    }
  }

  struct ValuePeak {
    double minNeg = 2;
    double minPos = 2;
    double maxNeg = -1;
    double maxPos = -1;
  };

  ValuePeak getValuePeak(size_t start, bool skipZero)
  {
    ValuePeak pk;
    for (size_t i = start; i < value.size(); ++i) {
      if (barState[i] != BarState::active) continue;
      double val = fabs(value[i] - sliderZero);
      if (value[i] == sliderZero) {
        if (skipZero) continue;
        pk.minNeg = 0;
        pk.minPos = 0;
      } else if (value[i] < sliderZero) {
        if (val > pk.maxNeg)
          pk.maxNeg = val;
        else if (val < pk.minNeg)
          pk.minNeg = val;
      } else {
        if (val > pk.maxPos)
          pk.maxPos = val;
        else if (val < pk.minPos)
          pk.minPos = val;
      }
    }
    if (pk.minNeg > 1.0) pk.minNeg = 0.0;
    if (pk.minPos > 1.0) pk.minPos = 0.0;
    if (pk.maxNeg < 0.0) pk.maxNeg = 0.0;
    if (pk.maxPos < 0.0) pk.maxPos = 0.0;
    return pk;
  }

  void invertFull(size_t start)
  {
    for (size_t i = start; i < value.size(); ++i) {
      if (barState[i] != BarState::active) continue;
      double val
        = value[i] >= sliderZero ? 1.0 - value[i] + sliderZero : sliderZero - value[i];
      setValueAt(i, val);
    }
  }

  void invertInRange(size_t start)
  {
    auto pk = getValuePeak(start, false);
    for (size_t i = start; i < value.size(); ++i) {
      if (barState[i] != BarState::active) continue;
      double val = value[i] < sliderZero
        ? std::clamp<double>(
          2.0 * sliderZero - pk.maxNeg - value[i] - pk.minNeg, sliderZero - pk.maxNeg,
          sliderZero)
        : std::clamp<double>(
          2.0 * sliderZero + pk.maxPos - value[i] + pk.minPos, sliderZero,
          pk.maxPos + sliderZero);
      setValueAt(i, val);
    }
  }

  void normalizeFull(size_t start)
  {
    auto pk = getValuePeak(start, true);

    double diffNeg = pk.maxNeg - pk.minNeg;
    double diffPos = pk.maxPos - pk.minPos;

    double mulNeg = sliderZero / diffNeg;
    double mulPos = (1.0 - sliderZero) / diffPos;

    double fixNeg = sliderZero;
    double fixPos = sliderZero;

    if (diffNeg == 0.0) {
      mulNeg = 0.0;
      if (pk.maxNeg != 0.0) fixNeg = 0.0;
    }
    if (diffPos == 0.0) {
      mulPos = 0.0;
      if (pk.maxPos != 0.0) fixPos = 1.0;
    }

    for (size_t i = start; i < value.size(); ++i) {
      if (barState[i] != BarState::active) continue;
      if (value[i] == sliderZero) continue;
      double val = value[i] < sliderZero
        ? std::min<double>(
          (value[i] - sliderZero + pk.minNeg) * mulNeg + fixNeg, sliderZero)
        : std::max<double>(
          (value[i] - sliderZero - pk.minPos) * mulPos + fixPos, sliderZero);
      setValueAt(i, val);
    }
  }

  void normalizeInRange(size_t start) noexcept
  {
    auto pk = getValuePeak(start, true);

    double diffNeg = pk.maxNeg - pk.minNeg;
    double diffPos = pk.maxPos - pk.minPos;

    double mulNeg = (sliderZero - pk.minNeg) / diffNeg;
    double mulPos = (1.0 - sliderZero - pk.minPos) / diffPos;

    if (diffNeg == 0.0) {
      mulNeg = 0.0;
      pk.minNeg = pk.maxNeg == 0.0 ? 0.0 : 1.0;
    }
    if (diffPos == 0.0) {
      mulPos = 0.0;
      pk.minPos = pk.maxPos == 0.0 ? 0.0 : 1.0;
    }

    for (size_t i = start; i < value.size(); ++i) {
      if (barState[i] != BarState::active) continue;
      if (value[i] == sliderZero) continue;
      auto val = value[i] < sliderZero
        ? (value[i] - sliderZero + pk.minNeg) * mulNeg + sliderZero - pk.minNeg
        : (value[i] - sliderZero - pk.minPos) * mulPos + sliderZero + pk.minPos;
      setValueAt(i, val);
    }
  }

  void multiplySkip(size_t start, size_t interval) noexcept
  {
    for (size_t i = start; i < value.size(); i += interval) {
      if (barState[i] != BarState::active) continue;
      setValueAt(i, (value[i] - sliderZero) * 0.9 + sliderZero);
    }
  }

  void emphasizeLow(size_t start)
  {
    for (size_t i = start; i < value.size(); ++i) {
      if (barState[i] != BarState::active) continue;
      setValueAt(i, (value[i] - sliderZero) / pow(i + 1, 0.0625) + sliderZero);
    }
  }

  void emphasizeHigh(size_t start)
  {
    for (size_t i = start; i < value.size(); ++i) {
      if (barState[i] != BarState::active) continue;
      setValueAt(
        i,
        (value[i] - sliderZero) * (0.9 + 0.1 * double(i + 1) / value.size())
          + sliderZero);
    }
  }

  bool onMouse(const MouseEvent &ev) override
  {
    if (!ev.press && (ev.button == 1 || ev.button == 3)) {
      updateValue();
    }

    if (!(ev.press && contains(ev.pos))) {
      isMouseLeftDown = false;
      isMouseRightDown = false;
      return false;
    }

    anchor = ev.pos;

    if (ev.button == 1)
      isMouseLeftDown = true;
    else if (ev.button == 3)
      isMouseRightDown = true;

    if (ev.button == 3 && ev.mod & kModifierControl && ev.mod & kModifierShift)
      anchorState = setStateFromPosition(ev.pos, BarState::lock);
    else
      setValueFromPosition(ev.pos, ev.mod);
    return true;
  }

  bool onMotion(const MotionEvent &ev) override
  {
    isMouseEntered = contains(ev.pos);
    mousePosition = ev.pos;
    if (isMouseLeftDown) {
      if (ev.mod & kModifierControl && ev.mod & kModifierShift)
        setValueFromPosition(ev.pos, ev.mod);
      else
        setValueFromLine(anchor, ev.pos, ev.mod);
      anchor = ev.pos;
      return true;
    } else if (isMouseRightDown) {
      if (ev.mod & kModifierControl && ev.mod & kModifierShift) {
        setStateFromLine(anchor, ev.pos, anchorState);
      } else if (ev.mod & kModifierShift) {
        mousePosition
          = Point<int>(anchor.getX(), std::clamp<int>(ev.pos.getY(), 0, getHeight()));
        setValueFromPosition(mousePosition, 0);
      } else {
        setValueFromLine(anchor, ev.pos, ev.mod);
      }
      return true;
    }
    repaint();
    return false;
  }

  bool onScroll(const ScrollEvent &ev) override
  {
    if (!contains(ev.pos)) return false;

    size_t index = calcIndex(ev.pos);
    if (index >= value.size()) return false;
    if (barState[index] != BarState::active) return true;

    if (ev.mod & kModifierShift)
      setValueAt(index, value[index] + altScrollSensitivity * ev.delta.getY());
    else
      setValueAt(index, value[index] + scrollSensitivity * ev.delta.getY());

    updateValueAt(index);
    repaint();
    return true;
  }

  void onResize(const ResizeEvent &ev) { refreshSliderWidth(ev.size.getWidth()); }

  void setBorderWidth(float width) { borderWidth = width; }
  void setHighlightBorderWidth(float width) { highlightBorderWidth = width; }

  void setViewRange(float left, float right)
  {
    indexL = int(std::clamp(left, 0.0f, 1.0f) * value.size());
    indexR = int(std::clamp(right, 0.0f, 1.0f) * value.size());
    indexRange = indexR >= indexL ? indexR - indexL : 0;
    refreshSliderWidth(getWidth());
    repaint();
  }

private:
  inline size_t calcIndex(Point<int> position)
  {
    return size_t(indexL + position.getX() / sliderWidth);
  }

  void refreshSliderWidth(float width)
  {
    sliderWidth = indexRange >= 1 ? float(width) / indexRange : float(width);
    sliderMargin = sliderWidth <= 4.0f ? 1.0f : 2.0f;
  }

  double snap(double val)
  {
    if (snapValue.size() <= 0) return val;

    size_t idx = 0;
    for (; idx < snapValue.size(); ++idx) {
      if (snapValue[idx] < val) continue;
      break;
    }
    return idx < snapValue.size() ? snapValue[idx] : 1.0;
  }

  BarState setStateFromPosition(Point<int> position, BarState state)
  {
    size_t index = calcIndex(position);
    if (index >= value.size()) return BarState::active;

    barState[index] = barState[index] != state ? state : BarState::active;
    return barState[index];
  }

  void setStateFromLine(Point<int> p0, Point<int> p1, BarState state)
  {
    if (p0.getX() > p1.getX()) std::swap(p0, p1);

    int last = int(value.size()) - 1;
    if (last < 0) last = 0; // std::clamp is undefined if low is greater than high.

    int left = int(calcIndex(p0));
    int right = int(calcIndex(p1));

    if ((left < 0 && right < 0) || (left > last && right > last)) return;

    left = std::clamp(left, 0, last);
    right = std::clamp(right, 0, last);

    for (int idx = left; idx >= 0 && idx <= right; ++idx) barState[idx] = state;

    repaint();
  }

  void setValueFromPosition(Point<int> position, uint modifier)
  {
    size_t index = calcIndex(position);
    if (index >= value.size()) return;
    if (barState[index] != BarState::active) return;

    bool ctrl = modifier & kModifierControl;
    bool shift = modifier & kModifierShift;

    if (ctrl && !shift)
      setValueAt(index, defaultValue[index]);
    else if (!ctrl && shift)
      setValueAt(index, snap(1.0 - double(position.getY()) / getHeight()));
    else
      setValueAt(index, 1.0 - double(position.getY()) / getHeight());

    updateValueAt(index);
    repaint();
  }

  void setValueFromLine(Point<int> p0, Point<int> p1, uint modifier)
  {
    if (p0.getX() > p1.getX()) std::swap(p0, p1);

    int last = int(value.size()) - 1;
    if (last < 0) last = 0; // std::clamp is undefined if low is greater than high.

    int left = int(calcIndex(p0));
    int right = int(calcIndex(p1));

    if ((left < 0 && right < 0) || (left > last && right > last)) return;

    left = std::clamp(left, 0, last);
    right = std::clamp(right, 0, last);

    const float p0y = p0.getY();
    const float p1y = p1.getY();

    if (left == right) { // p0 and p1 are in a same bar.
      if (barState[left] != BarState::active) return;

      if (modifier & kModifierControl)
        setValueAt(left, defaultValue[left]);
      else if (modifier & kModifierShift)
        setValueAt(left, snap(1.0f - double(anchor.getY()) / getHeight()));
      else
        setValueAt(left, 1.0f - double(anchor.getY()) / getHeight());

      updateValueAt(left);
      repaint();
      return;
    } else if (modifier & kModifierControl) {
      for (int idx = left; idx >= 0 && idx <= right; ++idx) {
        if (barState[idx] != BarState::active) continue;
        setValueAt(idx, defaultValue[idx]);
      }
      if (liveUpdateLineEdit) updateValue();
      return;
    }

    const bool isSnapping = modifier & kModifierShift;

    if (barState[left] == BarState::active) {
      auto val = 1.0f - p0y / getHeight();
      setValueAt(left, isSnapping ? snap(val) : val);
    }
    if (barState[right] == BarState::active) {
      auto val = 1.0f - p1y / getHeight();
      setValueAt(right, isSnapping ? snap(val) : val);
    }

    // In between.
    const float xL = sliderWidth * (left + 1);
    const float xR = sliderWidth * right;
    if (fabs(xR - xL) >= 1e-5) { // Avoid 0 division on slope.
      p0.setX(xL);
      p1.setX(xR);
    }
    const float p0x = p0.getX();
    const float p1x = p1.getX();
    const float slope = (p1y - p0y) / (p1x - p0x);
    const float yInc = slope * sliderWidth;
    float y = slope * (sliderWidth * (left + 1) - p0x) + p0y;
    for (int idx = left + 1; idx >= 0 && idx < right; ++idx) {
      if (barState[idx] != BarState::active) continue;
      auto val = 1.0f - (y + 0.5f * yInc) / getHeight();
      setValueAt(idx, isSnapping ? snap(val) : val);
      y += yInc;
    }

    if (liveUpdateLineEdit) updateValue();
    repaint();
  }
};

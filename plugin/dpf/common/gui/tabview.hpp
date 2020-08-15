// (c) 2020 Takamitsu Endo
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

#include "Widget.hpp"

#include "../ui.hpp"
#include "style.hpp"

#include <memory>
#include <string>
#include <tuple>
#include <vector>

#include <iostream>

class TabView : public NanoWidget {
public:
  struct TabButton {
    std::string name;
    float left = 0;
    float top = 0;
    float right = 0;
    float bottom = 0;

    float width = 0;
    float height = 0;

    bool isMouseEntered = false;

    TabButton(std::string name, float left, float top, float width, float height)
      : name(name), left(left), top(top), width(width), height(height)
    {
      right = left + width;
      bottom = top + height;
    }

    bool hitTest(float x, float y)
    {
      return left <= x && x <= right && top <= y && y <= bottom;
    }
  };

  std::vector<std::vector<std::shared_ptr<Widget>>> widgets;
  std::vector<TabButton> tabs;
  size_t activeTabIndex = 0;

  explicit TabView(
    NanoWidget *group,
    std::vector<std::string> tabNames,
    FontId fontId,
    Palette &palette,
    float tabHeight,
    float left,
    float top,
    float width,
    float height)
    : NanoWidget(group), tabHeight(tabHeight), fontId(fontId), pal(palette)
  {
    setAbsolutePos(left, top);
    setSize(width, height);

    tabs.reserve(tabNames.size());
    const auto tabWidth = float(getWidth()) / tabNames.size();
    for (size_t idx = 0; idx < tabNames.size(); ++idx) {
      tabs.push_back(TabButton(tabNames[idx], idx * tabWidth, 0, tabWidth, tabHeight));
    }

    widgets.resize(tabs.size());
  }

  void addWidget(size_t tabIndex, std::shared_ptr<Widget> newWidget)
  {
    if (tabIndex >= widgets.size()) return;
    widgets[tabIndex].push_back(newWidget);
  }

  void addWidget(
    size_t tabIndex,
    std::tuple<std::shared_ptr<Widget>, std::shared_ptr<Widget>> newWidgets)
  {
    if (tabIndex >= widgets.size()) return;
    std::apply(
      [&](auto &&... wdgt) { ((widgets[tabIndex].push_back(wdgt)), ...); }, newWidgets);
  }

  void refreshTab()
  {
    for (size_t idx = 0; idx < tabs.size(); ++idx) {
      bool isVisible = idx == activeTabIndex;
      for (auto &widget : widgets[idx]) widget->setVisible(isVisible);
    }
  }

  void onNanoDisplay() override
  {
    resetTransform();
    translate(getAbsoluteX(), getAbsoluteY());

    const auto width = getWidth();
    const auto height = getHeight();

    // Inactive tabs.
    fontFaceId(fontId);
    fontSize(textSize);
    textAlign(align);
    strokeWidth(1.0f);
    for (size_t idx = 0; idx < tabs.size(); ++idx) {
      if (idx == activeTabIndex) continue;
      const TabButton &tab = tabs[idx];

      beginPath();
      rect(tab.left, tab.top, tab.width, tab.height);
      fillColor(tab.isMouseEntered ? pal.overlayHighlight() : pal.boxBackground());
      fill();
      strokeColor(pal.border());
      stroke();

      float labelX = tab.left + tab.width / 2.0f;
      float labelY = tab.top + tab.height / 2.0f;
      fillColor(pal.foregroundInactive());
      text(labelX, labelY, tab.name.c_str(), nullptr);
    }

    // Active tab.
    // NanoVG couldn't fill concave shape. Instead it fills boundary box (AABB).
    beginPath();
    rect(0, tabHeight, width, height - tabHeight);
    fillColor(pal.background());
    fill();

    const TabButton &activeTab = tabs[activeTabIndex];
    beginPath();
    moveTo(0, activeTab.height);
    lineTo(activeTab.left, activeTab.height);
    lineTo(activeTab.left, 0);
    lineTo(activeTab.right, 0);
    lineTo(activeTab.right, activeTab.height);
    lineTo(width, activeTab.height);
    lineTo(width, height);
    lineTo(0, height);
    closePath();
    strokeColor(pal.border());
    strokeWidth(2.0f);
    stroke();

    float labelX = activeTab.left + activeTab.width / 2.0f;
    float labelY = activeTab.height / 2.0f;
    fillColor(pal.foreground());
    text(labelX, labelY, activeTab.name.c_str(), nullptr);
  }

  bool onMouse(const MouseEvent &ev) override
  {
    if (!isInTabArea(ev.pos) || !ev.press) return false;
    for (size_t idx = 0; idx < tabs.size(); ++idx) {
      if (tabs[idx].hitTest(ev.pos.getX(), ev.pos.getY())) activeTabIndex = idx;
    }
    refreshTab();
    repaint();
    return true;
  }

  bool onMotion(const MotionEvent &ev) override
  {
    for (auto &tab : tabs) tab.isMouseEntered = tab.hitTest(ev.pos.getX(), ev.pos.getY());
    repaint();
    return false;
  }

  bool onScroll(const ScrollEvent &ev) override
  {
    if (!isInTabArea(ev.pos)) return false;
    if (ev.delta.getY() < 0) {
      activeTabIndex = (activeTabIndex + 1) % tabs.size();
    } else {
      // Note that activeTabIndex is unsigned (size_t).
      activeTabIndex = (activeTabIndex - 1);
      while (activeTabIndex > tabs.size()) activeTabIndex += tabs.size();
    }
    refreshTab();
    repaint();
    return true;
  }

  void setTextSize(float size) { textSize = size < 0.0f ? 0.0f : size; }

protected:
  bool isInTabArea(const Point<int> &pos)
  {
    int width = getWidth();
    return 0 <= pos.getX() && pos.getX() <= width && 0 <= pos.getY()
      && pos.getY() <= tabHeight;
  }

  float tabHeight = 30.0f;

  const int align = ALIGN_CENTER | ALIGN_MIDDLE;
  float textSize = 14.0f;
  FontId fontId = -1;
  Palette &pal;
};

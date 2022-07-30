// (c) 2020-2021 Takamitsu Endo
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

#include "pluginterfaces/vst/vsttypes.h"
#include "public.sdk/source/vst/vstguieditor.h"
#include "vstgui/vstgui.h"

namespace VSTGUI {

struct ArrayControl : public CView, public IFocusDrawing {
public:
  Steinberg::Vst::VSTGUIEditor *editor = nullptr;
  std::vector<Steinberg::Vst::ParamID> id;
  std::vector<double> value;
  std::vector<double> defaultValue;

  explicit ArrayControl(
    Steinberg::Vst::VSTGUIEditor *editor,
    const CRect &size,
    std::vector<Steinberg::Vst::ParamID> id,
    std::vector<double> value,
    std::vector<double> defaultValue)
    : CView(size), editor(editor), id(id), value(value), defaultValue(defaultValue)
  {
    setTransparency(false);
    setMouseEnabled(true);

    if (editor != nullptr) editor->addRef();
  }

  virtual ~ArrayControl()
  {
    if (editor != nullptr) editor->release();
  }

  bool drawFocusOnTop() override { return true; }

  bool getFocusPath(CGraphicsPath &outPath) override
  {
    if (wantsFocus()) {
      CCoord focusWidth = getFrame()->getFocusWidth();
      CRect r(getVisibleViewSize());
      if (!r.isEmpty()) {
        outPath.addRect(r);
        r.extend(focusWidth, focusWidth);
        outPath.addRect(r);
      }
    }
    return true;
  }

  void setValueAt(size_t index, double normalized)
  {
    if (index >= value.size()) return;
    value[index] = normalized < 0.0 ? 0.0 : normalized > 1.0 ? 1.0 : normalized;
    setDirty();
  }

  void updateValue()
  {
    if (id.size() != value.size()) return;
    for (size_t i = 0; i < id.size(); ++i) updateValueAt(i);
  }

  void updateValueAt(size_t index)
  {
    if (index >= id.size() || !getFrame() || editor == nullptr) return;
    getFrame()->beginEdit(id[index]);
    auto controller = editor->getController();
    if (controller != nullptr) {
      controller->setParamNormalized(id[index], value[index]);
      controller->performEdit(id[index], value[index]);
    }
    getFrame()->endEdit(id[index]);
  }

  void grabFocus()
  {
    if (!editor) return;
    if (editor->getFrame()) editor->getFrame()->setFocusView(this);
  }

  void releaseFocus()
  {
    if (!editor) return;
    if (editor->getFrame()) editor->getFrame()->setFocusView(nullptr);
  }
};

} // namespace VSTGUI

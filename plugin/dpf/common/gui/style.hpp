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

#include "../../lib/DPF/dgl/Color.hpp"

#include <array>
#include <string>

// Using common because default is a keyword in C++.
enum class Style { common, accent, warning };

class Palette {
public:
  Palette() { load(); }
  void load();

  const std::string &fontPath() { return _fontPath; }
  const DGL::Color &foreground() { return _foreground; }
  const DGL::Color &foregroundButtonOn() { return _foregroundButtonOn; }
  const DGL::Color &foregroundInactive() { return _foregroundInactive; }
  const DGL::Color &background() { return _background; }
  const DGL::Color &boxBackground() { return _boxBackground; }
  const DGL::Color &border() { return _border; }
  const DGL::Color &borderCheckbox() { return _borderCheckbox; }
  const DGL::Color &borderLabel() { return _borderLabel; }
  const DGL::Color &unfocused() { return _unfocused; }
  const DGL::Color &highlightMain() { return _highlightMain; }
  const DGL::Color &highlightAccent() { return _highlightAccent; }
  const DGL::Color &highlightButton() { return _highlightButton; }
  const DGL::Color &highlightWarning() { return _highlightWarning; }
  const DGL::Color &overlay() { return _overlay; }
  const DGL::Color &overlayHighlight() { return _overlayHighlight; }

private:
  std::string _fontPath;
  DGL::Color _foreground{0xd3, 0xda, 0xe3};
  DGL::Color _foregroundButtonOn{0xd3, 0xda, 0xe3};
  DGL::Color _foregroundInactive{0x97, 0x9d, 0xa7};
  DGL::Color _background{0x2f, 0x34, 0x3f};
  DGL::Color _boxBackground{0x44, 0x4a, 0x58};
  DGL::Color _border{0x2d, 0x32, 0x3c};
  DGL::Color _borderCheckbox{0x2d, 0x32, 0x3c};
  DGL::Color _borderLabel{0x85, 0xa8, 0xb5};
  DGL::Color _unfocused{0x5c, 0x69, 0xb4};
  DGL::Color _highlightMain{0x52, 0x94, 0xe2};
  DGL::Color _highlightAccent{0x2c, 0x8a, 0x58};
  DGL::Color _highlightButton{0x50, 0x56, 0x66};
  DGL::Color _highlightWarning{0xaa, 0xaa, 0xff};
  DGL::Color _overlay{0xd3, 0xda, 0xe3, 0xbb};
  DGL::Color _overlayHighlight{0x52, 0x94, 0xe2, 0x32};
};

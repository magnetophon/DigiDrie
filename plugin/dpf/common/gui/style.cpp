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

/**
This source is splitted because nlohmann/json.hpp is slow to compile.
*/
#include "style.hpp"
#include "../../lib/ghc/fs_std.hpp"
#include "../../lib/json.hpp"

#include <algorithm>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iostream>

/**
Specification of $XDG_CONFIG_HOME:
https://specifications.freedesktop.org/basedir-spec/basedir-spec-latest.html
*/
inline fs::path getXdgConfigHome()
{
  const char *configDir = std::getenv("XDG_CONFIG_HOME");
  if (configDir != nullptr) return fs::path(configDir);

  const char *home = std::getenv("HOME");
  if (home != nullptr) return fs::path(home) / ".config";

  std::cerr << "$XDG_CONFIG_HOME and $HOME is empty.\n";
  return fs::path("");
}

inline void logNotExist(fs::path path)
{
  std::cerr << path << " is not regular file or doesn't exist.\n";
}

inline fs::path getConfigPath()
{
  auto styleJsonPath = getXdgConfigHome() / fs::path("UhhyouPlugins/style/style.json");
  if (fs::is_regular_file(styleJsonPath)) return styleJsonPath;
  logNotExist(styleJsonPath);

  styleJsonPath = fs::path("/usr/local/etc/UhhyouPlugins/style/style.json");
  if (fs::is_regular_file(styleJsonPath)) return styleJsonPath;
  logNotExist(styleJsonPath);

  styleJsonPath = fs::path("/etc/UhhyouPlugins/style/style.json");
  if (fs::is_regular_file(styleJsonPath)) return styleJsonPath;
  logNotExist(styleJsonPath);

  return fs::path("UhhyouPlugins/style/style.json");
}

/**
Load style config from `$CONFIG_PATH/UhhyouPlugins/style/style.json`.

$CONFIG_PATH will be set as following order:

1. $XDG_CONFIG_HOME
2. /etc

Returns empty json on failure.
*/
inline nlohmann::json loadStyleJson()
{
  nlohmann::json data;

  auto styleJsonPath = getConfigPath();

  std::ifstream ifs(styleJsonPath);
  if (!ifs.is_open()) {
    std::cerr << "Failed to open " << styleJsonPath << "\n";
    return data;
  }

  ifs >> data;
  return data;
}

inline int strHexToUint8(std::string str)
{
  return std::clamp<int>(std::stoi(str, 0, 16), 0, 255);
}

/**
data[key] must come in string of hex color code. "#123456", "#aabbccdd" etc.
Color will be only loaded if the size of string is either 7 or 9 (RGB or RGBA).
First character is ignored. So "!303030", " 0000ff88" are valid.
*/
inline void loadColor(nlohmann::json &data, std::string key, DGL::Color &color)
{
  if (!data.contains(key)) return;
  if (!data[key].is_string()) return;

  std::string hex = data[key];

  if (hex.size() != 7 && hex.size() != 9) return;

  color = DGL::Color(
    strHexToUint8(hex.substr(1, 2)), strHexToUint8(hex.substr(3, 2)),
    strHexToUint8(hex.substr(5, 2)),
    hex.size() != 9 ? 255 : strHexToUint8(hex.substr(7, 2)));
}

inline void loadString(nlohmann::json &data, std::string key, std::string &dest)
{
  if (!data.contains(key)) return;
  if (!data[key].is_string()) return;
  dest = data[key];
}

void Palette::load()
{
  auto data = loadStyleJson();
  if (data.is_null()) return;

  loadString(data, "fontPath", _fontPath);
  loadColor(data, "foreground", _foreground);
  loadColor(data, "foregroundButtonOn", _foregroundButtonOn);
  loadColor(data, "foregroundInactive", _foregroundInactive);
  loadColor(data, "background", _background);
  loadColor(data, "boxBackground", _boxBackground);
  loadColor(data, "border", _border);
  loadColor(data, "borderCheckbox", _borderCheckbox);
  loadColor(data, "borderLabel", _borderLabel);
  loadColor(data, "unfocused", _unfocused);
  loadColor(data, "highlightMain", _highlightMain);
  loadColor(data, "highlightAccent", _highlightAccent);
  loadColor(data, "highlightButton", _highlightButton);
  loadColor(data, "highlightWarning", _highlightWarning);
  loadColor(data, "overlay", _overlay);
  loadColor(data, "overlayHighlight", _overlayHighlight);
}

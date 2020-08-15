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

#include "../ui.hpp"
#include "Widget.hpp"

#include <algorithm>
#include <iostream>
#include <random>
#include <string>
#include <vector>

class StateWidget : public NanoWidget {
public:
  std::string key;
  std::string value;

  explicit StateWidget(
    NanoWidget *group, PluginUI *ui, std::string key, std::string value)
    : NanoWidget(group), key(key), value(value), ui(ui)
  {
  }

  virtual void updateValue()
  {
    if (ui == nullptr) return;
    ui->updateState(key, value);
  }

protected:
  PluginUI *ui = nullptr;
};

class ValueWidget : public NanoWidget {
public:
  uint32_t id;

  explicit ValueWidget(NanoWidget *group, PluginUI *ui, double value)
    : NanoWidget(group), ui(ui), value(value)
  {
  }

  virtual double getValue() { return value; }
  virtual void setValue(double value) { this->value = value; }
  virtual void updateValue()
  {
    if (ui == nullptr) return;
    ui->updateValue(id, value);
  }

protected:
  PluginUI *ui = nullptr;
  double value = 0.0;
};

class ArrayWidget : public NanoWidget {
protected:
  PluginUI *ui = nullptr;

public:
  std::vector<uint32_t> id;
  std::vector<double> value;

  explicit ArrayWidget(
    NanoWidget *group, PluginUI *ui, std::vector<uint32_t> id, std::vector<double> value)
    : NanoWidget(group), ui(ui), id(id), value(value)
  {
    if (id.size() != value.size())
      std::cout << "Error ArrayWidget::ArrayWidget: Mismatch size of id and value."
                << std::endl;
  }

  virtual double getValueAt(size_t index)
  {
    if (index >= value.size()) return 0;
    return value[index];
  }

  virtual void setValueAt(size_t index, double normalized)
  {
    if (index < value.size()) value[index] = std::clamp(normalized, 0.0, 1.0);
  }

  virtual void setValueFromId(int id, double normalized)
  {
    auto index = id - this->id[0];
    if (index < value.size()) value[index] = std::clamp(normalized, 0.0, 1.0);
  }

  virtual void updateValueAt(size_t index)
  {
    if (ui == nullptr) return;
    ui->updateValue(id[index], value[index]);
  }

  virtual void updateValue()
  {
    if (ui == nullptr || id.size() != value.size()) return;
    for (size_t i = 0; i < id.size(); ++i) ui->updateValue(id[i], value[i]);
  }
};

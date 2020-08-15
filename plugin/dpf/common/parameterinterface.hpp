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

#include <cstddef>
#include <cstdint>

class ParameterInterface {
public:
  virtual size_t idLength() = 0;
  virtual double getNormalized(uint32_t index) const = 0;
  virtual double getDefaultNormalized(uint32_t index) const = 0;
  virtual double getFloat(uint32_t index) const = 0;
  virtual double getInt(uint32_t index) const = 0;
  virtual double parameterChanged(uint32_t index, float raw) = 0;
  virtual double updateValue(uint32_t index, float normalized) = 0;

#ifndef TEST_BUILD
  virtual void loadProgram(uint32_t index) = 0;
#endif
};

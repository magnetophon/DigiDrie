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

#ifndef TEST_BUILD
#include "DistrhoPlugin.hpp"
#endif

#include "dsp/scale.hpp"

#include <string>

#ifndef TEST_BUILD
template<typename Scale> class ScaledParameterRanges : public ParameterRanges {
public:
  ScaledParameterRanges(double defaultNormalized, Scale &scale)
    : ParameterRanges(scale.map(defaultNormalized), scale.getMin(), scale.getMax())
    , scale(scale)
  {
  }

  float getNormalizedValue(const float &value) const noexcept
  {
    return scale.invmap(value);
  }

  float getFixedAndNormalizedValue(const float &value) const noexcept
  {
    return scale.invmap(value);
  }

  float getUnnormalizedValue(const float &value) const noexcept
  {
    return scale.map(value);
  }

protected:
  Scale &scale;
};
#endif

struct ValueInterface {
#ifndef TEST_BUILD
  virtual void setParameterRange(Parameter &parameter) = 0;
#endif
  virtual const char *getName() const = 0;
  virtual double getFloat() const = 0;
  virtual uint32_t getInt() const = 0;
  virtual double getNormalized() = 0;
  virtual uint32_t getDefaultInt() = 0;
  virtual double getDefaultNormalized() = 0;
  virtual void setFromInt(uint32_t value) = 0;
  virtual void setFromFloat(double value) = 0;
  virtual void setFromNormalized(double value) = 0;
};

struct IntValue : public ValueInterface {
  SomeDSP::IntScale<double> &scale;
  double defaultNormalized;
  uint32_t raw;

  std::string name;
  uint32_t hints;

  IntValue(
    uint32_t defaultRaw,
    SomeDSP::IntScale<double> &scale,
    const char *name,
    uint32_t hints)
    : scale(scale)
    , defaultNormalized(scale.invmap(defaultRaw))
    , raw(defaultRaw <= scale.getMax() ? defaultRaw : 0)
    , name(name)
    , hints(hints)
  {
  }

#ifndef TEST_BUILD
  void setParameterRange(Parameter &parameter) override
  {
    parameter.name = name.c_str();
    parameter.hints = hints;
    parameter.ranges
      = ScaledParameterRanges<SomeDSP::IntScale<double>>(defaultNormalized, scale);
  }
#endif

  inline const char *getName() const override { return name.c_str(); }
  inline uint32_t getInt() const override { return raw; }
  inline double getFloat() const override { return raw; }
  double getNormalized() override { return scale.invmap(raw); }
  uint32_t getDefaultInt() { return scale.map(defaultNormalized); }
  inline double getDefaultNormalized() override { return defaultNormalized; }

  void setFromInt(uint32_t value)
  {
    raw = value < scale.getMin() ? scale.getMin()
                                 : value > scale.getMax() ? scale.getMax() : value;
  }

  void setFromFloat(double valueFloat) override
  {
    uint32_t value = uint32_t(valueFloat);
    raw = value < scale.getMin() ? scale.getMin()
                                 : value > scale.getMax() ? scale.getMax() : value;
  }

  void setFromNormalized(double value) override
  {
    raw = scale.map(value < 0.0 ? 0.0 : value > 1.0 ? 1.0 : value);
  }
};

template<typename Scale> struct FloatValue : public ValueInterface {
  double defaultNormalized;
  double raw;
  Scale &scale;
  std::string name;
  uint32_t hints;

  FloatValue(double defaultNormalized, Scale &scale, const char *name, uint32_t hints)
    : defaultNormalized(defaultNormalized)
    , raw(scale.map(defaultNormalized))
    , scale(scale)
    , name(name)
    , hints(hints)
  {
  }

#ifndef TEST_BUILD
  void setParameterRange(Parameter &parameter) override
  {
    parameter.name = name.c_str();
    parameter.hints = hints;
    parameter.ranges = ScaledParameterRanges<Scale>(defaultNormalized, scale);
  }
#endif

  inline const char *getName() const override { return name.c_str(); }
  inline uint32_t getInt() const override { return uint32_t(raw); }
  inline double getFloat() const override { return raw; }
  double getNormalized() override { return scale.invmap(raw); }
  uint32_t getDefaultInt() { return uint32_t(scale.map(defaultNormalized)); }
  inline double getDefaultNormalized() override { return defaultNormalized; }

  void setFromInt(uint32_t value) override
  {
    raw = value < scale.getMin() ? scale.getMin()
                                 : value > scale.getMax() ? scale.getMax() : value;
  }

  void setFromFloat(double value) override
  {
    raw = value < scale.getMin() ? scale.getMin()
                                 : value > scale.getMax() ? scale.getMax() : value;
  }

  void setFromNormalized(double value) override
  {
    value = value < 0.0 ? 0.0 : value > 1.0 ? 1.0 : value;
    raw = scale.map(value);
  }
};

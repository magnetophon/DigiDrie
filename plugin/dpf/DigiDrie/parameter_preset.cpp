// (c) 2020 Takamitsu Endo
//
// This file is part of DigiDrie.
//
// DigiDrie is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// DigiDrie is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with DigiDrie.  If not, see <https://www.gnu.org/licenses/>.

#include "parameter.hpp"

// Generated from preset dump.
#ifndef TEST_BUILD

void GlobalParameter::loadProgram(uint32_t index)
{
  // using ID = ParameterID::ID;

  switch (index) {
    default:
      resetParameter();
      break;
  }
}

#endif

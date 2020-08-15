#!/bin/bash

set -e

python3 extract_parameter.py
python3 generate_parameter_hpp.py
python3 generate_ui_cpp.py

cp parameter.hpp ../dpf/DigiDrie
cp parameter.cpp ../dpf/DigiDrie
cp ui.cpp ../dpf/DigiDrie

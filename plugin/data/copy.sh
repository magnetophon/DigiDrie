#!/bin/bash

set -e

python3 rewrite_dsp.py

cp generated/parameter.hpp ../dpf/DigiDrie
cp generated/parameter.cpp ../dpf/DigiDrie
cp generated/ui.cpp        ../dpf/DigiDrie
cp generated/dspcore.cpp   ../dpf/DigiDrie/dsp

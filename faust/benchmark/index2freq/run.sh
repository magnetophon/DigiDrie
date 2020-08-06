#!/bin/bash

set -e

faustbench i2f.dsp > result_source
faustbench i2fsimp.dsp > result_simplified

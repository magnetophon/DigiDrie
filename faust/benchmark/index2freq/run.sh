#!/bin/bash

set -e

faustbench i2f.dsp > source
faustbench i2fsimp.dsp > simplified

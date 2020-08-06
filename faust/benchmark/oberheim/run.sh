#!/bin/bash

set -e

faustbench oberheim_approx.dsp > approx
faustbench oberheim.dsp > source

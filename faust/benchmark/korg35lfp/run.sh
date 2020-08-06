#!/bin/bash

set -e

faustbench korg35lpf_approx.dsp > approx
faustbench korg35lpf.dsp > source

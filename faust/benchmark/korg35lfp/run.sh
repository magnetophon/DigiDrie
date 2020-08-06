#!/bin/bash

set -e

faustbench korg35lpf_approx.dsp > result_approx
faustbench korg35lpf.dsp > result_source

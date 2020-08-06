#!/bin/bash

set -e

faustbench oberheim_approx.dsp > result_approx
faustbench oberheim.dsp > result_source

#!/bin/bash

set -e

faustbench svf_approx.dsp > result_approx
faustbench svf.dsp > result_source

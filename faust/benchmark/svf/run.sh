#!/bin/bash

set -e

faustbench svf_approx.dsp > approx
faustbench svf.dsp > source

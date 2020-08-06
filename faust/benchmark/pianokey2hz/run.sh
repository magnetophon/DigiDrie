#!/bin/bash

set -e

faustbench pianokey2hz_approx.dsp > result_approx
faustbench pianokey2hz.dsp > result_source

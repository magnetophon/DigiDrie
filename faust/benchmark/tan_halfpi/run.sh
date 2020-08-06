#!/bin/bash

set -e

faustbench tan_halfpi_approx.dsp > result_approx
faustbench tan_halfpi.dsp > result_source

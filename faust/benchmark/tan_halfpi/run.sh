#!/bin/bash

set -e

faustbench tan_halfpi_approx.dsp > approx
faustbench tan_halfpi.dsp > source

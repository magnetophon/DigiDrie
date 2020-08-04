#!/bin/bash

set -e

mkdir -p ../build

faustpp \
  -X-t -X0 -X-time \
  -DIdentifier=DigiDrie \
  -a architectures/parameter.json \
  DigiDrie.dsp \
  > ../plugin/data/parameter.json

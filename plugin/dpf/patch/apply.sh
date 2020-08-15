#!/bin/bash
#
# Note that this script assumes patch will be applied correctly.
#

set -e

patch --forward --reject-file=- \
  ../lib/DPF/distrho/DistrhoPlugin.hpp \
  DistrhoPlugin.hpp.patch \
  || true

patch --forward --reject-file=- \
  ../lib/DPF/distrho/src/DistrhoPluginLV2.cpp \
  DistrhoPluginLV2.cpp.patch\
  || true

patch --forward --reject-file=- \
  ../lib/DPF/distrho/src/DistrhoPluginVST.cpp \
  DistrhoPluginVST.cpp.patch\
  || true

patch --forward --reject-file=- \
  ../lib/DPF/dgl/src/NanoVG.cpp \
  NanoVG.cpp.patch\
  || true

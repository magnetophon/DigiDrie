#!/usr/bin/env bash
#
# Note that this script assumes patch will be applied correctly.
#

set -e

# DigiDrie's tabview.hpp overrides Widget::setVisible with `virtual ... override`.
# That requires the base declaration to be virtual, but upstream DPF still
# declares `void setVisible(bool visible)` without the virtual keyword.
# Until DPF accepts this upstream (or DigiDrie stops overriding), patch it on
# every build.
patch --forward --reject-file=- \
  ../lib/DPF/dgl/Widget.hpp \
  Widget.hpp.patch\
  || true

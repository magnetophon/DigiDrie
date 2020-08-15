#!/bin/bash

set -e

PTH="$(realpath .)/lib/DPF/utils"

if [ -d bin ]; then
  cd bin
else
  echo "Please run this script from the source root folder"
  exit
fi

if [ -f "$PTH/lv2_ttl_generator.exe" ]; then
  GEN="$PTH/lv2_ttl_generator.exe"
  EXT=dll
else
  GEN="$PTH/lv2_ttl_generator"
  if [ -d /Library/Audio ]; then
    EXT=dylib
  else
    EXT=so
  fi
fi

FOLDERS=`find . -type d -name \*.lv2`

for i in $FOLDERS; do
  cd $i
  FILE="$(ls *.$EXT | sort | head -n 1)"
  "$GEN" "./$FILE"
  cd ..
done

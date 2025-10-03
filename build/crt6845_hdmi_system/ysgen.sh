#!/bin/bash
# ysgen.sh - должен принимать define как первый параметр

DEFINE=$1  # Первый параметр - define (-DCONFIG_25MHZ)
shift      # Остальные параметры - файлы

for file in "$@"; do
    echo "read_verilog $DEFINE $file"
done
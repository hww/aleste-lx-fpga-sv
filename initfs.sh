bash

#!/bin/bash

# Create basic folder structure
mkdir -p rtl/core
mkdir -p rtl/third_party
mkdir -p sim/tests/unit
mkdir -p sim/tests/system
mkdir -p sim/verilator
mkdir -p docs
mkdir -p scripts

# Create empty files to establish structure
touch rtl/top.sv
touch sim/verilator/main.cpp
touch Makefile

echo "Project structure created."

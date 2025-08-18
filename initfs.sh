#!/bin/bash

# Create basic folder structure
mkdir -p rtl/core
mkdir -p rtl/third_party
mkdir -p sim/tests/unit
mkdir -p sim/tests/system
mkdir -p sim/verilator
mkdir -p docs
mkdir -p scripts

touch rtl/core/.keep
touch rtl/third_party/.keep
touch sim/tests/unit/.keep
touch sim/tests/system/.keep
touch sim/verilator/.keep
touch docs/.keep
touch scripts/.keep

# Create empty files to establish structure
touch rtl/top.sv
touch sim/verilator/main.cpp
touch Makefile

echo "Project structure created."

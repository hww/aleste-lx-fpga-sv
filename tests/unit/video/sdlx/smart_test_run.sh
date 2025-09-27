#!/bin/bash

RTL_PATH="../../../../src/components/video/sdlx"

# Generate Verilator files - ПРАВИЛЬНЫЙ СИНТАКСИС
verilator -Wall --cc \
    --Wno-WIDTHEXPAND \
    --Wno-WIDTHTRUNC \
    --Wno-UNUSEDPARAM \
    --Wno-UNUSEDSIGNAL \
    --Wno-CASEINCOMPLETE \
    $RTL_PATH/hdmi_scaler_core.sv \
    $RTL_PATH/dual_port_ram.sv \
    --top-module hdmi_scaler_core \
    -I$RTL_PATH \
    --trace \
    --exe smart_test.cpp

# Build and run
make -C obj_dir -f Vhdmi_scaler_core.mk
obj_dir/Vhdmi_scaler_core

export GTKWAVE_TIME_FORMAT=ns
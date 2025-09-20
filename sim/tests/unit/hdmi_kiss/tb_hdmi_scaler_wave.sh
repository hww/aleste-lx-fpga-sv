#!/bin/bash

iverilog -g2012 -o sim tb_hdmi_scaler.sv ../../../../rtl/core/hdmi_kiss/hdmi_scaler_core.sv dual_port_ram.sv
vvp sim
gtkwave tb_hdmi_scaler.gtkw

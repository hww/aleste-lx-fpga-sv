#!/bin/bash

iverilog -g2012 -o sim tb_hdmi_scaler.sv ../../../../rtl/core/hdmi_kiss/hdmi_scaler_core.sv ../../../../rtl/core/hdmi_kiss/dual_port_ram.sv


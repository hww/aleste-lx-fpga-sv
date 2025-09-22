#!/bin/bash

echo "=== HDMI Test Simulation ==="

# Компилируем только основные модули, исключая проблемные обертки
iverilog -g2012 -DSIMULATION \
    sim_stubs.sv \
    ../../../../rtl/core/hdmi_kiss/dual_port_ram.sv \
    ../../../../rtl/core/hdmi_kiss/hdmi_scaler_core.sv \
    ../../../../rtl/core/hdmi_kiss/tmds_encoder.sv \
    ../../../../rtl/top/hdmi_kiss/test_pattern_generator.sv \
    ../../../../rtl/top/hdmi_kiss/top_hdmi_test.sv \
    tb_top_hdmi_test.sv \
    -o hdmi_sim

if [ $? -eq 0 ]; then
    echo "✓ Компиляция успешна"
    vvp hdmi_sim
else
    echo "✗ Ошибка компиляции"
    exit 1
fi
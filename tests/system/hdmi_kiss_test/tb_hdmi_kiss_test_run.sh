#!/bin/bash

echo "=== HDMI Test Simulation ==="

# Компилируем только основные модули, исключая проблемные обертки
iverilog -g2012 -DSIMULATION \
    sim_stubs.sv \
    ../../../src/components/video/hdmi_kiss/clock.v \
    ../../../src/components/video/hdmi_kiss/dual_port_ram.sv \
    ../../../src/components/video/hdmi_kiss/serializer.sv \
    ../../../src/components/video/hdmi_kiss/hdmi_scaler_core.sv \
    ../../../src/components/video/hdmi_kiss/hdmi_scaler_wrapper.sv \
    ../../../src/components/video/hdmi_kiss/tmds_encoder.sv \
    ../../../src/systems/hdmi_kiss/test_pattern_generator.sv \
    ../../../src/systems/hdmi_kiss/hdmi_kiss_test.sv \
    tb_hdmi_kiss_test.sv \
    -o hdmi_sim

if [ $? -eq 0 ]; then
    echo "✓ Компиляция успешна"
    vvp hdmi_sim
else
    echo "✗ Ошибка компиляции"
    exit 1
fi
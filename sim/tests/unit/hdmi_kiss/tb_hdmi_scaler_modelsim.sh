#!/bin/bash

# Script: run_modelsim_detailed.sh
# Description: Detailed ModelSim simulation with wave debugging

# Configuration
vsim="/mnt/c/questasim64/win64/vsim.exe"
vlib="/mnt/c/questasim64/win64/vlib.exe"
vmap="/mnt/c/questasim64/win64/vmap.exe"
vlog="/mnt/c/questasim64/win64/vlog.exe"
WORK_DIR="work"
LOG_FILE="modelsim_detailed.log"
DO_FILE="modelsim_commands.do"
SIM_TIME="100us"

# Create DO file for ModelSim commands
cat > $DO_FILE << 'EOL'
# ModelSim commands
onbreak {resume}
onerror {exit -code 1}

# Add signals to wave
add wave -noupdate -divider {Testbench}
add wave -noupdate -color yellow /tb_hdmi_scaler/*
add wave -noupdate -divider {Scaler Core}
add wave -noupdate -color cyan /tb_hdmi_scaler/uut/*
add wave -noupdate -divider {RAM}
add wave -noupdate -color pink /tb_hdmi_scaler/uut/ram_inst/*

# Run simulation
run $SIM_TIME
wave zoom full
quit
EOL

# Replace SIM_TIME in DO file
sed -i "s/\$SIM_TIME/$SIM_TIME/g" $DO_FILE

# Cleanup
echo "Cleaning previous simulation..."
rm -rf $WORK_DIR
rm -f $LOG_FILE *.wlf transcript

# Create work directory
$vlib $WORK_DIR
$vmap work $WORK_DIR

# Compile files with SystemVerilog support
echo "Compiling files..."
$vlog -sv -work work \
    +define+ADDR_WIDTH=12 \
    +define+DATA_WIDTH=32 \
    +define+MODELSIM \
    ../../../../rtl/core/hdmi_kiss/hdmi_scaler_core.sv \
    dual_port_ram.sv \
    tb_hdmi_scaler.sv 2>&1 | tee $LOG_FILE

# Check compilation
if [ ${PIPESTATUS[0]} -ne 0 ]; then
    echo "❌ Compilation failed!"
    exit 1
fi

# Run simulation
echo "Running simulation for $SIM_TIME..."
$vsim -c -do $DO_FILE work.tb_hdmi_scaler 2>&1 | tee -a $LOG_FILE

# Check simulation result
if [ ${PIPESTATUS[0]} -eq 0 ]; then
    echo "✅ Simulation completed successfully!"
    echo "📊 Log file: $LOG_FILE"
    echo "🌊 Waveform: vsim -view waveform.wlf"
else
    echo "❌ Simulation failed!"
    exit 1
fi
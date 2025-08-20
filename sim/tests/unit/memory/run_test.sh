#!/bin/bash
# run_test.sh

echo "Compiling SDRAM controller test..."
make clean
make

echo "Running test..."
./obj_dir/Vtb_sdram_controller

echo "Test completed. Check sdram_controller.vcd for waveform."
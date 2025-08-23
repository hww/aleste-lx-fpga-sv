#!/bin/bash
VLOG=vlog.exe
VSIM=vsim.exe

$VSIM -c sdram_model_tb -do sdram_model_sim.do

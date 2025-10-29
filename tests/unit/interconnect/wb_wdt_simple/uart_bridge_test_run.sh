#!/bin/bash

# Компиляция
verilator -Wall --cc --exe --Wno-WIDTHEXPAND --Wno-PROCASSINIT --trace --build ../../../../src/components/interconnect/wishbone/wb_wdt_simple.sv wb_wdt_simple.cpp

# Запуск
./obj_dir/Vwb_wdt_simple
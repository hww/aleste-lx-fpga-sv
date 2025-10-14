#!/bin/bash

# Генерируем C++ модель
verilator -Wall --cc ../../../src/systems/aleste_video/wb_arbiter_internal.sv -Wno-UNUSEDSIGNAL --exe tb_wb_arbiter_internal.cpp --trace

# Компилируем
cd obj_dir
make -j -f Vwb_arbiter_internal.mk Vwb_arbiter_internal

# Запускаем тест
./Vwb_arbiter_internal

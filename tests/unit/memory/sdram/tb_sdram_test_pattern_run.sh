#!/bin/bash

# Генерируем C++ модель
verilator -Wall --cc ../../../../src/components/memory/sdram/sdram_test_pattern.sv -Wno-UNUSEDSIGNAL --exe tb_sdram_test_pattern.cpp --trace

# Компилируем
cd obj_dir
make -j -f Vsdram_test_pattern.mk Vsdram_test_pattern

# Запускаем тест
./Vsdram_test_pattern

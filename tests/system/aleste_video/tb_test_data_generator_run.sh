#!/bin/bash

# Генерируем C++ модель
verilator -Wall --cc ../../../src/systems/aleste_video/test_data_generator.sv -Wno-UNUSEDSIGNAL --exe tb_test_data_generator.cpp --trace

# Компилируем
cd obj_dir
make -j -f Vtest_data_generator.mk Vtest_data_generator

# Запускаем тест
./Vtest_data_generator

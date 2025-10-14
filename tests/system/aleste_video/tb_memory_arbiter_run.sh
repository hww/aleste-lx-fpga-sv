#!/bin/bash

# Генерируем C++ модель
verilator -Wall --cc ../../../src/systems/aleste_video/memory_arbiter.sv -Wno-UNUSEDSIGNAL --exe tb_memory_arbiter.cpp --trace

# Компилируем
cd obj_dir
make -j -f Vmemory_arbiter.mk Vmemory_arbiter

# Запускаем тест
./Vmemory_arbiter

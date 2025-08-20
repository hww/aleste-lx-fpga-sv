#!/bin/bash

# Create basic folder structure
mkdir -p rtl/core
mkdir -p rtl/third_party
mkdir -p sim/tests/unit
mkdir -p sim/tests/system
mkdir -p sim/verilator
mkdir -p docs
mkdir -p scripts

touch rtl/core/.keep
touch rtl/third_party/.keep
touch sim/tests/unit/.keep
touch sim/tests/system/.keep
touch sim/verilator/.keep
touch docs/.keep
touch scripts/.keep

# Create empty files to establish structure
touch rtl/top.sv
touch sim/verilator/main.cpp
touch Makefile

echo "Project structure created."

mkdir -p rtl/third_party/crtc          # Видеоконтроллер, скалер
mkdir -p rtl/third_party/sound         # Интерфейсы для звука (YM2149)
mkdir -p rtl/third_party/io            # Порты, UART, интерфейсы (i8251, i8255)
mkdir -p rtl/third_party/fdc           # Контроллер дисковода (u765)

touch rtl/third_party/crtc/.keep         
touch rtl/third_party/sound/.keep        
touch rtl/third_party/io/.keep           
touch rtl/third_party/fdc/.keep          

mkdir -p rtl/core/aleste               # Уникальная логика Alesta
mkdir -p rtl/core/clock                # Все генераторы тактов, PLL (clk_gen.v)
mkdir -p rtl/core/memory               # Контроллеры памяти (sdram_controller.v)
mkdir -p rtl/core/video                # Видеоконтроллер, скалер
mkdir -p rtl/core/sound                # Интерфейсы для звука (YM2149)
mkdir -p rtl/core/io                   # Порты, UART, интерфейсы (i8251, i8255)
mkdir -p rtl/core/fdc                  # Контроллер дисковода (u765)

touch rtl/core/aleste/.keep          
touch rtl/core/clock/.keep           
touch rtl/core/memory/.keep          
touch rtl/core/video/.keep           
touch rtl/core/sound/.keep           
touch rtl/core/io/.keep              
touch rtl/core/fdc/.keep                
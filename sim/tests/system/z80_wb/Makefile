VERILATOR = verilator
VERILATOR_FLAGS = \
	-Wall --binary --trace --cc --exe --bbox-unsup --x-assign unique \
	--Wno-UNOPTFLAT \
	--Wno-UNUSEDSIGNAL \
	--x-assign unique \
	--x-initial unique \
	--public \
	--timing \
	--timescale "1ns/1ps"

TARGET = z80_wb_test
SOURCES = z80_wb_test.cpp

# Пути
Z80_FOLDER = ../../../../rtl/third_party/cpu/a-z80
RTL_FOLDER = ../../../../rtl/core/cpu

INCLUDE_DIR = -I$(Z80_FOLDER)

# Файлы в правильном порядке: тестбенч, DUT, Z80
TB_FILE = z80_wb_tb.sv
DUT_FILE = $(RTL_FOLDER)/z80_wb.sv
Z80_FILE = $(Z80_FOLDER)/z80_top_direct_n.v

all: run

build:
	$(VERILATOR) $(VERILATOR_FLAGS) $(INCLUDE_DIR) \
	$(TB_FILE) $(DUT_FILE) $(Z80_FILE) $(SOURCES) \
	--top-module z80_wb_tb

run: build
	@./obj_dir/Vz80_wb_tb || (echo -e "\n\033[31mTEST FAILED\033[0m"; exit 1)
	@echo -e "\n\033[32mTEST PASSED\033[0m"

wave:
	gtkwave waveform.vcd &

clean:
	rm -rf obj_dir *.vcd

.PHONY: all build run wave clean
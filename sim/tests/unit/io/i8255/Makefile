VERILATOR = verilator
VERILATOR_FLAGS = \
	-Wall --binary --trace --cc --bbox-unsup --exe --no-main --x-assign unique \
	--Wno-UNOPTFLAT \
	--Wno-UNUSEDSIGNAL \
	--Wno-CASEX \
	--x-assign unique \
	--x-initial unique \
	--trace-depth 10 \
	--public \
	--timing \
	--timescale "1ns/1ps"

SOURCES = tb_i8255.sv ../../../../rtl/third_party/i8255.v
CPP_SOURCES = i8255_test.cpp
INCLUDE_DIR = -I../../../../rtl/third_party

all: run

build:
	$(VERILATOR) $(VERILATOR_FLAGS) $(INCLUDE_DIR) $(SOURCES) $(CPP_SOURCES) --top-module tb_i8255

run: build
	@./obj_dir/Vtb_i8255 || (echo -e "\n\033[31mTEST FAILED\033[0m"; exit 1)
	@echo -e "\n\033[32mTEST PASSED\033[0m"

wave:
	gtkwave tb_z80.vcd &

clean:
	rm -rf obj_dir *.vcd test.log

.PHONY: all build run wave clean
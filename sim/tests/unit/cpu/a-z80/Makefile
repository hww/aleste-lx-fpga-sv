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

SOURCES = tb_z80.sv ../../../../../rtl/third_party/cpu/a-z80/z80_top_direct_n.v
CPP_SOURCES = zexall.cpp
INCLUDE_DIR = -I../../../../../rtl/third_party/cpu/a-z80

all: run

build:
	$(VERILATOR) $(VERILATOR_FLAGS) $(INCLUDE_DIR) $(SOURCES) $(CPP_SOURCES) --top-module tb_z80

run: build
	@./obj_dir/Vtb_z80 || (echo -e "\n\033[31mTEST FAILED\033[0m"; exit 1)
	@echo -e "\n\033[32mTEST PASSED\033[0m"

wave:
	gtkwave tb_z80.vcd &

clean:
	rm -rf obj_dir *.vcd test.log

.PHONY: all build run wave clean
VERILATOR = verilator
VERILATOR_FLAGS = -Wall --cc --trace --Wno-UNOPTFLAT --Wno-UNUSEDSIGNAL --Wno-WIDTHEXPAND --Wno-SYNCASYNCNET --Wno-UNUSEDPARAM --Wno-CASEX --x-assign unique --x-initial unique --timing --timescale "1ns/1ps" --converge-limit 2000 --trace-fst --trace-depth 10 --public-flat-rw  --trace
INCLUDE_DIRS = -I../../../../rtl/core/memory

TARGET = Vtb_sdram_controller
SOURCES = sdram_test.cpp
VERILOG_SOURCES = tb_sdram_controller.sv

all: verilate build

verilate: $(SOURCES) $(VERILOG_SOURCES)
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILOG_SOURCES) $(SOURCES) $(INCLUDE_DIRS) --top-module tb_sdram_controller

build:
	cd obj_dir && make -f $(TARGET).mk

run: build
	cd obj_dir && ./$(TARGET)

wave:
	gtkwave sdram_controller.vcd &

clean:
	rm -rf obj_dir
	rm -f sdram_controller.vcd

.PHONY: all verilate build run wave clean
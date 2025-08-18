VERILATOR = verilator
VERILATOR_FLAGS = --timing -Wall --cc --exe --build --trace --Wno-UNOPTFLAT --Wno-UNUSEDSIGNAL --timescale "1ns/1ps"
SOURCES = tb_z80.sv ../../../../rtl/third_party/a-z80/z80_top_direct_n.v
CPP_SOURCES = zexall.cpp
INCLUDE_DIR = -I../../../../rtl/third_party/a-z80

all: run

build:
	$(VERILATOR) $(VERILATOR_FLAGS) $(INCLUDE_DIR) $(SOURCES) $(CPP_SOURCES) --top-module tb_z80

run: build
	./obj_dir/Vtb_z80 | tee test.log
	@grep -q "ZEXALL TEST COMPLETE" test.log && echo "TEST PASSED" || (echo "TEST FAILED"; exit 1)

wave:
	gtkwave tb_z80.vcd &

clean:
	rm -rf obj_dir *.vcd test.log

.PHONY: all build run wave clean
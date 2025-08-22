VERILATOR = verilator
VERILATOR_FLAGS = -Wall --cc --exe --build --trace --Wno-UNUSEDSIGNAL -Wno-UNDRIVEN --Wno-UNUSEDPARAM --public-flat-rw --timescale "1ns/1ps" 
INCLUDE_DIRS = -I../../../../rtl/core/memory

SIMPLE_TEST = simple_test.cpp
ADVANCED_TEST = advanced_test.cpp
DUT = tb_sdram_controller.sv
SDRAM_MODEL = tb_sdram_model.v

all: simple advanced

simple:
	$(VERILATOR) $(VERILATOR_FLAGS) $(INCLUDE_DIRS) $(DUT) $(SIMPLE_TEST)

advanced:
	$(VERILATOR) $(VERILATOR_FLAGS) $(INCLUDE_DIRS) $(DUT) $(ADVANCED_TEST) $(SDRAM_MODEL)

run_simple: simple
	./obj_dir/Vtb_sdram_controller

run_advanced: advanced
	./obj_dir/Vtb_sdram_controller

clean:
	rm -rf obj_dir *.vcd

.PHONY: all simple advanced run_simple run_advanced clean
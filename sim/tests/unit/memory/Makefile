VERILATOR = verilator
VERILATOR_FLAGS = -Wall --cc --exe --build --trace --Wno-UNUSEDSIGNAL -Wno-UNDRIVEN --Wno-UNUSEDPARAM
INCLUDE_DIRS = -I../../../../rtl/core/memory

DUT = sdram_controller.v
SIMPLE_TEST = simple_test.cpp
ADVANCED_TEST = advanced_test.cpp

all: simple advanced

simple:
	$(VERILATOR) $(VERILATOR_FLAGS) $(DUT) $(SIMPLE_TEST) $(INCLUDE_DIRS)

advanced:
	$(VERILATOR) $(VERILATOR_FLAGS) $(DUT) $(ADVANCED_TEST) $(INCLUDE_DIRS)

run_simple: simple
	./obj_dir/Vsdram_controller

run_advanced: advanced
	./obj_dir/Vsdram_controller

clean:
	rm -rf obj_dir *.vcd

.PHONY: all simple advanced run_simple run_advanced clean
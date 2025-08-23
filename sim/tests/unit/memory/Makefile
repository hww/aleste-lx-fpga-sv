VERILATOR = verilator
VERILATOR_FLAGS = -Wall --cc --exe --build --trace --timing --Wno-EOFNEWLINE --Wno-UNUSEDSIGNAL -Wno-UNDRIVEN --Wno-UNUSEDPARAM --public-flat-rw --timescale "1ns/1ps" 
INCLUDE_DIRS = -I../../../../rtl/core/memory

# ======= VERILATOR CODE ========

SIMPLE_TEST = sdram_ctrl_simple.cpp
ADVANCED_TEST = sdram_ctrl_advanced.cpp

# ========== RTL CODE ===========

DUT = sdram_ctrl_tb.sv

# ======= TEST BENCH CODE =========

SDRAM_CTRL = sdram_wb_controller.v
SDRAM_MODEL = sdram_model.sv

all: simple advanced

simple:
	$(VERILATOR) $(VERILATOR_FLAGS) $(INCLUDE_DIRS) $(DUT) $(SDRAM_CTRL) $(SIMPLE_TEST)  $(SDRAM_MODEL)

advanced:
	$(VERILATOR) $(VERILATOR_FLAGS) $(INCLUDE_DIRS) $(DUT) $(SDRAM_CTRL) $(ADVANCED_TEST) $(SDRAM_MODEL)

run_simple: simple
	./obj_dir/Vsdram_ctrl_simple

run_advanced: advanced
	./obj_dir/Vsdram_ctrl_advanced


run_model_icarus:
	iverilog -g2012 -o ./obj_dir/sdram_model sdram_model_tb.sv sdram_model.sv
	./obj_dir/sdram_model


VLOG=vlog.exe
VSIM=vsim.exe

run_model:
	$(VLOG) sdram_model.sv sdram_model_tb.sv
	$(VSIM) -c sdram_model_tb -do "run -all; quit"

run_model_gui:
	# Или запуск с GUI (рекомендуется для отладки)
	$(VLOG) sdram_model.sv sdram_model_tb.sv
	$(VSIM) sdram_model_tb

clean:
	rm -rf obj_dir *.vcd

.PHONY: all simple advanced run_simple run_advanced clean
VERILATOR = verilator
VERILATOR_FLAGS = -Wall --cc --exe --build --trace --timing \
                  --Wno-EOFNEWLINE --Wno-UNUSEDSIGNAL -Wno-UNDRIVEN \
                  --Wno-UNUSEDPARAM --public-flat-rw --timescale "1ns/1ps" \
                  --top-module sdram_ctrl_tb
SRC_DIR = ../../../../rtl/core/memory
SOURCES = sdram_ctrl_tb.sv $(SRC_DIR)/sdram_ctrl_wb.sv  sdram_model.sv sdram_ctrl_advanced.cpp

# ================== CONTROLLER SIMULATION ===============

all: advanced

advanced:
	$(VERILATOR) $(VERILATOR_FLAGS) -I$(SRC_DIR) $(SOURCES)

run_advanced: advanced
	./obj_dir/Vsdram_ctrl_tb

# ================== MODEL SIMULATION ====================

VLIB=vlib.exe
VLOG=vlog.exe
VSIM=vsim.exe
VRTL_DIR = ../../../../rtl/core/memory
VRTL_DUT = sdram_ctrl_wb.v

run_model:
	$(VLOG) sdram_model.sv sdram_model_tb.sv
	$(VSIM) -c sdram_model_tb -do "run -all; quit"

# Или запуск с GUI (рекомендуется для отладки)
run_model_gui:
	$(VLIB) work
	$(VLOG) sdram_model.sv sdram_model_tb.sv
	$(VSIM) sdram_model_tb

run_ctrl_simple:
	$(VLIB) work
	$(VLOG) -sv sdram_ctrl_simple_tb.sv sdram_model.sv $(VRTL_DIR)/$(VRTL_DUT)
	$(VSIM) -c sdram_ctrl_simple_tb -do "run -all; quit"

clean:
	rm -rf obj_dir *.vcd

.PHONY: all simple advanced run_simple run_advanced clean
# ================== CONFIGURATION ======================
VERILATOR = verilator
VERILATOR_FLAGS = -Wall --cc --exe --build --trace --timing \
                  --Wno-EOFNEWLINE --Wno-UNUSEDSIGNAL -Wno-UNDRIVEN \
                  --Wno-UNUSEDPARAM --public-flat-rw --timescale "1ns/1ps" \
                  --top-module sdram_ctrl_advanced_tb

VLIB = vlib.exe
VLOG = vlog.exe
VSIM = vsim.exe

SRC_DIR = ../../../../rtl/core/memory
VRTL_DIR = $(SRC_DIR)
VRTL_DUT = sdram_ctrl_wb.sv

TB_DIR = .
MODEL_DIR = .

# ================== TARGET NAMES =======================
VERILATOR_TB = sdram_ctrl_advanced_tb
MODELSIM_TB = sdram_ctrl_tb
MODEL_TB = sdram_model_tb

# ================== SOURCE FILES =======================
VERILATOR_SOURCES = $(TB_DIR)/sdram_ctrl_advanced_tb.sv \
                   $(VRTL_DIR)/$(VRTL_DUT) \
                   $(MODEL_DIR)/sdram_model.sv \
                   $(TB_DIR)/sdram_ctrl_advanced.cpp

MODELSIM_SOURCES = $(TB_DIR)/sdram_ctrl_tb.sv \
                  $(VRTL_DIR)/$(VRTL_DUT) \
                  $(MODEL_DIR)/sdram_model.sv

MODEL_SOURCES = $(MODEL_DIR)/sdram_model.sv \
               $(TB_DIR)/sdram_model_tb.sv

# ================== TCL SCRIPTS ========================
TCL_CTRL_SCRIPT = scripts/sdram_ctrl_sim.tcl
TCL_MODEL_SCRIPT = scripts/sdram_model_sim.tcl

# ================== DIRECTORY SETUP ====================
SCRIPTS_DIR = scripts

$(SCRIPTS_DIR):
	mkdir -p $(SCRIPTS_DIR)

# ================== VERILATOR SIMULATION ===============

.PHONY: verilator_build verilator_run verilator_all

verilator_build:
	@echo "=== BUILDING VERILATOR SIMULATION ==="
	$(VERILATOR) $(VERILATOR_FLAGS) -I$(SRC_DIR) $(VERILATOR_SOURCES)

verilator_run: verilator_build
	@echo "=== RUNNING VERILATOR SIMULATION ==="
	./obj_dir/V$(VERILATOR_TB)

verilator_all: verilator_run

# ================== MODELSIM CONTROLLER SIMULATION =====

.PHONY: modelsim_ctrl_build modelsim_ctrl_run modelsim_ctrl_gui modelsim_ctrl_clean

modelsim_ctrl_build: $(SCRIPTS_DIR)
	@echo "=== BUILDING MODELSIM CONTROLLER SIMULATION ==="
	$(VLIB) work
	$(VLOG) -sv $(MODELSIM_SOURCES)

modelsim_ctrl_run: modelsim_ctrl_build
	@echo "=== RUNNING MODELSIM CONTROLLER SIMULATION (CONSOLE) ==="
	$(VSIM) -c -do "run -all; quit" work.$(MODELSIM_TB)

modelsim_ctrl_gui: modelsim_ctrl_build
	@echo "=== RUNNING MODELSIM CONTROLLER SIMULATION (GUI) ==="
	$(VSIM) -gui -do $(TCL_CTRL_SCRIPT)

modelsim_ctrl_tcl: modelsim_ctrl_build
	@echo "=== RUNNING MODELSIM CONTROLLER WITH TCL SCRIPT ==="
	$(VSIM) -c -do "source $(TCL_CTRL_SCRIPT); quit"

# ================== MODELSIM MODEL SIMULATION ==========

.PHONY: modelsim_model_build modelsim_model_run modelsim_model_gui

modelsim_model_build: $(SCRIPTS_DIR)
	@echo "=== BUILDING MODELSIM MODEL SIMULATION ==="
	$(VLIB) work
	$(VLOG) -sv $(MODEL_SOURCES)

modelsim_model_run: modelsim_model_build
	@echo "=== RUNNING MODELSIM MODEL SIMULATION (CONSOLE) ==="
	$(VSIM) -c $(MODEL_TB) -do "run -all; quit"

modelsim_model_gui: modelsim_model_build
	@echo "=== RUNNING MODELSIM MODEL SIMULATION (GUI) ==="
	$(VSIM) -gui -do $(TCL_MODEL_SCRIPT) $(MODEL_TB)

modelsim_model_tcl: modelsim_model_build
	@echo "=== RUNNING MODELSIM MODEL WITH TCL SCRIPT ==="
	$(VSIM) -c -do "source $(TCL_MODEL_SCRIPT); quit" 

# ================== SHORTHAND TARGETS ==================

.PHONY: verilator modelsim_ctrl modelsim_model clean all

verilator: verilator_run
modelsim_ctrl: modelsim_ctrl_run
modelsim_model: modelsim_model_run

all: verilator_run modelsim_ctrl_run

# ================== CLEANING ===========================

clean:
	@echo "=== CLEANING WORKSPACE ==="
	rm -rf main/*
	rm -rf obj_dir *.vcd *.log
	rm -rf work transcript vsim.wlf modelsim.ini
	del /q work transcript vsim.wlf modelsim.ini 2>nul

# ================== LEGACY TARGETS (for compatibility) =

run_sdram_ctrl_advanced_tb: verilator_run

run_model_tb: modelsim_model_run

run_model_tb_gui: modelsim_model_gui

run_sdtram_ctrl_tb: modelsim_ctrl_run

# ================== HELP ===============================

help:
	@echo "SDRAM Simulation Makefile Targets:"
	@echo "  verilator_build      - Build Verilator simulation"
	@echo "  verilator_run        - Build and run Verilator simulation"
	@echo "  modelsim_ctrl_build  - Build ModelSim controller simulation"
	@echo "  modelsim_ctrl_run    - Build and run ModelSim controller (console)"
	@echo "  modelsim_ctrl_gui    - Build and run ModelSim controller (GUI)"
	@echo "  modelsim_ctrl_tcl    - Build and run ModelSim controller with TCL"
	@echo "  modelsim_model_build - Build ModelSim model simulation"
	@echo "  modelsim_model_run   - Build and run ModelSim model (console)"
	@echo "  modelsim_model_gui   - Build and run ModelSim model (GUI)"
	@echo "  modelsim_model_tcl   - Build and run ModelSim model with TCL"
	@echo "  clean                - Clean all generated files"
	@echo "  all                  - Run all simulations"
	@echo "  help                 - Show this help message"
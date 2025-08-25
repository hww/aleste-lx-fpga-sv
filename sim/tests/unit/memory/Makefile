# ================== CONFIGURATION ======================
VERILATOR = verilator
VERILATOR_FLAGS = -Wall --cc --exe --build --trace --timing \
                  --Wno-EOFNEWLINE --Wno-UNUSEDSIGNAL -Wno-UNDRIVEN \
                  --Wno-UNUSEDPARAM --public-flat-rw --timescale "1ns/1ps"

VLIB = vlib
VLOG = vlog
VSIM = vsim

SRC_DIR = ../../../../rtl/core/memory
VRTL_DIR = $(SRC_DIR)
VRTL_DUT = sdram_ctrl_wb.sv

TB_DIR = .
MODEL_DIR = .

# ================== TARGET NAMES =======================

# тест модели
VERILATOR_MODEL_TB = sdram_model_verilator_tb
# тест контроллера простой
VERILATOR_CTRL_SIMPLE_TB = sdram_ctrl_simple_tb  
# тест контроллера продвинутый
VERILATOR_CTRL_ADVANCED_TB = sdram_ctrl_advanced_tb

# тест контроллера
MODELSIM_CTRL_TB = sdram_ctrl_tb
# тест модели
MODELSIM_MODEL_TB = sdram_model_tb

# ================== SOURCE FILES =======================

VERILATOR_MODEL_SOURCES = $(TB_DIR)/sdram_model_verilator_tb.sv \
                         $(MODEL_DIR)/sdram_model.sv \
                         $(TB_DIR)/sdram_model_verilator.cpp

# Источники для простого контроллера
VERILATOR_CTRL_SIMPLE_SOURCES = $(TB_DIR)/sdram_ctrl_simple_tb.sv \
                        $(VRTL_DIR)/$(VRTL_DUT) \
                        $(MODEL_DIR)/sdram_model.sv \
                        $(TB_DIR)/sdram_ctrl_simple.cpp

# Источники для продвинутого контроллера
VERILATOR_CTRL_ADVANCED_SOURCES = $(TB_DIR)/sdram_ctrl_advanced_tb.sv \
                   $(VRTL_DIR)/$(VRTL_DUT) \
                   $(MODEL_DIR)/sdram_model.sv \
                   $(TB_DIR)/sdram_ctrl_advanced.cpp

# тест контроллера
MODELSIM_CTRL_SOURCES = $(TB_DIR)/sdram_ctrl_tb.sv \
                  $(VRTL_DIR)/$(VRTL_DUT) \
                  $(MODEL_DIR)/sdram_model.sv

# тест модели
MODELSIM_MODEL_SOURCES = $(MODEL_DIR)/sdram_model.sv \
               $(TB_DIR)/sdram_model_tb.sv

# ================== TCL SCRIPTS ========================
TCL_CTRL_SCRIPT = scripts/sdram_ctrl_sim.tcl
TCL_MODEL_SCRIPT = scripts/sdram_model_sim.tcl

# ================== DIRECTORY SETUP ====================
SCRIPTS_DIR = scripts
OBJ_DIR = obj_dir

$(SCRIPTS_DIR):
	mkdir -p $(SCRIPTS_DIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# ================== VERILATOR SIMULATION ===============

.PHONY: verilator_advanced_build verilator_advanced_run
.PHONY: verilator_model_build verilator_model_run
.PHONY: verilator_simple_build verilator_simple_run verilator_simple_debug
.PHONY: verilator_ctrl_waves verilator_ctrl_clean

# Цели для модели ---------------------------------------

verilator_model_build: $(OBJ_DIR)
	@echo "=== BUILDING VERILATOR MODEL SIMULATION ==="
	$(VERILATOR) $(VERILATOR_FLAGS) --top-module $(VERILATOR_MODEL_TB) \
		-I. \
		$(TB_DIR)/sdram_model_verilator_tb.sv \
		$(MODEL_DIR)/sdram_model.sv \
		$(TB_DIR)/sdram_model_verilator.cpp 
#		--Mdir $(OBJ_DIR)/model

verilator_model_run: verilator_model_build
	@echo "=== RUNNING VERILATOR MODEL SIMULATION ==="
	$(OBJ_DIR)/V$(VERILATOR_MODEL_TB)

# Простые цели контроллера -----------------------------

verilator_simple_build: $(OBJ_DIR)
	@echo "=== BUILDING VERILATOR SIMPLE CONTROLLER SIMULATION ==="
	$(VERILATOR) $(VERILATOR_FLAGS) --top-module $(VERILATOR_CTRL_SIMPLE_TB) \
		-I. -I$(SRC_DIR) \
		$(TB_DIR)/sdram_ctrl_simple_tb.sv \
		$(SRC_DIR)/$(VRTL_DUT) \
		$(MODEL_DIR)/sdram_model.sv \
		$(TB_DIR)/sdram_ctrl_simple.cpp
#		--Mdir $(OBJ_DIR)/ctrl_simple

verilator_simple_run: verilator_simple_build
	@echo "=== RUNNING VERILATOR SIMPLE CONTROLLER SIMULATION ==="
	$(OBJ_DIR)/V$(VERILATOR_CTRL_SIMPLE_TB)

verilator_simple_debug: $(OBJ_DIR)
	@echo "=== BUILDING VERILATOR SIMPLE CONTROLLER WITH DEBUG ==="
	$(VERILATOR) $(VERILATOR_FLAGS) --debug --top-module $(VERILATOR_CTRL_SIMPLE_TB) \
		-I. -I$(SRC_DIR) \
		$(TB_DIR)/sdram_ctrl_simple_tb.sv \
		$(SRC_DIR)/$(VRTL_DUT) \
		$(MODEL_DIR)/sdram_model.sv \
		$(TB_DIR)/sdram_ctrl_simple.cpp \
		--Mdir $(OBJ_DIR)/ctrl_simple_debug
	@echo "=== RUNNING DEBUG VERSION ==="
	$(OBJ_DIR)/ctrl_simple_debug/V$(VERILATOR_CTRL_SIMPLE_TB)

# Продвинутые цели контроллера --------------------------

verilator_advanced_build: $(OBJ_DIR)
	@echo "=== BUILDING VERILATOR ADVANCED CONTROLLER SIMULATION ==="
	$(VERILATOR) $(VERILATOR_FLAGS) --top-module $(VERILATOR_CTRL_ADVANCED_TB) \
		-I. -I$(SRC_DIR) \
		$(TB_DIR)/sdram_ctrl_advanced_tb.sv \
		$(SRC_DIR)/$(VRTL_DUT) \
		$(MODEL_DIR)/sdram_model.sv \
		$(TB_DIR)/sdram_ctrl_advanced.cpp 
#		--Mdir $(OBJ_DIR)/ctrl_advanced

verilator_advanced_run: verilator_advanced_build
	@echo "=== RUNNING VERILATOR ADVANCED CONTROLLER SIMULATION ==="
	$(OBJ_DIR)/V$(VERILATOR_CTRL_ADVANCED_TB)

verilator_advanced_debug: $(OBJ_DIR)
	@echo "=== BUILDING VERILATOR ADVANCED CONTROLLER WITH DEBUG ==="
	$(VERILATOR) $(VERILATOR_FLAGS) --debug --top-module $(VERILATOR_CTRL_ADVANCED_TB) \
		-I. -I$(SRC_DIR) \
		$(TB_DIR)/sdram_ctrl_advanced_tb.sv \
		$(SRC_DIR)/$(VRTL_DUT) \
		$(MODEL_DIR)/sdram_model.sv \
		$(TB_DIR)/sdram_ctrl_advanced.cpp \
		--Mdir $(OBJ_DIR)/ctrl_advanced_debug
	@echo "=== RUNNING DEBUG VERSION ==="
	$(OBJ_DIR)/ctrl_advanced_debug/V$(VERILATOR_CTRL_ADVANCED_TB)

verilator_ctrl_waves: verilator_simple_run
	@echo "=== VCD WAVEFORM GENERATED: sdram_ctrl_simple.vcd ==="

verilator_ctrl_clean:
	@echo "=== CLEANING VERILATOR CONTROLLER BUILDS ==="
	rm -rf $(OBJ_DIR)/ctrl_simple
	rm -rf $(OBJ_DIR)/ctrl_simple_debug
	rm -rf $(OBJ_DIR)/ctrl_advanced
	rm -rf $(OBJ_DIR)/ctrl_advanced_debug
	rm -f sdram_ctrl_simple.vcd sdram_ctrl_advanced.vcd

# ================== MODELSIM CONTROLLER SIMULATION =====

.PHONY: modelsim_ctrl_build modelsim_ctrl_run modelsim_ctrl_gui modelsim_ctrl_tcl modelsim_ctrl_clean

modelsim_ctrl_build:
	@echo "=== BUILDING MODELSIM CONTROLLER SIMULATION ==="
	$(VLIB) work
	$(VLOG) -sv $(MODELSIM_CTRL_SOURCES)

modelsim_ctrl_run: modelsim_ctrl_build
	@echo "=== RUNNING MODELSIM CONTROLLER SIMULATION (CONSOLE) ==="
	$(VSIM) -c -do "run -all; quit" work.$(MODELSIM_CTRL_TB)

modelsim_ctrl_gui: modelsim_ctrl_build
	@echo "=== RUNNING MODELSIM CONTROLLER SIMULATION (GUI) ==="
	$(VSIM) -gui -do $(TCL_CTRL_SCRIPT) work.$(MODELSIM_CTRL_TB)

modelsim_ctrl_tcl: modelsim_ctrl_build
	@echo "=== RUNNING MODELSIM CONTROLLER WITH TCL SCRIPT ==="
	$(VSIM) -c -do "source $(TCL_CTRL_SCRIPT); quit" work.$(MODELSIM_CTRL_TB)

modelsim_ctrl_clean:
	@echo "=== CLEANING MODELSIM CONTROLLER BUILD ==="
	rm -rf work transcript vsim.wlf modelsim.ini

# ================== MODELSIM MODEL SIMULATION ==========

.PHONY: modelsim_model_build modelsim_model_run modelsim_model_gui modelsim_model_tcl modelsim_model_clean

modelsim_model_build:
	@echo "=== BUILDING MODELSIM MODEL SIMULATION ==="
	$(VLIB) work
	$(VLOG) -sv $(MODELSIM_MODEL_SOURCES)

modelsim_model_run: modelsim_model_build
	@echo "=== RUNNING MODELSIM MODEL SIMULATION (CONSOLE) ==="
	$(VSIM) -c -do "run -all; quit" work.$(MODELSIM_MODEL_TB)

modelsim_model_gui: modelsim_model_build
	@echo "=== RUNNING MODELSIM MODEL SIMULATION (GUI) ==="
	$(VSIM) -gui -do $(TCL_MODEL_SCRIPT) work.$(MODELSIM_MODEL_TB)

modelsim_model_tcl: modelsim_model_build
	@echo "=== RUNNING MODELSIM MODEL WITH TCL SCRIPT ==="
	$(VSIM) -c -do "source $(TCL_MODEL_SCRIPT); quit" work.$(MODELSIM_MODEL_TB)

modelsim_model_clean:
	@echo "=== CLEANING MODELSIM MODEL BUILD ==="
	rm -rf work transcript vsim.wlf modelsim.ini

# ================== CLEANING ===========================

clean: verilator_ctrl_clean modelsim_ctrl_clean modelsim_model_clean
	@echo "=== CLEANING WORKSPACE ==="
	rm -rf $(OBJ_DIR)/model
	rm -f *.vcd *.log

distclean: clean
	@echo "=== DEEP CLEANING ==="
	rm -rf $(SCRIPTS_DIR)
	rm -f *.dump

# ================== HELP ===============================

help:
	@echo "SDRAM Simulation Makefile Targets:"
	@echo ""
	@echo "VERILATOR TARGETS:"
	@echo "  verilator_model_build/run     - Build/run Verilator model simulation"
	@echo "  verilator_simple_build/run    - Build/run Verilator simple controller"
	@echo "  verilator_simple_debug        - Build/run simple controller with debug"
	@echo "  verilator_advanced_build/run  - Build/run Verilator advanced controller"
	@echo "  verilator_advanced_debug      - Build/run advanced controller with debug"
	@echo "  verilator_ctrl_waves          - Run and generate waveform"
	@echo "  verilator_ctrl_clean          - Clean all controller builds"
	@echo ""
	@echo "MODELSIM TARGETS:"
	@echo "  modelsim_ctrl_build/run/gui   - Build/run ModelSim controller"
	@echo "  modelsim_model_build/run/gui  - Build/run ModelSim model"
	@echo "  modelsim_ctrl_clean           - Clean ModelSim controller build"
	@echo "  modelsim_model_clean          - Clean ModelSim model build"
	@echo ""
	@echo "CLEANING TARGETS:"
	@echo "  clean                         - Clean all builds"
	@echo "  distclean                     - Deep clean"
	@echo ""
	@echo "UTILITY TARGETS:"
	@echo "  info                          - Show build information"
	@echo "  check-deps                    - Check dependencies"

# ================== INFO TARGETS =======================

info:
	@echo "=== BUILD INFORMATION ==="
	@echo "Verilator TB files:"
	@ls -la $(TB_DIR)/*verilator* 2>/dev/null || echo "No verilator files found"
	@echo ""
	@echo "Source files for simple controller:"
	@for file in $(VERILATOR_CTRL_SIMPLE_SOURCES); do \
		if [ -f "$$file" ]; then \
			echo "  ✓ $$file"; \
		else \
			echo "  ✗ $$file (MISSING)"; \
		fi \
	done
	@echo ""
	@echo "Source files for advanced controller:"
	@for file in $(VERILATOR_CTRL_ADVANCED_SOURCES); do \
		if [ -f "$$file" ]; then \
			echo "  ✓ $$file"; \
		else \
			echo "  ✗ $$file (MISSING)"; \
		fi \
	done

# ================== DEPENDENCY CHECK ===================

check-deps:
	@echo "=== CHECKING DEPENDENCIES ==="
	@which $(VERILATOR) >/dev/null 2>&1 && echo "✓ Verilator found" || echo "✗ Verilator not found"
	@which $(VLIB) >/dev/null 2>&1 && echo "✓ ModelSim found" || echo "✗ ModelSim not found"
	@echo ""
	@echo "Required source files:"
	@if [ -f "$(TB_DIR)/sdram_ctrl_simple_tb.sv" ]; then \
		echo "✓ $(TB_DIR)/sdram_ctrl_simple_tb.sv"; \
	else \
		echo "✗ $(TB_DIR)/sdram_ctrl_simple_tb.sv (MISSING)"; \
	fi
	@if [ -f "$(TB_DIR)/sdram_ctrl_simple.cpp" ]; then \
		echo "✓ $(TB_DIR)/sdram_ctrl_simple.cpp"; \
	else \
		echo "✗ $(TB_DIR)/sdram_ctrl_simple.cpp (MISSING)"; \
	fi
	@if [ -f "$(TB_DIR)/sdram_ctrl_advanced_tb.sv" ]; then \
		echo "✓ $(TB_DIR)/sdram_ctrl_advanced_tb.sv"; \
	else \
		echo "✗ $(TB_DIR)/sdram_ctrl_advanced_tb.sv (MISSING)"; \
	fi
	@if [ -f "$(TB_DIR)/sdram_ctrl_advanced.cpp" ]; then \
		echo "✓ $(TB_DIR)/sdram_ctrl_advanced.cpp"; \
	else \
		echo "✗ $(TB_DIR)/sdram_ctrl_advanced.cpp (MISSING)"; \
	fi
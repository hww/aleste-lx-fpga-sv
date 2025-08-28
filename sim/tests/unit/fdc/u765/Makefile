# Configuration
OBJ_DIR = obj_dir
VERILATOR = verilator

# Paths to source files
RTL_DIR = ../../../../../rtl/third_party/fdc/u765
TEST_DIR = .

# Automatic path detection
VERILATOR_ROOT = $(shell $(VERILATOR) --getenv VERILATOR_ROOT 2>/dev/null || echo /usr/share/verilator)
VERILATOR_DIR = $(VERILATOR_ROOT)/include

# Check for required include files
ifeq ($(wildcard $(VERILATOR_DIR)/verilated.cpp),)
    $(error Verilator include files not found in $(VERILATOR_DIR). Please install verilator and libverilated-dev)
endif

# Verilator flags
VERILATOR_FLAGS = --trace --cc --bbox-unsup --x-assign unique -I$(RTL_DIR) --public --timing --timescale "1ns/1ps"

# Source files
U765_SOURCES = $(RTL_DIR)/u765.sv
U765_WB_SOURCES = $(RTL_DIR)/u765_wb.sv $(U765_SOURCES)

# Test source files
U765_TEST_SOURCES = $(TEST_DIR)/u765_tb.sv $(U765_SOURCES)
U765_WB_TEST_SOURCES = $(TEST_DIR)/u765_wb_tb.sv $(U765_WB_SOURCES)

# Default target
all: u765_tb u765_wb_tb

# =============================================================================
# u765_tb targets (legacy)
# =============================================================================

# Build u765_tb Verilated model
$(OBJ_DIR)/Vu765_tb.cpp: $(U765_TEST_SOURCES)
	@mkdir -p $(OBJ_DIR)/u765_tb
	@echo "[Makefile] Building u765_tb Verilated model..."
	$(VERILATOR) $(VERILATOR_FLAGS) --top-module u765_tb -cc $^ --Mdir $(OBJ_DIR)/u765_tb
	@touch $@

# Build u765_tb executable
u765_tb: $(OBJ_DIR)/Vu765_tb.cpp $(TEST_DIR)/u765_tb.cpp
	@echo "[Makefile] Building u765_tb executable..."
	g++ \
	-I$(OBJ_DIR)/u765_tb \
	-I$(VERILATOR_DIR) \
	$(VERILATOR_DIR)/verilated.cpp \
	$(VERILATOR_DIR)/verilated_vcd_c.cpp \
	$(VERILATOR_DIR)/verilated_threads.cpp \
	$(TEST_DIR)/u765_tb.cpp \
	$(wildcard $(OBJ_DIR)/u765_tb/Vu765_tb*.cpp) \
	-o u765_tb \
	-pthread

# Run u765_tb
u765_run: u765_tb
	@echo "[Makefile] u765_tb started..."
	./u765_tb
	@echo "[Makefile] u765_tb completed"

# View u765_tb waveform
u765_wave: u765_run
	@echo "[Makefile] Opening waveform for u765_tb..."
	gtkwave u765_tb.vcd &

# =============================================================================
# u765_wb_tb targets (new)
# =============================================================================

# Build u765_wb_tb Verilated model
$(OBJ_DIR)/Vu765_wb_tb.cpp: $(U765_WB_TEST_SOURCES)
	@mkdir -p $(OBJ_DIR)/u765_wb_tb
	@echo "[Makefile] Building u765_wb_tb Verilated model..."
	$(VERILATOR) $(VERILATOR_FLAGS) --top-module u765_wb_tb -cc $^ --Mdir $(OBJ_DIR)/u765_wb_tb
	@touch $@

# Build u765_wb_tb executable
u765_wb_tb: $(OBJ_DIR)/Vu765_wb_tb.cpp $(TEST_DIR)/u765_wb_tb.cpp
	@echo "[Makefile] Building u765_wb_tb executable..."
	g++ \
	-I$(OBJ_DIR)/u765_wb_tb \
	-I$(VERILATOR_DIR) \
	$(VERILATOR_DIR)/verilated.cpp \
	$(VERILATOR_DIR)/verilated_vcd_c.cpp \
	$(VERILATOR_DIR)/verilated_threads.cpp \
	$(TEST_DIR)/u765_wb_tb.cpp \
	$(wildcard $(OBJ_DIR)/u765_wb_tb/Vu765_wb_tb*.cpp) \
	-o u765_wb_tb \
	-pthread

# Run u765_wb_tb
u765_wb_run: u765_wb_tb
	@echo "[Makefile] u765_wb_tb started..."
	./u765_wb_tb
	@echo "[Makefile] u765_wb_tb completed"

# View u765_wb_tb waveform
u765_wb_wave: u765_wb_run
	@echo "[Makefile] Opening waveform for u765_wb_tb..."
	gtkwave u765_wb_tb.vcd &

# =============================================================================
# Common targets
# =============================================================================

# Clean all build artifacts
clean:
	@echo "[Makefile] Cleaning build artifacts..."
	rm -rf $(OBJ_DIR) u765_tb u765_wb_tb *.vcd

# Clean only u765_tb artifacts
u765_clean:
	@echo "[Makefile] Cleaning u765_tb artifacts..."
	rm -rf $(OBJ_DIR)/u765_tb u765_tb u765_tb.vcd

# Clean only u765_wb_tb artifacts
u765_wb_clean:
	@echo "[Makefile] Cleaning u765_wb_tb artifacts..."
	rm -rf $(OBJ_DIR)/u765_wb_tb u765_wb_tb u765_wb_tb.vcd

# Help target
help:
	@echo "Available targets:"
	@echo "  all              - Build both u765_tb and u765_wb_tb"
	@echo "  u765_tb          - Build u765_tb executable"
	@echo "  u765_run         - Run u765_tb"
	@echo "  u765_wave        - Run u765_tb and view waveform"
	@echo "  u765_wb_tb       - Build u765_wb_tb executable"
	@echo "  u765_wb_run      - Run u765_wb_tb"
	@echo "  u765_wb_wave     - Run u765_wb_tb and view waveform"
	@echo "  clean            - Clean all build artifacts"
	@echo "  u765_clean       - Clean only u765_tb artifacts"
	@echo "  u765_wb_clean    - Clean only u765_wb_tb artifacts"
	@echo "  help             - Show this help message"
	@echo ""
	@echo "Source paths:"
	@echo "  RTL files:    $(RTL_DIR)"
	@echo "  Test files:   $(TEST_DIR)"
	@echo ""
	@echo "Files for u765_wb_tb:"
	@echo "  $(U765_WB_TEST_SOURCES)"

.PHONY: all clean u765_clean u765_wb_clean help \
        u765_run u765_wave u765_wb_run u765_wb_wave
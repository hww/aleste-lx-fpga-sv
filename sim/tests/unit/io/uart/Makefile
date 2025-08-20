# Tool Configuration
VERILATOR := verilator
IVERILOG  := iverilog
VVP       := vvp
GTKWAVE   := gtkwave

# Paths (customize these)
RTL_ROOT  := ../../../../../rtl
UART_RTL  := $(RTL_ROOT)/third_party/io/uart
TB_DIR    := .

# Source Files
UART_SOURCES := $(UART_RTL)/baud_rate_gen.v \
                $(UART_RTL)/receiver.v \
                $(UART_RTL)/transmitter.v \
                $(UART_RTL)/uart.v

TB_SOURCE  := $(TB_DIR)/testbench.v

# Targets and Outputs
TB_BIN     := testbench
VCD_FILE   := uart.vcd
VERILATOR_LINT_LOG := verilator_lint.log

# Compilation flags
IVERILOG_FLAGS = -Wall -g2012 -I$(UART_RTL)
VERILATOR_FLAGS = --lint-only -Wall --Wno-fatal -I$(UART_RTL)

# Default target
all: check

# --- Simulation with Icarus Verilog ---
$(TB_BIN): $(UART_SOURCES) $(TB_SOURCE)
	$(IVERILOG) $(IVERILOG_FLAGS) -o $@ $(TB_SOURCE) $(UART_SOURCES)

build: $(TB_BIN)

run: $(TB_BIN)
	$(VVP) ./$(TB_BIN)

# --- Linting with Verilator ---
lint: $(UART_SOURCES) $(TB_SOURCE)
	$(VERILATOR) $(VERILATOR_FLAGS) \
	             $(UART_SOURCES) $(TB_SOURCE) \
	             2>&1 | tee $(VERILATOR_LINT_LOG)

# --- Check: Run the simulation and check for success ---
check: $(TB_BIN)
	@echo "Running testbench..."
	@if $(VVP) ./$(TB_BIN) | tee test.log; then \
	    if grep -q "SUCCESS" test.log; then \
	        echo "*** TEST PASSED ***"; \
	    else \
	        echo "*** TEST FAILED (No SUCCESS message) ***"; \
	        exit 1; \
	    fi; \
	else \
	    echo "*** SIMULATION ERROR ***"; \
	    exit 1; \
	fi

# --- View waveform (if simulation generated a VCD) ---
view: $(VCD_FILE)
	$(GTKWAVE) $(VCD_FILE) &

# --- Cleanup ---
clean:
	rm -f $(TB_BIN) $(VCD_FILE) test.log
	rm -f $(VERILATOR_LINT_LOG)
	rm -rf obj_dir

# --- Help ---
help:
	@echo "Available targets:"
	@echo "  all       : alias for 'check'"
	@echo "  build     : compile the testbench (iverilog)"
	@echo "  run       : run the compiled testbench (vvp)"
	@echo "  check     : run testbench and check for success"
	@echo "  lint      : run Verilator for linting"
	@echo "  view      : view waveform with gtkwave (if VCD exists)"
	@echo "  clean     : remove generated files"

.PHONY: all build run check lint view clean help
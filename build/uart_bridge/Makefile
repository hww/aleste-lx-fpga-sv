# Toolchain
YOSYS      := yosys
NEXTPNR    := nextpnr-ecp5
ECPPACK    := ecppack

# Source directories
SRC_DIR    := ../../src
DEBUG_DIR  := $(SRC_DIR)/components/debug
SYSTEM_DIR := $(SRC_DIR)/systems/uart_bridge
TARGET_DIR := $(SRC_DIR)/platforms/icesugar_pro
SDRAM_DIR  := $(SRC_DIR)/components/memory/sdram
UART_DIR   := $(SRC_DIR)/components/io/uart
RESET_DIR  := $(SRC_DIR)/components/reset
WB_DIR     := $(SRC_DIR)/components/interconnect/wishbone

# Source files - для UART bridge теста
DEBUG      := $(DEBUG_DIR)/debug_shift_reg.sv
RESET      := $(RESET_DIR)/reset_controller.sv
CLOCK      := $(TARGET_DIR)/clocks/video_pll.v
SDRAM_CTRL := $(SDRAM_DIR)/sdram_wishbone.sv
WB         := $(WB_DIR)/uart_bridge.sv $(WB_DIR)/wb_wdt_simple.sv
UART_BRIDGE := $(UART_DIR)/uart.v $(UART_DIR)/uart_rx.v $(UART_DIR)/uart_tx.v $(UART_DIR)/baud_tick_gen.v
TOP_MODULE := $(SYSTEM_DIR)/uart_bridge_test.sv

# Generated files
YOSYS_SCRIPT := uart_bridge_test.ys
JSON_FILE    := uart_bridge_test.json
CONFIG_FILE  := uart_bridge_test.config
BITSTREAM    := uart_bridge_test.bit
SVF_FILE     := uart_bridge_test.svf

# Target board configuration
DEVICE      := 25k
PACKAGE     := CABGA256
CONSTRAINTS := icesugar_pro.lpf

# Configuration
YOSYS_DEFINE := -DCONFIG_27MHZ -I../../src/config
YOSYS_INCLUDE := -I.

.PHONY: all
all: $(BITSTREAM)

# Generate Yosys script
$(YOSYS_SCRIPT): $(TOP_MODULE) $(CLOCK) $(SDRAM_CTRL) $(UART_BRIDGE) $(RESET) $(DEBUG) $(WB)
	echo "read_verilog $(YOSYS_INCLUDE) $(YOSYS_DEFINE) -sv $(TOP_MODULE)" > $@
	echo "read_verilog $(CLOCK)" >> $@
	echo "read_verilog -sv $(RESET)" >> $@
	echo "read_verilog -sv $(DEBUG)" >> $@
	echo "read_verilog -sv $(WB)" >> $@
	echo "read_verilog -sv $(SDRAM_CTRL)" >> $@
	echo "read_verilog -sv $(UART_BRIDGE)" >> $@
	echo "hierarchy -top uart_bridge_test" >> $@
	echo "synth_ecp5 -json $(JSON_FILE) -no-rw-check" >> $@

# Synthesis with Yosys
$(JSON_FILE): $(YOSYS_SCRIPT)
	$(YOSYS) -V
	$(YOSYS) -q $<

# Place and route with nextpnr
$(CONFIG_FILE): $(JSON_FILE)
	$(NEXTPNR) \
		--$(DEVICE) \
		--package $(PACKAGE) \
		--json $< \
		--lpf $(CONSTRAINTS) \
		--textcfg $@

# Generate bitstream
$(BITSTREAM): $(CONFIG_FILE)
	$(ECPPACK) \
		--input $< \
		--bit $@ \
		--svf $(SVF_FILE)

# Programming target
program: $(BITSTREAM)
	openocd -f icelink.cfg

# Clean build artifacts
.PHONY: clean
clean:
	rm -f $(YOSYS_SCRIPT) $(JSON_FILE) $(CONFIG_FILE) $(BITSTREAM) $(SVF_FILE)

# Debug target to show variables
.PHONY: debug
debug:
	@echo "Source files:"
	@echo "  Top: $(TOP_MODULE)"
	@echo "  Clock: $(CLOCK)"
	@echo "  SDRAM Ctrl: $(SDRAM_CTRL)"
	@echo "  UART Bridge: $(UART_BRIDGE)"
	@echo "Generated files:"
	@echo "  Script: $(YOSYS_SCRIPT)"
	@echo "  JSON: $(JSON_FILE)"
	@echo "  Config: $(CONFIG_FILE)"
	@echo "  Bitstream: $(BITSTREAM)"

# Check if source files exist
.PHONY: check
check:
	@echo "Checking source files..."
	@for file in $(TOP_MODULE) $(CLOCK) $(SDRAM_CTRL) $(UART_BRIDGE); do \
		if [ -f "$$file" ]; then \
			echo "✓ $$file"; \
		else \
			echo "✗ $$file (MISSING)"; \
		fi \
	done
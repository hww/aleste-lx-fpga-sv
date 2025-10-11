# Toolchain
YOSYS      := yosys
NEXTPNR    := nextpnr-ecp5
ECPPACK    := ecppack

# Source directories
SRC_DIR    := ../../src
SYSTEM_DIR := $(SRC_DIR)/systems/sdram_test
TARGET_DIR := $(SRC_DIR)/platforms/icesugar_pro
SDRAM_DIR  := $(SRC_DIR)/components/memory/sdram

# Source files - ТОЛЬКО необходимые для SDRAM теста
CLOCK      := $(TARGET_DIR)/clocks/system_pll.v
SDRAM_CTRL := $(SDRAM_DIR)/sdram_ctrl_wb.sv
TOP_MODULE := $(SYSTEM_DIR)/sdram_test_top.sv $(SYSTEM_DIR)/sdram_test_pattern.sv

# Generated files
YOSYS_SCRIPT := sdram_test.ys
JSON_FILE    := sdram_test.json
CONFIG_FILE  := sdram_test.config
BITSTREAM    := sdram_test.bit
SVF_FILE     := sdram_test.svf

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
$(YOSYS_SCRIPT): $(TOP_MODULE) $(CLOCK) $(SDRAM_CTRL)
	echo "read_verilog $(YOSYS_INCLUDE) $(YOSYS_DEFINE) -sv $(TOP_MODULE)" > $@
	echo "read_verilog $(CLOCK)" >> $@
	echo "read_verilog -sv $(SDRAM_CTRL)" >> $@
	echo "hierarchy -top sdram_test_top" >> $@
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
	@echo "Generated files:"
	@echo "  Script: $(YOSYS_SCRIPT)"
	@echo "  JSON: $(JSON_FILE)"
	@echo "  Config: $(CONFIG_FILE)"
	@echo "  Bitstream: $(BITSTREAM)"

# Check if source files exist
.PHONY: check
check:
	@echo "Checking source files..."
	@for file in $(TOP_MODULE) $(CLOCK) $(SDRAM_CTRL); do \
		if [ -f "$$file" ]; then \
			echo "✓ $$file"; \
		else \
			echo "✗ $$file (MISSING)"; \
		fi \
	done
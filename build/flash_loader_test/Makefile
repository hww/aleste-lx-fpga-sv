# build/flash_loader_test/Makefile

# Toolchain
YOSYS      := yosys
NEXTPNR    := nextpnr-ecp5
ECPPACK    := ecppack

# Source directories
SRC_DIR    := ../../src
SYSTEM_DIR := $(SRC_DIR)/systems/flash_loader_test
TARGET_DIR := $(SRC_DIR)/platforms/icesugar_pro
SDRAM_DIR  := $(SRC_DIR)/components/memory/sdram
FLASH_DIR  := $(SRC_DIR)/components/memory/flash
COMPS_DIR  := $(SRC_DIR)/components

# Source files для flash_loader_test
TOP_MODULE := $(SYSTEM_DIR)/flash_loader_test.v
CLOCK      := $(TARGET_DIR)/clocks/system_pll.v $(TARGET_DIR)/clocks/video_pll.v
SDRAM_CTRL := $(SDRAM_DIR)/sdram_ctrl_wb.sv
FLASH_CTRL := $(FLASH_DIR)/spi_flash_reader.sv $(FLASH_DIR)/flash_to_sdram_loader.sv
RESET_CTRL := $(COMPS_DIR)/reset/reset_controller.sv

# Separate Verilog and SystemVerilog files
VERILOG_SOURCES := \
    $(TOP_MODULE) \
    $(CLOCK)

SYSTEMVERILOG_SOURCES := \
    $(SDRAM_CTRL) \
    $(FLASH_CTRL) \
    $(RESET_CTRL)

# All sources
SOURCES := $(VERILOG_SOURCES) $(SYSTEMVERILOG_SOURCES)

# Generated files
JSON_FILE    := flash_loader_test.json
CONFIG_FILE  := flash_loader_test.config
BITSTREAM    := flash_loader_test.bit
SVF_FILE     := flash_loader_test.svf

# Target board configuration
DEVICE      := 25k
PACKAGE     := CABGA256
CONSTRAINTS := icesugar_pro.lpf

.PHONY: all
all: $(BITSTREAM)

# Synthesis with Yosys - improved approach
$(JSON_FILE): $(SOURCES)
	@echo "Running Yosys synthesis for flash_loader_test..."
	$(YOSYS) -q -l yosys.log -p "\
		verilog_defaults -add -DSYNTHESIS; \
		verilog_defaults -add -I../../src; \
		verilog_defaults -add -I.; \
		read_verilog $(VERILOG_SOURCES); \
		read_verilog -sv $(SYSTEMVERILOG_SOURCES); \
		synth_ecp5 -json $@  -no-rw-check -top flash_loader_test"

# Place and route with nextpnr
$(CONFIG_FILE): $(JSON_FILE)
	@echo "Running place and route..."
	$(NEXTPNR) \
		--$(DEVICE) \
		--package $(PACKAGE) \
		--json $< \
		--lpf $(CONSTRAINTS) \
		--textcfg $@

# Generate bitstream
$(BITSTREAM): $(CONFIG_FILE)
	@echo "Generating bitstream..."
	$(ECPPACK) \
		--input $< \
		--bit $@ \
		--svf $(SVF_FILE)

# Programming targets
.PHONY: program program-sram program-flash flash-test probe

# Program to SRAM (safe testing)
program-sram: $(SVF_FILE)
	@echo "Programming to SRAM..."
	openocd -f icelink.cfg

# Program to Flash (permanent)
program-flash: $(BITSTREAM)
	@echo "Programming to Flash at 0x200000..."
	icesprog -w $(BITSTREAM) -o 0x200000

# Default programming
program: program-sram

# Flash testing
flash-test: test_pattern.bin
	@echo "Testing Flash R/W..."
	icesprog -w test_pattern.bin -o 0x100000
	icesprog -r verify_pattern.bin -o 0x100000 -l 512
	cmp test_pattern.bin verify_pattern.bin && echo "✅ Flash test PASSED" || echo "❌ Flash test FAILED"

test_pattern.bin:
	@echo "Generating test pattern..."
	python3 -c "pattern = [0xDE, 0xAD, 0xBE, 0xEF, 0xCA, 0xFE, 0xBA, 0xBE, 0xAA, 0x55, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20]; import sys; sys.stdout.buffer.write(bytes(pattern + [i & 0xFF for i in range(16, 512)]))" > test_pattern.bin

# Probe JTAG
probe:
	@echo "Scanning JTAG chain..."
	icesprog --probe

# Flash operations
.PHONY: flash-dump flash-erase

flash-dump:
	@echo "Dumping first 4KB of Flash..."
	icesprog -r flash_dump.bin -o 0 -l 4096
	hexdump -C flash_dump.bin | head -20

flash-erase:
	@echo "⚠️  ERASING ENTIRE FLASH - BE CAREFUL!"
	@read -p "Continue? (y/N): " confirm && [ $$confirm = y ]
	icesprog -e

# Clean build artifacts
.PHONY: clean
clean:
	@echo "Cleaning build artifacts..."
	rm -f $(JSON_FILE) $(CONFIG_FILE) $(BITSTREAM) $(SVF_FILE) *.bin yosys.log

# Debug targets
.PHONY: debug debug-simple debug-step

# Simple debug - try to read just one file
debug-simple:
	@echo "Testing Yosys with just top module..."
	$(YOSYS) -p "read_verilog -I../../src $(TOP_MODULE); stat"

# Step-by-step debug
debug-step:
	@echo "Step-by-step synthesis debug..."
	$(YOSYS) -p "\
		read_verilog -I../../src $(TOP_MODULE); \
		stat; \
		read_verilog -I../../src $(CLOCK); \
		stat; \
		read_verilog -sv -I../../src $(SYSTEMVERILOG_SOURCES); \
		stat"

# Check if source files exist
.PHONY: check
check:
	@echo "Checking source files for flash_loader_test..."
	@for file in $(SOURCES); do \
		if [ -f "$$file" ]; then \
			echo "✓ $$file"; \
		else \
			echo "✗ $$file (MISSING)"; \
		fi \
	done

# Quick build test
.PHONY: test
test: clean
	@echo "Testing flash_loader_test build..."
	@make $(JSON_FILE) --no-print-directory || (echo "Build failed"; exit 1)
	@echo "Build successful!"

# Help
.PHONY: help
help:
	@echo "Flash Loader Test Targets:"
	@echo "  all          - Build bitstream"
	@echo "  program      - Program to SRAM (safe)"
	@echo "  program-flash - Program to Flash (permanent)"
	@echo "  flash-test   - Test Flash R/W functionality"
	@echo "  probe        - Scan JTAG chain"
	@echo "  flash-dump   - Dump Flash contents"
	@echo "  check        - Check source files"
	@echo "  debug-simple - Debug with just top module"
	@echo "  debug-step   - Step-by-step synthesis debug"
	@echo "  clean        - Clean build artifacts"
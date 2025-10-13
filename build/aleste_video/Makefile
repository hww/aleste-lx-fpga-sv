# Toolchain
YOSYS      := yosys
NEXTPNR    := nextpnr-ecp5
ECPPACK    := ecppack

# Source directories
SRC_DIR     := ../../src
SYSTEM_DIR  := $(SRC_DIR)/systems/aleste_video
TARGET_DIR  := $(SRC_DIR)/platforms/icesugar_pro
RESET_DIR   := $(SRC_DIR)/components/reset
SDRAM_DIR   := $(SRC_DIR)/components/memory/sdram
LLHDMI_DIR  := $(SRC_DIR)/components/video/llhdmi
SCALER_DIR  := $(SRC_DIR)/components/video/hdmi_scaler
CRTC_DIR    := $(SRC_DIR)/components/video/mc6845mod
PALETTE_DIR := $(SRC_DIR)/components/video/palette
PIXPIPE_DIR := $(SRC_DIR)/components/video/pixel_pipeline
VIDBUF_DIR  := $(SRC_DIR)/components/video/video_buffer

# Source files для aleste_video
RESET_CTRL  := $(RESET_DIR)/reset_controller.sv
CLOCK       := $(TARGET_DIR)/clocks/system_pll.v $(TARGET_DIR)/clocks/video_pll.v
SDRAM_CTRL  := $(SDRAM_DIR)/sdram_ctrl_wb.sv 
HDMI        := $(LLHDMI_DIR)/llhdmi.v $(LLHDMI_DIR)/tmds_encoder.v $(LLHDMI_DIR)/OBUFDS.v
CRTC        := $(CRTC_DIR)/mc6845mod.sv 
SCALER      := $(SCALER_DIR)/dual_port_ram.sv $(SCALER_DIR)/hdmi_scaler.sv
PALETTE     := $(PALETTE_DIR)/cpc_colors.sv $(PALETTE_DIR)/color_palette.sv
VIDBUF      := $(VIDBUF_DIR)/video_buffer.sv
PIXPIPE	    := $(PIXPIPE_DIR)/pixel_pipeline.sv
MEM_ARBITER :=  $(SYSTEM_DIR)/memory_arbiter.sv 
WB_ARBITER :=  $(SYSTEM_DIR)/wb_arbiter_internal.sv
TEST_GEN    := $(SYSTEM_DIR)/test_data_generator.sv
TOP_MODULE  := $(SYSTEM_DIR)/aleste_video.sv


# Generated files
YOSYS_SCRIPT := aleste_video.ys
JSON_FILE    := aleste_video.json
CONFIG_FILE  := aleste_video.config
BITSTREAM    := aleste_video.bit
SVF_FILE     := aleste_video.svf

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
$(YOSYS_SCRIPT): $(TOP_MODULE) $(CLOCK) $(SDRAM_CTRL) $(HDMI) $(CRTC) $(SCALER) $(PALETTE) $(MEM_ARBITER) $(WB_ARBITER) $(VIDEO_PIPE) $(RESET_CTRL) $(TEST_GEN) 
	@echo "Generating Yosys script for aleste_video..."
	echo "read_verilog $(YOSYS_INCLUDE) $(YOSYS_DEFINE) -sv $(TOP_MODULE)" > $@
	echo "read_verilog $(CLOCK)" >> $@
	echo "read_verilog $(HDMI)" >> $@
	echo "read_verilog $(VIDBUF)" >> $@
	echo "read_verilog -sv $(SDRAM_CTRL)" >> $@
	echo "read_verilog -sv $(TEST_GEN)" >> $@
	echo "read_verilog -sv $(CRTC)" >> $@
	echo "read_verilog -sv $(SCALER)" >> $@
	echo "read_verilog -sv $(PALETTE)" >> $@
	echo "read_verilog -sv $(MEM_ARBITER)" >> $@
	echo "read_verilog -sv $(WB_ARBITER)" >> $@
	echo "read_verilog -sv $(PIXPIPE)" >> $@
	echo "read_verilog -sv $(RESET_CTRL)" >> $@
	echo "hierarchy -top aleste_video" >> $@
	echo "synth_ecp5 -json $(JSON_FILE) -no-rw-check" >> $@
	echo "stat" >> $@

# Synthesis with Yosys
# -noflatten for better stats
$(JSON_FILE): $(YOSYS_SCRIPT)
	@echo "Running Yosys synthesis..."
	$(YOSYS) -V
	$(YOSYS) -q $<

# Place and route with nextpnr
$(CONFIG_FILE): $(JSON_FILE)
	@echo "Running place and route..."
	$(NEXTPNR) \
		--$(DEVICE) \
		--speed 6 --timing-allow-fail  --seed 1 \
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

# Programming target
program: $(BITSTREAM)
	@echo "Programming board..."
	openocd -f icelink.cfg

# Clean build artifacts
.PHONY: clean
clean:
	@echo "Cleaning build artifacts..."
	rm -f $(YOSYS_SCRIPT) $(JSON_FILE) $(CONFIG_FILE) $(BITSTREAM) $(SVF_FILE)

# Debug target to show variables
.PHONY: debug
debug:
	@echo "=== aleste_video Build Configuration ==="
	@echo "Source files:"
	@echo "  Top: $(TOP_MODULE)"
	@echo "  Clock: $(CLOCK)"
	@echo "  SDRAM Ctrl: $(SDRAM_CTRL)"
	@echo "  HDMI: $(HDMI)"
	@echo "  CRTC: $(CRTC)"
	@echo "  Scaler: $(SCALER)"
	@echo "  Palette: $(PALETTE)"
	@echo "  Memory Arbiter: $(MEM_ARBITER)"
	@echo "  WB Memory Arbiter: $(WB_ARBITER)"
	@echo "  Video Pipeline: $(VIDEO_PIPE)"
	@echo "  Reset Controller: $(RESET_CTRL)"
	@echo "Generated files:"
	@echo "  Script: $(YOSYS_SCRIPT)"
	@echo "  JSON: $(JSON_FILE)"
	@echo "  Config: $(CONFIG_FILE)"
	@echo "  Bitstream: $(BITSTREAM)"

# Check if source files exist
.PHONY: check
check:
	@echo "Checking source files for aleste_video..."
	@for file in $(TOP_MODULE) $(CLOCK) $(SDRAM_CTRL) $(HDMI) $(CRTC) $(SCALER) $(PALETTE) $(MEM_ARBITER) $(VIDEO_PIPE) $(RESET_CTRL); do \
		if [ -f "$$file" ]; then \
			echo "✓ $$file"; \
		else \
			echo "✗ $$file (MISSING)"; \
		fi \
	done

# Quick build test
.PHONY: test
test: clean
	@echo "Testing aleste_video build..."
	@make $(JSON_FILE) --no-print-directory || (echo "Build failed"; exit 1)
	@echo "Build successful!"

# Create project structure
.PHONY: init
init:
	@echo "Creating aleste_video project structure..."
	mkdir -p $(SYSTEM_DIR)
	@echo "Now copy your source files to $(SYSTEM_DIR)/"


# Анализ ресурсов модулей
analyze-modules:
	@echo "=== Analyzing memory_arbiter ==="
	yosys -p "read_verilog $(YOSYS_INCLUDE) $(YOSYS_DEFINE) -sv $(MEM_ARBITER); synth_ecp5 -top memory_arbiter; stat" | grep -A 10 "Printing statistics"
	
	@echo "=== Analyzing wb_arbiter_internal ==="
	yosys -p "read_verilog $(YOSYS_INCLUDE) $(YOSYS_DEFINE) -sv $(WB_ARBITER); synth_ecp5 -top wb_arbiter_internal; stat" | grep -A 10 "Printing statistics"
	
	@echo "=== Analyzing mc6845mod ==="
	yosys -p "read_verilog $(YOSYS_INCLUDE) $(YOSYS_DEFINE) -sv $(CRTC); synth_ecp5 -top mc6845mod; stat" | grep -A 10 "Printing statistics"

	@echo "=== Analyzing color_palette ==="
	yosys -p "read_verilog $(YOSYS_INCLUDE) $(YOSYS_DEFINE) -sv $(PALETTE); synth_ecp5 -top color_palette; stat" | grep -A 10 "Printing statistics"
	

# Toolchain
YOSYS      := yosys
NEXTPNR    := nextpnr-ecp5
ECPPACK    := ecppack

# Source directories
SRC_DIR    := ../../src
LLHDMI_DIR := $(SRC_DIR)/components/video/llhdmi
SDLX_DIR   := $(SRC_DIR)/components/video/sdlx
SYSTEM_DIR := $(SRC_DIR)/systems/sdlx_llhdmi
TARGET_DIR := $(SRC_DIR)/platforms/icesugar_pro

# Source files
HDMICODE   := $(LLHDMI_DIR)/llhdmi.v $(LLHDMI_DIR)/vgatestsrc.v
ENCODER    := $(LLHDMI_DIR)/tmds_encoder.v
CLOCK      := $(LLHDMI_DIR)/clock.v $(TARGET_DIR)/clocks/video_pll.v $(TARGET_DIR)/clocks/system_pll.v
OBUFDS     := $(LLHDMI_DIR)/OBUFDS.v
SDLX_SV    := $(SDLX_DIR)/dual_port_ram.sv $(SDLX_DIR)/hdmi_scaler.sv $(SDLX_DIR)/pal_pattern.sv $(SDLX_DIR)/pal_timing.sv
TOP_MODULE := $(SYSTEM_DIR)/sdlx_llhdmi_system.v

# Generated files
YOSYS_SCRIPT := sdlx_llhdmi_system.ys
JSON_FILE    := sdlx_llhdmi_system.json
CONFIG_FILE  := sdlx_llhdmi_system_llhdmi_system.config
BITSTREAM    := sdlx_llhdmi_system_llhdmi_system.bit
SVF_FILE     := sdlx_llhdmi_system_llhdmi_system.svf

# Target board configuration
DEVICE      := 25k
PACKAGE     := CABGA256
CONSTRAINTS := icesugar_pro.lpf

# Configuration - только 27MHz режим
YOSYS_DEFINE := -DCONFIG_27MHZ

.PHONY: all
all: $(BITSTREAM)

# Generate Yosys script
$(YOSYS_SCRIPT): $(TOP_MODULE) $(HDMICODE) $(ENCODER) $(CLOCK) $(OBUFDS) $(SDLX_SV)
	echo "read_verilog $(YOSYS_DEFINE) $(TOP_MODULE)" > $@
	echo "read_verilog $(HDMICODE)" >> $@
	echo "read_verilog $(ENCODER)" >> $@
	echo "read_verilog $(CLOCK)" >> $@
	echo "read_verilog $(OBUFDS)" >> $@
	echo "read_verilog -sv $(SDLX_SV)" >> $@
	echo "hierarchy -top sdlx_llhdmi_system" >> $@
	echo "synth_ecp5 -json $(JSON_FILE)" >> $@

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
	@echo "  HDMI: $(HDMICODE)"
	@echo "  Encoder: $(ENCODER)"
	@echo "  Clock: $(CLOCK)"
	@echo "  SDLX (SV): $(SDLX_SV)"
	@echo "Generated files:"
	@echo "  Script: $(YOSYS_SCRIPT)"
	@echo "  JSON: $(JSON_FILE)"
	@echo "  Config: $(CONFIG_FILE)"
	@echo "  Bitstream: $(BITSTREAM)"
	@echo "Configuration:"
	@echo "  Defines: $(YOSYS_DEFINE)"
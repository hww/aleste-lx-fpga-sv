# Toolchain
YOSYS      := yosys
NEXTPNR    := nextpnr-ecp5
ECPPACK    := ecppack

# Source directories
SRC_DIR    := ../../src
LLHDMI_DIR := $(SRC_DIR)/components/video/llhdmi
SCALER_DIR := $(SRC_DIR)/components/video/hdmi_scaler
CRTC_DIR   := $(SRC_DIR)/components/video/mc6845mod
SYSTEM_DIR := $(SRC_DIR)/systems/crt6845_hdmi_system
TARGET_DIR := $(SRC_DIR)/platforms/icesugar_pro

# Source files
HDMICODE   := $(LLHDMI_DIR)/llhdmi.v
ENCODER    := $(LLHDMI_DIR)/tmds_encoder.v
OBUFDS     := $(LLHDMI_DIR)/OBUFDS.v
CLOCK      := $(TARGET_DIR)/clocks/video_pll.v $(TARGET_DIR)/clocks/system_pll.v
SCALER     := $(SCALER_DIR)/dual_port_ram.sv $(SCALER_DIR)/hdmi_scaler.sv
CRTC       := $(CRTC_DIR)/mc6845mod.sv $(CRTC_DIR)/simple_cgen.sv
TOP_MODULE := $(SYSTEM_DIR)/crt6845_hdmi_system.sv

# Generated files
YOSYS_SCRIPT := crt6845_hdmi_system.ys
JSON_FILE    := crt6845_hdmi_system.json
CONFIG_FILE  := crt6845_hdmi_system.config
BITSTREAM    := crt6845_hdmi_system.bit
SVF_FILE     := crt6845_hdmi_system.svf

# Target board configuration
DEVICE      := 25k
PACKAGE     := CABGA256
CONSTRAINTS := icesugar_pro.lpf

# Configuration - только 27MHz режим
YOSYS_DEFINE := -DCONFIG_27MHZ -I../../src/config
YOSYS_INCLUDE := -I.

.PHONY: all
all: $(BITSTREAM)

# Generate Yosys script
$(YOSYS_SCRIPT): $(TOP_MODULE) $(HDMICODE) $(ENCODER) $(CLOCK) $(OBUFDS) $(SCALER) $(CRTC)
	echo "read_verilog $(YOSYS_INCLUDE) $(YOSYS_DEFINE) -sv $(TOP_MODULE)" > $@
	echo "read_verilog $(HDMICODE)" >> $@
	echo "read_verilog $(ENCODER)" >> $@
	echo "read_verilog $(CLOCK)" >> $@
	echo "read_verilog $(OBUFDS)" >> $@
	echo "read_verilog -sv $(CRTC)" >> $@
	echo "read_verilog -sv $(SCALER)" >> $@
	echo "hierarchy -top crt6845_hdmi_system" >> $@
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
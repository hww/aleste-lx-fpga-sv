# Toolchain
YOSYS      := yosys
NEXTPNR    := nextpnr-ecp5
ECPPACK    := ecppack

# Source directories
SRC_DIR    := ../../src
LLHDMI_DIR := $(SRC_DIR)/components/video/llhdmi
SYSTEM_DIR := $(SRC_DIR)/systems/llhdmi
TARGET_DIR := $(SRC_DIR)/platforms/icesugar_pro

# Source files
HDMICODE   := $(LLHDMI_DIR)/llhdmi.v $(LLHDMI_DIR)/vgatestsrc.v
ENCODER    := $(LLHDMI_DIR)/tmds_encoder.v
CLOCK      := $(LLHDMI_DIR)/clock.v $(TARGET_DIR)/clocks/video_pll.v 
OBUFDS     := $(LLHDMI_DIR)/OBUFDS.v
TOP_MODULE := $(SYSTEM_DIR)/llhdmi_system.v

# Generated files
YOSYS_SCRIPT := llhdmi_system.ys
JSON_FILE    := llhdmi_system.json
CONFIG_FILE  := llhdmi_system_llhdmi_system.config
BITSTREAM    := llhdmi_system_llhdmi_system.bit
SVF_FILE     := llhdmi_system_llhdmi_system.svf

# Target board configuration
DEVICE      := 25k
PACKAGE     := CABGA256
CONSTRAINTS := icesugar_pro.lpf

# Configuration - EDIT THESE LINES FOR DIFFERENT MODES:
# For 25MHz mode (640x480): Use -DCONFIG_25MHZ and config_25mhz.vh
# For 27MHz mode (720x480): Use -DCONFIG_27MHZ and config_27mhz.vh
# Configuration selection
CONFIG ?= 27mhz

# Set define based on configuration
ifeq ($(CONFIG), 27mhz)
    YOSYS_DEFINE := -DCONFIG_27MHZ
else
    YOSYS_DEFINE := -DCONFIG_25MHZ  
endif

.PHONY: all
all: $(BITSTREAM)

# Generate Yosys script
$(YOSYS_SCRIPT): $(TOP_MODULE) $(HDMICODE) $(ENCODER) $(CLOCK) $(OBUFDS)
	echo "read_verilog $(YOSYS_DEFINE) $(TOP_MODULE)" > $@
	echo "read_verilog $(HDMICODE)" >> $@
	echo "read_verilog $(ENCODER)" >> $@
	echo "read_verilog $(CLOCK)" >> $@
	echo "read_verilog $(OBUFDS)" >> $@
	echo "hierarchy -top llhdmi_system" >> $@
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
.PHONY:  25mhz 27mhz

25mhz:
	$(MAKE) CONFIG=25mhz

27mhz:
	$(MAKE) CONFIG=27mhz

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
	@echo "Generated files:"
	@echo "  Script: $(YOSYS_SCRIPT)"
	@echo "  JSON: $(JSON_FILE)"
	@echo "  Config: $(CONFIG_FILE)"
	@echo "  Bitstream: $(BITSTREAM)"
	@echo "Configuration:"
	@echo "  Defines: $(YOSYS_DEFINES)"
	@echo "  Include: $(CONFIG_INCLUDE)"

# Quick configuration change comments:
# For 27MHz mode (720x480), change the two lines above to:
# YOSYS_DEFINES := -DCONFIG_27MHZ
# CONFIG_INCLUDE := config_27mhz.vh
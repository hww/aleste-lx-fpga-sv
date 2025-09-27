# Toolchain
YOSYS      := yosys
NEXTPNR    := nextpnr-ecp5
ECPPACK    := ecppack

# Source directories
SRC_DIR    := ../../src
LLHDMI_DIR := $(SRC_DIR)/components/video/llhdmi
SYSTEM_DIR := $(SRC_DIR)/systems/llhdmi

# Source files
HDMICODE   := $(LLHDMI_DIR)/llhdmi.v $(LLHDMI_DIR)/vgatestsrc.v
ENCODER    := $(LLHDMI_DIR)/tmds_encoder.v
CLOCK      := $(LLHDMI_DIR)/clock.v
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

.PHONY: all
all: $(BITSTREAM)

# Generate Yosys script
$(YOSYS_SCRIPT): $(TOP_MODULE) $(HDMICODE) $(ENCODER) $(CLOCK) $(OBUFDS)
	chmod +x ysgen.sh
	./ysgen.sh $(TOP_MODULE) $(HDMICODE) $(ENCODER) $(CLOCK) $(OBUFDS) > $@
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
.PHONY: program
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
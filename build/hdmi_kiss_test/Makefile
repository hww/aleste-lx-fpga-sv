PACKAGE = CABGA256 
FREQ = 25

# Tools
YOSYS = yosys
NEXTPNR = nextpnr-ecp5
ECPPACK = ecppack
PROG = openFPGALoader -r -c cmsisdap --freq 1000000  --vid=0x1d50 --pid=0x602b  

# Source files
CORE_DIR = ../../src/components/video/hdmi_kiss
TOP_DIR = ../../src/systems/hdmi_kiss
CONSTR = ./hdmi_test.lpf
TARGET = hdmi_kiss_test

all: $(TARGET).bit

$(TARGET).json: 
#	 read_verilog $(CORE_DIR)/clock.v; \
#	yosys -q hdmi_kiss_test.ys
	$(YOSYS) -p \
	"read_verilog $(CORE_DIR)/ecp5_cells.v; \
	 read_verilog -sv $(CORE_DIR)/sys_pll.sv; \
	 read_verilog -sv $(CORE_DIR)/video_pll.sv; \
	 read_verilog -sv $(CORE_DIR)/hdmi_scaler_core.sv; \
	 read_verilog -sv $(CORE_DIR)/hdmi_scaler_wrapper.sv; \
	 read_verilog -sv $(CORE_DIR)/tmds_encoder.sv; \
	 read_verilog -sv $(TOP_DIR)/test_pattern_generator.sv; \
	 read_verilog -sv $(TOP_DIR)/hdmi_kiss_test.sv; \
	 hierarchy -top $(TARGET); \
	 synth_ecp5 -json $(TARGET).json"

$(TARGET)_out.config: $(TARGET).json
	$(NEXTPNR) --25k --json $< --lpf $(CONSTR) --textcfg $@ --package $(PACKAGE) --top $(TARGET)

$(TARGET).bit: $(TARGET)_out.config
	$(ECPPACK) $<  $@ --svf $(TARGET).svf

ocd: $(TARGET).bit
	openocd -f icelink.cfg 

program: $(TARGET).bit
	$(PROG) $<

flash: $(TARGET).bit
	$(PROG) -f $<

clean:
	rm -f *.json *.config *.bit *.log *.svf *.bak

rebuild: clean all

.PHONY: all program clean rebuild detect

detect:
	openFPGALoader --scan-usb
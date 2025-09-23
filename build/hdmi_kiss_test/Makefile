PACKAGE = CABGA256 
FREQ = 25

# Tools
YOSYS = yosys
NEXTPNR = nextpnr-ecp5
ECPPACK = ecppack
PROG = openFPGALoader -c cmsisdap --freq 500000  --vid=0x1d50 --pid=0x602b  

# Source directories
CORE_DIR = ../../rtl/core/hdmi_kiss
TOP_DIR = ../../rtl/top/hdmi_kiss
CONSTR = ./hdmi_test.lpf
TARGET = top_hdmi_test

all: $(TARGET).bit

# Простой Yosys скрипт, который читает все файлы
$(TARGET).json:
	$(YOSYS) -p \
	"read_verilog $(CORE_DIR)/ecp5_pll.v;\
	 read_verilog $(CORE_DIR)/ecp5_cells.v;\
	 read_verilog -sv $(CORE_DIR)/sys_pll.sv;\
	 read_verilog -sv $(CORE_DIR)/video_pll.sv;\
	 read_verilog -sv $(CORE_DIR)/hdmi_scaler_core.sv;\
	 read_verilog -sv $(CORE_DIR)/hdmi_scaler_wrapper.sv;\
	 read_verilog -sv $(CORE_DIR)/tmds_encoder.sv;\
	 read_verilog -sv $(TOP_DIR)/test_pattern_generator.sv;\
	 read_verilog -sv $(TOP_DIR)/top_hdmi_test.sv;\
	 proc; opt; memory; opt; techmap; abc; clean;\
	 hierarchy -top $(TARGET);\
	 synth_ecp5 -json $(TARGET).json"

$(TARGET)_out.config: $(TARGET).json $(CONSTR)
	$(NEXTPNR) --25k --json $< --lpf $(CONSTR) --textcfg $@ --package $(PACKAGE) --top $(TARGET)

$(TARGET).bit: $(TARGET)_out.config
	$(ECPPACK) $< $@

program: $(TARGET).bit
	$(PROG) $<

flash: $(TARGET).bit
	$(PROG) -f $<


clean:
	rm -f *.json *.config *.bin

.PHONY: all program clean

detect:
	openFPGALoader --scan-usb
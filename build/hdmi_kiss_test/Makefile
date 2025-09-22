PACKAGE = CABGA256 
FREQ = 25

# Tools
YOSYS = yosys
NEXTPNR = nextpnr-ecp5
ECPPACK = ecppack
PROG = icyprog

# Source directories
CORE_DIR = ../../rtl/core/hdmi_kiss
TOP_DIR = ../../rtl/top/hdmi_kiss
CONSTR = ../../constr/ice_sugar_pro_bg256_hdmi.lpf
TARGET = top_hdmi_test

all: $(TARGET).bin

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

$(TARGET).bin: $(TARGET)_out.config
	$(ECPPACK) $< $@

program: $(TARGET).bin
	$(PROG) $<

clean:
	rm -f *.json *.config *.bin

.PHONY: all program clean
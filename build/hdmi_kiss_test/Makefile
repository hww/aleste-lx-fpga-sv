PACKAGE = CABGA256 
FREQ = 25

# Tools
YOSYS = yosys
NEXTPNR = nextpnr-ecp5
ECPPACK = ecppack
PROG = icyprog

# Source directories
CORE_DIR = ../../src/components/video/hdmi_kiss
TOP_DIR = ../../src/systems/hdmi_kiss
CONSTR = hdmi_kiss_test.lpf
TARGET = hdmi_kiss_test

all: $(TARGET).bin

# Простой Yosys скрипт, который читает все файлы
$(TARGET).json:
	$(YOSYS)  -q -l yosys.log -p \
	"read_verilog $(CORE_DIR)/clock.v;\
	 read_verilog $(CORE_DIR)/ecp5_cells.v;\
	 read_verilog -sv $(CORE_DIR)/serializer.sv;\
	 read_verilog -sv $(CORE_DIR)/hdmi_scaler_core.sv;\
	 read_verilog -sv $(CORE_DIR)/hdmi_scaler_wrapper.sv;\
	 read_verilog -sv $(CORE_DIR)/dual_port_ram.sv;\
	 read_verilog -sv $(CORE_DIR)/tmds_encoder.sv;\
	 read_verilog -sv $(TOP_DIR)/test_pattern_generator.sv;\
	 read_verilog -sv $(TOP_DIR)/hdmi_kiss_test.sv;\
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
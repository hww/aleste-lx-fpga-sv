PACKAGE = CABGA256 
FREQ = 25

# Tools
YOSYS = yosys
NEXTPNR = nextpnr-ecp5
ECPPACK = ecppack
PROG = icyprog

# Source directories
SRC_DIR = ../../src
CONSTR = hdmi_kiss_test.ecp5.lpf
TARGET = hdmi_kiss_test

all: $(TARGET).bit

# Простой Yosys скрипт, который читает все файлы
$(TARGET).json:
	$(YOSYS)  -q -l yosys.log -p \
	"read_verilog $(SRC_DIR)/platforms/icesugar_pro/clocks/system_pll.v;\
	 read_verilog $(SRC_DIR)/platforms/icesugar_pro/clocks/video_pll.v;\
	 read_verilog $(SRC_DIR)/platforms/icesugar_pro/primitives/ecp5_cells.v;\
	 read_verilog -sv $(SRC_DIR)/components/primitives/led_blinker.sv;\
	 read_verilog -sv $(SRC_DIR)/components/video/hdmi_kiss/serializer.sv;\
	 read_verilog -sv $(SRC_DIR)/components/video/hdmi_kiss/tmds_encoder.sv;\
	 read_verilog -sv $(SRC_DIR)/components/video/sdlx/dual_port_ram.sv;\
	 read_verilog -sv $(SRC_DIR)/components/video/sdlx/hdmi_scaler_core.sv;\
	 read_verilog -sv $(SRC_DIR)/components/video/sdlx/test_pattern_generator.sv;\
	 read_verilog -sv $(SRC_DIR)/systems/hdmi_kiss/hdmi_kiss_test.sv;\
	 proc; opt; memory; opt; techmap; abc; clean;\
	 hierarchy -top $(TARGET);\
	 synth_ecp5 -json $(TARGET).json"

$(TARGET)_out.config: $(TARGET).json $(CONSTR)
	$(NEXTPNR) --25k --json $< --lpf $(CONSTR) --textcfg $@ --package $(PACKAGE) --top $(TARGET) --sdc clocks.sdc

$(TARGET).bit: $(TARGET)_out.config
	$(ECPPACK) $< $@ --svf $(TARGET).svf


$(TARGET).svf: $(TARGET)_out.config
	$(ECPPACK) $< $@ --svf $(TARGET).svf

program: $(TARGET).bit
	$(PROG) $<

config: $(TARGET)_out.config
	echo done
	
ocd: $(TARGET).svf
	openocd -f icelink.cfg 

clean:
	rm -f *.json *.config *.bin

.PHONY: all program clean
PACKAGE = CABGA256 
FREQ = 25

# Tools
YOSYS = yosys
NEXTPNR = nextpnr-ecp5
ECPPACK = ecppack
PROG = icyprog

# Source directories
HDMI_DIR = ../../src/components/video/hdmi
SDLX_DIR = ../../src/components/video/sdlx
TOP_DIR = ../../src/systems/sdlx
PLATFORM_DIR = ../../src/platforms/icesugar_pro
CONSTR = sdlx_test.lpf
TARGET = sdlx_test

all: $(TARGET).bit

# Простой Yosys скрипт, который читает все файлы
$(TARGET).json:
	$(YOSYS)  -q -l yosys.log -p \
	"read_verilog $(PLATFORM_DIR)/clocks/system_pll.v;\
	 read_verilog $(PLATFORM_DIR)/clocks/video_pll.v;\
	 read_verilog $(PLATFORM_DIR)/primitives/ecp5_cells.v;\
	 read_verilog -sv $(HDMI_DIR)/auxiliary_video_information_info_frame.sv;\
	 read_verilog -sv $(HDMI_DIR)/serializer.sv;\
	 read_verilog -sv $(HDMI_DIR)/audio_clock_regeneration_packet.sv;\
	 read_verilog -sv $(HDMI_DIR)/source_product_description_info_frame.sv;\
	 read_verilog -sv $(HDMI_DIR)/audio_info_frame.sv;\
	 read_verilog -sv $(HDMI_DIR)/packet_assembler.sv;\
	 read_verilog -sv $(HDMI_DIR)/tmds_channel.sv;\
	 read_verilog -sv $(HDMI_DIR)/audio_sample_packet.sv;\
	 read_verilog -sv $(HDMI_DIR)/packet_picker.sv;\
	 read_verilog -sv $(HDMI_DIR)/hdmi.sv;\
	 read_verilog -sv $(SDLX_DIR)/dual_port_ram.sv;\
	 read_verilog -sv $(SDLX_DIR)/hdmi_scaler_core.sv;\
	 read_verilog -sv $(SDLX_DIR)/test_pattern_generator.sv;\
	 read_verilog -sv $(TOP_DIR)/sdlx_test.sv;\
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
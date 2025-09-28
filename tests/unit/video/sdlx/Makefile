# Makefile
VERILATOR = verilator
VERILATOR_FLAGS = -Wall --cc --exe --build --trace-fst -I. \
	-Wno-WIDTHTRUNC \
	-Wno-WIDTH \
	-Wno-UNUSEDPARAM \
	-Wno-UNUSEDSIGNAL \
	-Wno-CASEINCOMPLETE
	
RTL_PATH = ../../../../src/components/video/sdlx
SOURCES = \
    $(RTL_PATH)/hdmi_scaler.sv \
    $(RTL_PATH)/dual_port_ram.sv \
    hdmi_scaler_test.cpp

TARGET = Vhdmi_scaler

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(VERILATOR) $(VERILATOR_FLAGS) $(SOURCES)

run: $(TARGET)
	./obj_dir/$(TARGET)

wave: run
	gtkwave waveform.vcd &

clean:
	rm -rf obj_dir waveform.vcd

.PHONY: all run wave clean
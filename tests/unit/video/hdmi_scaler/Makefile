# Makefile
VERILATOR = verilator
VERILATOR_FLAGS = -Wall --cc --exe --build --trace-fst -I. \
	-Wno-WIDTHTRUNC \
	-Wno-WIDTH \
	-Wno-UNUSEDPARAM \
	-Wno-UNUSEDSIGNAL \
	-Wno-CASEINCOMPLETE
	
RTL_PATH = ../../../../src/components/video/hdmi_scaler
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
	gtkwave hdmi_scaler_test.fst &

clean:
	rm -rf obj_dir hdmi_scaler_test.fst

.PHONY: all run wave clean
# Makefile
VERILATOR = verilator
VERILATOR_FLAGS = -Wall --cc --exe --build --trace -I.
RTL_PATH = ../../../../src/components/video/hdmi_kiss

SOURCES = \
    $(RTL_PATH)/tmds_encoder.sv \
    tmds_test.cpp

TARGET = Vtmds_encoder

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(VERILATOR)  $(VERILATOR_FLAGS) $(SOURCES)

run: $(TARGET)
	./obj_dir/$(TARGET)

wave: run
	gtkwave waveform.vcd &

clean:
	rm -rf obj_dir waveform.vcd

.PHONY: all run wave clean
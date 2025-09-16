# Makefile
VERILATOR = verilator
VERILATOR_FLAGS = -Wall --cc --exe --build --trace -I.
RTL_PATH = ../../../../rtl/core/dvi
SOURCES = \
    $(RTL_PATH)/dvi_generic.sv \
    $(RTL_PATH)/dvi_serializer.sv \
    $(RTL_PATH)/tmds_encoder.sv \
    $(RTL_PATH)/dvi_core.sv \
    dvi_test.cpp

TARGET = Vdvi_generic

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
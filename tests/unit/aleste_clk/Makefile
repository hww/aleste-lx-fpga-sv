VERILATOR = verilator
VERILATOR_FLAGS = -Wall --trace --cc --exe --build -Wno-UNUSEDSIGNAL

TARGET = aleste_clk_sim
SOURCES = aleste_clk.sv tb_aleste_clk.cpp

all: waveform.vcd

$(TARGET): $(SOURCES)
	$(VERILATOR) $(VERILATOR_FLAGS) $(SOURCES) -o $(TARGET)

waveform.vcd: $(TARGET)
	./obj_dir/$(TARGET)

gtkwave:
	gtkwave waveform.vcd &

clean:
	rm -rf obj_dir waveform.vcd $(TARGET)

.PHONY: all clean gtkwave
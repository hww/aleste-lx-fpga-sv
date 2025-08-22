makefile

VERILATOR = verilator
VERILATOR_FLAGS = -Wall --cc --exe --build --trace --Wno-lint
INCLUDE_DIRS = -I../../rtl/z80 -I../../rtl/wishbone

TARGET = Vz80_wishbone
SOURCES = z80_wb_test.cpp
DUT = z80_wishbone.sv
Z80_CORE = ../../rtl/z80/z80_top_direct_n.v

all: $(TARGET)

$(TARGET): $(SOURCES) $(DUT) $(Z80_CORE)
	$(VERILATOR) $(VERILATOR_FLAGS) $(DUT) $(Z80_CORE) $(SOURCES) $(INCLUDE_DIRS)

run: $(TARGET)
	./obj_dir/$(TARGET)

wave:
	gtkwave z80_wishbone.vcd &

clean:
	rm -rf obj_dir *.vcd

.PHONY: all run wave clean
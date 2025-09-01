# Makefile for Verilator testbench

# Verilator configuration
VERILATOR = verilator
VERILATOR_FLAGS = -Wall --cc --exe --build --trace

# Targets
TARGET = Vff_test
SRC = ff_test.sv
CPP_SRC = ff_test.cpp

# Default target
all: build run

# Build the simulation
build:
	$(VERILATOR) $(VERILATOR_FLAGS) $(SRC) $(CPP_SRC)

# Run the simulation
run: build
	./obj_dir/$(TARGET)

# Generate and view waveform
wave: run
	gtkwave ff_test.vcd &

# Clean generated files
clean:
	rm -rf obj_dir
	rm -f ff_test.vcd
	rm -f $(TARGET)

# Phony targets
.PHONY: all build run wave clean
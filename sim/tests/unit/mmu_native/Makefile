VERILATOR = verilator
VERILATOR_FLAGS = \
	-Wall --cc --exe --build --trace \
	--Wno-UNUSEDSIGNAL \
	--Wno-WIDTHEXPAND \
	--x-assign unique \
	--x-initial unique \
	--timing \
	--debug \
	--timescale "1ns/1ps" \
	--converge-limit 2000

# Директории
PROJECT_ROOT = ../../../..
RTL_DIR = $(PROJECT_ROOT)/rtl/core/mmu
SIM_TEST_DIR = $(PROJECT_ROOT)/sim/tests/unit/mmu_native
BUILD_DIR = obj_dir
SIM = $(BUILD_DIR)/Vmmu_native

# Флаги компиляции
CFLAGS += -I$(SIM_TEST_DIR)
VERILATOR_FLAGS += -CFLAGS "$(CFLAGS)" -I$(RTL_DIR)

# Исходные файлы
VERILOG_SOURCES = $(RTL_DIR)/mmu_native.sv 
CPP_SOURCES = $(SIM_TEST_DIR)/mmu_native_test.cpp 

all: $(SIM)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(SIM): $(VERILOG_SOURCES) $(CPP_SOURCES)
	$(VERILATOR) $(VERILATOR_FLAGS) --top-module mmu_native --Mdir $(BUILD_DIR) $(VERILOG_SOURCES) $(CPP_SOURCES)

run: $(SIM)
	./$(SIM)

clean:
	rm -rf $(BUILD_DIR) *.vcd

wave: run
	gtkwave mmu_native.vcd

gwave: run
	gtkwave mmu_native.gtkw

.PHONY: all run clean wave
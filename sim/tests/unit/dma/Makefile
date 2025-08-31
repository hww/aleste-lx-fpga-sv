VERILATOR = verilator
VERILATOR_FLAGS = -Wall --cc --exe --build --trace
INCLUDE_DIR = include
BUILD_DIR = build

all: simple

simple:
	$(VERILATOR) $(VERILATOR_FLAGS) wb_dma_tb.sv wb_dma_simple.cpp wb_dma_utils.cpp \
	-CFLAGS "-I$(INCLUDE_DIR)" -o $(BUILD_DIR)/wb_dma_simple

advanced:
	$(VERILATOR) $(VERILATOR_FLAGS) wb_dma_tb.sv wb_dma_advanced.cpp -o ../build/wb_dma_advanced

clean:
	rm -rf obj_dir $(BUILD_DIR)/*

.PHONY: all simple clean
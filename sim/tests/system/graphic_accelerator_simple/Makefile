# Project directories
SIM_DIR = sim/tests/system/graphics
RTL_DIR = rtl/core/graphics
BUILD_DIR = build
OBJ_DIR = $(BUILD_DIR)/obj
BIN_DIR = $(BUILD_DIR)/bin

# Verilator configuration
VERILATOR = verilator
VERILATOR_FLAGS = -Wall -Wno-fatal --cc --exe --build \
                 --trace --timescale "1ns/1ps" \
                 -CFLAGS "-std=c++11 -O2"

# Source files
TB_SRC = $(SIM_DIR)/graphic_accelerator_tb.sv
RTL_SOURCES = $(wildcard $(RTL_DIR)/*.sv)
TEST_SRC = $(SIM_DIR)/graphic_accelerator_simple.cpp
UTILS_SRC = $(SIM_DIR)/graphic_accelerator_utils.cpp

# Targets
TARGET = $(BIN_DIR)/graphic_accelerator_test

# Default target
all: $(TARGET)

# Main test build
$(TARGET): $(TB_SRC) $(RTL_SOURCES) $(TEST_SRC) $(UTILS_SRC)
	@mkdir -p $(OBJ_DIR) $(BIN_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module graphic_accelerator_tb \
		--Mdir $(OBJ_DIR) \
		--build-jobs 4 \
		-o $(TARGET) \
		$(TB_SRC) $(RTL_SOURCES) $(TEST_SRC) $(UTILS_SRC)

# Run simple test
run: $(TARGET)
	@echo "Running simple register access test..."
	$(TARGET)

# Clean
clean:
	rm -rf $(BUILD_DIR) *.vcd *.log

# Debug build
debug: VERILATOR_FLAGS += -DDEBUG --debug
debug: $(TARGET)

.PHONY: all run clean debug
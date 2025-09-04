VERILATOR = verilator
VERILATOR_FLAGS = -Wall --cc --exe --build --trace --debug

# Директории
PROJECT_ROOT = ../../..
RTL_DIR = $(PROJECT_ROOT)/rtl/core/pic
SIM_TEST_DIR = $(PROJECT_ROOT)/sim/tests/unit/pic
COMMON_UTILS_DIR = $(PROJECT_ROOT)/verilator/common/utils
BUILD_DIR = obj_dir
SIM = $(BUILD_DIR)/Vwb_z80_pic_tb

# Флаги компиляции
CFLAGS += -I$(COMMON_UTILS_DIR) -I$(SIM_TEST_DIR)
VERILATOR_FLAGS += -CFLAGS "$(CFLAGS)" -I$(RTL_DIR)

# Исходные файлы
VERILOG_SOURCES = $(RTL_DIR)/wb_z80_pic.sv $(SIM_TEST_DIR)/wb_z80_pic_tb.sv
CPP_SOURCES = $(SIM_TEST_DIR)/wb_z80_pic.cpp

all: $(SIM)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(SIM): $(VERILOG_SOURCES) $(CPP_SOURCES) | $(BUILD_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) --top-module wb_z80_pic_tb --Mdir $(BUILD_DIR) $(VERILOG_SOURCES) $(CPP_SOURCES)

run: $(SIM)
	@echo "=== Запуск теста PIC ==="
	$(SIM)

clean:
	rm -rf $(BUILD_DIR) wb_z80_pic.vcd

.PHONY: all run clean
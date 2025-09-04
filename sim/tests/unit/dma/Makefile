VERILATOR = verilator
VERILATOR_FLAGS = -Wall --cc --exe --build --trace --debug 

# Директории
PROJECT_ROOT = ../../../..
RTL_DIR = $(PROJECT_ROOT)/rtl/core/dma
SIM_TEST_DIR = $(PROJECT_ROOT)/sim/tests/unit/dma
COMMON_UTILS_DIR = $(PROJECT_ROOT)/verilator/common/utils
BUILD_DIR = obj_dir
SIM = $(BUILD_DIR)/Vwb_dma_tb

# Флаги компиляции - ВАЖНО: правильные пути
CFLAGS += -I$(COMMON_UTILS_DIR) -I$(SIM_TEST_DIR)
VERILATOR_FLAGS += -CFLAGS "$(CFLAGS)" -I$(RTL_DIR)

# Исходные файлы
VERILOG_SOURCES = \
    $(RTL_DIR)/wb_dma.sv \
    $(SIM_TEST_DIR)/wb_dma_tb.sv

CPP_SOURCES = \
    $(SIM_TEST_DIR)/wb_dma_simple.cpp

all: $(SIM)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(SIM): $(VERILOG_SOURCES) $(CPP_SOURCES) | $(BUILD_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module wb_dma_tb \
		--Mdir $(BUILD_DIR) \
		$(VERILOG_SOURCES) \
		$(CPP_SOURCES)

build: $(SIM)

run: $(SIM)
	@echo "=== Запуск симуляции ==="
	$(SIM)
	@echo "=== Симуляция завершена ==="

run_vcd: $(SIM)
	@echo "=== Запуск симуляции с генерацией VCD ==="
	$(SIM) +vcd
	@echo "=== Симуляция завершена, VCD файл создан ==="

wave: run_vcd
	@echo "=== Запуск GTKWave для просмотра волн ==="
	gtkwave wave.vcd || echo "GTKWave не установлен"

clean:
	rm -rf $(BUILD_DIR) wave.vcd

.PHONY: all build run run_vcd wave clean
VERILATOR = verilator
VERILATOR_FLAGS = -Wall --cc --exe --build --trace --debug 
#--gdb
INCLUDE_DIR = include
SRC_DIR = ../../../../rtl/core/dma
CURRENT_DIR = $(shell pwd)
BUILD_DIR = $(CURRENT_DIR)/obj_dir
SIM = $(BUILD_DIR)/wb_dma_simple

all: simple_build

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

simple: $(BUILD_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) wb_dma_tb.sv wb_dma_simple.cpp wb_dma_utils.cpp $(SRC_DIR)/wb_dma.sv \
	-CFLAGS "-I$(INCLUDE_DIR)" -o $(SIM)

simple_build: simple

simple_run: simple_build
	@echo "=== Запуск симуляции ==="
	$(SIM)
	@echo "=== Симуляция завершена ==="

simple_run_vcd: simple_build
	@echo "=== Запуск симуляции с генерацией VCD ==="
	$(SIM) +vcd
	@echo "=== Симуляция завершена, VCD файл создан: $(BUILD_DIR)/wave.vcd ==="

simple_wave: simple_run_vcd
	@echo "=== Запуск GTKWave для просмотра волн ==="
	gtkwave simple.vcd || echo "GTKWave не установлен"

clean:
	rm -rf obj_dir $(BUILD_DIR)

.PHONY: all simple simple_build simple_run simple_run_vcd simple_wave clean
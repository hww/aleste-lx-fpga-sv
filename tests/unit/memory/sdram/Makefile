# ================== CONFIGURATION ======================
VERILATOR = verilator
VERILATOR_FLAGS = -Wall --cc --exe --build --trace --timing \
                  --Wno-EOFNEWLINE --Wno-UNUSEDSIGNAL -Wno-UNDRIVEN \
                  --Wno-UNUSEDPARAM --public-flat-rw --timescale "1ns/1ps" \
                  --trace-fst  # Используем FST вместо VCD - меньше размер, быстрее

SRC_DIR = ../../../../src/components/memory/sdram
TB_DIR = .

# ================== TARGET NAMES =======================
DUT_MODULE = sdram_wishbone
EXECUTABLE = obj_dir/V$(DUT_MODULE)

# ================== SOURCE FILES =======================
DUT_SOURCE = $(SRC_DIR)/sdram_wishbone.sv
TEST_SOURCE = test_sdram_controller.cpp

# ================== DIRECTORY SETUP ====================
OBJ_DIR = obj_dir
WAVES_DIR = waves

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(WAVES_DIR):
	mkdir -p $(WAVES_DIR)

# ================== MAIN TEST TARGET ===================

.PHONY: build run waves view debug clean clean_waves distclean info help

# Основная цель - билд
build: $(OBJ_DIR)
	@echo "=== BUILDING SDRAM CONTROLLER TEST ==="
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module $(DUT_MODULE) \
		-I$(SRC_DIR) \
		$(DUT_SOURCE) \
		$(TEST_SOURCE)
	@echo "=== BUILD COMPLETE ==="
	@echo "Executable: $(EXECUTABLE)"

# Запуск теста (требует предварительного build)
run: build
	@echo "=== RUNNING SDRAM CONTROLLER TEST ==="
	@if [ -f "$(EXECUTABLE)" ]; then \
		$(EXECUTABLE); \
	else \
		echo "ERROR: Executable not found: $(EXECUTABLE)"; \
		echo "Run 'make build' first"; \
		exit 1; \
	fi

# Запуск с генерацией波形
waves: build
	@echo "=== RUNNING TEST WITH WAVE GENERATION ==="
	@if [ -f "$(EXECUTABLE)" ]; then \
		$(EXECUTABLE); \
		echo "=== WAVEFORM GENERATED: $(OBJ_DIR)/V$(DUT_MODULE).fst ==="; \
	else \
		echo "ERROR: Executable not found: $(EXECUTABLE)"; \
		exit 1; \
	fi

# Просмотр波形 в GTKWave
view: waves
	@echo "=== OPENING WAVES IN GTKWAVE ==="
	@if [ -f "$(OBJ_DIR)/V$(DUT_MODULE).fst" ]; then \
		gtkwave $(OBJ_DIR)/V$(DUT_MODULE).fst & \
	else \
		echo "ERROR: Waveform file not found"; \
		echo "Run 'make waves' first"; \
		exit 1; \
	fi

# Все в одном: билд + запуск +波形
all: build
	@echo "=== BUILDING AND RUNNING COMPLETE TEST ==="
	$(EXECUTABLE)
	@echo "=== TEST COMPLETE ==="

# ================== CLEANING ===========================

clean:
	@echo "=== CLEANING BUILD ==="
	rm -rf $(OBJ_DIR)

clean_waves:
	@echo "=== CLEANING WAVEFORMS ==="
	rm -rf $(WAVES_DIR)
	rm -f *.fst *.vcd

distclean: clean clean_waves
	@echo "=== DEEP CLEANING ==="
	rm -f *.log *.dump

# ================== INFO & HELP ========================

info:
	@echo "=== BUILD INFORMATION ==="
	@echo "DUT Source: $(DUT_SOURCE)"
	@if [ -f "$(DUT_SOURCE)" ]; then \
		echo "  ✓ Found"; \
	else \
		echo "  ✗ MISSING"; \
	fi
	@echo "Test Source: $(TEST_SOURCE)"
	@if [ -f "$(TEST_SOURCE)" ]; then \
		echo "  ✓ Found"; \
	else \
		echo "  ✗ MISSING"; \
	fi
	@echo "Executable: $(EXECUTABLE)"
	@if [ -f "$(EXECUTABLE)" ]; then \
		echo "  ✓ Built"; \
	else \
		echo "  ✗ Not built"; \
	fi

help:
	@echo "SDRAM Controller Test Makefile Targets:"
	@echo ""
	@echo "MAIN TARGETS:"
	@echo "  build        - Build test executable"
	@echo "  run          - Run test (requires build)"
	@echo "  waves        - Run test and generate waveform"
	@echo "  view         - Open waves in GTKWave (requires waves)"
	@echo "  all          - Build and run complete test"
	@echo ""
	@echo "CLEANING:"
	@echo "  clean        - Clean build files"
	@echo "  clean_waves  - Clean waveform files"
	@echo "  distclean    - Clean everything"
	@echo ""
	@echo "INFO:"
	@echo "  info         - Show build information"
	@echo "  help         - This help message"

# ================== DEFAULT TARGET =====================
.DEFAULT_GOAL := help
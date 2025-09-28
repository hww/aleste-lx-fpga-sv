# Testbench Makefile
# Компиляция и запуск тестов для проекта llhdmi

# Tools
VERILATOR := verilator
CXX       := g++
MAKE      := make

# Verilator flags
VERILATOR_FLAGS := -Wall --cc --exe --trace --Wno-EOFNEWLINE

# Source directories
SRC_DIR    := ../../../src
LLHDMI_DIR := $(SRC_DIR)/components/video/llhdmi
CONFIG_DIR := $(SRC_DIR)/config

# Configuration - EDIT THESE LINES FOR DIFFERENT MODES:
# For 25MHz mode (640x480): Use -DCONFIG_25MHZ and config_25mhz.vh
# For 27MHz mode (720x480): Use -DCONFIG_27MHZ and config_27mhz.vh
# Configuration selection
CONFIG ?= 27mhz

# Set define based on configuration
ifeq ($(CONFIG), 27mhz)
    VERILATOR_DEFINE := -DCONFIG_27MHZ
    CONFIG_INCLUDE := config_27mhz.vh
else
    VERILATOR_DEFINE := -DCONFIG_25MHZ
    CONFIG_INCLUDE := config_25mhz.vh
endif

# Source files for different tests
HDMI_SOURCES := \
    $(LLHDMI_DIR)/llhdmi.v \
    $(LLHDMI_DIR)/vgatestsrc.v \
    $(LLHDMI_DIR)/tmds_encoder.v

# Pattern тесту нужны ВСЕ файлы, так как pattern.v использует llhdmi и vgatestsrc
PATTERN_SOURCES := \
    $(LLHDMI_DIR)/pattern.v \
    $(LLHDMI_DIR)/llhdmi.v \
    $(LLHDMI_DIR)/vgatestsrc.v \
    $(LLHDMI_DIR)/tmds_encoder.v

# Testbench targets
HDMI_TB_SRC    := llhdmi_tb.cpp
PATTERN_TB_SRC := pattern_tb.cpp

# Output files
HDMI_VCD    := llhdmi.vcd
PATTERN_PPM := pattern.ppm
PATTERN_VCD := pattern.vcd

.PHONY: all
all: hdmisim patternsim

# HDMI Testbench
.PHONY: hdmisim
hdmisim:
	@echo "Building HDMI testbench for $(CONFIG) mode..."
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_DEFINE) -I$(CONFIG_DIR) \
		--top-module llhdmi \
		$(HDMI_SOURCES) \
		$(HDMI_TB_SRC) \
		--exe
	cd obj_dir && $(MAKE) -f Vllhdmi.mk
	@echo "Running HDMI simulation ($(CONFIG))..."
	cd obj_dir && ./Vllhdmi
	@echo "VCD waveform: $(HDMI_VCD)"

# Pattern Testbench - исправлено: добавлены недостающие модули
.PHONY: patternsim
patternsim:
	@echo "Building pattern testbench for $(CONFIG) mode..."
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_DEFINE) -I$(CONFIG_DIR) \
		--top-module pattern \
		$(PATTERN_SOURCES) \
		$(PATTERN_TB_SRC) \
		--exe
	cd obj_dir && $(MAKE) -f Vpattern.mk
	@echo "Running pattern simulation ($(CONFIG))..."
	cd obj_dir && ./Vpattern > ../$(PATTERN_PPM)
	@echo "PPM output: $(PATTERN_PPM)"
	@echo "VCD waveform: $(PATTERN_VCD)"

# Конфигурационные цели
.PHONY: 25mhz 27mhz

25mhz:
	$(MAKE) CONFIG=25mhz

27mhz:
	$(MAKE) CONFIG=27mhz

# Быстрая сборка
.PHONY: hdmisim-fast
hdmisim-fast:
	@echo "Running HDMI simulation (fast) for $(CONFIG)..."
	cd obj_dir && $(MAKE) -f Vllhdmi.mk && ./Vllhdmi

.PHONY: patternsim-fast
patternsim-fast:
	@echo "Running pattern simulation (fast) for $(CONFIG)..."
	cd obj_dir && $(MAKE) -f Vpattern.mk && ./Vpattern > ../$(PATTERN_PPM)

# Конфигурационные быстрые сборки
.PHONY: hdmisim-25mhz hdmisim-27mhz patternsim-25mhz patternsim-27mhz

hdmisim-25mhz:
	$(MAKE) hdmisim CONFIG=25mhz

hdmisim-27mhz:
	$(MAKE) hdmisim CONFIG=27mhz

patternsim-25mhz:
	$(MAKE) patternsim CONFIG=25mhz

patternsim-27mhz:
	$(MAKE) patternsim CONFIG=27mhz

# Просмотр результатов
.PHONY: view-hdmi
view-hdmi: hdmisim
	@echo "Open VCD with gtkwave:"
	@echo "gtkwave $(HDMI_VCD) &"

.PHONY: view-pattern
view-pattern: patternsim
	@echo "Generated PPM file:"
	@echo "eog $(PATTERN_PPM) &"

# Конфигурационный просмотр
.PHONY: view-hdmi-25mhz view-hdmi-27mhz view-pattern-25mhz view-pattern-27mhz

view-hdmi-25mhz:
	$(MAKE) view-hdmi CONFIG=25mhz

view-hdmi-27mhz:
	$(MAKE) view-hdmi CONFIG=27mhz

view-pattern-25mhz:
	$(MAKE) view-pattern CONFIG=25mhz

view-pattern-27mhz:
	$(MAKE) view-pattern CONFIG=27mhz

# Очистка
.PHONY: clean
clean:
	rm -rf obj_dir
	rm -f $(HDMI_VCD) $(PATTERN_VCD) $(PATTERN_PPM)
	rm -f *.vcd *.fst *.ppm

.PHONY: clean-soft
clean-soft:
	rm -f $(HDMI_VCD) $(PATTERN_VCD) $(PATTERN_PPM)
	rm -f *.vcd *.fst *.ppm

# Конфигурационная информация
.PHONY: config-info
config-info:
	@echo "=== Current Configuration ==="
	@echo "Mode: $(CONFIG)"
	@echo "Define: $(VERILATOR_DEFINE)"
	@echo "Config file: $(CONFIG_INCLUDE)"
	@echo "Config path: $(CONFIG_DIR)/$(CONFIG_INCLUDE)"
	@if [ -f "$(CONFIG_DIR)/$(CONFIG_INCLUDE)" ]; then \
		echo "Config file: ✓ Found"; \
		echo "=== Config Content ==="; \
		head -20 $(CONFIG_DIR)/$(CONFIG_INCLUDE); \
	else \
		echo "Config file: ✗ Not found"; \
	fi

# Справка
.PHONY: help
help:
	@echo "=== Testbench Makefile Help ==="
	@echo ""
	@echo "Configuration targets:"
	@echo "  25mhz              - Set 25MHz mode (640x480)"
	@echo "  27mhz              - Set 27MHz mode (720x480)"
	@echo "  config-info        - Show current configuration"
	@echo ""
	@echo "Testbench targets:"
	@echo "  hdmisim            - Build and run HDMI testbench"
	@echo "  patternsim         - Build and run pattern testbench"
	@echo "  hdmisim-25mhz      - HDMI testbench in 25MHz mode"
	@echo "  hdmisim-27mhz      - HDMI testbench in 27MHz mode"
	@echo "  patternsim-25mhz   - Pattern testbench in 25MHz mode"
	@echo "  patternsim-27mhz   - Pattern testbench in 27MHz mode"
	@echo ""
	@echo "Fast rebuild targets:"
	@echo "  hdmisim-fast       - Fast rebuild and run HDMI"
	@echo "  patternsim-fast    - Fast rebuild and run pattern"
	@echo ""
	@echo "View results:"
	@echo "  view-hdmi          - Build and view HDMI results"
	@echo "  view-pattern       - Build and view pattern results"
	@echo "  view-hdmi-25mhz    - View HDMI results in 25MHz mode"
	@echo "  view-hdmi-27mhz    - View HDMI results in 27MHz mode"
	@echo ""
	@echo "Cleanup:"
	@echo "  clean              - Remove all generated files"
	@echo "  clean-soft         - Remove only output files (keep build)"
	@echo ""
	@echo "Miscellaneous:"
	@echo "  all                - Run both testbenches"
	@echo "  debug              - Debug file existence"
	@echo ""
	@echo "Current configuration: $(CONFIG)"

.PHONY: debug
debug:
	@echo "=== Debug Information ==="
	@echo "Configuration: $(CONFIG)"
	@echo "Define: $(VERILATOR_DEFINE)"
	@echo "Config include: $(CONFIG_INCLUDE)"
	@echo ""
	@echo "HDMI sources:"
	@for file in $(HDMI_SOURCES); do \
		if [ -f "$$file" ]; then \
			echo "  ✓ $$file"; \
		else \
			echo "  ✗ $$file"; \
		fi; \
	done
	@echo "Pattern sources:"
	@for file in $(PATTERN_SOURCES); do \
		if [ -f "$$file" ]; then \
			echo "  ✓ $$file"; \
		else \
			echo "  ✗ $$file"; \
		fi; \
	done
	@echo "Testbench sources:"
	@for file in $(HDMI_TB_SRC) $(PATTERN_TB_SRC); do \
		if [ -f "$$file" ]; then \
			echo "  ✓ $$file"; \
		else \
			echo "  ✗ $$file"; \
		fi; \
	done
	@echo ""
	@echo "Config file check:"
	@if [ -f "$(CONFIG_DIR)/$(CONFIG_INCLUDE)" ]; then \
		echo "  ✓ $(CONFIG_DIR)/$(CONFIG_INCLUDE)"; \
	else \
		echo "  ✗ $(CONFIG_DIR)/$(CONFIG_INCLUDE)"; \
	fi
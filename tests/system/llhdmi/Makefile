# Testbench Makefile
# Компиляция и запуск тестов для проекта llhdmi

# Tools
VERILATOR := verilator
CXX       := g++
MAKE      := make

# Verilator flags
VERILATOR_FLAGS := -Wall --cc --exe --trace

# Source directories
SRC_DIR    := ../../../src
LLHDMI_DIR := $(SRC_DIR)/components/video/llhdmi

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
	@echo "Building HDMI testbench..."
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module llhdmi \
		$(HDMI_SOURCES) \
		$(HDMI_TB_SRC) \
		--exe
	cd obj_dir && $(MAKE) -f Vllhdmi.mk
	@echo "Running HDMI simulation..."
	cd obj_dir && ./Vllhdmi
	@echo "VCD waveform: $(HDMI_VCD)"

# Pattern Testbench - исправлено: добавлены недостающие модули
.PHONY: patternsim
patternsim:
	@echo "Building pattern testbench..."
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module pattern \
		$(PATTERN_SOURCES) \
		$(PATTERN_TB_SRC) \
		--exe
	cd obj_dir && $(MAKE) -f Vpattern.mk
	@echo "Running pattern simulation..."
	cd obj_dir && ./Vpattern > ../$(PATTERN_PPM)
	@echo "PPM output: $(PATTERN_PPM)"
	@echo "VCD waveform: $(PATTERN_VCD)"

# Быстрая сборка
.PHONY: hdmisim-fast
hdmisim-fast:
	@echo "Running HDMI simulation (fast)..."
	cd obj_dir && $(MAKE) -f Vllhdmi.mk && ./Vllhdmi

.PHONY: patternsim-fast
patternsim-fast:
	@echo "Running pattern simulation (fast)..."
	cd obj_dir && $(MAKE) -f Vpattern.mk && ./Vpattern > ../$(PATTERN_PPM)

# Просмотр результатов
.PHONY: view-hdmi
view-hdmi: hdmisim
	@echo "Open VCD with gtkwave:"
	@echo "gtkwave $(HDMI_VCD) &"

.PHONY: view-pattern
view-pattern: patternsim
	@echo "Generated PPM file:"
	@echo "eog $(PATTERN_PPM) &"

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

# Справка
.PHONY: help
help:
	@echo "Testbench targets:"
	@echo "  hdmisim        - Build and run HDMI testbench"
	@echo "  patternsim     - Build and run pattern testbench"
	@echo "  hdmisim-fast   - Fast rebuild and run HDMI"
	@echo "  patternsim-fast - Fast rebuild and run pattern"
	@echo "  view-hdmi      - Build and view HDMI results"
	@echo "  view-pattern   - Build and view pattern results"
	@echo "  clean          - Remove all generated files"
	@echo "  clean-soft     - Remove only output files (keep build)"
	@echo "  all           - Run both testbenches"

.PHONY: debug
debug:
	@echo "=== Debug Information ==="
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
VERILATOR = verilator
VERILATOR_FLAGS = \
	-Wall --binary --trace --cc --bbox-unsup --exe --no-main --x-assign unique \
	--Wno-UNOPTFLAT \
	--Wno-UNUSEDSIGNAL \
	--Wno-CASEX \
	--x-assign unique \
	--x-initial unique \
	--trace-depth 10 \
	--public \
	--timing \
	--timescale "1ns/1ps"

# Source files
I8255_WB_SOURCES = tb_i8255_wb.sv ../../../../../rtl/third_party/io/i8255_wb.sv
CPP_I8255_WB_SOURCES = i8255_wb_test.cpp

I8255_SOURCES = tb_i8255.sv ../../../../../rtl/third_party/io/i8255.v
CPP_I8255_SOURCES = i8255_test.cpp

INCLUDE_DIR = -I../../../../../rtl/third_party/io

# Default target
all: i8255_wb_run

# ==================== WISHBONE VERSION ====================
i8255_wb_build:
	$(VERILATOR) $(VERILATOR_FLAGS) $(INCLUDE_DIR) \
		$(I8255_WB_SOURCES) $(CPP_I8255_WB_SOURCES) \
		--top-module tb_i8255_wb

i8255_wb_run: i8255_wb_build
	@echo "=== Running Wishbone i8255 Test ==="
	@./obj_dir/Vtb_i8255_wb || (echo -e "\n\033[31mTEST FAILED\033[0m"; exit 1)
	@echo -e "\n\033[32mTEST PASSED\033[0m"

i8255_wb_wave:
	@echo "=== Opening Waveform for Wishbone Version ==="
	gtkwave tb_i8255_wb.vcd &

# ==================== LEGACY VERSION ====================
i8255_build:
	$(VERILATOR) $(VERILATOR_FLAGS) $(INCLUDE_DIR) \
		$(I8255_SOURCES) $(CPP_I8255_SOURCES) \
		--top-module tb_i8255

i8255_run: i8255_build
	@echo "=== Running Legacy i8255 Test ==="
	@./obj_dir/Vtb_i8255 || (echo -e "\n\033[31mTEST FAILED\033[0m"; exit 1)
	@echo -e "\n\033[32mTEST PASSED\033[0m"

i8255_wave:
	@echo "=== Opening Waveform for Legacy Version ==="
	gtkwave tb_i8255.vcd &

# ==================== UTILITY TARGETS ====================
clean:
	@echo "=== Cleaning Build Files ==="
	rm -rf obj_dir *.vcd test.log

help:
	@echo "Available targets:"
	@echo "  i8255_wb_build    - Build Wishbone version"
	@echo "  i8255_wb_run      - Build and run Wishbone version"
	@echo "  i8255_wb_wave     - Open waveform for Wishbone version"
	@echo "  i8255_build       - Build legacy version"
	@echo "  i8255_run         - Build and run legacy version"
	@echo "  i8255_wave        - Open waveform for legacy version"
	@echo "  clean             - Clean build files"
	@echo "  all               - Default: run Wishbone version"

.PHONY: all \
	i8255_wb_build i8255_wb_run i8255_wb_wave \
	i8255_build i8255_run i8255_wave \
	clean help
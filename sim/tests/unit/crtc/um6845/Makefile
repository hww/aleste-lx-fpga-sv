VERILATOR = verilator
VERILATOR_FLAGS = \
	-Wall --cc --trace \
	--Wno-UNOPTFLAT \
	--Wno-UNUSEDSIGNAL \
	--Wno-CASEX \
	--x-assign unique \
	--x-initial unique \
	--timing \
	--timescale "1ns/1ps" \
	--converge-limit 2000

# Source files
UM6845R_SOURCES = tb_um6845r.sv ../../../../../rtl/third_party/crtc/UM6845R.v
UM6845R_CPP_SOURCES = um6845r_test.cpp
UM6845R_TOP_MODULE = tb_um6845r

UM6845R_WB_SOURCES = tb_um6845r_wb.sv ../../../../../rtl/third_party/crtc/UM6845R.v ../../../../../rtl/third_party/crtc/UM6845R_wb.v
UM6845R_WB_CPP_SOURCES = um6845r_wb_test.cpp
UM6845R_WB_TOP_MODULE = tb_um6845r_wb

# Default target
all: um6845r_run

# ==================== LEGACY VERSION ====================
um6845r_build:
	$(VERILATOR) $(VERILATOR_FLAGS) $(UM6845R_SOURCES) \
		--top-module $(UM6845R_TOP_MODULE) --exe $(UM6845R_CPP_SOURCES)

um6845r_compile: um6845r_build
	cd obj_dir && make -j$(nproc) -f V$(UM6845R_TOP_MODULE).mk

um6845r_run: um6845r_compile
	@echo "=== Running Legacy UM6845R Test ==="
	@./obj_dir/V$(UM6845R_TOP_MODULE)

um6845r_wave:
	@echo "=== Opening Waveform for Legacy Version ==="
	gtkwave $(UM6845R_TOP_MODULE).vcd &

# ==================== WISHBONE VERSION ====================
um6845r_wb_build:
	$(VERILATOR) $(VERILATOR_FLAGS) $(UM6845R_WB_SOURCES) \
		--top-module $(UM6845R_WB_TOP_MODULE) --exe $(UM6845R_WB_CPP_SOURCES)

um6845r_wb_compile: um6845r_wb_build
	cd obj_dir && make -j$(nproc) -f V$(UM6845R_WB_TOP_MODULE).mk

um6845r_wb_run: um6845r_wb_compile
	@echo "=== Running Wishbone UM6845R Test ==="
	@./obj_dir/V$(UM6845R_WB_TOP_MODULE)

um6845r_wb_wave:
	@echo "=== Opening Waveform for Wishbone Version ==="
	gtkwave $(UM6845R_WB_TOP_MODULE).vcd &

# ==================== UTILITY TARGETS ====================
clean:
	@echo "=== Cleaning Build Files ==="
	rm -rf obj_dir *.vcd *.log

help:
	@echo "Available targets:"
	@echo "  um6845r_build       - Build legacy version"
	@echo "  um6845r_compile     - Compile legacy version"
	@echo "  um6845r_run         - Run legacy version"
	@echo "  um6845r_wave        - Open waveform for legacy version"
	@echo ""
	@echo "  um6845r_wb_build    - Build Wishbone version"
	@echo "  um6845r_wb_compile  - Compile Wishbone version"
	@echo "  um6845r_wb_run      - Run Wishbone version"
	@echo "  um6845r_wb_wave     - Open waveform for Wishbone version"
	@echo ""
	@echo "  clean               - Clean build files"
	@echo "  help                - Show this help"
	@echo "  all                 - Default: run legacy version"

# Aliases for backward compatibility
build: um6845r_build
compile: um6845r_compile
run: um6845r_run
wave: um6845r_wave

.PHONY: all \
	um6845r_build um6845r_compile um6845r_run um6845r_wave \
	um6845r_wb_build um6845r_wb_compile um6845r_wb_run um6845r_wb_wave \
	clean help build compile run wave
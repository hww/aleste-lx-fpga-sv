# Tools
VERILATOR = verilator
SYNTH_Tool = yosys
PROG_Tool = openFPGALoader
VERILATOR_FLAGS = \
	--cc --exe --build --trace --no-timing \
	--Wno-UNOPTFLAT \
	--Wno-UNUSEDSIGNAL \
	--Wno-WIDTHEXPAND \
	--Wno-SYNCASYNCNET \
	--Wno-BLKSEQ \
	--Wno-CASEINCOMPLETE \
	--Wno-CASEX \
	--x-assign unique \
	--x-initial unique \
	--trace-depth 10 \
	--timing \
	--timescale "1ns/1ps" \
	--converge-limit 2000


LINT_CLK = verilator --lint-only -Irtl/core/clock --top-module clk_gen \
	rtl/core/clock/clk_gen.v \
	rtl/core/clock/pll_main_stub.v \
	rtl/core/clock/ice40_prim_stub.v
	
LINT_SDRAM = verilator --lint-only rtl/core/memory/sdram_controller.v

lint:
	$(LINT_CLK)
	$(LINT_SDRAM)


# Targets
all: sim

# Simulation with Verilator
sim: sim-verilator-clk sim-verilator-sdram

# Simulation targets
sim-clk:
	verilator $(VERILATOR_FLAGS) \
	-Irtl/core/clock \
	sim/tests/unit/clock/tb_clk_gen.sv \
	rtl/core/clock/clk_gen.v \
	rtl/core/clock/pll_main_stub.v \
	rtl/core/clock/ice40_prim_stub.v \
	sim/verilator/main.cpp \
	--top-module tb_clk_gen \
	-o Vclk_gen

# make run-clk    # Тестируем генератор тактов
run-clk: sim-clk
	./Vclk_gen
wave-clk: 
	gtkwave tb_clk_gen.vcd &

sim-sdram:
	verilator $(VERILATOR_FLAGS) \
	rtl/core/memory/sdram_controller.v \
	sim/tests/unit/memory/tb_sdram_controller.sv \
	--top-module tb_sdram_controller \
	-o Vsdram_controller

# make run-sdram  # Тестируем контроллер памяти
run-sdram: sim-sdram
	./Vsdram_controller
wave-sdram: 
	gtkwave tb_sdram.vcd &

# Run all tests
test: run-clk run-sdram

# Synthesis
synth: 
	$(SYNTH_Tool) -p "synth_ice40 -top top -json hardware.json" \
	rtl/top.sv \
	rtl/core/clock/clk_gen.v \
	rtl/core/memory/sdram_controller.v

# Program FPGA
prog:
	$(PROG_Tool) -b ice_sugar_pro hardware.bin

clean:
	rm -rf obj_dir *.vcd *.json *.bin

.PHONY: all sim synth prog clean
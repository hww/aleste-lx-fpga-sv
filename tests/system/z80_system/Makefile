VERILATOR = verilator
VERILATOR_FLAGS = -Wall --cc --exe --build \
                  --trace --no-timing -Wno-fatal \
                  -Wno-UNUSEDSIGNAL \
                  -Wno-UNUSEDPARAM \
                  -Wno-PROCASSINIT \
                  -Wno-PROCASSWIRE \
                  -Wno-SYNCASYNCNET \
                  -Wno-CASEINCOMPLETE \
                  -I../../src/systems/aleste_system \
                  -I../../src/components/video/palette \
                  -I../../../src/config \
				  -Wno-PINCONNECTEMPTY \
                  -CFLAGS "-g -O0" \
                  -DVERILATOR \
                  -DSIMULATION \
                  -DCONFIG_27MHZ


SOURCES = \
    ../../../src/systems/aleste_system/z80_system.sv \
    ../../../src/systems/aleste_system/system_arbiter.sv \
    ../../../src/systems/aleste_system/z80_debug.sv \
    ../../../src/systems/aleste_video/video_ctrl.sv \
    ../../../src/systems/aleste_video/wb_arbiter.sv \
    ../../../src/systems/aleste_video/memory_arbiter.sv \
    ../../../src/systems/aleste_video/address_decoder.sv \
    ../../../src/components/io/uart2/uart.v \
    ../../../src/components/io/uart2/uart_rx.v \
    ../../../src/components/io/uart2/uart_tx.v \
    ../../../src/components/memory/mmu/mmu_native.sv \
    ../../../src/components/memory/mmu/mmu_legacy.sv \
    ../../../src/components/reset/reset_controller.sv \
    ../../../src/components/debug/jtag_debug.sv \
    ../../../src/components/memory/sdram/sdram_wishbone.sv \
    ../../../src/components/interconnect/wishbone/uart_bridge.sv \
    ../../../src/components/interconnect/wishbone/wb_wdt_simple.sv \
    ../../../src/components/cpu/tv80/tv80lx.v \
    ../../../src/components/cpu/tv80/tv80_core.v \
    ../../../src/components/cpu/tv80/tv80_reg.v \
    ../../../src/components/cpu/tv80/tv80_alu.v \
    ../../../src/components/cpu/tv80/tv80_mcode.v
# 
TEST_SOURCES_Z80 = \
    tb_z80_system.cpp 


all: z80

find_loops:
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--lint-only --top-module z80_system \
		$(SOURCES) $(TEST_SOURCES_Z80) \
		--Mdir obj_dir \
		-o Vsim \
	2>&1 | grep -i "loop\|latch\|unstable\|oscillat" || echo "No lint issues found (no loops/latches/unstable/oscillation detected)"

compile_z80:
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module z80_system \
		$(SOURCES) $(TEST_SOURCES_Z80) \
		--Mdir obj_dir \
		-o Vsim

z80: compile_z80
	./obj_dir/Vsim $(SIM_ARGS) --load test_06_native_mmu.bin

clean:
	rm -rf obj_dir waveform.vcd Vsim

.PHONY: all compile run wave clean
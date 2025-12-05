VERILATOR = verilator
VERILATOR_FLAGS = -Wall --cc --exe --build \
                  --trace --no-timing -Wno-fatal \
                  -I../../src/systems/aleste_system \
                  -I../../src/components/video/palette \
                  -I../../../src/config \
				  -Wno-PINCONNECTEMPTY \
                  -CFLAGS "-g -O0" \
                  -DVERILATOR \
                  -DSIMULATION \
                  -DCONFIG_27MHZ


SOURCES = \
    ../../../src/systems/aleste_system/aleste_system.sv \
    ../../../src/systems/aleste_system/z80_system.sv \
    ../../../src/systems/aleste_system/system_arbiter.sv \
    ../../../src/systems/aleste_system/address_decoder.sv \
    ../../../src/systems/aleste_system/z80_debug.sv \
    ../../../src/systems/aleste_video/video_ctrl.sv \
    ../../../src/systems/aleste_video/wb_arbiter.sv \
    ../../../src/systems/aleste_video/memory_arbiter.sv \
    ../../../src/components/io/uart/uart.v \
    ../../../src/components/io/uart/uart_rx.v \
    ../../../src/components/io/uart/uart_tx.v \
    ../../../src/components/io/uart/baud_tick_gen.v \
    ../../../src/components/video/mc6845mod/mc6845mod.sv \
    ../../../src/components/video/video_buffer/video_buffer.sv \
    ../../../src/components/video/llhdmi/llhdmi.v \
    ../../../src/components/video/llhdmi/tmds_encoder.v \
    ../../../src/components/video/llhdmi/OBUFDS.v \
    ../../../src/components/video/palette/cpc_colors.sv \
    ../../../src/components/video/palette/msx_colors.sv \
    ../../../src/components/video/palette/color_palette.sv \
    ../../../src/components/video/hdmi_scaler/dual_port_ram.sv \
    ../../../src/components/video/hdmi_scaler/hdmi_scaler.sv \
    ../../../src/components/video/pixel_pipeline/pixel_pipeline.sv \
    ../../../src/components/memory/mmu/mmu_native.sv \
    ../../../src/components/memory/mmu/mmu_legacy.sv \
    ../../../src/components/reset/reset_controller.sv \
    ../../../src/components/memory/sdram/sdram_wishbone.sv \
    ../../../src/components/interconnect/wishbone/uart_bridge.sv \
    ../../../src/components/interconnect/wishbone/wb_wdt_simple.sv \
    ../../../src/components/cpu/tv80/tv80s.v \
    ../../../src/components/cpu/tv80/tv80_core.v \
    ../../../src/components/cpu/tv80/tv80_reg.v \
    ../../../src/components/cpu/tv80/tv80_alu.v \
    ../../../src/components/cpu/tv80/tv80_mcode.v
# 
TEST_SOURCES = \
    tb_aleste.cpp \
    ODDRX1F.v \
    OBUFDS.v \
    video_pll.v

all: compile run

find_loops:
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--lint-only --top-module aleste_system \
		$(SOURCES) $(TEST_SOURCES) \
		--Mdir obj_dir \
		-o Vsim \
	2>&1 | grep -i "loop\|latch\|unstable\|oscillat" || echo "No lint issues found (no loops/latches/unstable/oscillation detected)"
compile:
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module aleste_system \
		$(SOURCES) $(TEST_SOURCES) \
		--Mdir obj_dir \
		-o Vsim

run: compile
	./obj_dir/Vsim $(SIM_ARGS)

wave:
	gtkwave waveform.vcd &

clean:
	rm -rf obj_dir waveform.vcd Vsim

.PHONY: all compile run wave clean
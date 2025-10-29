VERILATOR = verilator
VERILATOR_FLAGS = \
	-Wall --binary --trace --cc --bbox-unsup --exe --no-main \
	--Wno-UNOPTFLAT \
	--Wno-UNUSEDSIGNAL \
	--Wno-CASEX \
	--Wno-WIDTHEXPAND \
	--Wno-PROCASSINIT \
	--Wno-UNUSEDPARAM \
	--Wno-WIDTHTRUNC \
	--x-assign unique \
	--x-initial unique \
	--trace-depth 10 \
	--public \
	--timing \
	--timescale "1ns/1ps"

# Source files
PROJECT_ROOT=../../../..
UART_BRIDGE_SOURCES = \
                     $(PROJECT_ROOT)/src/components/interconnect/wishbone/uart_bridge.sv \
                     $(PROJECT_ROOT)/src/components/io/uart/uart.v \
                     $(PROJECT_ROOT)/src/components/io/uart/baud_tick_gen.v \
                     $(PROJECT_ROOT)/src/components/io/uart/uart_rx.v \
                     $(PROJECT_ROOT)/src/components/io/uart/uart_tx.v

CPP_UART_BRIDGE_SOURCES = uart_bridge_test.cpp

INCLUDE_DIR = -I$(PROJECT_ROOT)/src/components/io/uart

# Default target
all: uart_bridge_run

# ==================== UART BRIDGE TEST ====================
uart_bridge_build:
	$(VERILATOR) $(VERILATOR_FLAGS) $(INCLUDE_DIR) \
		$(UART_BRIDGE_SOURCES) $(CPP_UART_BRIDGE_SOURCES) \
		--top-module uart_bridge

uart_bridge_run: uart_bridge_build
	@echo "=== Running UART Bridge Test ==="
	@./obj_dir/Vuart_bridge || (echo -e "\n\033[31mTEST FAILED\033[0m"; exit 1)
	@echo -e "\n\033[32mTEST PASSED\033[0m"

uart_bridge_wave:
	@echo "=== Opening Waveform for UART Bridge ==="
	gtkwave uart_bridge.vcd &

# ==================== UTILITY TARGETS ====================
clean:
	@echo "=== Cleaning Build Files ==="
	rm -rf obj_dir *.vcd test.log

help:
	@echo "Available targets:"
	@echo "  uart_bridge_build  - Build UART Bridge test"
	@echo "  uart_bridge_run    - Build and run UART Bridge test"
	@echo "  uart_bridge_wave   - Open waveform for UART Bridge"
	@echo "  clean              - Clean build files"
	@echo "  all                - Default: run UART Bridge test"

.PHONY: all uart_bridge_build uart_bridge_run uart_bridge_wave clean help
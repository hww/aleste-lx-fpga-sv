VERILATOR = verilator
VERILATOR_FLAGS = \
	-Wall --cc --exe --build --trace \
	--Wno-UNOPTFLAT \
	--Wno-UNUSEDSIGNAL \
	--Wno-CASEX \
	--x-assign unique \
	--x-initial unique \
	--timing \
	--debug \
	--timescale "1ns/1ps" \
	--converge-limit 2000

# Директории
PROJECT_ROOT = ../../../..
RTL_DIR = $(PROJECT_ROOT)/rtl/core/ipc
SIM_TEST_DIR = $(PROJECT_ROOT)/sim/tests/unit/ipc
BUILD_DIR = obj_dir
SIM = $(BUILD_DIR)/Vipc_mailbox_tb

# Флаги компиляции
CFLAGS += -I$(SIM_TEST_DIR)
VERILATOR_FLAGS += -CFLAGS "$(CFLAGS)" -I$(RTL_DIR)

# Исходные файлы
VERILOG_SOURCES = $(RTL_DIR)/ipc_mailbox.sv $(SIM_TEST_DIR)/ipc_mailbox_tb.sv
CPP_SOURCES = $(SIM_TEST_DIR)/ipc_mailbox_test.cpp $(SIM_TEST_DIR)/wb_ipc_utils.cpp

all: $(SIM)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(SIM): $(VERILOG_SOURCES) $(CPP_SOURCES)
	$(VERILATOR) $(VERILATOR_FLAGS) --top-module ipc_mailbox_tb --Mdir $(BUILD_DIR) $(VERILOG_SOURCES) $(CPP_SOURCES)

run: $(SIM)
	./$(SIM)

clean:
	rm -rf $(BUILD_DIR) *.vcd

wave: run
	gtkwave ipc_mailbox_tb.vcd

gwave: run
	gtkwave ipc_mailbox_tb.gtkw

.PHONY: all run clean wave
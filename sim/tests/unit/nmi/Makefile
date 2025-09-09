VERILATOR = verilator
VERILATOR_FLAGS = \
	-Wall --cc --exe --build --trace \
	--Wno-UNOPTFLAT \
	--Wno-UNUSEDSIGNAL \
	--Wno-CASEINCOMPLETE \
	--Wno-CASEX \
	--x-assign unique \
	--x-initial unique \
	--timing \
	--debug \
	--timescale "1ns/1ps" \
	--converge-limit 2000

# Директории
PROJECT_ROOT = ../../../..
RTL_DIR = $(PROJECT_ROOT)/rtl/core/nmi
SIM_TEST_DIR = $(PROJECT_ROOT)/sim/tests/unit/nmi
BUILD_DIR = obj_dir
SIM = $(BUILD_DIR)/Vwb_z80_nmi_tb

# Флаги компиляции
CFLAGS += -I$(SIM_TEST_DIR)
VERILATOR_FLAGS += -CFLAGS "$(CFLAGS)" -I$(RTL_DIR)

# Исходные файлы
VERILOG_SOURCES = $(RTL_DIR)/wb_z80_nmi_ctrl.sv $(SIM_TEST_DIR)/wb_z80_nmi_tb.sv
CPP_SOURCES = $(SIM_TEST_DIR)/wb_z80_nmi.cpp $(SIM_TEST_DIR)/wb_nmi_utils.cpp

all: $(SIM)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(SIM): $(VERILOG_SOURCES) $(CPP_SOURCES)
	$(VERILATOR) $(VERILATOR_FLAGS) --top-module wb_z80_nmi_tb --Mdir $(BUILD_DIR) $(VERILOG_SOURCES) $(CPP_SOURCES)

run: $(SIM)
	./$(SIM)

clean:
	rm -rf $(BUILD_DIR) *.vcd

wave: 
	gtkwave wb_z80_nmi_tb.vcd

gwave: 
	gtkwave wb_z80_nmi_tb.gtkw

.PHONY: all run clean wave
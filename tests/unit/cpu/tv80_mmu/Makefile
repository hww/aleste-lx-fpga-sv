VERILATOR = verilator
VERILATOR_FLAGS_TV80 = \
	--Wno-SYNCASYNCNET \
	--Wno-BLKSEQ \
	--Wno-UNUSEDPARAM \
	--Wno-PINCONNECTEMPTY
VERILATOR_FLAGS = \
	-Wall --binary --trace --cc --exe --bbox-unsup --x-assign unique \
	--Wno-UNUSEDSIGNAL \
	--Wno-WIDTHEXPAND \
	--x-assign unique \
	--x-initial unique \
	--public \
	--timing \
	--timescale "1ns/1ps"

# Директории
RTL_MMU_DIR = ../../../../rtl/core/mmu
RTL_TV80_DIR = ../../../../rtl/third_party/cpu/tv80
TEST_DIR = .

# Источники TV80 (ВСЕ необходимые файлы!)
TV80_SOURCES = \
	$(RTL_TV80_DIR)/tv80s.v \
	$(RTL_TV80_DIR)/tv80_alu.v \
	$(RTL_TV80_DIR)/tv80_core.v \
	$(RTL_TV80_DIR)/tv80_mcode.v \
	$(RTL_TV80_DIR)/tv80_reg.v

# Источники MMU
MMU_SOURCES = \
	$(RTL_MMU_DIR)/mmu_native.sv \
	$(RTL_MMU_DIR)/mmu_legacy.sv

# Top-level модуль
TOP_SOURCE = $(RTL_MMU_DIR)/tv80_lx_wb.sv

# Testbench
CPP_SOURCE = $(TEST_DIR)/tv80_lx_wb_test.cpp

# Все исходники в правильном порядке
SOURCES = $(TV80_SOURCES) $(MMU_SOURCES) $(TOP_SOURCE) $(CPP_SOURCE)

# Include директории
INCLUDE_DIR = -I$(RTL_MMU_DIR) -I$(RTL_TV80_DIR)

# Имя исполняемого файла
EXECUTABLE = obj_dir/Vtv80_lx_wb

all: run

build:
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_FLAGS_TV80) $(INCLUDE_DIR) $(SOURCES) --top-module tv80_lx_wb

run: build
	@./$(EXECUTABLE) || (echo -e "\n\033[31mTEST FAILED\033[0m"; exit 1)
	@echo -e "\n\033[32mTEST PASSED\033[0m"

wave:
	gtkwave tv80_lx_wb.vcd &

clean:
	rm -rf obj_dir *.vcd *.log

.PHONY: all build run wave clean
OBJ_DIR = obj_dir
VERILATOR = verilator

# Автоматическое определение путей
VERILATOR_ROOT = $(shell $(VERILATOR) --getenv VERILATOR_ROOT 2>/dev/null || echo /usr/share/verilator)
VERILATOR_DIR = $(VERILATOR_ROOT)/include

# Проверка существования include-файлов
ifeq ($(wildcard $(VERILATOR_DIR)/verilated.cpp),)
    $(error Verilator include files not found in $(VERILATOR_DIR). Please install verilator and libverilated-dev)
endif

VERILATOR_FLAGS = --trace --cc --bbox-unsup --x-assign unique

all: u765_tb run

$(OBJ_DIR)/Vu765_tb.cpp: u765_test.sv u765.sv
	@mkdir -p $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) --top-module u765_test -cc $^

u765_tb: $(OBJ_DIR)/Vu765_tb.cpp u765_tb.cpp
	g++ \
	-I$(OBJ_DIR) \
	-I$(VERILATOR_DIR) \
	$(VERILATOR_DIR)/verilated.cpp \
	$(VERILATOR_DIR)/verilated_vcd_c.cpp \
	$(VERILATOR_DIR)/verilated_threads.cpp \
	u765_tb.cpp \
	$(wildcard $(OBJ_DIR)/Vu765_test*.cpp) \
	-o u765_tb \
	-pthread

run: u765_tb
	@echo "[Makefile] Test started"
	./u765_tb
	@echo "[Makefile] Test completed"

clean:
	rm -rf $(OBJ_DIR) u765_tb

.PHONY: all clean
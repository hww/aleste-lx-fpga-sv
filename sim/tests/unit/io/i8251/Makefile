VERILATOR = verilator
VERILATOR_FLAGS = \
	-Wall --cc --trace \
	--Wno-UNOPTFLAT \
	--Wno-UNUSEDSIGNAL \
	--Wno-WIDTHEXPAND \
	--Wno-SYNCASYNCNET \
	--Wno-CASEX \
	--x-assign unique \
	--x-initial unique \
	--timing \
	--timescale "1ns/1ps" \
	--converge-limit 2000 \
	--trace-fst \
	--trace-depth 10 \
	--public-flat-rw 

SOURCES = tb_i8251.sv ../../../../../rtl/third_party/io/i8251.v
CPP_SOURCES = i8251_test.cpp
TOP_MODULE = tb_i8251

all: run

build:
	$(VERILATOR) $(VERILATOR_FLAGS) $(SOURCES) --top-module $(TOP_MODULE) --exe $(CPP_SOURCES)

compile: build
	cd obj_dir && make -j$(nproc) -f V$(TOP_MODULE).mk

run: compile
	@./obj_dir/V$(TOP_MODULE)

wave:
	gtkwave $(TOP_MODULE).vcd &

clean:
	rm -rf obj_dir *.vcd *.log

.PHONY: all build compile run wave clean
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

SOURCES = tb_um6845r.sv ../../../../rtl/third_party/crtc/UM6845R.v
CPP_SOURCES = um6845r_test.cpp
TOP_MODULE = tb_um6845r

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
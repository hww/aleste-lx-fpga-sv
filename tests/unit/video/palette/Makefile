# Makefile
unexport VERILATOR_ROOT
VERILATOR = /home/valery/oss-cad-suite/bin/verilator
VERILATOR_FLAGS = -Wall --cc --exe --build --trace-fst -I. --trace \
	-Wno-WIDTHTRUNC \
	-Wno-WIDTH \
	-Wno-UNUSEDPARAM \
	-Wno-UNUSEDSIGNAL \
	-Wno-CASEINCOMPLETE \
	-CFLAGS "-g -O0"

RTL_PATH = ../../../../src/components/video/mc6845mod
SOURCES = \
    $(RTL_PATH)/mc6845mod.sv \
    mc6845mod_test.cpp

TARGET = Vmc6845mod

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(VERILATOR) $(VERILATOR_FLAGS) $(SOURCES)

run: $(TARGET)
	./obj_dir/$(TARGET)

wave: run
	gtkwave mc6845_test.fst &

simulation: run
	gtkwave mc6845_test.fst mc6845_test.gtkw &

clean:
	rm -rf obj_dir mc6845_test.fst

.PHONY: all run wave clean
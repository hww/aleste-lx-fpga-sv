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

RTL_PATH = ../../../../src/components/video/palette
SOURCES = \
    $(RTL_PATH)/color_palette.sv \
    $(RTL_PATH)/cpc_colors.sv \
    tb_color_palette.cpp

TARGET = Vcolor_palette

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(VERILATOR) $(VERILATOR_FLAGS) $(SOURCES)

run: $(TARGET)
	./obj_dir/$(TARGET)

wave: run
	gtkwave color_palette.fst &

simulation: run
	gtkwave color_palette.fst color_palette.gtkw &

clean:
	rm -rf obj_dir color_palette.fst

.PHONY: all run wave clean
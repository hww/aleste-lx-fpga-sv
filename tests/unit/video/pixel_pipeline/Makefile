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

RTL_PATH = ../../../../src/components/video/pixel_pipeline
SOURCES = \
    $(RTL_PATH)/pixel_pipeline.sv \
    tb_pixel_pipeline.cpp

TARGET = Vmc6845mod

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(VERILATOR) $(VERILATOR_FLAGS) $(SOURCES)

run: $(TARGET)
	./obj_dir/$(TARGET)

wave: run
	gtkwave pixel_pipeline.fst &

simulation: run
	gtkwave pixel_pipeline.fst pixel_pipeline.gtkw &

clean:
	rm -rf obj_dir pixel_pipeline.fst

.PHONY: all run wave clean
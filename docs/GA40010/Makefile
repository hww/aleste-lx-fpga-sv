OBJ_DIR=obj_dir
VERILATOR_DIR=/opt/oss-cad-suite/share/verilator/include
VERILATOR_BIN=/opt/oss-cad-suite/bin/verilator
HDL_FILES = ga40010_test.v ga40010.sv syncgen.v syncgen_sync.v casgen.v video.sv rslatch.v ../UM6845R.v

all: ga40010_tb

# Компиляция Verilator
${OBJ_DIR}/Vga40010_test.mk: ${HDL_FILES}
	${VERILATOR_BIN} --Wno-PINMISSING --Wno-MULTIDRIVEN --trace --top-module ga40010_test -cc ${HDL_FILES}

# Сборка используя сгенерированный Makefile от Verilator
ga40010_tb: ga40010_tb.cpp ${OBJ_DIR}/Vga40010_test.mk
	cd ${OBJ_DIR} && make -f Vga40010_test.mk
	g++ -I${OBJ_DIR} -I${VERILATOR_DIR} \
		${VERILATOR_DIR}/verilated.cpp \
		${VERILATOR_DIR}/verilated_vcd_c.cpp \
		${VERILATOR_DIR}/verilated_threads.cpp \
		ga40010_tb.cpp \
		${OBJ_DIR}/Vga40010_test__ALL.a \
		-DOPT=-DVL_DEBUG -o ga40010_tb

video: video.png

video.png: video.rgb
	rm -f video.png
	ffmpeg -vcodec rawvideo -f rawvideo -pix_fmt rgb444 -s 1024x312 -i video.rgb -f image2 -vcodec png video.png
	display video.png

clean:
	rm -rf ${OBJ_DIR} ga40010_tb video.rgb video.png

.PHONY: all clean video

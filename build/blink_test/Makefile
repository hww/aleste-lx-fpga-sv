TARGET=blink
TOP=blink

OBJS+=blink.v rst_gen.v

all: ${TARGET}.bit

$(TARGET).json: $(OBJS)
	yosys -p "synth_ecp5 -json $@" $(OBJS)

$(TARGET)_out.config: $(TARGET).json
	nextpnr-ecp5 --25k --package CABGA256 --speed 6 --json $< --textcfg $@ --lpf $(TARGET).lpf --freq 65

$(TARGET).bit: $(TARGET)_out.config
	ecppack --svf ${TARGET}.svf $< $@

${TARGET}.svf : ${TARGET}.bit

program: ${TARGET}.svf
	openFPGALoader --vid=0x1d50 --pid=0x602b --freq 500000 -c cmsisdap $(TARGET).bit

clean:
	rm -f *.svf *.bit *.config *.ys

.PHONY: prog clean

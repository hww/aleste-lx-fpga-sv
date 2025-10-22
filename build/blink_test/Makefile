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

program: $(BITSTREAM)
	openocd -f icelink.cfg

# Program to Flash (permanent)
flash: $(BITSTREAM)
	@echo "Programming to Flash at 0x200000..."
	icesprog -w $(BITSTREAM) -o 0x200000
	
ocd: $(TARGET).bit
	openocd -f icelink.cfg 

clean:
	rm -f *.svf *.bit *.config *.ys

.PHONY: prog clean

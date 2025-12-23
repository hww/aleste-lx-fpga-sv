TARGET = aleste
SOURCES = src/main.c drivers/screen.asm  drivers/memory.asm  drivers/console.c src/syscalls.asm 

all: clean compile move

compile:
	zcc +z80 -vn -O3 -startup=0 -clib=new \
	  -pragma-define:CRT_ORG_CODE=0x0000 \
	  -pragma-define:REGISTER_SP=0x7F00 \
	  $(SOURCES) \
	  -o $(TARGET)

move:
	mkdir -p output
	mv $(TARGET)_CODE.bin output/$(TARGET).bin 2>/dev/null || true
	rm -f $(TARGET)*.bin $(TARGET)*.map $(TARGET)*.def 2>/dev/null || true
	@echo "✅ output/$(TARGET).bin создан"
	@wc -c < output/$(TARGET).bin | xargs echo "Размер: байт"

clean:
	rm -rf output build 2>/dev/null || true
	rm -f *.bin *.map *.def *.asm *.i *.sym *.reloc 2>/dev/null || true
	rm -f $(TARGET)* 2>/dev/null || true
	@echo "🧹 Очищено"

.PHONY: all clean compile move
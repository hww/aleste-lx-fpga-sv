TARGET = aleste
SOURCES = main.c \
	kernel/crt0_aleste.asm \
	kernel/syscalls.asm \
	kernel/process.asm \
	kernel/system_info.asm \
	drivers/audio.asm \
	drivers/video.asm  \
	drivers/mmu.asm \
	drivers/mmu_ext.asm \
	drivers/font_win1252.asm \
	drivers/disk_ops.asm \
	drivers/filesystem.asm \
	drivers/graphics.asm \
	drivers/interrupts.asm \
	drivers/keyboard.asm \
	drivers/network.asm \
	std/console.c 

all: clean compile
#	  -pragma-define:CRT_ORG_CODE=0x0000 \

compile:
	zcc +z80 -vn -O3 -startup=0 \
      -zorg=0x0200 \
  	  -pragma-define:CRT_INTERRUPT_MODE=1 \
	  $(SOURCES) \
	  -o aleste \
	  -create-app
	
	mkdir -p output
	
	# Создаём 64K образ
	dd if=/dev/zero of=output/$(TARGET).bin bs=1 count=65536 2>/dev/null

	# Инициалайзер с 0x0000
	dd if=$(TARGET)_code_crt_start.bin of=output/$(TARGET).bin conv=notrunc 2>/dev/null

	# Основной код с 0x0200
	dd if=$(TARGET)_CODE.bin of=output/$(TARGET).bin conv=notrunc  bs=1 seek=512 2>/dev/null
	
	# Шрифт с 0x2000
	dd if=$(TARGET)_BANK_20_MYFONT.bin of=output/$(TARGET).bin conv=notrunc bs=1 seek=8192 2>/dev/null
	
	# Jump table с 0xFF00
	dd if=$(TARGET)_BANK_20_JUMPTABLE.bin of=output/$(TARGET).bin conv=notrunc bs=1 seek=65280 2>/dev/null
	
	@echo "✅ output/$(TARGET).bin создан"
	@wc -c < output/$(TARGET).bin | xargs echo "Размер: байт"

clean:
	rm -rf output build 2>/dev/null || true
	rm -f *.bin *.map *.def *.asm *.i *.sym *.reloc 2>/dev/null || true
	rm -f $(TARGET)* 2>/dev/null || true
	@echo "🧹 Очищено"

.PHONY: all clean compile
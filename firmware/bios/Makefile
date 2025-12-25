TARGET = aleste

DRV_SOURCES = \
	utils/utils_drv.asm \
	mmu/mmu_drv.asm \
	int/int_drv.asm \
	kbd/kbd_drv.asm \
	audio/audio_drv.asm \
	video/video_drv.asm \
	sysinfo/sysinfo_drv.asm \
	fs/fs_drv.asm \
	net/net_drv.asm \
	proc/proc_drv.asm

SOURCES = main.c \
	kernel/crt0_aleste.asm \
	libs/console.c 

all: clean compile

compile:
	zcc +z80 -vn -O3 -startup=0 \
      -zorg=0xC000 \
  	  -pragma-define:CRT_INTERRUPT_MODE=1 \
	  $(DRV_SOURCES) \
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
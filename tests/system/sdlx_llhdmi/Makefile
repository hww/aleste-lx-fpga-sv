# Симуляция
SIMULATOR := iverilog
VVP := vvp
GTKWAVE := gtkwave
VCD_TO_FST := vcd2fst

# Файлы для симуляции
TB_TOP := tb_sdlx_llhdmi_system.v
STUBS := system_pll.v video_pll.v OBUFDS.v
SRC_DIR := ../../../src
SRC_FILES := \
    $(SRC_DIR)/systems/sdlx_llhdmi/sdlx_llhdmi_system.v \
    $(SRC_DIR)/components/video/llhdmi/llhdmi.v \
    $(SRC_DIR)/components/video/llhdmi/vgatestsrc.v \
    $(SRC_DIR)/components/video/llhdmi/tmds_encoder.v

SV_FILES := \
    $(SRC_DIR)/components/video/sdlx/dual_port_ram.sv \
    $(SRC_DIR)/components/video/sdlx/hdmi_scaler.sv \
	$(SRC_DIR)/components/video/sdlx/pal_pattern.sv \
	$(SRC_DIR)/components/video/sdlx/pal_timing.sv

# Флаги компиляции
IVERILOG_FLAGS := -g2012 -DCONFIG_27MHZ -I$(SRC_DIR)/config

# Цели
.PHONY: all sim wave clean vcd fst

all: fst

# Компиляция и симуляция
compile: $(TB_TOP) $(STUBS) $(SRC_FILES) $(SV_FILES)
	$(SIMULATOR) $(IVERILOG_FLAGS) -o a.out \
		$(TB_TOP) $(STUBS) $(SRC_FILES) \
		$(SV_FILES)

# Только VCD симуляция
vcd: compile
	$(VVP) a.out

# Конвертация VCD в FST
fst: vcd
	$(VCD_TO_FST) -v sdlx_llhdmi_system.vcd -f sdlx_llhdmi_system.fst
	@echo "FST file generated: sdlx_llhdmi_system.fst"

# Симуляция с созданием FST
sim: fst

# Просмотр волновых форм
wave: fst
	$(GTKWAVE) sdlx_llhdmi_system.fst &

# Быстрая симуляция (100us)
quick:
	$(SIMULATOR) $(IVERILOG_FLAGS) -o a.out \
		$(TB_TOP) $(STUBS) $(SRC_FILES) \
		$(SV_FILES)
	# Симуляция 100us вместо 1ms
	$(VVP) -N a.out +timeout=100000
	$(VCD_TO_FST) -v sdlx_llhdmi_system.vcd -f sdlx_llhdmi_system.fst

# Очистка
clean:
	rm -f a.out *.fst *.vcd

# Информация о версиях
info:
	@echo "Icarus Verilog version:"
	$(SIMULATOR) -V
	@echo "GTKWave version:"
	$(GTKWAVE) --version || echo "GTKWave not found"
	@echo "vcd2fst:"
	which $(VCD_TO_FST) || echo "vcd2fst not installed"
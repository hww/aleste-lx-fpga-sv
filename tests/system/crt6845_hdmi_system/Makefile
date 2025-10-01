# Симуляция
SIMULATOR := iverilog
VVP := vvp
GTKWAVE := gtkwave

# Файлы для симуляции
TB_TOP := tb_crt6845_hdmi_system.sv
STUBS := system_pll.v video_pll.v OBUFDS.v
SRC_DIR := ../../../src
SRC_FILES := \
    $(SRC_DIR)/components/video/llhdmi/llhdmi.v \
    $(SRC_DIR)/components/video/llhdmi/tmds_encoder.v

SV_FILES := \
    $(SRC_DIR)/systems/crt6845_hdmi_system/crt6845_hdmi_system.sv \
    $(SRC_DIR)/components/video/hdmi_scaler/dual_port_ram.sv \
    $(SRC_DIR)/components/video/hdmi_scaler/hdmi_scaler.sv \
	$(SRC_DIR)/components/video/mc6845mod/mc6845mod.sv \
	$(SRC_DIR)/components/video/mc6845mod/simple_cgen.sv

# Флаги компиляции
IVERILOG_FLAGS := -g2012 -DCONFIG_27MHZ -I$(SRC_DIR)/config

# Цели
.PHONY: all sim wave clean quick info

all: sim

# Компиляция
compile: $(TB_TOP) $(STUBS) $(SRC_FILES) $(SV_FILES)
	$(SIMULATOR) $(IVERILOG_FLAGS) -o a.out \
		$(TB_TOP) $(STUBS) $(SRC_FILES) \
		$(SV_FILES)

# Симуляция с прямым выводом в FST
sim: compile
	$(VVP) -N a.out -fst crt6845_hdmi_system.fst

# Быстрая симуляция (100us) с FST
quick: compile
	$(VVP) -N a.out -fst crt6845_hdmi_system.fst +timeout=100000

# Просмотр волновых форм
wave: sim
	$(GTKWAVE) crt6845_hdmi_system.fst &

# Очистка
clean:
	rm -f a.out *.fst *.vcd

# Информация о версиях
info:
	@echo "Icarus Verilog version:"
	$(SIMULATOR) -V
	@echo "GTKWave version:"
	$(GTKWAVE) --version || echo "GTKWave not found"
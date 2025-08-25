# ModelSim Makefile for z80_wb_wrapper_tb

VSIM = vsim.exe
VLOG = vlog.exe
VLIB = vlib.exe
WORK = work
TB = z80_wb_wrapper_tb

Z80_FOLDER = ../../../../rtl/third_party/cpu/a-z80
RTL_FOLDER = ../../../../rtl/core/cpu
TCL_SCRIPT = scripts/run.tcl
GUI_OPT_SCRIPT = scripts/gui_opt.tcl

# SystemVerilog flags - только для SV файлов
SV_FLAGS = -sv +acc 

all: compile simulate

create_lib:
	$(VLIB) $(WORK)

Z80_FILES = \
	$(Z80_FOLDER)/address_latch.v \
	$(Z80_FOLDER)/address_mux.v \
	$(Z80_FOLDER)/address_pins.v \
	$(Z80_FOLDER)/alu.v \
	$(Z80_FOLDER)/alu_bit_select.v \
	$(Z80_FOLDER)/alu_control.v \
	$(Z80_FOLDER)/alu_core.v \
	$(Z80_FOLDER)/alu_flags.v \
	$(Z80_FOLDER)/alu_mux_2.v \
	$(Z80_FOLDER)/alu_mux_2z.v \
	$(Z80_FOLDER)/alu_mux_3z.v \
	$(Z80_FOLDER)/alu_mux_4.v \
	$(Z80_FOLDER)/alu_mux_8.v \
	$(Z80_FOLDER)/alu_prep_daa.v \
	$(Z80_FOLDER)/alu_select.v \
	$(Z80_FOLDER)/alu_shifter_core.v \
	$(Z80_FOLDER)/alu_slice.v \
	$(Z80_FOLDER)/bus_control.v \
	$(Z80_FOLDER)/bus_switch.v \
	$(Z80_FOLDER)/clk_delay.v \
	$(Z80_FOLDER)/data_pins.v \
	$(Z80_FOLDER)/data_switch.v \
	$(Z80_FOLDER)/data_switch_mask.v \
	$(Z80_FOLDER)/decode_state.v \
	$(Z80_FOLDER)/execute.v \
	$(Z80_FOLDER)/inc_dec.v \
	$(Z80_FOLDER)/inc_dec_2bit.v \
	$(Z80_FOLDER)/interrupts.v \
	$(Z80_FOLDER)/ir.v \
	$(Z80_FOLDER)/memory_ifc.v \
	$(Z80_FOLDER)/pin_control.v \
	$(Z80_FOLDER)/pla_decode.v \
	$(Z80_FOLDER)/reg_control.v \
	$(Z80_FOLDER)/reg_file.v \
	$(Z80_FOLDER)/reg_latch.v \
	$(Z80_FOLDER)/resets.v \
	$(Z80_FOLDER)/sequencer.v \
	$(Z80_FOLDER)/control_pins_n.v \
	$(Z80_FOLDER)/z80_top_direct_n.v

# Добавляем include path для поиска модулей
INCLUDE = +incdir+$(Z80_FOLDER)

compile: create_lib
	# Компилируем Verilog файлы Z80 (БЕЗ -sv флага!)
	$(VLOG) -work $(WORK) $(INCLUDE) $(Z80_FILES)
	
	# Компилируем SystemVerilog файлы (с -sv флагом)
	$(VLOG) $(SV_FLAGS) -work $(WORK) $(INCLUDE) $(RTL_FOLDER)/z80_wb_wrapper.sv
	$(VLOG) $(SV_FLAGS) -work $(WORK) $(INCLUDE) z80_wb_wrapper_tb.sv

simulate: compile
	mkdir -p log
	$(VSIM) -c -do "run 100us; quit" $(WORK).$(TB)

# Оптимизация дизайна
optimize: compile
	$(VSIM) -c -do "vopt work.$(TB) -o $(TB)_opt; quit"

# GUI с обычным дизайном
simulate_gui: compile
	$(VSIM) -gui +acc -do $(TCL_SCRIPT) 

# GUI с оптимизированным дизайном
simulate_gui_opt: optimize
	$(VSIM) -gui -do $(GUI_OPT_SCRIPT) $(WORK).$(TB)_opt

clean:
	rm -rf $(WORK) log transcript vsim.wlf modelsim.ini

.PHONY: all create_lib compile simulate optimize simulate_gui simulate_gui_opt clean
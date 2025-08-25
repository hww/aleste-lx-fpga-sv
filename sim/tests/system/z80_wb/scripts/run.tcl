# SDRAM Controller Simulation TCL Script
echo "=== SDRAM Controller Simulation ==="

set PrefSource(ShowInternal) 1
set PrefSignal(ShowInternal) 1

# Загружаем скомпилированный дизайн
vsim -voptargs=+acc work.z80_wb_wrapper_tb

delete wave *

# Clock and Reset
add wave -divider -height 15 "CLOCK & RESET"
add wave -color Gold -radix binary /z80_wb_wrapper_tb/clk_96mhz
add wave -color Orange -radix binary /z80_wb_wrapper_tb/reset

# Testbench Control Signals
add wave -divider -height 15 "TESTBENCH CONTROL"
add wave -color White -radix binary /z80_wb_wrapper_tb/nWAIT
add wave -color White -radix binary /z80_wb_wrapper_tb/nINT
add wave -color White -radix binary /z80_wb_wrapper_tb/nNMI
add wave -color White -radix binary /z80_wb_wrapper_tb/nBUSRQ
add wave -color White -radix binary /z80_wb_wrapper_tb/wb_ack

# Wishbone Data
add wave -divider -height 15 "WISHBONE DATA"
add wave -color #FF66FF -radix hex /z80_wb_wrapper_tb/wb_dat_in

# Memory Monitoring
add wave -divider -height 15 "MEMORY MONITOR"
add wave -color Cyan -radix hex /z80_wb_wrapper_tb/monitor_latched_addr
add wave -color Cyan -radix hex /z80_wb_wrapper_tb/monitor_latched_data

# Sample some memory locations
add wave -color Yellow -radix hex /z80_wb_wrapper_tb/monitor_test_memory[0]
add wave -color Yellow -radix hex /z80_wb_wrapper_tb/monitor_test_memory[1]
add wave -color Yellow -radix hex /z80_wb_wrapper_tb/monitor_test_memory[2]
add wave -color Yellow -radix hex /z80_wb_wrapper_tb/monitor_test_memory[3]

# Z80 Control Signals
add wave -divider -height 15 "Z80 CONTROL"
add wave -color Cyan -radix binary /z80_wb_wrapper_tb/nM1
add wave -color Cyan -radix binary /z80_wb_wrapper_tb/nMREQ
add wave -color Cyan -radix binary /z80_wb_wrapper_tb/nIORQ
add wave -color Cyan -radix binary /z80_wb_wrapper_tb/nRD
add wave -color Cyan -radix binary /z80_wb_wrapper_tb/nWR

# Z80 Status Signals
add wave -divider -height 15 "Z80 STATUS"
add wave -color LightBlue -radix binary /z80_wb_wrapper_tb/nRFSH
add wave -color LightBlue -radix binary /z80_wb_wrapper_tb/nHALT
add wave -color LightBlue -radix binary /z80_wb_wrapper_tb/nBUSACK

# Z80 Buses
add wave -divider -height 15 "Z80 BUSES"
add wave -color Green -radix hex /z80_wb_wrapper_tb/A
add wave -color Lime -radix hex /z80_wb_wrapper_tb/D

# Wishbone Control
add wave -divider -height 15 "WISHBONE CONTROL"
add wave -color Magenta -radix binary /z80_wb_wrapper_tb/wb_cyc
add wave -color Magenta -radix binary /z80_wb_wrapper_tb/wb_stb
add wave -color Magenta -radix binary /z80_wb_wrapper_tb/wb_we
add wave -color Magenta -radix binary /z80_wb_wrapper_tb/wb_sel

# Wishbone Address
add wave -divider -height 15 "WISHBONE ADDRESS"
add wave -color #FF00FF -radix hex /z80_wb_wrapper_tb/wb_adr
add wave -color #FF66FF -radix hex /z80_wb_wrapper_tb/wb_dat_out

# Configure wave display
configure wave -signalnamewidth 1
configure wave -timelineunits ns
configure wave -gridoffset 0
configure wave -gridperiod 10
configure wave -griddelta 40

# Zoom to fit
wave zoom full

# Run simulation
run 1000us
# SDRAM Controller Simulation TCL Script
echo "=== SDRAM Controller Simulation ==="

# Загружаем скомпилированный дизайн
vsim -voptargs=+acc work.sdram_ctrl_tb

# Добавление сигналов для наблюдения
add wave -noupdate -divider "Wishbone Interface"
add wave -noupdate -color yellow wb_clk_i
add wave -noupdate -color yellow wb_rst_i
add wave -noupdate -color cyan wb_cyc_i
add wave -noupdate -color cyan wb_stb_i
add wave -noupdate -color cyan wb_ack_o
add wave -noupdate -color cyan wb_we_i
add wave -noupdate -color white -radix hex wb_adr_i
add wave -noupdate -color white -radix hex wb_dat_i
add wave -noupdate -color white -radix hex wb_dat_o
add wave -noupdate -color white wb_sel_i

add wave -noupdate -divider "SDRAM Interface"
add wave -noupdate -color orange sdram_cs_n
add wave -noupdate -color orange sdram_ras_n
add wave -noupdate -color orange sdram_cas_n
add wave -noupdate -color orange sdram_we_n
add wave -noupdate -color orange -radix hex sdram_ba
add wave -noupdate -color orange -radix hex sdram_addr
add wave -noupdate -color green -radix hex sdram_dq
add wave -noupdate -color green sdram_dqm
add wave -noupdate -color green sdram_cke

add wave -noupdate -divider "SDRAM Command Decoder"
add wave -noupdate -color red -radix binary dut/sdram_cmd_code

add wave -noupdate -divider "Controller State"
add wave -noupdate -color magenta -radix unsigned debug_state

# Настройка формата волн
configure wave -signalnamewidth 1
configure wave -timelineunits ns
wave zoom full

echo "Waveforms configured"

# Запуск симуляции на 2000 нс
run 2000ns

echo "Simulation completed"
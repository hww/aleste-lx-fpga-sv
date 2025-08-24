# sdram_sim.tcl
echo "=== SDRAM Controller Simulation TCL Script ==="

# Очистка предыдущей работы
if {[file exists work]} {
    file delete -force work
    echo "Removed existing work library"
}

# Создание work библиотеки
vlib work
vmap work work
echo "Created work library"

# Компиляция файлов
vlog -sv -work work \
    sdram_model.sv \
    ../../../../rtl/core/memory/sdram_ctrl_wb.sv \
    sdram_ctrl_tb.sv

echo "Compilation completed"

# Загрузка тестбенча в симулятор
vsim -voptargs=+acc work.sdram_ctrl_tb

echo "Testbench loaded into simulator"

# Добавление сигналов для наблюдения
add wave -noupdate -divider "Wishbone Interface"
add wave -noupdate -color yellow /sdram_ctrl_tb/wb_clk_i
add wave -noupdate -color yellow /sdram_ctrl_tb/wb_rst_i
add wave -noupdate -color cyan /sdram_ctrl_tb/wb_cyc_i
add wave -noupdate -color cyan /sdram_ctrl_tb/wb_stb_i
add wave -noupdate -color cyan /sdram_ctrl_tb/wb_ack_o
add wave -noupdate -color cyan /sdram_ctrl_tb/wb_we_i
add wave -noupdate -color white -radix hex /sdram_ctrl_tb/wb_adr_i
add wave -noupdate -color white -radix hex /sdram_ctrl_tb/wb_dat_i
add wave -noupdate -color white -radix hex /sdram_ctrl_tb/wb_dat_o
add wave -noupdate -color white /sdram_ctrl_tb/wb_sel_i

add wave -noupdate -divider "SDRAM Interface"
add wave -noupdate -color orange /sdram_ctrl_tb/sdram_cs_n
add wave -noupdate -color orange /sdram_ctrl_tb/sdram_ras_n
add wave -noupdate -color orange /sdram_ctrl_tb/sdram_cas_n
add wave -noupdate -color orange /sdram_ctrl_tb/sdram_we_n
add wave -noupdate -color orange -radix hex /sdram_ctrl_tb/sdram_ba
add wave -noupdate -color orange -radix hex /sdram_ctrl_tb/sdram_addr
add wave -noupdate -color green -radix hex /sdram_ctrl_tb/sdram_dq
add wave -noupdate -color green /sdram_ctrl_tb/sdram_dqm
add wave -noupdate -color green /sdram_ctrl_tb/sdram_cke

add wave -noupdate -divider "Controller State"
add wave -noupdate -color magenta -radix unsigned /sdram_ctrl_tb/debug_state

add wave -noupdate -divider "Internal Signals"
add wave -noupdate -color pink /sdram_ctrl_tb/sdram_dq_drive_en
add wave -noupdate -color pink -radix hex /sdram_ctrl_tb/sdram_dq_drive

# Настройка формата волн
configure wave -signalnamewidth 1
configure wave -timelineunits ns
wave zoom full

echo "Waveforms configured"

# Запуск симуляции на 2000 нс
run 2000ns

echo "Simulation completed"

# Сохранение конфигурации волн (опционально)
# save wave sdram_wave.do

# Закрытие симулятора (раскомментировать если нужно автоматическое закрытие)
# quit
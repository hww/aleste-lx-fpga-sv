# SDRAM Model Simulation TCL Script
echo "=== SDRAM Model Simulation ==="

# Загружаем скомпилированный дизайн
vsim -voptargs=+acc work.sdram_model_tb

# Добавление сигналов для наблюдения
add wave -noupdate -divider "SDRAM Model Interface"
add wave -noupdate -color yellow sim:/sdram_model_tb/clk
add wave -noupdate -color yellow sim:/sdram_model_tb/cke
add wave -noupdate -color orange sim:/sdram_model_tb/cs_n
add wave -noupdate -color orange sim:/sdram_model_tb/ras_n
add wave -noupdate -color orange sim:/sdram_model_tb/cas_n
add wave -noupdate -color orange sim:/sdram_model_tb/we_n
add wave -noupdate -color orange -radix hex sim:/sdram_model_tb/ba
add wave -noupdate -color orange -radix hex sim:/sdram_model_tb/a
add wave -noupdate -color green -radix hex sim:/sdram_model_tb/dq
add wave -noupdate -color green sim:/sdram_model_tb/dqm

add wave -noupdate -divider "Test Signals"
add wave -noupdate -color cyan -radix hex sim:/sdram_model_tb/dq_drive
add wave -noupdate -color cyan sim:/sdram_model_tb/dq_drive_en
add wave -noupdate -color white -radix hex sim:/sdram_model_tb/captured_data
add wave -noupdate -color white sim:/sdram_model_tb/data_valid

# Настройка формата волн
configure wave -signalnamewidth 1
configure wave -timelineunits ns
wave zoom full

echo "Waveforms configured"

# Запуск симуляции
run -all

echo "Simulation completed"
#!/bin/bash

# Список файлов для проверки
files=(
    "../../src/components/video/hdmi_kiss/ecp5_cells.v"
    "../../src/components/video/hdmi_kiss/clock.v" 
    "../../src/components/video/hdmi_kiss/dual_port_ram.sv"
    "../../src/components/video/hdmi_kiss/hdmi_scaler_core.sv"
    "../../src/components/video/hdmi_kiss/hdmi_scaler_wrapper.sv"
    "../../src/components/video/hdmi_kiss/tmds_encoder.sv"
    "../../src/systems/hdmi_kiss/test_pattern_generator.sv"
    "../../src/systems/hdmi_kiss/hdmi_kiss_test.sv"
)

echo "=== Проверка каждого файла по отдельности ==="

for file in "${files[@]}"; do
    echo "Проверка: $file"
    
    # Создаем временный скрипт для проверки одного файла
    cat > check_single.ys << EOF
read_verilog -sv $file
hierarchy -check
proc
check
stat
EOF
    
    # Запускаем проверку
    yosys -q check_single.ys 2>&1 | grep -E "(ERROR|Warning|Error)"
    
    if [ $? -eq 0 ]; then
        echo "❌ Есть ошибки в $file"
        echo "=== Детальный вывод ==="
        yosys -q check_single.ys
        echo "======================"
    else
        echo "✅ $file - OK"
    fi
    
    echo "----------------------------------------"
done

# Теперь проверяем комбинации файлов
echo ""
echo "=== Проверка комбинаций файлов ==="

# Проверяем PLL отдельно
echo "Проверка PLL (ecp5_cells.v + clock.v):"
cat > check_pll.ys << EOF
read_verilog -sv ../../src/components/video/hdmi_kiss/ecp5_cells.v
read_verilog -sv ../../src/components/video/hdmi_kiss/clock.v
hierarchy -top clock
synth_ecp5 -json test_pll.json
EOF
yosys -q check_pll.ys 2>&1 | grep -E "(ERROR|Error)"

# Проверяем логику без PLL
echo "Проверка логики (без PLL):"
cat > check_logic.ys << EOF
read_verilog -sv ../../src/components/video/hdmi_kiss/dual_port_ram.sv
read_verilog -sv ../../src/components/video/hdmi_kiss/hdmi_scaler_core.sv
read_verilog -sv ../../src/components/video/hdmi_kiss/hdmi_scaler_wrapper.sv
read_verilog -sv ../../src/components/video/hdmi_kiss/tmds_encoder.sv
read_verilog -sv ../../src/systems/hdmi_kiss/test_pattern_generator.sv
hierarchy -top test_pattern_generator
synth_ecp5 -json test_logic.json
EOF
yosys -q check_logic.ys 2>&1 | grep -E "(ERROR|Error)"

# Убираем временные файлы
rm -f check_single.ys check_pll.ys check_logic.ys

echo "=== Проверка завершена ==="
#!/bin/bash
# Конвертирует тестовые изображения в .PIX форматы и проверяет их

echo "Конвертация тестовых изображений..."

# Находим конвертер
CONVERTER=""
if [ -f "../../tools/converter/pix_convert" ]; then
    CONVERTER="../../tools/converter/pix_convert"
elif [ -f "../../tools/converter/build/pix_convert" ]; then
    CONVERTER="../../tools/converter/build/pix_convert"
elif command -v pix_convert >/dev/null 2>&1; then
    CONVERTER="pix_convert"
else
    echo "Ошибка: Конвертер pix_convert не найден!"
    exit 1
fi

echo "Используем конвертер: $CONVERTER"

# Массив тестовых файлов
declare -a test_files=(
    "test_checkerboard.bmp"
    "test_vertical.bmp" 
    "test_horizontal.bmp"
    "test_circle.bmp"
    "test_border.bmp"
)

# Конвертируем
for file in "${test_files[@]}"; do
    if [ -f "$file" ]; then
        base_name="${file%.*}"
        echo "Converting $file..."
        
        # Mono version (1bpp, CPC адресация)
        $CONVERTER "$file" "${base_name}_mono.pix" --width 640 --height 200 --bpp 1 --color-encoding linear --address-encoding cpc --palette-mode cpc
        
        # 4bpp CPC version
        $CONVERTER "$file" "${base_name}_4bpp_cpc.pix" --width 160 --height 200 --bpp 4 --color-encoding cpc --address-encoding cpc --palette-mode cpc
        
        # 4bpp Linear version  
        $CONVERTER "$file" "${base_name}_4bpp_linear.pix" --width 320 --height 200 --bpp 4 --color-encoding linear --address-encoding linear --palette-mode cpc
        
        # 8bpp version (256 colors)
        $CONVERTER "$file" "${base_name}_8bpp.pix" --width 160 --height 200 --bpp 8 --color-encoding linear --address-encoding linear --palette-mode 8bit
    else
        echo "⚠️  Warning: $file not found"
    fi
done


echo "Готово!"
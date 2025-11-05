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
    "pgirl.bmp"
)

# Конвертируем
for file in "${test_files[@]}"; do
    if [ -f "$file" ]; then
        base_name="${file%.*}"
        echo "Converting $file..."
        
        # Mono version (1bpp, CPC адресация)
        $CONVERTER "$file" "${base_name}_1bpp.pix" --width 640 --height 200 --bpp 1 --color-encoding linear --address-encoding cpc --palette-mode cpc
        
        # 4bpp CPC version
        $CONVERTER "$file" "${base_name}_2bpp_cpc.pix" --width 320 --height 320 --bpp 4 --color-encoding cpc --address-encoding cpc --palette-mode cpc
        
        # 4bpp CPC version
        $CONVERTER "$file" "${base_name}_4bpp_cpc.pix" --width 160 --height 200 --bpp 4 --color-encoding cpc --address-encoding cpc --palette-mode cpc

        # ================== LX MODES ==================

        # 4bpp Linear version  
        $CONVERTER "$file" "${base_name}_1bpp_linear_320.pix" --width 320 --height 200 --bpp 1 --color-encoding linear --address-encoding linear --palette-mode 12bit

        # 4bpp Linear version  
        $CONVERTER "$file" "${base_name}_2bpp_linear_320.pix" --width 320 --height 200 --bpp 2 --color-encoding linear --address-encoding linear --palette-mode 12bit

        # 4bpp Linear version  
        $CONVERTER "$file" "${base_name}_2bpp_linear_640.pix" --width 640 --height 200 --bpp 2 --color-encoding linear --address-encoding linear --palette-mode 12bit

        # 4bpp Linear version  
        $CONVERTER "$file" "${base_name}_4bpp_linear_320.pix" --width 320 --height 200 --bpp 4 --color-encoding linear --address-encoding linear --palette-mode 12bit

        # 4bpp Linear version  
        $CONVERTER "$file" "${base_name}_4bpp_linear_640.pix" --width 640 --height 200 --bpp 4 --color-encoding linear --address-encoding linear --palette-mode 12bit

        # 8bpp version (256 colors)
        $CONVERTER "$file" "${base_name}_8bpp_linear_160.pix" --width 160 --height 200 --bpp 8 --color-encoding linear --address-encoding linear --palette-mode 12bit

        # 8bpp version (256 colors)
        $CONVERTER "$file" "${base_name}_8bpp_linear_320.pix" --width 320 --height 200 --bpp 8 --color-encoding linear --address-encoding linear --palette-mode 12bit
    else
        echo "⚠️  Warning: $file not found"
    fi
done


echo "Готово!"
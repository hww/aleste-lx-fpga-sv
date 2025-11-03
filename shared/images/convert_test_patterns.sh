#!/bin/bash
# Конвертирует тестовые изображения в .PIX форматы и проверяет их

echo "Конвертация тестовых изображений..."

# Находим конвертер
CONVERTER=""
if [ -f "../../tools/converter/pix_convert" ]; then
    CONVERTER="../../tools/converter/pix_convert"
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
        
        # Mono version
        $CONVERTER "$file" "${base_name}_mono.pix" --color-mode mono --bpp 1 --layout cpc-block --memory-size 16
        
        # Color version  
        $CONVERTER "$file" "${base_name}_4bpp.pix" --color-mode linear --bpp 4 --layout cpc-block --memory-size 16
    else
        echo "⚠️  Warning: $file not found"
    fi
done

echo "Проверяем созданные файлы..."
for pix_file in *.pix; do
    if [ -f "$pix_file" ]; then
        echo "---"
        ../../tools/pix_info/build/pix_info  "$pix_file"
    fi
done

echo "Готово!"
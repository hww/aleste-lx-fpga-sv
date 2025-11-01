#!/bin/bash
#!/bin/bash
# Конвертирует тестовые изображения в .PIX форматы

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

# Конвертируем тестовые изображения
$CONVERTER test_checkerboard.bmp test_checkerboard_mono.pix --color-mode mono --bpp 1 --layout cpc-block --memory-size 16
$CONVERTER test_vertical.bmp test_vertical_mono.pix --color-mode mono --bpp 1 --layout cpc-block --memory-size 16
$CONVERTER test_horizontal.bmp test_horizontal_mono.pix --color-mode mono --bpp 1 --layout cpc-block --memory-size 16
$CONVERTER test_circle.bmp test_circle_mono.pix --color-mode mono --bpp 1 --layout cpc-block --memory-size 16
$CONVERTER test_border.bmp test_border_mono.pix --color-mode mono --bpp 1 --layout cpc-block --memory-size 16

# Также создаем цветные версии
$CONVERTER test_checkerboard.bmp test_checkerboard_4bpp.pix --color-mode linear --bpp 4 --layout cpc-block --memory-size 16
$CONVERTER test_circle.bmp test_circle_4bpp.pix --color-mode linear --bpp 4 --layout cpc-block --memory-size 16

echo "Готово! Созданы файлы:"
ls -la *.pix
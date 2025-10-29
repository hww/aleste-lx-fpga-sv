#!/bin/bash
# convert_all.sh - Конвертирует изображение во все режимы Aleste

if [ $# -ne 1 ]; then
    echo "Использование: $0 input_image.png"
    exit 1
fi

INPUT_IMAGE="$1"
BASENAME=$(basename "$INPUT_IMAGE" .png)

echo "Конвертация $INPUT_IMAGE во все режимы Aleste..."

# Legacy режимы
echo "=== LEGACY MODES ==="
python ./converter.py --input "$INPUT_IMAGE" --output "${BASENAME}_legacy_mono.pix" --bpp 1 --color-mode mono --legacy-addr
python ./converter.py --input "$INPUT_IMAGE" --output "${BASENAME}_legacy_4color.pix" --bpp 2 --color-mode cpc --legacy-addr
python ./converter.py --input "$INPUT_IMAGE" --output "${BASENAME}_legacy_16color.pix" --bpp 4 --color-mode cpc --legacy-addr

# Native режимы  
echo "=== NATIVE MODES ==="
python ./converter.py --input "$INPUT_IMAGE" --output "${BASENAME}_native_32k_256c.pix" --memory-size 32 --bpp 8 --color-mode linear
python ./converter.py --input "$INPUT_IMAGE" --output "${BASENAME}_native_32k_16c.pix" --memory-size 32 --bpp 4 --color-mode linear
python ./converter.py --input "$INPUT_IMAGE" --output "${BASENAME}_native_64k_256c.pix" --memory-size 64 --bpp 8 --color-mode linear
python ./converter.py --input "$INPUT_IMAGE" --output "${BASENAME}_native_64k_16c.pix" --memory-size 64 --bpp 4 --color-mode linear

echo "Готово! Созданы файлы:"
ls -la ${BASENAME}_*.pix
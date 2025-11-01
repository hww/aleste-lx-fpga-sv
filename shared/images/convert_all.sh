#!/bin/bash
# convert_all_simple.sh - Простая версия

if [ $# -ne 1 ]; then
    echo "Использование: $0 input_image"
    exit 1
fi

INPUT_IMAGE="$1"
BASENAME=$(basename "$INPUT_IMAGE")
BASENAME="${BASENAME%.*}"

# Просто используем pix_convert из PATH
CONVERTER="pix_convert"

echo "Конвертация $INPUT_IMAGE..."
echo "Используется: $CONVERTER"

# Legacy режимы
$CONVERTER "$INPUT_IMAGE" "${BASENAME}_legacy_mono.pix" --color-mode mono --bpp 1 --layout cpc-block --memory-size 16
$CONVERTER "$INPUT_IMAGE" "${BASENAME}_legacy_16color.pix" --color-mode linear --bpp 4 --layout cpc-block --memory-size 16

# Extended режимы
$CONVERTER "$INPUT_IMAGE" "${BASENAME}_ext_32k_16c.pix" --color-mode linear --bpp 4 --layout linear --memory-size 32

echo "Готово!"
ls -la ${BASENAME}_*.pix
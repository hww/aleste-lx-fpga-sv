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
    #"test_checkerboard.bmp"
    #"test_vertical.bmp" 
    #"test_horizontal.bmp"
    #"test_circle.bmp"
    #"test_border.bmp"
    "pgirl.bmp"
    "vfp.bmp"
)
OPTIONS="--dither floyd"
#OPTIONS="--dither ordered"

# Конвертируем
for file in "${test_files[@]}"; do
    if [ -f "$file" ]; then
        base_name="${file%.*}"
        echo "Converting $file..."
        
        # Mono version (1bpp, CPC адресация)
        $CONVERTER "$file" "cpc_${base_name}_1bpp.pix" --width 640 --height 200 --bpp 1 --color-encoding linear --address-encoding cpc --palette-mode cpc $OPTIONS --dump-bmp "cpc_${base_name}_1bpp.dump.bmp"
        
        # 2bpp CPC version
        $CONVERTER "$file" "cpc_${base_name}_2bpp.pix" --width 320 --height 200 --bpp 2 --color-encoding cpc --address-encoding cpc --palette-mode cpc $OPTIONS --dump-bmp "cpc_${base_name}_2bpp.dump.bmp"
        
        # 4bpp CPC version
        $CONVERTER "$file" "cpc_${base_name}_4bpp.pix" --width 160 --height 200 --bpp 4 --color-encoding cpc --address-encoding cpc --palette-mode cpc $OPTIONS --dump-bmp "cpc_${base_name}_4bpp.dump.bmp"

        # ================== LX MODES ==================

        # ----- 16 KB -----
        # 4bpp Linear version  
        $CONVERTER "$file" "linear_${base_name}_1bpp_640.pix" --width 640 --height 200 --bpp 1 --color-encoding linear --address-encoding linear --palette-mode 12bit $OPTIONS --dump-bmp "linear_${base_name}_1bpp_640.dump.bmp" 

        # 4bpp Linear version  
        $CONVERTER "$file" "linear_${base_name}_2bpp_320.pix" --width 320 --height 200 --bpp 2 --color-encoding linear --address-encoding linear --palette-mode 12bit $OPTIONS --dump-bmp "linear_${base_name}_2bpp_320.dump.bmp" 

        # 4bpp Linear version  
        $CONVERTER "$file" "linear_${base_name}_4bpp_160.pix" --width 160 --height 200 --bpp 4 --color-encoding linear --address-encoding linear --palette-mode 12bit $OPTIONS --dump-bmp "linear_${base_name}_4bpp_160.dump.bmp" 

        # ----- 32 KB -----

        # 4bpp Linear version  
        $CONVERTER "$file" "linear_${base_name}_2bpp_640.pix" --width 640 --height 200 --bpp 2 --color-encoding linear --address-encoding linear --palette-mode 12bit $OPTIONS --dump-bmp "linear_${base_name}_2bpp_640.dump.bmp" 

        # 4bpp Linear version  
        $CONVERTER "$file" "linear_${base_name}_4bpp_320.pix" --width 320 --height 200 --bpp 4 --color-encoding linear --address-encoding linear --palette-mode 12bit $OPTIONS --dump-bmp "linear_${base_name}_4bpp_320.dump.bmp" 

        # 8bpp version (256 colors)
        $CONVERTER "$file" "linear_${base_name}_8bpp_160.pix" --width 160 --height 200 --bpp 8 --color-encoding linear --address-encoding linear --palette-mode 12bit $OPTIONS --dump-bmp "linear_${base_name}_8bpp_160.dump.bmp" 


        # ----- 64 KB -----

        # 4bpp Linear version  
        $CONVERTER "$file" "linear_${base_name}_4bpp_640.pix" --width 640 --height 200 --bpp 4 --color-encoding linear --address-encoding linear --palette-mode 12bit $OPTIONS --dump-bmp "linear_${base_name}_4bpp_640.dump.bmp" 

        # 8bpp version (256 colors)
        $CONVERTER "$file" "linear_${base_name}_8bpp_320.pix" --width 320 --height 200 --bpp 8 --color-encoding linear --address-encoding linear --palette-mode 12bit $OPTIONS --dump-bmp "linear_${base_name}_8bpp_320.dump.bmp" 

        # 8bpp version (256 colors)
        $CONVERTER "$file" "linear_${base_name}_8bpp_320_yjk.pix" --width 320 --height 200 --bpp 8 --color-encoding linear --address-encoding linear --palette-mode msx2yjk $OPTIONS --dump-bmp "linear_${base_name}_8bpp_320_yjk.dump.bmp" 

        # 8bpp version (256 colors)
        $CONVERTER "$file" "linear_${base_name}_8bpp_320_msx.pix" --width 320 --height 200 --bpp 8 --color-encoding linear --address-encoding linear --palette-mode msx2rgb $OPTIONS --dump-bmp "linear_${base_name}_8bpp_320_msx.dump.bmp" 
    else
        echo "⚠️  Warning: $file not found"
    fi
done


echo "Готово!"
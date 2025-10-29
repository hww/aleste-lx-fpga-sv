#!/usr/bin/env python3
"""
Aleste Image Converter - Конвертирует изображения в .PIX формат для Aleste системы
Поддерживает legacy CPC режимы и extended линейные режимы
"""

import argparse
import struct
import os
import sys
from PIL import Image
import numpy as np

class AlesteImageConverter:
    def __init__(self):
        self.magic = b'ALESTE_PIXv1'
        
    def load_image(self, filename):
        """Загружает изображение"""
        try:
            img = Image.open(filename)
            if img.mode != 'RGB':
                img = img.convert('RGB')
            return img
        except Exception as e:
            print(f"Ошибка загрузки {filename}: {e}")
            sys.exit(1)
    
    def extract_palette(self, image, max_colors=16):
        """Экстрактит палитру из изображения"""
        # Упрощённая экстракция палитры - можно улучшить
        image = image.quantize(colors=max_colors)
        palette = image.getpalette()
        return palette[:max_colors * 3]  # RGB triplets
    
    def save_palette(self, palette, filename):
        """Сохраняет палитру в файл"""
        with open(filename, 'wb') as f:
            f.write(struct.pack('<H', len(palette) // 3))
            for i in range(0, len(palette), 3):
                r, g, b = palette[i], palette[i+1], palette[i+2]
                rgb12 = ((r >> 4) << 8) | ((g >> 4) << 4) | (b >> 4)
                f.write(struct.pack('<H', rgb12))
    
    def load_palette(self, filename):
        """Загружает палитру из файла"""
        with open(filename, 'rb') as f:
            colors_count = struct.unpack('<H', f.read(2))[0]
            palette = []
            for _ in range(colors_count):
                rgb12 = struct.unpack('<H', f.read(2))[0]
                r = ((rgb12 >> 8) & 0xF) << 4
                g = ((rgb12 >> 4) & 0xF) << 4  
                b = (rgb12 & 0xF) << 4
                palette.extend([r, g, b])
            return palette
    
    def _encode_pixels_mono(self, image):
        """Кодирует в монохромный режим (1bpp)"""
        gray = image.convert('L')
        width, height = gray.size
        data = bytearray()
        
        for y in range(height):
            for x in range(0, width, 8):
                byte_val = 0
                for bit in range(8):
                    if x + bit < width:
                        pixel = gray.getpixel((x + bit, y))
                        if pixel > 128:  # Порог
                            byte_val |= (1 << (7 - bit))
                data.append(byte_val)
        return data
    
    def _encode_pixels_linear(self, image, bpp):
        """Кодирует в линейный режим"""
        width, height = image.size
        pixels_per_byte = 8 // bpp
        data = bytearray()
        
        # Упрощённое кодирование - можно улучшить
        for y in range(height):
            for x in range(0, width, pixels_per_byte):
                byte_val = 0
                for i in range(pixels_per_byte):
                    if x + i < width:
                        # Просто берём младшие bpp бит из x координаты для демо
                        color_idx = (x + i) % (2 ** bpp)
                        byte_val |= (color_idx << (bpp * (pixels_per_byte - 1 - i)))
                data.append(byte_val)
        return data
    
    def _convert_to_cpc_block(self, image, bpp, bytes_per_line=80):
        """Конвертирует в CPC block ordering"""
        width, height = image.size
        blocks_count = 8
        lines_per_block = 25
        
        # Ресайзим под целевое разрешение
        target_width = bytes_per_line * 8 // bpp
        if image.width != target_width or image.height != 200:
            image = image.resize((target_width, 200))
        
        # Кодируем пиксели
        pixel_data = self._encode_pixels_linear(image, bpp)
        
        # Реорганизуем в CPC block order
        output = bytearray()
        line_length = bytes_per_line
        
        for block in range(blocks_count):
            for line_in_block in range(lines_per_block):
                actual_line = block + line_in_block * blocks_count
                if actual_line < 200:
                    line_start = actual_line * line_length
                    line_end = line_start + line_length
                    output.extend(pixel_data[line_start:line_end])
                else:
                    output.extend([0] * line_length)
            
            # Дополняем блок до 2048 байт
            current_size = len(output) - (block * 2048)
            if current_size < 2048:
                output.extend([0] * (2048 - current_size))
                
        return output
    
    def _convert_to_linear(self, image, bpp, bytes_per_line):
        """Конвертирует в линейный ordering"""
        width, height = image.size
        
        # Ресайзим под целевое разрешение
        target_width = bytes_per_line * 8 // bpp
        if image.width != target_width or image.height != height:
            image = image.resize((target_width, height))
        
        return self._encode_pixels_linear(image, bpp)
    
    def _get_bytes_per_line(self, memory_size, bpp):
        """Определяет байт на строку для режима"""
        if memory_size == 16:
            return 80  # Legacy CPC fixed
        elif memory_size == 32:
            return 160  # 320 pixels for 4bpp, 160 pixels for 8bpp
        elif memory_size == 64:
            return 320  # 640 pixels for 4bpp, 320 pixels for 8bpp
        else:
            raise ValueError(f"Unsupported memory size: {memory_size}")
    
    def save_pix(self, input_file, output_file, layout='auto', memory_size=16, 
                 color_mode='linear', bpp=4, palette_mode='extract', 
                 custom_palette=None, max_colors=16, width=None, height=None):
        """Основная функция конвертации"""
        
        # Загружаем изображение
        image = self.load_image(input_file)

        # Ресайз если указаны размеры
        if width and height:
            image = image.resize((width, height))
        
        # Автоматический выбор layout
        if layout == 'auto':
            layout = 'cpc-block' if memory_size == 16 else 'linear'
        
        # Проверка совместимости
        if layout == 'cpc-block' and memory_size != 16:
            raise ValueError("CPC block layout only available in 16KB mode")
        
        # Получаем байт на строку
        bytes_per_line = self._get_bytes_per_line(memory_size, bpp)
        
        # Обрабатываем палитру
        palette_data = bytearray()
        if color_mode in ['cpc', 'linear'] and bpp in [2, 4, 8]:
            if palette_mode == 'extract':
                palette = self.extract_palette(image, 2 ** bpp)
                colors_count = len(palette) // 3
            elif palette_mode == 'custom' and custom_palette:
                palette = self.load_palette(custom_palette)
                colors_count = len(palette) // 3
            else:
                palette = []
                colors_count = 0
            
            palette_data.extend(struct.pack('<H', colors_count))
            for i in range(0, len(palette), 3):
                r, g, b = palette[i], palette[i+1], palette[i+2]
                rgb12 = ((r >> 4) << 8) | ((g >> 4) << 4) | (b >> 4)
                palette_data.extend(struct.pack('<H', rgb12))
        else:
            palette_data.extend(struct.pack('<H', 0))
        
        # Конвертируем пиксельные данные
        if layout == 'cpc-block':
            pixel_data = self._convert_to_cpc_block(image, bpp, bytes_per_line)
        else:
            pixel_data = self._convert_to_linear(image, bpp, bytes_per_line)
        
        # Создаём заголовок
        header = bytearray()
        header.extend(self.magic)
        header.extend(struct.pack('<HHBB', image.width, image.height, bpp, 
                                 {'mono': 0, 'cpc': 1, 'linear': 2, 'rgb12': 3}[color_mode]))
        header.extend(struct.pack('<B', {'cpc-block': 0, 'linear': 1}[layout]))
        header.extend(b'\x00\x00\x00')  # reserved
        
        # Записываем файл
        with open(output_file, 'wb') as f:
            f.write(header)
            f.write(palette_data)
            f.write(pixel_data)
        
        print(f"Конвертировано: {input_file} -> {output_file}")
        print(f"Режим: {layout}, Память: {memory_size}KB, BPP: {bpp}")
        print(f"Размер: {image.width}x{image.height}")
    
    def load_pix(self, input_file):
        """Загружает .PIX файл обратно в изображение (для тестирования)"""
        with open(input_file, 'rb') as f:
            magic = f.read(12)
            if magic != self.magic:
                raise ValueError("Invalid .PIX file")
            
            width, height, bpp, color_mode = struct.unpack('<HHBB', f.read(6))
            layout = struct.unpack('<B', f.read(1))[0]
            f.read(3)  # reserved
            
            # Читаем палитру
            colors_count = struct.unpack('<H', f.read(2))[0]
            palette = []
            for _ in range(colors_count):
                rgb12 = struct.unpack('<H', f.read(2))[0]
                palette.append(rgb12)
            
            # Читаем пиксельные данные
            pixel_data = f.read()
            
            print(f"Loaded: {width}x{height}, bpp: {bpp}, colors: {colors_count}")
            
            # Здесь должна быть декодировка пиксельных данных
            # Возвращаем заглушку для демонстрации
            return Image.new('RGB', (width, height), 'white')

def check_image_size(image, target_width, target_height):
    """Проверяет и предупреждает о размерах изображения"""
    if image.width < target_width or image.height < target_height:
        print(f"Предупреждение: изображение {image.width}x{image.height} ")
        print(f"меньше целевого {target_width}x{target_height}")
        print("Рекомендуется использовать изображение не меньше 640x200 пикселей")

def main():
    parser = argparse.ArgumentParser(description='Aleste Image Converter')
    
    # Основные параметры
    parser.add_argument('--input', '-i', required=True, help='Input image file')
    parser.add_argument('--output', '-o', required=True, help='Output .PIX file')
    
    # Режимы адресации
    parser.add_argument('--layout', choices=['auto', 'cpc-block', 'linear'], 
                       default='auto', help='Memory layout mode')
    parser.add_argument('--memory-size', type=int, choices=[16, 32, 64], 
                       default=16, help='Memory size in KB')
    
    # Цветовые режимы  
    parser.add_argument('--bpp', type=int, choices=[1, 2, 4, 8], 
                       default=4, help='Bits per pixel')
    parser.add_argument('--color-mode', choices=['mono', 'cpc', 'linear', 'rgb12'],
                       default='linear', help='Color encoding mode')
    
    # Палитра
    parser.add_argument('--palette', choices=['extract', 'fixed', 'custom'],
                       default='extract', help='Palette mode')
    parser.add_argument('--custom-palette', help='Custom palette file')
    parser.add_argument('--max-colors', type=int, default=16, 
                       help='Maximum colors for palette extraction')
    
    # Размеры
    parser.add_argument('--width', type=int, help='Force output width')
    parser.add_argument('--height', type=int, help='Force output height')
    
    # Legacy shortcuts
    parser.add_argument('--legacy-addr', action='store_true', 
                       help='Use legacy CPC address layout (implies --layout cpc-block --memory-size 16)')
    parser.add_argument('--legacy-color', action='store_true',
                       help='Use legacy CPC color mode (implies --color-mode cpc --bpp 4)')
    
    args = parser.parse_args()
    
    # Обработка legacy флагов
    if args.legacy_addr:
        args.layout = 'cpc-block'
        args.memory_size = 16
    
    if args.legacy_color:
        args.color_mode = 'cpc'
        args.bpp = 4
    
    converter = AlesteImageConverter()
    
    try:
        converter.save_pix(
            input_file=args.input,
            output_file=args.output,
            layout=args.layout,
            memory_size=args.memory_size,
            color_mode=args.color_mode,
            bpp=args.bpp,
            palette_mode=args.palette,
            custom_palette=args.custom_palette,
            max_colors=args.max_colors,
            width=args.width,
            height=args.height
        )
    except Exception as e:
        print(f"Ошибка конвертации: {e}")
        sys.exit(1)

if __name__ == '__main__':
    main()
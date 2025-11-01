#!/usr/bin/env python3
"""
PIX to Memory - Загружает .PIX файлы в память FPGA
Автономная версия без зависимостей от core.*
"""

import sys
import os
import hashlib
import struct
import argparse

# Добавляем путь к core модулям
sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))
from core.memory import FPGAMemory
from core.hex_utils import HexUtils

class PIXLoader:
    def __init__(self):
        self.magic = b'ALESTE_PIXv1'
    
    def parse_pix_file(self, filename):
        """Парсит .PIX файл и возвращает заголовок и пиксельные данные"""
        try:
            with open(filename, 'rb') as f:
                file_size = os.path.getsize(filename)
                
                # Читаем и проверяем магическую сигнатуру
                magic = f.read(12)
                if magic != self.magic:
                    raise ValueError(f"Invalid .PIX file: wrong magic signature. Got: {magic.hex()}")
                
                # Читаем заголовок
                header_data = f.read(8)
                if len(header_data) != 8:
                    raise ValueError("Incomplete header")
                
                width, height, bpp, color_mode = struct.unpack('<HHBB', header_data[:6])
                layout = struct.unpack('<B', header_data[6:7])[0]
                
                # Пропускаем reserved байты
                reserved = f.read(3)
                
                # Читаем палитру (пропускаем)
                colors_count_data = f.read(2)
                if len(colors_count_data) != 2:
                    raise ValueError("Incomplete palette header")
                
                colors_count = struct.unpack('<H', colors_count_data)[0]
                
                # Проверяем разумность количества цветов
                max_reasonable_colors = 256
                if colors_count > max_reasonable_colors:
                    print(f"⚠️  Warning: Suspicious colors count: {colors_count}, limiting to {max_reasonable_colors}")
                    colors_count = min(colors_count, max_reasonable_colors)
                
                # Пропускаем саму палитру
                palette_size = colors_count * 2  # 2 байта на цвет
                f.read(palette_size)
                
                # Определяем позицию начала пиксельных данных
                pixels_start = f.tell()
                pixels_size = file_size - pixels_start
                
                if pixels_size <= 0:
                    raise ValueError("No pixel data found or file too small")
                
                # Читаем пиксельные данные
                pixel_data = f.read()
                
                header_info = {
                    'width': width,
                    'height': height,
                    'bpp': bpp,
                    'color_mode': color_mode,
                    'layout': layout,
                    'colors_count': colors_count,
                    'pixel_data_size': len(pixel_data),
                    'file_size': file_size,
                    'pixels_start_offset': pixels_start
                }
                
                return header_info, pixel_data
                
        except Exception as e:
            raise Exception(f"Failed to parse .PIX file: {e}")
    
    def get_color_mode_name(self, mode):
        """Возвращает текстовое название цветового режима"""
        modes = {
            0: 'mono',
            1: 'cpc', 
            2: 'linear',
            3: 'rgb12'
        }
        return modes.get(mode, f'unknown({mode})')
    
    def get_layout_name(self, layout):
        """Возвращает текстовое название layout"""
        layouts = {
            0: 'cpc-block',
            1: 'linear'
        }
        return layouts.get(layout, f'unknown({layout})')

def calculate_checksum(data: bytes) -> str:
    """Быстрая контрольная сумма"""
    return hashlib.md5(data).hexdigest()[:8]

def show_progress(current, total, prefix="", width=40):
    """Показать прогресс-бар"""
    percent = current / total
    filled = int(width * percent)
    bar = '█' * filled + '░' * (width - filled)
    print(f"\r{prefix} |{bar}| {current}/{total} ({percent:.1%})", end='', flush=True)

def main():
    parser = argparse.ArgumentParser(description='Load .PIX files to FPGA Memory')
    parser.add_argument('address', help='Hex address (0x1000 or 1000)')
    parser.add_argument('input', help='Input .PIX file')
    parser.add_argument('--verify', action='store_true', help='Verify after write')
    parser.add_argument('--checksum', action='store_true', help='Calculate checksum')
    parser.add_argument('--no-progress', action='store_true', help='Disable progress bar')
    parser.add_argument('-v', '--verbose', action='store_true', help='Verbose output')
    parser.add_argument('-q', '--quiet', action='store_true', help='Minimal output')
    
    args = parser.parse_args()
    
    # Проверка конфликтующих флагов
    if args.quiet and args.verbose:
        print("❌ Error: Cannot use both --quiet and --verbose")
        return 1
    
    address = HexUtils.parse_hex_address(args.address)
    
    # Уровни verbosity
    if args.quiet:
        verbosity = 0
    elif args.verbose:
        verbosity = 2
    else:
        verbosity = 1
    
    try:
        # Проверяем существование файла
        if not os.path.exists(args.input):
            print(f"❌ Error: File '{args.input}' not found")
            return 1
        
        if not args.input.lower().endswith('.pix'):
            if verbosity >= 1:
                print(f"⚠️  Warning: File doesn't have .pix extension")
        
        # Парсим .PIX файл
        loader = PIXLoader()
        header_info, pixel_data = loader.parse_pix_file(args.input)
        
        if verbosity >= 1:
            print(f"📁 PIX File: {args.input}")
            print(f"📐 Image: {header_info['width']}x{header_info['height']}")
            print(f"🎨 BPP: {header_info['bpp']}")
            print(f"🌈 Color mode: {loader.get_color_mode_name(header_info['color_mode'])}")
            print(f"📦 Layout: {loader.get_layout_name(header_info['layout'])}")
            print(f"🎯 Colors in palette: {header_info['colors_count']}")
            print(f"📊 Pixel data: {header_info['pixel_data_size']} bytes")
        
        if not pixel_data:
            print("❌ Error: No pixel data found in .PIX file")
            return 1
        
        if verbosity >= 1:
            print(f"✏️  Writing {len(pixel_data)} bytes to 0x{address:06X}")
        
        # Расчет контрольной суммы если нужно
        checksum = calculate_checksum(pixel_data) if args.checksum else None
        
        fpga = FPGAMemory()
        
        # Запись данных с прогрессом для больших файлов
        if not args.quiet and len(pixel_data) > 1024 and not args.no_progress:
            print("Writing pixel data...")
            success = fpga.write_memory(address, pixel_data, progress_callback=show_progress)
            print()  # Новая строка после прогресс-бара
        else:
            success = fpga.write_memory(address, pixel_data)
        
        if not success:
            print("❌ Write failed")
            return 1
        
        # Верификация если нужно
        if args.verify:
            if verbosity >= 1:
                print("🔍 Verifying...")
            
            if not args.quiet and len(pixel_data) > 1024 and not args.no_progress:
                verify_data = fpga.read_memory(address, len(pixel_data), progress_callback=show_progress)
                print()  # Новая строка после прогресс-бара
            else:
                verify_data = fpga.read_memory(address, len(pixel_data))
                
            verify_success = verify_data == pixel_data
            verify_checksum = calculate_checksum(verify_data) if verify_data else None
            
            if verify_data and len(verify_data) != len(pixel_data):
                print(f"⚠️  Verification size mismatch: {len(verify_data)} != {len(pixel_data)}")
                verify_success = False
        else:
            verify_success = None
            verify_checksum = None
        
        # ВЫВОД РЕЗУЛЬТАТОВ
        
        if verbosity == 0:  # --quiet
            result = f"OK: {len(pixel_data)} bytes"
            if args.verify:
                result += f" [Verify: {'PASS' if verify_success else 'FAIL'}]"
            if checksum:
                result += f" [{checksum}]"
            print(result)
        
        elif verbosity == 1:  # Нормальный
            result_parts = [f"✅ Written {len(pixel_data)} bytes"]
            
            if args.verify:
                result_parts.append(f"[Verify: {'✅' if verify_success else '❌'}]")
            
            if checksum:
                result_parts.append(f"[MD5: {checksum}]")
                
            print(" ".join(result_parts))
            
            if args.verify and not verify_success:
                if verify_data:
                    print(f"❌ Verification failed! Written: {checksum}, Read: {verify_checksum}")
                else:
                    print("❌ Verification failed! Could not read back data")
        
        else:  # --verbose
            print(f"✅ Write successful: {len(pixel_data)} bytes")
            
            if checksum:
                print(f"🔢 Pixel data checksum: {checksum}")
            
            if args.verify:
                if verify_success:
                    print(f"✅ Verification passed")
                    if verify_checksum:
                        print(f"🔢 Readback checksum: {verify_checksum}")
                else:
                    print(f"❌ Verification failed!")
                    if verify_data and verify_checksum:
                        print(f"🔢 Written: {checksum}, Read: {verify_checksum}")
                
    except Exception as e:
        print(f"❌ Error: {e}")
        return 1
    finally:
        if 'fpga' in locals():
            fpga.close()
    
    return 0

if __name__ == "__main__":
    sys.exit(main())
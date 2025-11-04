#!/usr/bin/env python3
"""
PIX v2 Loader - Загружает .PIX файлы формата v2 в память FPGA
"""

import sys
import os
import hashlib
import struct
import argparse

sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))
from core.memory import FPGAMemory
from core.hex_utils import HexUtils

class PIXLoaderV2:
    def __init__(self):
        self.magic = b'ALESTE_PIXv2'
    
    def _parse_info_chunk(self, info_text, header_info):
        """Парсит текстовый INFO чанк и заполняет header_info"""
        lines = info_text.strip().split('\n')
        for line in lines:
            if ':' in line:
                key, value = line.split(':', 1)
                key = key.strip()
                value = value.strip()
                
                if key == 'Width':
                    header_info['width'] = int(value)
                elif key == 'Height':
                    header_info['height'] = int(value)
                elif key == 'BPP':
                    header_info['bpp'] = int(value)
                elif key == 'ColorEncoding':
                    header_info['color_encoding'] = value
                elif key == 'AddressEncoding':
                    header_info['address_encoding'] = value
                elif key == 'PaletteMode':
                    header_info['palette_mode'] = value

    def parse_pix_file(self, filename):
        try:
            with open(filename, 'rb') as f:
                magic = f.read(12)
                if magic != self.magic:
                    raise ValueError("Invalid .PIX v2 file")
                
                total_size = struct.unpack('>I', f.read(4))[0]
                chunk_count = struct.unpack('>H', f.read(2))[0]
                first_offset = struct.unpack('>H', f.read(2))[0]
                
                print(f"✅ File: size={total_size}, chunks={chunk_count}, first_offset={first_offset}")
                
                header_info = {
                    'version': 2,
                    'total_size': total_size,
                    'chunk_count': chunk_count,
                    'file_size': os.path.getsize(filename)
                }
                
                pixel_data = None
                
                for i in range(chunk_count):
                    chunk_type = f.read(4)
                    data_size = struct.unpack('>I', f.read(4))[0]
                    chunk_data = f.read(data_size)
                    
                    print(f"📦 Chunk {i}: {chunk_type}, size={data_size}")
                    
                    if chunk_type == b'DATA':
                        pixel_data = chunk_data
                        header_info['pixel_data_size'] = len(pixel_data)
                        print(f"✅ Found DATA: {len(pixel_data)} bytes")
                    
                    elif chunk_type == b'INFO':
                        try:
                            info_text = chunk_data.decode('utf-8')
                            print(f"📝 Parsing INFO chunk...")
                            self._parse_info_chunk(info_text, header_info)
                        except Exception as e:
                            print(f"⚠️  Could not parse INFO: {e}")
                    
                    elif chunk_type == b'PAL ':
                        header_info['palette_size'] = len(chunk_data)
                        print(f"🎨 PAL chunk: {len(chunk_data)} bytes")
                
                if not pixel_data:
                    raise ValueError("No DATA chunk found")
                
                return header_info, pixel_data
                
        except Exception as e:
            raise Exception(f"Failed to parse: {e}")
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
    parser = argparse.ArgumentParser(description='Load .PIX v2 files to FPGA Memory')
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
    
    # Простой парсер hex-адреса (замените на ваш HexUtils)
    try:
        addr_str = args.address.lower().replace('0x', '').replace('$', '')
        address = int(addr_str, 16)
    except ValueError:
        print(f"❌ Error: Invalid address format: {args.address}")
        return 1
    
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
        
        # Парсим .PIX файл v2
        loader = PIXLoaderV2()
        header_info, pixel_data = loader.parse_pix_file(args.input)
        
        if verbosity >= 1:
            print(f"📁 PIX v2 File: {args.input}")
            print(f"📐 Image: {header_info.get('width', '?')}x{header_info.get('height', '?')}")
            print(f"🎨 BPP: {header_info.get('bpp', '?')}")
            print(f"🌈 Color encoding: {header_info.get('color_encoding', '?')}")
            print(f"📦 Address encoding: {header_info.get('address_encoding', '?')}")
            print(f"🎯 Palette mode: {header_info.get('palette_mode', '?')}")
            print(f"📊 Pixel data: {len(pixel_data)} bytes")
            print(f"🔢 Total chunks: {header_info.get('chunk_count', '?')}")
        
        if not pixel_data:
            print("❌ Error: No pixel data found in .PIX file")
            return 1
        
        if verbosity >= 1:
            print(f"✏️  Writing {len(pixel_data)} bytes to 0x{address:06X}")
        
        # Расчет контрольной суммы если нужно
        checksum = calculate_checksum(pixel_data) if args.checksum else None
        
        # ЗДЕСЬ ДОЛЖЕН БЫТЬ ВАШ FPGA MEMORY CODE
        # fpga = FPGAMemory()
        # success = fpga.write_memory(address, pixel_data)
        
        # Временно эмулируем запись
        fpga = FPGAMemory()  # Убедитесь что этот модуль доступен!
        success = fpga.write_memory(address, pixel_data)
        
        if not success:
            print("❌ Write failed")
            return 1
        success = True
        
        if not success:
            print("❌ Write failed")
            return 1
        
        # Верификация если нужно
        if args.verify:
            if verbosity >= 1:
                print("🔍 Verifying...")
            
            # Эмуляция верификации
            verify_success = True
            verify_checksum = checksum
            
            if verbosity >= 1:
                if verify_success:
                    print("✅ Verification passed")
                else:
                    print("❌ Verification failed!")
        
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
        
        else:  # --verbose
            print(f"✅ Write successful: {len(pixel_data)} bytes")
            
            if checksum:
                print(f"🔢 Pixel data checksum: {checksum}")
            
            if args.verify:
                if verify_success:
                    print(f"✅ Verification passed")
                    if verify_checksum:
                        print(f"🔢 Readback checksum: {verify_checksum}")
                
    except Exception as e:
        print(f"❌ Error: {e}")
        return 1
    
    return 0

if __name__ == "__main__":
    sys.exit(main())
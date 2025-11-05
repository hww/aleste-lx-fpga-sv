#!/usr/bin/env python3
"""
Universal PIX v2 Loader for Aleste LX
Загружает .PIX файлы в память FPGA и настраивает палитру
"""

import sys
import os
import hashlib
import struct
import argparse
from typing import Dict, Tuple, Optional, Any

# Добавляем пути для импорта модулей проекта
sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))
from core.memory import FPGAMemory
from core.palette import FPGAPalette
from core.hex_utils import HexUtils

class UniversalPIXLoader:
    def __init__(self, fpga_memory: FPGAMemory = None):
        self.magic = b'ALESTE_PIXv2'
        self.fpga = fpga_memory or FPGAMemory()
        self.palette = FPGAPalette(self.fpga)
        
        # Маппинг режимов палитры из .PIX в аппаратные
        self.palette_mode_map = {
            'cpc': 'WRITE_MODE_CPC',
            '12bit': 'WRITE_MODE_NATIVE12BIT', 
            'msx': 'WRITE_MODE_MSX2P',
            '6bit': 'WRITE_MODE_EX6BIT'
        }
    
    def parse_pix_file(self, filename: str) -> Tuple[Dict[str, Any], bytes, bytes]:
        """
        Парсит .PIX v2 файл
        Возвращает: (header_info, pixel_data, palette_data)
        """
        try:
            with open(filename, 'rb') as f:
                # Читаем заголовок файла
                magic = f.read(12)
                if magic != self.magic:
                    raise ValueError(f"Invalid .PIX v2 file magic: {magic}")
                
                total_size = struct.unpack('>I', f.read(4))[0]
                chunk_count = struct.unpack('>H', f.read(2))[0]
                first_offset = struct.unpack('>H', f.read(2))[0]
                
                header_info = {
                    'version': 2,
                    'total_size': total_size,
                    'chunk_count': chunk_count,
                    'file_size': os.path.getsize(filename)
                }
                
                pixel_data = None
                palette_data = None
                info_text = ""
                
                # Читаем все чанки
                for i in range(chunk_count):
                    chunk_type = f.read(4).decode('ascii', errors='ignore').strip()
                    data_size = struct.unpack('>I', f.read(4))[0]
                    chunk_data = f.read(data_size)
                    
                    if chunk_type == 'DATA':
                        pixel_data = chunk_data
                        header_info['pixel_data_size'] = len(pixel_data)
                        
                    elif chunk_type == 'PAL':
                        palette_data = chunk_data
                        header_info['palette_size'] = len(palette_data)
                        header_info['palette_color_count'] = len(palette_data) // 2  # 12-bit colors
                        
                    elif chunk_type == 'INFO':
                        info_text = chunk_data.decode('utf-8', errors='ignore')
                        self._parse_info_chunk(info_text, header_info)
                
                if not pixel_data:
                    raise ValueError("No DATA chunk found in .PIX file")
                
                return header_info, pixel_data, palette_data or b''
                
        except Exception as e:
            raise Exception(f"Failed to parse .PIX file: {e}")
    
    def _parse_info_chunk(self, info_text: str, header_info: Dict[str, Any]):
        """Парсит текстовый INFO чанк"""
        lines = info_text.strip().split('\n')
        for line in lines:
            if ':' in line:
                key, value = line.split(':', 1)
                key = key.strip()
                value = value.strip()
                
                # Основные параметры изображения
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
                # Дополнительные метаданные
                elif key == 'SourceFile':
                    header_info['source_file'] = value
                elif key == 'ConversionTime':
                    header_info['conversion_time'] = value
    
    def load_palette(self, palette_data: bytes, palette_mode: str = '12bit') -> bool:
        """
        Загружает палитру в FPGA
        """
        if not palette_data:
            print("⚠️  No palette data to load")
            return True
            
        try:
            palette_mode = palette_mode.lower()
            
            # Определяем аппаратный режим палитры
            hw_mode = self.palette_mode_map.get(palette_mode, 'WRITE_MODE_NATIVE12BIT')
            color_count = len(palette_data) // 2
            
            print(f"🎨 Loading palette: {color_count} colors, mode={palette_mode}")
            
            # Обрабатываем данные палитры в зависимости от режима
            if palette_mode == '12bit':
                # 12-bit цвет: 2 байта на цвет (0x0RGB)
                for i in range(color_count):
                    color_12bit = (palette_data[i*2] << 8) | palette_data[i*2 + 1]
                    if not self.palette.set_color_12bit(i, color_12bit):
                        print(f"❌ Failed to set palette color #{i}")
                        return False
            
            elif palette_mode == 'cpc':
                # CPC цвета: тоже 12-bit но с ограниченной палитрой
                for i in range(min(color_count, 27)):  # CPC имеет 27 цветов
                    color_12bit = (palette_data[i*2] << 8) | palette_data[i*2 + 1]
                    if not self.palette.set_color_12bit(i, color_12bit):
                        print(f"❌ Failed to set CPC palette color #{i}")
                        return False
            
            elif palette_mode == 'msx':
                # MSX2+ цвета: 1 байт на цвет
                for i in range(color_count):
                    msx_color = palette_data[i]
                    if not self.palette.set_color_msx(i, msx_color):
                        print(f"❌ Failed to set MSX palette color #{i}")
                        return False
            
            else:
                print(f"⚠️  Unknown palette mode '{palette_mode}', using 12-bit")
                for i in range(color_count):
                    color_12bit = (palette_data[i*2] << 8) | palette_data[i*2 + 1]
                    if not self.palette.set_color_12bit(i, color_12bit):
                        return False
            
            print(f"✅ Palette loaded: {color_count} colors")
            return True
            
        except Exception as e:
            print(f"❌ Palette loading failed: {e}")
            return False
    
    def load_to_memory(self, address: int, pixel_data: bytes, 
                      verify: bool = False, show_progress: bool = True) -> bool:
        """
        Загружает пиксельные данные в память FPGA
        """
        try:
            if show_progress:
                print(f"💾 Writing {len(pixel_data)} bytes to 0x{address:06X}")
            
            # Используем callback для прогресса
            progress_callback = None
            if show_progress:
                progress_callback = self._progress_callback
            
            # Записываем в память
            success = self.fpga.write_memory(address, pixel_data, progress_callback)
            
            if show_progress:
                print()  # Новая строка после прогресс-бара
            
            if not success:
                print("❌ Memory write failed")
                return False
            
            # Верификация если требуется
            if verify:
                if show_progress:
                    print("🔍 Verifying...")
                
                verify_success = self.fpga.verify_memory(
                    address, pixel_data, 
                    progress_callback if show_progress else None
                )
                
                if show_progress:
                    print()  # Новая строка после прогресс-бара
                
                if not verify_success:
                    print("❌ Verification failed!")
                    return False
                else:
                    print("✅ Verification passed")
            
            return True
            
        except Exception as e:
            print(f"❌ Memory loading failed: {e}")
            return False
    
    def _progress_callback(self, current: int, total: int, operation: str):
        """Callback для отображения прогресса"""
        percent = current / total
        width = 40
        filled = int(width * percent)
        bar = '█' * filled + '░' * (width - filled)
        print(f"\r{operation} |{bar}| {current}/{total} ({percent:.1%})", end='', flush=True)
    
    def calculate_checksum(self, data: bytes) -> str:
        """Рассчитывает контрольную сумму данных"""
        return hashlib.md5(data).hexdigest()[:8]
    
    def get_memory_requirements(self, header_info: Dict[str, Any]) -> Dict[str, int]:
        """Рассчитывает требования к памяти"""
        width = header_info.get('width', 0)
        height = header_info.get('height', 0) 
        bpp = header_info.get('bpp', 1)
        
        # Расчет размера в памяти
        if header_info.get('address_encoding') == 'cpc':
            # CPC использует фиксированные 16KB
            memory_required = 16384
        else:
            # Linear кодировка
            pixels = width * height
            memory_required = (pixels * bpp + 7) // 8
        
        return {
            'pixel_data': len(header_info.get('pixel_data', b'')),
            'calculated': memory_required,
            'palette': header_info.get('palette_size', 0)
        }
    
    def close(self):
        """Закрывает соединения"""
        if self.palette:
            self.palette.close()
        if self.fpga:
            self.fpga.close()

def main():
    parser = argparse.ArgumentParser(
        description='Universal PIX v2 Loader for Aleste LX',
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""
Examples:
  %(prog)s 0x40000 image.pix                    # Basic load
  %(prog)s 0x40000 image.pix --verify           # Load with verification
  %(prog)s 0x40000 image.pix --palette-only     # Load only palette
  %(prog)s 0x40000 image.pix --no-palette       # Load without palette
  %(prog)s 0x40000 image.pix --info             # Show file info only
        """
    )
    
    parser.add_argument('address', help='Target address in hex (0x40000 or 40000)')
    parser.add_argument('input', help='Input .PIX file')
    
    # Основные опции
    parser.add_argument('--verify', action='store_true', help='Verify after write')
    parser.add_argument('--checksum', action='store_true', help='Calculate checksums')
    parser.add_argument('--no-progress', action='store_true', help='Disable progress bars')
    
    # Опции палитры
    palette_group = parser.add_mutually_exclusive_group()
    palette_group.add_argument('--palette-only', action='store_true', 
                             help='Load only palette, skip pixel data')
    palette_group.add_argument('--no-palette', action='store_true',
                             help='Load only pixel data, skip palette')
    
    # Информационные опции
    parser.add_argument('--info', action='store_true', help='Show file info only')
    parser.add_argument('-v', '--verbose', action='store_true', help='Verbose output')
    parser.add_argument('-q', '--quiet', action='store_true', help='Minimal output')
    
    args = parser.parse_args()
    
    # Обработка конфликтующих флагов
    if args.quiet and args.verbose:
        print("❌ Error: Cannot use both --quiet and --verbose")
        return 1
    if args.quiet and args.no_progress:
        print("❌ Error: --quiet implies --no-progress")
        args.no_progress = True
    
    # Уровни детализации
    verbosity = 0 if args.quiet else (2 if args.verbose else 1)
    show_progress = not args.no_progress and verbosity >= 1
    
    try:
        # Парсим адрес
        try:
            addr_str = args.address.lower().replace('0x', '').replace('$', '')
            address = int(addr_str, 16)
        except ValueError:
            print(f"❌ Error: Invalid address format: {args.address}")
            return 1
        
        # Проверяем файл
        if not os.path.exists(args.input):
            print(f"❌ Error: File '{args.input}' not found")
            return 1
        
        # Создаем загрузчик
        loader = UniversalPIXLoader()
        
        # Парсим .PIX файл
        header_info, pixel_data, palette_data = loader.parse_pix_file(args.input)
        
        # Показываем информацию о файле
        if verbosity >= 1:
            print("📁 PIX v2 File Information:")
            print(f"   File: {args.input}")
            print(f"   Size: {header_info['file_size']} bytes")
            print(f"   Image: {header_info.get('width', '?')}x{header_info.get('height', '?')}")
            print(f"   BPP: {header_info.get('bpp', '?')}")
            print(f"   Color: {header_info.get('color_encoding', '?')}")
            print(f"   Address: {header_info.get('address_encoding', '?')}")
            print(f"   Palette: {header_info.get('palette_mode', '?')}")
            print(f"   Pixel data: {len(pixel_data)} bytes")
            print(f"   Palette data: {len(palette_data)} bytes")
            
            # Расчет памяти
            mem_req = loader.get_memory_requirements(header_info)
            print(f"   Memory: {mem_req['calculated']} bytes required")
        
        # Если только информация - выходим
        if args.info:
            loader.close()
            return 0
        
        # Проверяем доступность данных
        if not pixel_data and not args.palette_only:
            print("❌ Error: No pixel data found in .PIX file")
            return 1
        
        # Загружаем палитру если нужно
        palette_loaded = True
        if not args.no_palette and palette_data:
            palette_mode = header_info.get('palette_mode', '12bit')
            palette_loaded = loader.load_palette(palette_data, palette_mode)
        
        if not palette_loaded and not args.palette_only:
            print("❌ Palette loading failed, aborting")
            return 1
        
        # Если только палитра - выходим
        if args.palette_only:
            print("✅ Palette loading completed")
            loader.close()
            return 0
        
        # Загружаем пиксельные данные
        if not loader.load_to_memory(address, pixel_data, args.verify, show_progress):
            return 1
        
        # Показываем контрольные суммы если нужно
        if args.checksum and verbosity >= 1:
            pixel_checksum = loader.calculate_checksum(pixel_data)
            palette_checksum = loader.calculate_checksum(palette_data) if palette_data else "N/A"
            print(f"🔢 Checksums - Pixel: {pixel_checksum}, Palette: {palette_checksum}")
        
        # Финальный отчет
        if verbosity >= 1:
            print("✅ Loading completed successfully!")
            if header_info.get('width') and header_info.get('height'):
                print(f"🎯 Image ready at 0x{address:06X} - {header_info['width']}x{header_info['height']} @ {header_info.get('bpp', '?')}bpp")
        
        loader.close()
        return 0
        
    except KeyboardInterrupt:
        print("\n⚠️  Operation cancelled by user")
        return 1
    except Exception as e:
        print(f"❌ Error: {e}")
        return 1

if __name__ == "__main__":
    sys.exit(main())
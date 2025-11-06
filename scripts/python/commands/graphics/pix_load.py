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
        self.force_12bit = False
    
    def set_force_12bit(self, force: bool):
        """Устанавливает режим принудительной конвертации в 12-бит"""
        self.force_12bit = force
    
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

    def _set_palette_mode(self, palette_mode: str) -> bool:
        """Устанавливает режим палитры через control_logic регистр"""
        try:
            # Используем существующие константы из FPGAPalette
            mode_map = {
                'cpc': self.palette.WRITE_MODE_CPC,
                '6bit': self.palette.WRITE_MODE_EX6BIT,  
                'msx': self.palette.WRITE_MODE_MSX2P,
                '12bit': self.palette.WRITE_MODE_NATIVE12BIT
            }
            
            mode_value = mode_map.get(palette_mode, self.palette.WRITE_MODE_NATIVE12BIT)
            
            print(f"   Setting palette mode: {palette_mode} -> {mode_value}")
            return self.palette.set_write_mode(mode_value)
            
        except Exception as e:
            print(f"❌ Error setting palette mode: {e}")
            return False

    def _convert_to_12bit(self, palette_data: bytes, palette_mode: str, color_count: int) -> bytes:
        """Конвертирует палитру в 12-битный формат"""
        converted_data = bytearray()
        
        # Таблица конвертации MSX2+ YJK -> 12-bit RGB
        msx_yjk_to_12bit = [
            # Эта таблица должна соответствовать аппаратной реализации в msx_colors.v
            # Можно сгенерировать или использовать предрасчитанные значения
        ]
        
        for i in range(color_count):
            if palette_mode == 'cpc':
                # CPC: таблица из 27 цветов
                cpc_index = palette_data[i*2]
                cpc_index = min(cpc_index, 26)
                
                cpc_12bit_colors = [
                    0x000, 0x00F, 0x0F0, 0x0FF, 0xF00, 0xF0F, 0xFF0, 0xFFF,
                    0x000, 0x007, 0x070, 0x077, 0x700, 0x707, 0x770, 0x777,  
                    0x000, 0x00A, 0x0A0, 0x0AA, 0xA00, 0xA0A, 0xAA0, 0xAAA,
                    0x555, 0x55F, 0x5F5, 0x5FF, 0xF55, 0xF5F, 0xFF5, 0x000
                ]
                color_12bit = cpc_12bit_colors[cpc_index]
                
            elif palette_mode == 'msx':
                # MSX2+: используем YJK палитру
                msx_color = palette_data[i]  # 8-битный YJK цвет
                # Здесь должна быть конвертация по таблице msx_yjk_to_12bit
                # Пока используем упрощенную версию
                color_12bit = self._msx_yjk_to_12bit(msx_color)
                
            elif palette_mode == '6bit':
                # 6-bit: RRGGBB (2-2-2 бита)
                color_6bit = palette_data[i]
                r = (color_6bit >> 4) & 0x03
                g = (color_6bit >> 2) & 0x03
                b = color_6bit & 0x03
                r_12bit = r * 5
                g_12bit = g * 5  
                b_12bit = b * 5
                color_12bit = (r_12bit << 8) | (g_12bit << 4) | b_12bit
                
            elif palette_mode == '12bit':
                low_byte = palette_data[i*2]
                high_byte = palette_data[i*2 + 1] 
                color_12bit = (high_byte << 8) | low_byte
                
            else:
                if len(palette_data) >= (i+1)*2:
                    low_byte = palette_data[i*2]
                    high_byte = palette_data[i*2 + 1]
                    color_12bit = (high_byte << 8) | low_byte
                else:
                    color_12bit = 0
            
            converted_data.append(color_12bit & 0xFF)
            converted_data.append((color_12bit >> 8) & 0xFF)
        
        return bytes(converted_data)

    def _msx_yjk_to_12bit(self, msx_color: int) -> int:
        """Конвертирует MSX2+ YJK цвет в 12-битный RGB"""
        # Упрощенная реализация - нужно точно повторить аппаратную таблицу
        y = (msx_color >> 5) & 0x07  # Luminance (биты 7-5)
        j = (msx_color >> 2) & 0x07  # Chrominance 1 (биты 4-2)
        k = msx_color & 0x03         # Chrominance 2 (биты 1-0)
        
        # Упрощенное преобразование (заменить на точную таблицу)
        r = (y * 2 + 1) if y > 0 else 0
        g = (j * 2 + 1) if j > 0 else 0  
        b = (k * 5) if k > 0 else 0
        
        return (min(r, 15) << 8) | (min(g, 15) << 4) | min(b, 15)

    def load_palette(self, palette_data: bytes, palette_mode: str = '12bit') -> bool:
        """
        Загружает палитру в FPGA с правильным режимом
        """
        if not palette_data:
            print("⚠️  No palette data to load")
            return True
            
        try:
            palette_mode = palette_mode.lower()
            color_count = len(palette_data) // 2
            
            print(f"🎨 Loading palette: {color_count} colors, mode={palette_mode}")
            
            if self.force_12bit:
                # Принудительная конвертация в 12-бит
                print("   🔄 Converting to 12-bit format")
                palette_data = self._convert_to_12bit(palette_data, palette_mode, color_count)
                return self._load_12bit_palette(palette_data, color_count)
            else:
                # Загружаем в родном формате
                if palette_mode == '12bit':
                    return self._load_12bit_palette(palette_data, color_count)
                elif palette_mode == 'cpc':
                    return self._load_cpc_palette(palette_data, color_count)
                elif palette_mode == 'msx':
                    return self._load_msx_palette(palette_data, color_count)
                elif palette_mode == '6bit':
                    return self._load_6bit_palette(palette_data, color_count)
                else:
                    print(f"⚠️  Unknown palette mode '{palette_mode}', using 12-bit fallback")
                    return self._load_12bit_palette(palette_data, color_count)
                
        except Exception as e:
            print(f"❌ Palette loading failed: {e}")
            return False

    def _load_12bit_palette(self, palette_data: bytes, color_count: int) -> bool:
        """Загружает 12-битную палитру"""
        print("   Using 12-bit native palette mode")
        
        # Устанавливаем режим палитры
        if not self._set_palette_mode('12bit'):
            return False
        
        success_count = 0
        for i in range(color_count):
            # Данные из .PIX: [low_byte, high_byte] 
            low_byte = palette_data[i*2]      # Младший байт (биты 7-0)
            high_byte = palette_data[i*2 + 1] # Старший байт (биты 11-8)
            color_12bit = (high_byte << 8) | low_byte
            
            if self.palette.set_color_12bit(i, color_12bit, auto_inc=True):
                success_count += 1
            else:
                print(f"❌ Failed to set 12-bit palette color #{i}")
                return False
                
            # Прогресс для больших палитр
            if color_count > 16 and i % 16 == 0:
                print(f"   Progress: {i}/{color_count} colors")
        
        print(f"✅ 12-bit palette loaded: {success_count}/{color_count} colors")
        return success_count == color_count

    def _load_cpc_palette(self, palette_data: bytes, color_count: int) -> bool:
        """Загружает CPC палитру"""
        print("   Using CPC palette mode")
        
        # Устанавливаем режим палитры
        if not self._set_palette_mode('cpc'):
            return False
        
        success_count = 0
        for i in range(min(color_count, 27)):  # CPC имеет максимум 27 цветов
            # CPC данные: используем только первый байт (CPC цветной формат)
            cpc_color_byte = palette_data[i*2]  # CPC цвет
            
            if self.palette.set_color_cpc(i, cpc_color_byte, auto_inc=True):
                success_count += 1
            else:
                print(f"❌ Failed to set CPC palette color #{i}")
                return False
        
        print(f"✅ CPC palette loaded: {success_count}/{min(color_count, 27)} colors")
        return True

    def _load_msx_palette(self, palette_data: bytes, color_count: int) -> bool:
        """Загружает MSX2+ палитру"""
        print("   Using MSX2+ palette mode")
        
        # Устанавливаем режим палитры
        if not self._set_palette_mode('msx'):
            return False
        
        success_count = 0
        for i in range(color_count):
            msx_color = palette_data[i]  # MSX цвет (1 байт)
            
            if self.palette.set_color_msx(i, msx_color, auto_inc=True):
                success_count += 1
            else:
                print(f"❌ Failed to set MSX palette color #{i}")
                return False
        
        print(f"✅ MSX2+ palette loaded: {success_count}/{color_count} colors")
        return success_count == color_count

    def _load_6bit_palette(self, palette_data: bytes, color_count: int) -> bool:
        """Загружает 6-битную палитру"""
        print("   Using 6-bit palette mode")
        
        # Устанавливаем режим палитры
        if not self._set_palette_mode('6bit'):
            return False
        
        success_count = 0
        for i in range(color_count):
            color_6bit = palette_data[i]  # 6-битный цвет
            
            if self.palette.set_color_6bit(i, color_6bit, auto_inc=True):
                success_count += 1
            else:
                print(f"❌ Failed to set 6-bit palette color #{i}")
                return False
        
        print(f"✅ 6-bit palette loaded: {success_count}/{color_count} colors")
        return success_count == color_count

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
  %(prog)s 0x40000 image.pix --force-12bit      # Convert palette to 12-bit
        """
    )
    
    parser.add_argument('address', help='Target address in hex (0x40000 or 40000)')
    parser.add_argument('input', help='Input .PIX file')
    
    # Основные опции
    parser.add_argument('--verify', action='store_true', help='Verify after write')
    parser.add_argument('--checksum', action='store_true', help='Calculate checksums')
    parser.add_argument('--no-progress', action='store_true', help='Disable progress bars')
    parser.add_argument('--force-12bit', action='store_true', 
                       help='Convert palette to 12-bit format')
    
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
        loader.set_force_12bit(args.force_12bit)
        
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
            if args.force_12bit:
                print(f"   Mode: FORCED 12-bit conversion")
            
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
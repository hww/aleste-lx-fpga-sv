#!/usr/bin/env python3
"""
Palette Tool for Aleste LX - Unified CLI Utility
Uses FPGAPalette library for all operations
"""

import sys
import os
import argparse
from typing import List, Optional

current_dir = os.path.dirname(os.path.abspath(__file__))
root_dir = os.path.join(current_dir, '../..')
sys.path.insert(0, root_dir)

# Импортируем ВАШУ библиотеку палитры
from core.palette import FPGAPalette

class PaletteTool:
    """Unified palette management tool using FPGAPalette library"""
    
    def __init__(self):
        # Используем ВАШУ библиотеку вместо самостоятельной реализации
        self.palette = FPGAPalette()
        self.force_12bit = False
        
        # Маппинг режимов для CLI - ОБНОВЛЕНО!
        self.mode_map = {
            'cpc': self.palette.WRITE_MODE_CPC,
            '12bit': self.palette.WRITE_MODE_12BIT,
            'msx': self.palette.WRITE_MODE_MSX,      # MSX RGB режим
            'yjk': self.palette.WRITE_MODE_YJK       # MSX YJK режим
        }
    
    # ===== ПРОСТЫЕ КОМАНДЫ ДЛЯ ОТЛАДКИ =====
    
    def debug_read_register(self, reg: int) -> bool:
        """Просто прочитать регистр и показать значение"""
        value = self.palette.read_reg(reg)
        if value is not None:
            print(f"✅ REG[0x{reg:02X}] = 0x{value:02X} ({value:3d})")
            return True
        else:
            print(f"❌ Не удалось прочитать REG[0x{reg:02X}]")
            return False
    
    def debug_write_register(self, reg: int, value: int) -> bool:
        """Просто записать регистр"""
        if self.palette.write_reg(reg, value):
            print(f"✅ REG[0x{reg:02X}] <- 0x{value:02X} ({value:3d})")
            return True
        else:
            print(f"❌ Не удалось записать REG[0x{reg:02X}]")
            return False
    
    def debug_dump_all_registers(self):
        """Дамп всех регистров палитры"""
        print("🔍 Дамп всех регистров палитры:")
        print("-" * 40)
        return self.palette.dump_regs()
    
    def debug_test_basic_io(self):
        """Базовый тест ввода-вывода"""
        print("🧪 Базовый тест ввода-вывода:")
        print("-" * 30)
        
        # Тест 1: Чтение всех регистров
        print("1. Чтение регистров:")
        self.debug_dump_all_registers()
        
        # Тест 2: Запись/чтение контрольного регистра
        print("\n2. Тест записи/чтения CONTROL:")
        test_value = 0x55
        if self.debug_write_register(self.palette.REG_CONTROL, test_value):
            read_back = self.palette.read_reg(self.palette.REG_CONTROL)
            if read_back == test_value:
                print(f"   ✅ Запись/чтение совпадают: 0x{test_value:02X}")
            else:
                print(f"   ❌ Несовпадение: записали 0x{test_value:02X}, прочитали 0x{read_back:02X}")
        
        # Тест 3: Запись/чтение INDEX
        print("\n3. Тест записи/чтения INDEX:")
        test_index = 0xAA
        if self.debug_write_register(self.palette.REG_PALETTE_INDEX, test_index):
            read_back = self.palette.read_reg(self.palette.REG_PALETTE_INDEX)
            if read_back == test_index:
                print(f"   ✅ Запись/чтение совпадают: 0x{test_index:02X}")
            else:
                print(f"   ❌ Несовпадение: записали 0x{test_index:02X}, прочитали 0x{read_back:02X}")
    
    # ===== MODE MANAGEMENT =====
    
    def set_mode(self, mode_name: str, auto_inc: bool = False) -> bool:
        """Set palette mode using library - ОБНОВЛЕНО!"""
        if mode_name not in self.mode_map:
            print(f"❌ Invalid palette mode: {mode_name}")
            return False
        
        mode = self.mode_map[mode_name]
        
        # Используем новый API без yjk_mode параметра
        return self.palette.set_mode(mode, auto_inc=auto_inc)
    
    def cpc_mode(self, auto_inc: bool = False) -> bool:
        """CPC режим"""
        return self.palette.cpc_mode(auto_inc)
    
    def native_mode(self, auto_inc: bool = False) -> bool:
        """12-битный нативный режим"""
        return self.palette.native_12bit_mode(auto_inc)
    
    def msx_mode(self, auto_inc: bool = False) -> bool:
        """MSX RGB режим"""
        return self.palette.msx_rgb_mode(auto_inc)
    
    def yjk_mode(self, auto_inc: bool = False) -> bool:
        """MSX YJK режим"""
        return self.palette.msx_yjk_mode(auto_inc)
    
    def get_mode_info(self):
        """Get current mode information"""
        return self.palette.get_mode()
    
    # ===== PALETTE OPERATIONS =====
    
    def write_color(self, index: int, color: int, auto_inc: bool = False) -> bool:
        """Write color to palette using library"""
        if self.force_12bit:
            # Принудительная программная конвертация
            return self.palette.set_color(index, color, 
                                       mode=self.palette.WRITE_MODE_12BIT,
                                       auto_inc=auto_inc)
        else:
            # Используем текущий режим библиотеки
            return self.palette.set_color(index, color, auto_inc=auto_inc)
    
    def read_color(self, index: int) -> Optional[int]:
        """Read color from palette using library"""
        return self.palette.get_color(index)
    
    def fill(self, start: int, count: int, start_value: int = 0, step: int = 1) -> int:
        """Fill palette range"""
        success = 0
        for i in range(count):
            color = start_value + (i * step)
            if self.write_color(start + i, color, auto_inc=False):
                success += 1
        return success
    
    def fill_gradient(self, start: int, count: int, start_color: int, end_color: int) -> int:
        """Fill palette range with gradient"""
        success = 0
        
        # Extract RGB components
        r1 = (start_color >> 8) & 0x0F
        g1 = (start_color >> 4) & 0x0F
        b1 = start_color & 0x0F
        
        r2 = (end_color >> 8) & 0x0F
        g2 = (end_color >> 4) & 0x0F  
        b2 = end_color & 0x0F
        
        for i in range(count):
            # Linear interpolation
            factor = i / max(count - 1, 1)
            r = int(r1 + (r2 - r1) * factor)
            g = int(g1 + (g2 - g1) * factor)
            b = int(b1 + (b2 - b1) * factor)
            
            color = (r << 8) | (g << 4) | b
            if self.write_color(start + i, color, auto_inc=False):
                success += 1
        
        return success
    
    # ===== BORDER OPERATIONS =====
    
    def set_border(self, color: int) -> bool:
        """Set border color"""
        # Для простоты используем прямое обращение к регистрам бордюра
        low = color & 0xFF
        high = (color >> 8) & 0x0F
        
        if not self.palette.write_reg(self.palette.REG_BORDER_LOW, low):
            return False
        return self.palette.write_reg(self.palette.REG_BORDER_HIGH, high)
    
    def get_border(self) -> Optional[int]:
        """Get border color"""
        low = self.palette.read_reg(self.palette.REG_BORDER_LOW)
        high = self.palette.read_reg(self.palette.REG_BORDER_HIGH)
        
        if low is None or high is None:
            return None
        
        return ((high & 0x0F) << 8) | low
    
    # ===== TESTING =====
    
    def memory_test(self) -> bool:
        """Test palette memory using library functions"""
        print("🧪 Testing palette memory...")
        
        # Save current mode
        original_mode = self.get_mode_info()
        
        # Switch to 12-bit mode for testing
        if not self.native_mode():
            print("❌ Cannot switch to 12-bit mode")
            return False
        
        test_patterns = [
            [0x000, 0xFFF, 0x555, 0xAAA],
            [0xF00, 0x0F0, 0x00F, 0xFF0],
            [0x123, 0x456, 0x789, 0xABC],
        ]
        
        all_passed = True
        
        for pattern_idx, pattern in enumerate(test_patterns):
            print(f"  Pattern {pattern_idx + 1}: ", end="")
            
            # Write pattern
            write_ok = True
            for i, color in enumerate(pattern):
                if not self.write_color(i, color):
                    write_ok = False
                    break
            
            if not write_ok:
                print("❌ Write failed")
                all_passed = False
                continue
            
            # Read back and verify
            read_ok = True
            for i, expected_color in enumerate(pattern):
                read_color = self.read_color(i)
                if read_color != expected_color:
                    print(f"❌ Mismatch at #{i}: wrote 0x{expected_color:03X}, read 0x{read_color:03X}")
                    read_ok = False
                    all_passed = False
                    break
            
            if read_ok:
                print("✅ Passed")
        
        # Restore original mode
        if original_mode:
            mode_name_map = {
                self.palette.WRITE_MODE_CPC: 'cpc',
                self.palette.WRITE_MODE_12BIT: '12bit', 
                self.palette.WRITE_MODE_MSX: 'msx',
                self.palette.WRITE_MODE_YJK: 'yjk'
            }
            original_mode_name = mode_name_map.get(original_mode['write_mode'], '12bit')
            self.set_mode(original_mode_name, auto_inc=original_mode['auto_increment'])
        
        if all_passed:
            print("🎉 All memory tests passed!")
        else:
            print("💥 Memory test failed!")
        
        return all_passed

    # ===== DEBUG/INFO =====
    
    def decode_color(self, color_12bit: int) -> str:
        """Decode 12-bit color to string"""
        r = (color_12bit >> 8) & 0x0F
        g = (color_12bit >> 4) & 0x0F
        b = color_12bit & 0x0F
        return f"R:{r:1X} G:{g:1X} B:{b:1X}"
    
    def dump_registers(self):
        """Dump all palette registers using library"""
        return self.palette.dump_regs()
    
    def dump_palette(self, start: int = 0, count: int = 16):
        """Dump palette range using library"""
        palette_data = self.palette.get_palette(start, count)
        print(f"🎨 Palette #{start}-#{start+count-1}:")
        print("-" * 50)
        
        for i, color in enumerate(palette_data):
            index = start + i
            rgb = self.decode_color(color)
            print(f"  #{index:3d}: 0x{color:03X} = {rgb}")
    
    def close(self):
        """Close connection"""
        if self.palette:
            self.palette.close()

def usage():
    print("🎨 Palette Tool for Aleste LX - Usage Examples")
    print("=" * 50)
    print("# ДЛЯ ОТЛАДКИ - простые команды:")
    print("./palette_tool.py regr 3           # Прочитать регистр 3")
    print("./palette_tool.py regw 3 0x55      # Записать 0x55 в регистр 3")  
    print("./palette_tool.py regdump          # Дамп всех регистров")
    print("./palette_tool.py iotest           # Базовый тест ввода-вывода")
    print("")
    print("# Аппаратная конверсия (использует FPGA)")
    print("./palette_tool.py mode cpc")
    print("./palette_tool.py write 0 10  # CPC color index 10")
    print("")
    print("# Программная конверсия (отладка)")
    print("./palette_tool.py --force12b mode cpc")
    print("./palette_tool.py --force12b write 0 10")
    print("")
    print("# Заполнение")
    print("./palette_tool.py fill 0 16 --start-value 0 --step 1")
    print("./palette_tool.py gradient 0 16 0x000 0xFFF")
    print("")
    print("# Тестирование")
    print("./palette_tool.py test")
    print("./palette_tool.py dump --start 0 --count 8")
    print("")
    print("# Другие команды")
    print("./palette_tool.py read 5              # Прочитать цвет #5")
    print("./palette_tool.py border 0xF00        # Красный бордюр")
    print("./palette_tool.py registers           # Дамп регистров")
    print("")
    print("# Режимы палитры: cpc, 12bit, msx, yjk")
    print("# Автоинкремент: --auto-inc")
    print("# Формат цветов: 10 (dec), 0xA (hex), 0xFFF (12-bit)")

def main():
    parser = argparse.ArgumentParser(description="Palette Tool for Aleste LX")
    subparsers = parser.add_subparsers(dest='command', help='Command to execute')
    
    # ===== ОТЛАДОЧНЫЕ КОМАНДЫ =====
    
    # Read register command
    regr_parser = subparsers.add_parser('regr', help='Read palette register')
    regr_parser.add_argument('register', type=lambda x: int(x, 0), help='Register address')
    
    # Write register command  
    regw_parser = subparsers.add_parser('regw', help='Write palette register')
    regw_parser.add_argument('register', type=lambda x: int(x, 0), help='Register address')
    regw_parser.add_argument('value', type=lambda x: int(x, 0), help='Value to write')
    
    # Register dump command
    subparsers.add_parser('regdump', help='Dump all palette registers')
    
    # IO test command
    subparsers.add_parser('iotest', help='Basic IO test')
    
    # ===== ОСНОВНЫЕ КОМАНДЫ =====
    
    # Mode setting commands
    mode_parser = subparsers.add_parser('mode', help='Set palette mode')
    mode_parser.add_argument('mode', choices=['cpc', '12bit', 'msx', 'yjk'], 
                           help='Palette mode')
    mode_parser.add_argument('--auto-inc', action='store_true', help='Auto increment')
    
    # Write commands
    write_parser = subparsers.add_parser('write', help='Write color to palette')
    write_parser.add_argument('index', type=int, help='Color index')
    write_parser.add_argument('color', type=lambda x: int(x, 0), help='Color value')
    write_parser.add_argument('--auto-inc', action='store_true', help='Auto increment')
    
    # Read commands  
    read_parser = subparsers.add_parser('read', help='Read color from palette')
    read_parser.add_argument('index', type=int, help='Color index')
    
    # Fill commands
    fill_parser = subparsers.add_parser('fill', help='Fill palette range')
    fill_parser.add_argument('start', type=int, help='Start index')
    fill_parser.add_argument('count', type=int, help='Number of colors')
    fill_parser.add_argument('--start-value', type=int, default=0, help='Start value')
    fill_parser.add_argument('--step', type=int, default=1, help='Increment step')
    
    # Gradient command
    grad_parser = subparsers.add_parser('gradient', help='Fill with gradient')
    grad_parser.add_argument('start', type=int, help='Start index')
    grad_parser.add_argument('count', type=int, help='Number of colors')
    grad_parser.add_argument('start_color', type=lambda x: int(x, 0), help='Start color')
    grad_parser.add_argument('end_color', type=lambda x: int(x, 0), help='End color')
    
    # Test command
    subparsers.add_parser('test', help='Write test pattern')
    
    # Info commands
    subparsers.add_parser('registers', help='Dump registers')
    dump_parser = subparsers.add_parser('dump', help='Dump palette')
    dump_parser.add_argument('--start', type=int, default=0, help='Start index')
    dump_parser.add_argument('--count', type=int, default=16, help='Number of colors')
    
    # Border commands
    border_parser = subparsers.add_parser('border', help='Set border color')
    border_parser.add_argument('color', type=lambda x: int(x, 0), help='Border color')
    
    # Help command
    subparsers.add_parser('help', help='Print help test')

    # Global options
    parser.add_argument('--force12b', '--translate', '--soft', '--simulate', 
                       dest='force_12bit', action='store_true',
                       help='Use software conversion (12-bit mode)')
    
    args = parser.parse_args()
    
    if not args.command:
        parser.print_help()
        return
    
    tool = PaletteTool()
    try:
        # Set software conversion mode if requested
        if args.force_12bit:
            tool.force_12bit = True
            tool.native_mode()  # Force 12-bit hardware mode
        
        # ===== ОБРАБОТКА ОТЛАДОЧНЫХ КОМАНД =====
        if args.command == 'regr':
            tool.debug_read_register(args.register)
                
        elif args.command == 'regw':
            tool.debug_write_register(args.register, args.value)
                
        elif args.command == 'regdump':
            tool.debug_dump_all_registers()
                
        elif args.command == 'iotest':
            tool.debug_test_basic_io()
        
        # ===== ОБРАБОТКА ОСНОВНЫХ КОМАНД =====
        elif args.command == 'mode':
            mode_switcher = {
                'cpc': tool.cpc_mode,
                '12bit': tool.native_mode,
                'msx': tool.msx_mode,
                'yjk': tool.yjk_mode
            }
            if mode_switcher[args.mode](args.auto_inc):
                print(f"✅ Mode set to {args.mode.upper()}")
            else:
                print("❌ Failed to set mode")
                
        elif args.command == 'write':
            if tool.write_color(args.index, args.color, args.auto_inc):
                print(f"✅ #{args.index} = 0x{args.color:X}")
            else:
                print("❌ Write failed")
                
        elif args.command == 'read':
            color = tool.read_color(args.index)
            if color is not None:
                rgb = tool.decode_color(color)
                print(f"✅ #{args.index}: 0x{color:03X} = {rgb}")
            else:
                print("❌ Read failed")
                
        elif args.command == 'fill':
            count = tool.fill(args.start, args.count, args.start_value, args.step)
            print(f"✅ Filled {count}/{args.count} colors")
            
        elif args.command == 'gradient':
            count = tool.fill_gradient(args.start, args.count, args.start_color, args.end_color)
            print(f"✅ Gradient filled {count}/{args.count} colors")
            
        elif args.command == 'test':
            count = tool.memory_test()
            
        elif args.command == 'registers':
            tool.dump_registers()
            
        elif args.command == 'dump':
            tool.dump_palette(args.start, args.count)
            
        elif args.command == 'border':
            if tool.set_border(args.color):
                print(f"✅ Border = 0x{args.color:03X}")
            else:
                print("❌ Failed to set border")

        elif args.command == 'help':
            usage()      

    except Exception as e:
        print(f"❌ Error: {e}", file=sys.stderr)
    finally:
        tool.close()


if __name__ == "__main__":
    main()
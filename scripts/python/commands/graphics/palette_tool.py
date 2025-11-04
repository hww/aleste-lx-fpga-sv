#!/usr/bin/env python3
"""
Утилита для чтения/записи палитры Aleste LX
Соответствует аппаратной реализации color_palette.v
"""

import sys
import os
current_dir = os.path.dirname(os.path.abspath(__file__))
root_dir = os.path.join(current_dir, '../..')
sys.path.insert(0, root_dir)

from core.memory import FPGAMemory

class Palette_Tool:
    def __init__(self):
        self.fpga = FPGAMemory()
        self.palette_base = 0xFF0100  # Palette base address (native mode)
        
        # Регистры палитры согласно color_palette.v
        self.registers = {
            0x00: "PALETTE_INDEX",
            0x01: "PALETTE_DATA_LOW", 
            0x02: "PALETTE_DATA_HIGH",
            0x03: "CONTROL_REG",
            0x04: "MODIFIER_REG", 
            0x05: "BORDER_COLOR_LOW",
            0x06: "BORDER_COLOR_HIGH"
        }
        
        # Битовая маска CONTROL_REG
        self.control_bits = {
            "modifier_enable": 7,
            "modifier_type": 6,  # 0=OR, 1=XOR
            "auto_increment": 5,
            "palette_write_mode": (4, 3),  # [4:3]
            "reserved": (2, 0)
        }
        
        # Режимы записи палитры
        self.write_modes = {
            0: "CPC mode",
            1: "EX 6-bit mode", 
            2: "MSX2+ 8-bit mode",
            3: "Native 12-bit mode"
        }
    
    def read_register(self, reg):
        """Прочитать регистр палитры"""
        try:
            data = self.fpga.read_memory(self.palette_base + reg, 1)
            return data[0] if data else None
        except Exception as e:
            print(f"❌ Ошибка чтения регистра 0x{reg:02X}: {e}")
            return None
    
    def write_register(self, reg, value):
        """Записать регистр палитры"""
        try:
            self.fpga.write_memory(self.palette_base + reg, bytes([value]))
            return True
        except Exception as e:
            print(f"❌ Ошибка записи регистра 0x{reg:02X}: {e}")
            return False
    
    def set_palette_index(self, index):
        """Установить индекс палитры (регистр 0x00)"""
        return self.write_register(0x00, index)
    
    def get_palette_index(self):
        """Получить текущий индекс палитры"""
        return self.read_register(0x00)
    
    def read_palette_color(self, index=None):
        """Прочитать цвет из палитры"""
        if index is not None:
            if not self.set_palette_index(index):
                return None
        
        # Читаем младший и старший байты
        low = self.read_register(0x01)
        high = self.read_register(0x02)
        
        if low is None or high is None:
            return None
            
        color_12bit = ((high & 0x0F) << 8) | low
        return color_12bit
    
    def write_palette_color(self, index, color_12bit, write_mode=3, auto_inc=False):
        """Записать цвет в палитру (12-bit RGB)"""
        # Устанавливаем индекс
        if not self.set_palette_index(index):
            return False
        
        # Настраиваем control register
        control = (write_mode & 0x3) << 3
        if auto_inc:
            control |= (1 << 5)
        
        if not self.write_register(0x03, control):
            return False
        
        # Записываем цвет (12-bit mode)
        low_byte = color_12bit & 0xFF
        high_byte = (color_12bit >> 8) & 0x0F
        
        if not self.write_register(0x01, low_byte):
            return False
        if not self.write_register(0x02, high_byte):
            return False
            
        return True
    
    def write_palette_color_msx(self, index, msx_color, auto_inc=False):
        """Записать цвет в формате MSX2+ (8-bit)"""
        if not self.set_palette_index(index):
            return False
        
        # Настраиваем control register для MSX2+ mode
        control = (2 & 0x3) << 3  # MSX2+ mode
        if auto_inc:
            control |= (1 << 5)
        
        if not self.write_register(0x03, control):
            return False
        
        # Записываем MSX2+ цвет
        if not self.write_register(0x01, msx_color):
            return False
            
        return True
    
    def set_border_color(self, color_12bit):
        """Установить цвет бордюра"""
        low_byte = color_12bit & 0xFF
        high_byte = (color_12bit >> 8) & 0x0F
        
        if not self.write_register(0x05, low_byte):
            return False
        if not self.write_register(0x06, high_byte):
            return False
            
        return True
    
    def get_border_color(self):
        """Получить цвет бордюра"""
        low = self.read_register(0x05)
        high = self.read_register(0x06)
        
        if low is None or high is None:
            return None
            
        return ((high & 0x0F) << 8) | low
    
    def set_modifier(self, value, enabled=True, modifier_type=0):
        """Установить модификатор палитры"""
        # Сначала читаем текущий control register
        control = self.read_register(0x03)
        if control is None:
            control = 0
        
        # Обновляем биты модификатора
        if enabled:
            control |= (1 << 7)
        else:
            control &= ~(1 << 7)
            
        if modifier_type:  # 1=XOR, 0=OR
            control |= (1 << 6)
        else:
            control &= ~(1 << 6)
        
        # Записываем обновленный control и значение модификатора
        if not self.write_register(0x03, control):
            return False
        if not self.write_register(0x04, value):
            return False
            
        return True
    
    def decode_12bit_color(self, color_12bit):
        """Декодировать 12-bit цвет в RGB"""
        r = (color_12bit >> 8) & 0x0F
        g = (color_12bit >> 4) & 0x0F  
        b = color_12bit & 0x0F
        return f"R:{r:1X} G:{g:1X} B:{b:1X}"
    
    def decode_msx_color(self, msx_color):
        """Декодировать MSX2+ цвет"""
        r = (msx_color >> 5) & 0x7
        g = (msx_color >> 2) & 0x7
        b = msx_color & 0x3
        return f"R:{r} G:{g} B:{b}"
    
    def show_palette_entry(self, index, color_12bit):
        """Показать запись палитры"""
        rgb = self.decode_12bit_color(color_12bit)
        print(f"  #{index:3d}: 0x{color_12bit:03X} = {rgb}")
    
    def dump_palette(self, start=0, count=16):
        """Дамп палитры"""
        print(f"🎨 Дамп палитры #{start}-#{start+count-1}:")
        print("=" * 50)
        
        for i in range(count):
            index = start + i
            color = self.read_palette_color(index)
            if color is not None:
                self.show_palette_entry(index, color)
            else:
                print(f"  #{index:3d}: ❌ Ошибка чтения")
    
    def dump_registers(self):
        """Дамп всех регистров палитры"""
        print("📊 Регистры палитры:")
        print("=" * 50)
        
        for reg, name in sorted(self.registers.items()):
            value = self.read_register(reg)
            if value is not None:
                print(f"  0x{reg:02X} ({name:20}): 0x{value:02X} = {value:3d}")
        
        # Покажем цвет бордюра
        border = self.get_border_color()
        if border is not None:
            rgb = self.decode_12bit_color(border)
            print(f"  🏁 Border color: 0x{border:03X} = {rgb}")
    
    def set_gradient_palette(self, start=0, count=16):
        """Установить градиентную палитру"""
        print(f"🌈 Установка градиентной палитры #{start}-#{start+count-1}:")
        
        for i in range(count):
            index = start + i
            # Создаем градиентный 12-bit цвет
            r = (i * 15 // count) & 0x0F
            g = ((i + 5) * 15 // count) & 0x0F  
            b = ((i + 10) * 15 // count) & 0x0F
            color_12bit = (r << 8) | (g << 4) | b
            
            if self.write_palette_color(index, color_12bit):
                print(f"  ✅ #{index:3d} = 0x{color_12bit:03X}")
            else:
                print(f"  ❌ #{index:3d} = 0x{color_12bit:03X} - ошибка")
    
    def set_test_pattern(self):
        """Установить тестовый паттерн цветов"""
        test_colors = [
            0x000,  # Black
            0xFFF,  # White
            0xF00,  # Red
            0x0F0,  # Green
            0x00F,  # Blue
            0xFF0,  # Yellow
            0xF0F,  # Magenta
            0x0FF,  # Cyan
        ]
        
        print("🎯 Установка тестового паттерна:")
        for i, color in enumerate(test_colors):
            if self.write_palette_color(i, color):
                print(f"  ✅ #{i} = 0x{color:03X}")
            else:
                print(f"  ❌ #{i} = 0x{color:03X} - ошибка")
    
    def interactive_mode(self):
        """Интерактивный режим"""
        print("🎮 Интерактивный режим палитры Aleste LX")
        print("Команды:")
        print("  r <reg>        - чтение регистра")
        print("  w <reg> <val>  - запись регистра") 
        print("  ri <index>     - чтение цвета по индексу")
        print("  wi <index> <color> - запись 12-bit цвета")
        print("  wm <index> <msx>   - запись MSX2+ цвета")
        print("  d [start] [count] - дамп палитры")
        print("  dr              - дамп регистров")
        print("  border <color> - установить цвет бордюра")
        print("  mod <val> [en] [type] - модификатор палитры")
        print("  grad [count]   - градиентная палитра")
        print("  test           - тестовый паттерн")
        print("  q              - выход")
        
        while True:
            try:
                cmd = input("\nPalette> ").strip().split()
                if not cmd:
                    continue
                    
                if cmd[0] == 'q':
                    break
                    
                elif cmd[0] == 'r' and len(cmd) > 1:
                    # Чтение регистра
                    reg = int(cmd[1], 0)
                    value = self.read_register(reg)
                    if value is not None:
                        name = self.registers.get(reg, "UNKNOWN")
                        print(f"  0x{reg:02X} ({name}): 0x{value:02X} = {value:3d}")
                        
                elif cmd[0] == 'w' and len(cmd) > 2:
                    # Запись регистра
                    reg = int(cmd[1], 0)
                    value = int(cmd[2], 0)
                    if self.write_register(reg, value):
                        print(f"  ✅ 0x{reg:02X} = 0x{value:02X}")
                    else:
                        print("  ❌ Ошибка записи")
                        
                elif cmd[0] == 'ri' and len(cmd) > 1:
                    # Чтение цвета по индексу
                    index = int(cmd[1], 0)
                    color = self.read_palette_color(index)
                    if color is not None:
                        self.show_palette_entry(index, color)
                        
                elif cmd[0] == 'wi' and len(cmd) > 2:
                    # Запись 12-bit цвета
                    index = int(cmd[1], 0)
                    color = int(cmd[2], 0)
                    if self.write_palette_color(index, color):
                        print(f"  ✅ #{index} = 0x{color:03X}")
                    else:
                        print("  ❌ Ошибка записи")
                        
                elif cmd[0] == 'wm' and len(cmd) > 2:
                    # Запись MSX2+ цвета
                    index = int(cmd[1], 0)
                    msx_color = int(cmd[2], 0)
                    if self.write_palette_color_msx(index, msx_color):
                        print(f"  ✅ #{index} = MSX 0x{msx_color:02X}")
                    else:
                        print("  ❌ Ошибка записи")
                        
                elif cmd[0] == 'd':
                    # Дамп палитры
                    start = int(cmd[1], 0) if len(cmd) > 1 else 0
                    count = int(cmd[2], 0) if len(cmd) > 2 else 16
                    self.dump_palette(start, count)
                    
                elif cmd[0] == 'dr':
                    # Дамп регистров
                    self.dump_registers()
                    
                elif cmd[0] == 'border' and len(cmd) > 1:
                    # Установка бордюра
                    color = int(cmd[1], 0)
                    if self.set_border_color(color):
                        print(f"  ✅ Border = 0x{color:03X}")
                    else:
                        print("  ❌ Ошибка установки бордюра")
                        
                elif cmd[0] == 'mod' and len(cmd) > 1:
                    # Модификатор палитры
                    value = int(cmd[1], 0)
                    enabled = bool(int(cmd[2], 0)) if len(cmd) > 2 else True
                    mod_type = int(cmd[3], 0) if len(cmd) > 3 else 0
                    
                    if self.set_modifier(value, enabled, mod_type):
                        mode = "XOR" if mod_type else "OR"
                        status = "enabled" if enabled else "disabled"
                        print(f"  ✅ Modifier {status}, {mode}, value=0x{value:02X}")
                    else:
                        print("  ❌ Ошибка установки модификатора")
                        
                elif cmd[0] == 'grad':
                    # Градиентная палитра
                    count = int(cmd[1], 0) if len(cmd) > 1 else 16
                    self.set_gradient_palette(0, count)
                    
                elif cmd[0] == 'test':
                    # Тестовый паттерн
                    self.set_test_pattern()
                    
                elif cmd[0] == 'help':
                    print("r 0x03        - прочитать регистр 0x03 (CONTROL)")
                    print("w 0x00 5      - записать 5 в PALETTE_INDEX")  
                    print("ri 10         - прочитать цвет #10")
                    print("wi 10 0xFFF   - записать белый в #10")
                    print("wm 10 0x7F    - записать MSX2+ цвет в #10")
                    print("d 0 32        - дамп 32 цветов начиная с #0")
                    print("dr            - дамп всех регистров")
                    print("border 0xF00  - установить красный бордюр")
                    print("mod 0x55      - установить модификатор OR 0x55")
                    print("mod 0xAA 1 1  - установить модификатор XOR 0xAA включен")
                    print("grad 64       - установить градиент 64 цветов")
                    
                else:
                    print("❌ Неизвестная команда. help - справка")
                    
            except KeyboardInterrupt:
                print("\n👋 Выход")
                break
            except Exception as e:
                print(f"❌ Ошибка: {e}")
    
    def close(self):
        """Закрыть соединение"""
        if self.fpga:
            self.fpga.close()

def main():
    if len(sys.argv) == 1:
        # Интерактивный режим
        tool = Palette_Tool()
        try:
            tool.interactive_mode()
        finally:
            tool.close()
            
    elif len(sys.argv) >= 2:
        # Командный режим
        tool = Palette_Tool()
        try:
            cmd = sys.argv[1]
            
            if cmd == "read" and len(sys.argv) >= 3:
                reg = int(sys.argv[2], 0)
                value = tool.read_register(reg)
                if value is not None:
                    name = tool.registers.get(reg, "UNKNOWN")
                    print(f"0x{reg:02X} ({name}): 0x{value:02X}")
                    
            elif cmd == "write" and len(sys.argv) >= 4:
                reg = int(sys.argv[2], 0)
                value = int(sys.argv[3], 0)
                success = tool.write_register(reg, value)
                if success:
                    print(f"✅ 0x{reg:02X} = 0x{value:02X}")
                else:
                    print("❌ Ошибка записи")
                    
            elif cmd == "read_color" and len(sys.argv) >= 3:
                index = int(sys.argv[2], 0)
                color = tool.read_palette_color(index)
                if color is not None:
                    tool.show_palette_entry(index, color)
                    
            elif cmd == "write_color" and len(sys.argv) >= 4:
                index = int(sys.argv[2], 0)
                color = int(sys.argv[3], 0)
                success = tool.write_palette_color(index, color)
                if success:
                    print(f"✅ #{index} = 0x{color:03X}")
                else:
                    print("❌ Ошибка записи")
                    
            elif cmd == "dump":
                start = int(sys.argv[2], 0) if len(sys.argv) >= 3 else 0
                count = int(sys.argv[3], 0) if len(sys.argv) >= 4 else 16
                tool.dump_palette(start, count)
                
            elif cmd == "registers":
                tool.dump_registers()
                
            elif cmd == "border" and len(sys.argv) >= 3:
                color = int(sys.argv[2], 0)
                success = tool.set_border_color(color)
                if success:
                    print(f"✅ Border = 0x{color:03X}")
                else:
                    print("❌ Ошибка установки бордюра")
                    
            elif cmd == "gradient":
                count = int(sys.argv[2], 0) if len(sys.argv) >= 3 else 16
                tool.set_gradient_palette(0, count)
                
            elif cmd == "test":
                tool.set_test_pattern()
                
            else:
                print("❌ Неизвестная команда")
                print_help()
                
        finally:
            tool.close()
    else:
        print_help()

def print_help():
    print("🎨 Утилита для работы с палитрой Aleste LX")
    print("Использование:")
    print("  palette_tool.py                          # Интерактивный режим")
    print("  palette_tool.py read <reg>               # Чтение регистра")
    print("  palette_tool.py write <reg> <value>      # Запись регистра")
    print("  palette_tool.py read_color <index>       # Чтение цвета")
    print("  palette_tool.py write_color <index> <color> # Запись 12-bit цвета")
    print("  palette_tool.py dump [start] [count]     # Дамп палитры")
    print("  palette_tool.py registers                # Дамп регистров")
    print("  palette_tool.py border <color>           # Установить бордюр")
    print("  palette_tool.py gradient [count]         # Градиентная палитра")
    print("  palette_tool.py test                     # Тестовый паттерн")
    print("\nПримеры:")
    print("  palette_tool.py read 0x00               # Прочитать PALETTE_INDEX")
    print("  palette_tool.py write 0x00 10           # Установить индекс=10")
    print("  palette_tool.py read_color 5            # Прочитать цвет #5")
    print("  palette_tool.py write_color 5 0xFFF     # Записать белый в #5")
    print("  palette_tool.py dump 0 32               # Дамп 32 цветов")
    print("  palette_tool.py border 0xF00            # Красный бордюр")

if __name__ == "__main__":
    main()
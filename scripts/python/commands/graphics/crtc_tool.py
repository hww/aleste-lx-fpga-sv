#!/usr/bin/env python3
"""
Утилита для чтения/записи регистров CRTC
"""

import sys
import os
current_dir = os.path.dirname(os.path.abspath(__file__))
root_dir = os.path.join(current_dir, '../..')
sys.path.insert(0, root_dir)

from core.memory import FPGAMemory

class CRTC_Tool:
    def __init__(self):
        self.fpga = FPGAMemory()
        self.crtc_base = 0xFF0120  # CRTC base address
        
        # Названия регистров для удобства
        self.reg_names = {
            0x00: "HTOTAL",
            0x01: "HDISPLAY", 
            0x02: "HSYNCPOS",
            0x03: "HSYNCWIDTH",
            0x04: "VTOTAL",
            0x05: "VADJUST",
            0x06: "VDISPLAY",
            0x07: "VSYNCPOS",
            0x08: "INTERLACE",
            0x09: "MAXSCAN",
            0x0A: "CURSTART",
            0x0B: "CUREND",
            0x0C: "STARTH",
            0x0D: "STARTL", 
            0x0E: "CURH",
            0x0F: "CURL",
            0x12: "VIDEO_CONTROL",
            0x19: "HIGH_ADDRESS",
            0x1A: "ADDR_MODE",
            0x1B: "PIXEL_CTRL"
        }
    
    def read_reg(self, reg):
        """Прочитать регистр CRTC"""
        try:
            # Сначала выбираем регистр
            self.fpga.write_memory(self.crtc_base, bytes([reg & 0x1F]))
            # Потом читаем данные
            data = self.fpga.read_memory(self.crtc_base + 1, 1)
            return data[0] if data else None
        except Exception as e:
            print(f"❌ Ошибка чтения регистра 0x{reg:02X}: {e}")
            return None
    
    def write_reg(self, reg, value, mask=0xFF):
        """Записать регистр CRTC (с поддержкой маски)"""
        try:
            if mask == 0xFF:
                # Простая запись
                print(f"📝 Запись: 0x{reg:02X} = 0x{value:02X}")
                self.fpga.write_memory(self.crtc_base, bytes([reg & 0x1F]))
                self.fpga.write_memory(self.crtc_base + 1, bytes([value]))
            else:
                # Читаем-модифицируем-записываем
                current = self.read_reg(reg)
                if current is None:
                    print(f"❌ Не удалось прочитать регистр 0x{reg:02X}")
                    return False
                
                updated = (current & ~mask) | (value & mask)
                print(f"🔧 Регистр 0x{reg:02X}: 0x{current:02X} -> 0x{updated:02X} (маска=0x{mask:02X})")
                
                self.fpga.write_memory(self.crtc_base, bytes([reg & 0x1F]))
                self.fpga.write_memory(self.crtc_base + 1, bytes([updated]))
            
            return True
            
        except Exception as e:
            print(f"❌ Ошибка записи регистра 0x{reg:02X}: {e}")
            return False
    
    def dump_all_regs(self):
        """Дамп всех регистров CRTC"""
        print("🎮 Дамп всех регистров CRTC:")
        print("=" * 50)
        
        registers = sorted(self.reg_names.keys())
        for reg in registers:
            value = self.read_reg(reg)
            if value is not None:
                name = self.reg_names.get(reg, "UNKNOWN")
                print(f"  0x{reg:02X} ({name:15}): 0x{value:02X} = {value:3d} = 0b{value:08b}")
    
    def interactive_mode(self):
        """Интерактивный режим"""
        print("🎮 Интерактивный режим CRTC")
        print("Команды: r <reg> - чтение, w <reg> <value> - запись, d - дамп, q - выход")
        
        while True:
            try:
                cmd = input("\nCRTC> ").strip().split()
                if not cmd:
                    continue
                    
                if cmd[0] == 'q':
                    break
                elif cmd[0] == 'r' and len(cmd) > 1:
                    # Чтение регистра
                    reg = int(cmd[1], 0)  # Поддержка hex/dec/bin
                    value = self.read_reg(reg)
                    if value is not None:
                        name = self.reg_names.get(reg, "UNKNOWN")
                        print(f"  0x{reg:02X} ({name}): 0x{value:02X} = {value:3d} = 0b{value:08b}")
                        
                elif cmd[0] == 'w' and len(cmd) > 2:
                    # Запись регистра
                    reg = int(cmd[1], 0)
                    value = int(cmd[2], 0)
                    mask = int(cmd[3], 0) if len(cmd) > 3 else 0xFF
                    self.write_reg(reg, value, mask)
                    
                elif cmd[0] == 'd':
                    # Дамп всех регистров
                    self.dump_all_regs()
                    
                elif cmd[0] == 'help':
                    print("r 0x12       - прочитать регистр 0x12")
                    print("w 0x12 0x55  - записать 0x55 в регистр 0x12")  
                    print("w 0x12 0x01 0xF0 - записать только старшие 4 бита")
                    print("d            - дамп всех регистров")
                    print("q            - выход")
                    
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
        tool = CRTC_Tool()
        try:
            tool.interactive_mode()
        finally:
            tool.close()
            
    elif len(sys.argv) == 2 and sys.argv[1] == "dump":
        # Дамп всех регистров
        tool = CRTC_Tool()
        try:
            tool.dump_all_regs()
        finally:
            tool.close()
            
    elif len(sys.argv) >= 3:
        # Командный режим
        tool = CRTC_Tool()
        try:
            cmd = sys.argv[1]
            
            if cmd == "read" and len(sys.argv) >= 3:
                reg = int(sys.argv[2], 0)
                value = tool.read_reg(reg)
                if value is not None:
                    name = tool.reg_names.get(reg, "UNKNOWN")
                    print(f"0x{reg:02X} ({name}): 0x{value:02X}")
                    
            elif cmd == "write" and len(sys.argv) >= 4:
                reg = int(sys.argv[2], 0)
                value = int(sys.argv[3], 0)
                mask = int(sys.argv[4], 0) if len(sys.argv) >= 5 else 0xFF
                success = tool.write_reg(reg, value, mask)
                if success:
                    print("✅ Запись успешна")
                else:
                    print("❌ Ошибка записи")
                    
            else:
                print("❌ Неизвестная команда")
                print("Использование:")
                print("  crtc_tool.py                    # Интерактивный режим")
                print("  crtc_tool.py dump               # Дамп всех регистров")
                print("  crtc_tool.py read <reg>         # Чтение регистра")
                print("  crtc_tool.py write <reg> <value> [mask] # Запись регистра")
                
        finally:
            tool.close()
            
    else:
        print("🎮 Утилита для работы с регистрами CRTC")
        print("Использование:")
        print("  crtc_tool.py                    # Интерактивный режим")
        print("  crtc_tool.py dump               # Дамп всех регистров") 
        print("  crtc_tool.py read <reg>         # Чтение регистра")
        print("  crtc_tool.py write <reg> <value> [mask] # Запись регистра")
        print("\nПримеры:")
        print("  crtc_tool.py read 0x12          # Прочитать VIDEO_CONTROL")
        print("  crtc_tool.py write 0x12 0x11    # Записать в VIDEO_CONTROL")
        print("  crtc_tool.py write 0x12 0x01 0x0F # Записать только младшие 4 бита")

if __name__ == "__main__":
    main()
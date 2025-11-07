"""
FPGA Palette Controller for Aleste LX - Updated API with YJK conversion
"""

from .memory import FPGAMemory

class FPGAPalette:
    def __init__(self, fpga_memory=None, base_addr=0xFF0100):
        self.fpga = fpga_memory or FPGAMemory()
        self.palette_base = base_addr
        
        # Регистры палитры
        self.REG_PALETTE_INDEX = 0x00
        self.REG_PALETTE_DATA_LOW = 0x01 
        self.REG_PALETTE_DATA_HIGH = 0x02
        self.REG_CONTROL = 0x03
        self.REG_MODIFIER = 0x04 
        self.REG_BORDER_LOW = 0x05
        self.REG_BORDER_HIGH = 0x06
        
        # Режимы записи палитры
        self.WRITE_MODE_CPC = 0
        self.WRITE_MODE_MSX2P = 1
        self.WRITE_MODE_NATIVE12BIT = 2
        
        # Флаги управления
        self.MODIFIER_ENABLE = 0x80
        self.MODIFIER_XOR = 0x40
        self.AUTO_INCREMENT = 0x20
        self.YJK_MODE = 0x10
        
        # Текущий режим записи
        self.current_write_mode = self.WRITE_MODE_NATIVE12BIT
        
        # Таблица преобразования CPC цветов в 12-bit (27 цветов)
        self.cpc_to_12bit = [
            0x000,  # 0: Black
            0x005,  # 1: Blue
            0x00F,  # 2: Bright Blue
            0x500,  # 3: Red
            0x505,  # 4: Magenta
            0x50F,  # 5: Mauve
            0xF00,  # 6: Bright Red
            0xF05,  # 7: Purple
            0xF0F,  # 8: Bright Magenta
            0x050,  # 9: Green
            0x055,  # 10: Cyan
            0x05F,  # 11: Sky Blue
            0x550,  # 12: Yellow
            0x555,  # 13: White
            0x55F,  # 14: Pastel Blue
            0xF50,  # 15: Orange
            0xF55,  # 16: Pink
            0xF5F,  # 17: Pastel Magenta
            0x0F0,  # 18: Bright Green
            0x0F5,  # 19: Sea Green
            0x0FF,  # 20: Bright Cyan
            0x5F0,  # 21: Lime
            0x5F5,  # 22: Pastel Green
            0x5FF,  # 23: Pastel Cyan
            0xFF0,  # 24: Bright Yellow
            0xFF5,  # 25: Pastel Yellow
            0xFFF   # 26: Bright White
        ]
        
        # Таблицы для YJK конверсии
        self._init_yjk_tables()
    
    def _init_yjk_tables(self):
        """Инициализация таблиц для YJK конверсии"""
        # Таблица для RGB режима (старая)
        self.msx_rgb_to_12bit = [0] * 256
        for i in range(256):
            r_bits = (i >> 5) & 0x7
            g_bits = (i >> 2) & 0x7
            b_bits = i & 0x3
            
            r_table = [0x0, 0x3, 0x6, 0x9, 0xC, 0xD, 0xE, 0xF]
            g_table = [0x0, 0x3, 0x6, 0x9, 0xC, 0xD, 0xE, 0xF]
            b_table = [0x0, 0x5, 0xA, 0xF]
            
            r_val = r_table[r_bits]
            g_val = g_table[g_bits]
            b_val = b_table[b_bits]
            
            self.msx_rgb_to_12bit[i] = (r_val << 8) | (g_val << 4) | b_val
        
        # Таблица для настоящего YJK режима
        self.msx_yjk_to_12bit = [0] * 256
        for i in range(256):
            y = (i >> 5) & 0x07  # Luminance (0-7)
            j = (i >> 2) & 0x07  # Chrominance 1 (0-7)  
            k = i & 0x03         # Chrominance 2 (0-3)
            
            # Настоящее YJK to RGB преобразование MSX2+
            r_base = (y * 2) + 1
            g_base = (y * 2) + 1
            b_base = (y * 2) + 1
            
            # J компонент (зеленый/пурпурный)
            j_effects = [
                (0, 0), (2, -1), (4, -2), (6, -3),
                (-2, 1), (-4, 2), (-6, 3), (-8, 4)
            ]
            g_j, r_j = j_effects[j]
            
            # K компонент (синий/желтый)  
            k_effects = [
                (0, 0, 0), (4, -1, -1), (8, -2, -2), (-4, 1, 1)
            ]
            b_k, g_k, r_k = k_effects[k]
            
            # Суммируем и ограничиваем
            r_val = max(0, min(15, r_base + r_j + r_k))
            g_val = max(0, min(15, g_base + g_j + g_k))
            b_val = max(0, min(15, b_base + b_k))
            
            self.msx_yjk_to_12bit[i] = (r_val << 8) | (g_val << 4) | b_val
    
    def msx_to_12bit(self, msx_color_byte, yjk_mode=None):
        """
        Конвертировать MSX2+ цвет в 12-bit с учетом режима YJK
        """
        if yjk_mode is None:
            # Определяем текущий режим из железа
            mode_info = self.get_mode()
            yjk_mode = mode_info['yjk_mode'] if mode_info else False
        
        if yjk_mode:
            # Настоящий YJK режим
            if 0 <= msx_color_byte < len(self.msx_yjk_to_12bit):
                return self.msx_yjk_to_12bit[msx_color_byte]
        else:
            # Старый RGB режим
            if 0 <= msx_color_byte < len(self.msx_rgb_to_12bit):
                return self.msx_rgb_to_12bit[msx_color_byte]
        
        print(f"❌ Invalid MSX2+ color byte: {msx_color_byte}")
        return 0x000
    
    def set_yjk_mode(self, enabled):
        """Включить/выключить YJK режим"""
        mode_info = self.get_mode()
        if mode_info:
            return self.set_mode(
                mode_info['write_mode'],
                auto_inc=mode_info['auto_increment'],
                yjk_mode=enabled,
                modifier_enable=mode_info['modifier_enabled'],
                modifier_xor=mode_info['modifier_xor']
            )
        return False
    
    def get_yjk_mode(self):
        """Получить состояние YJK режима"""
        mode_info = self.get_mode()
        return mode_info['yjk_mode'] if mode_info else False
    
    # ===== БАЗОВЫЕ ОПЕРАЦИИ С РЕГИСТРАМИ =====
    
    def read_reg(self, reg):
        """Прочитать регистр палитры"""
        try:
            data = self.fpga.read_memory(self.palette_base + reg, 1)
            return data[0] if data else None
        except Exception as e:
            print(f"❌ Palette read error 0x{reg:02X}: {e}")
            return None
    
    def write_reg(self, reg, value):
        """Записать регистр палитры"""
        print(f"❌ Write reg 0x{reg:02X}: 0x{value:02X}")
        try:            
            return self.fpga.write_memory(self.palette_base + reg, bytes([value]))
        except Exception as e:
            print(f"❌ Palette write error 0x{reg:02X}: {e}")
            return False
    
    # ===== УПРАВЛЕНИЕ РЕЖИМАМИ =====
    
    def set_mode(self, mode, auto_inc=False, yjk_mode=False, modifier_enable=False, modifier_xor=False):
        """
        Установить режим записи палитры с новыми флагами
        """
        if mode not in [self.WRITE_MODE_CPC, 
                       self.WRITE_MODE_MSX2P, self.WRITE_MODE_NATIVE12BIT]:
            print(f"❌ Invalid palette write mode: {mode}")
            return False
        
        self.current_write_mode = mode
        
        control_value = (mode & 0x03)  # [1:0] - palette_write_mode
        
        if auto_inc:
            control_value |= self.AUTO_INCREMENT
        if yjk_mode:
            control_value |= self.YJK_MODE
        if modifier_enable:
            control_value |= self.MODIFIER_ENABLE
        if modifier_xor:
            control_value |= self.MODIFIER_XOR
        
        return self.write_reg(self.REG_CONTROL, control_value)
    
    def get_mode(self):
        """Получить текущий режим записи и все флаги"""
        control = self.read_reg(self.REG_CONTROL)
        if control is None:
            return None
        
        mode_info = {
            'write_mode': control & 0x03,
            'auto_increment': bool(control & self.AUTO_INCREMENT),
            'yjk_mode': bool(control & self.YJK_MODE),
            'modifier_enabled': bool(control & self.MODIFIER_ENABLE),
            'modifier_xor': bool(control & self.MODIFIER_XOR)
        }
        return mode_info
    
    def set_modifier(self, value):
        """Установить значение модификатора"""
        return self.write_reg(self.REG_MODIFIER, value & 0xFF)
    
    def get_modifier(self):
        """Получить значение модификатора"""
        return self.read_reg(self.REG_MODIFIER)
    
    def enable_modifier(self, value, is_xor=False):
        """Включить модификатор с указанным значением и типом"""
        if not self.set_modifier(value):
            return False
        return self.set_mode(self.current_write_mode, modifier_enable=True, modifier_xor=is_xor)
    
    def disable_modifier(self):
        """Выключить модификатор"""
        mode_info = self.get_mode()
        if mode_info:
            return self.set_mode(
                mode_info['write_mode'],
                auto_inc=mode_info['auto_increment'],
                yjk_mode=mode_info['yjk_mode'],
                modifier_enable=False,
                modifier_xor=mode_info['modifier_xor']
            )
        return False
    
    # ===== ОПЕРАЦИИ С ЦВЕТАМИ =====
    
    def set_color(self, index, color, mode=None, auto_inc=False, yjk_mode=None):
        """
        Записать цвет в палитру с поддержкой YJK режима
        """
        if mode is not None:
            yjk_flag = yjk_mode if yjk_mode is not None else False
            if not self.set_mode(mode, auto_inc, yjk_flag):
                return False
        elif auto_inc or yjk_mode is not None:
            mode_info = self.get_mode() or {}
            yjk_flag = yjk_mode if yjk_mode is not None else mode_info.get('yjk_mode', False)
            if not self.set_mode(self.current_write_mode, auto_inc, yjk_flag):
                return False

        # Устанавливаем индекс
        if not self.write_reg(self.REG_PALETTE_INDEX, index):
            return False
        
        # Записываем цвет в зависимости от режима
        if self.current_write_mode == self.WRITE_MODE_NATIVE12BIT:
            # 12-битный режим
            low_byte = color & 0xFF
            high_byte = (color >> 8) & 0x0F
            if not self.write_reg(self.REG_PALETTE_DATA_LOW, low_byte):
                return False
            return self.write_reg(self.REG_PALETTE_DATA_HIGH, high_byte)
        else:
            # Все остальные режимы используют только младший байт
            return self.write_reg(self.REG_PALETTE_DATA_LOW, color & 0xFF)
    
    def get_color(self, index=None):
        """
        Прочитать цвет из палитры (всегда возвращает 12-bit цвет)
        """
        if index is not None:
            if not self.write_reg(self.REG_PALETTE_INDEX, index):
                return None
        
        low = self.read_reg(self.REG_PALETTE_DATA_LOW)
        high = self.read_reg(self.REG_PALETTE_DATA_HIGH)
        
        if low is None or high is None:
            return None
            
        return ((high & 0x0F) << 8) | low
    
    def set_palette(self, palette_data, start_index=0, mode=None, yjk_mode=None):
        """
        Загрузить всю палитру с поддержкой YJK режима
        """
        if mode is not None:
            self.set_mode(mode, auto_inc=True, yjk_mode=yjk_mode or False)
        
        success_count = 0
        for i, color in enumerate(palette_data):
            if self.set_color(start_index + i, color, auto_inc=False):
                success_count += 1
        return success_count
    
    def get_palette(self, start=0, count=256):
        """Прочитать диапазон цветов палитры"""
        palette = []
        for i in range(count):
            color = self.get_color(start + i)
            if color is not None:
                palette.append(color)
            else:
                palette.append(0)
        return palette
    
    # ===== КОНВЕРСИЯ ЦВЕТОВ =====
    
    def cpc_to_12bit(self, cpc_color_index):
        """
        Конвертировать CPC цвет в 12-bit через таблицу
        """
        if 0 <= cpc_color_index < len(self.cpc_to_12bit):
            return self.cpc_to_12bit[cpc_color_index]
        else:
            print(f"❌ Invalid CPC color index: {cpc_color_index}")
            return 0x000
    
    
    def set_color_converted(self, index, color, src_mode, auto_inc=False, yjk_mode=None):
        """
        Записать цвет с конверсией из указанного режима в 12-bit
        """
        # Конвертируем в 12-bit
        if src_mode == self.WRITE_MODE_CPC:
            color_12bit = self.cpc_to_12bit(color)
        elif src_mode == self.WRITE_MODE_MSX2P:
            color_12bit = self.msx_to_12bit(color, yjk_mode)
        elif src_mode == self.WRITE_MODE_NATIVE12BIT:
            color_12bit = color
        else:
            print(f"❌ Unknown source mode: {src_mode}")
            return False
        
        # Записываем в 12-bit режиме
        return self.set_color(index, color_12bit, self.WRITE_MODE_NATIVE12BIT, auto_inc, yjk_mode)
    
    # ===== ДЕБАГ И ДАМП =====
    
    def decode_12bit_color(self, color_12bit):
        """Декодировать 12-bit цвет в RGB компоненты"""
        r = (color_12bit >> 8) & 0x0F
        g = (color_12bit >> 4) & 0x0F  
        b = color_12bit & 0x0F
        return (r, g, b)
    
    def dump_regs(self):
        """Дамп всех регистров с новыми флагами"""
        print("📋 Palette registers dump:")
        reg_names = {
            0x00: "PALETTE_INDEX",
            0x01: "PALETTE_DATA_LOW", 
            0x02: "PALETTE_DATA_HIGH",
            0x03: "CONTROL",
            0x04: "MODIFIER",
            0x05: "BORDER_LOW",
            0x06: "BORDER_HIGH"
        }
        
        for reg, name in reg_names.items():
            value = self.read_reg(reg)
            if value is not None:
                if reg == 0x03:  # CONTROL register
                    mode_bits = value & 0x03
                    auto_inc = bool(value & self.AUTO_INCREMENT)
                    yjk_mode = bool(value & self.YJK_MODE)
                    mod_enable = bool(value & self.MODIFIER_ENABLE)
                    mod_xor = bool(value & self.MODIFIER_XOR)
                    
                    modes = ["CPC", "MSX2P", "12BIT"]
                    mode_str = f" | MODE:{modes[mode_bits]}"
                    mode_str += f" | AUTO_INC:{int(auto_inc)}"
                    mode_str += f" | YJK:{int(yjk_mode)}"
                    mode_str += f" | MOD_EN:{int(mod_enable)}"
                    mode_str += f" | MOD_XOR:{int(mod_xor)}"
                else:
                    mode_str = ""
                    
                print(f"  0x{reg:02X} {name:16} = 0x{value:02X} ({value:3d}){mode_str}")
            else:
                print(f"  0x{reg:02X} {name:16} = ❌ ERROR")
    
    def dump_yjk_comparison(self):
        """Сравнение RGB и YJK режимов для MSX2+"""
        print("🎨 MSX2+ RGB vs YJK comparison:")
        samples = [0x00, 0x1F, 0x3F, 0x7F, 0x9F, 0xBF, 0xDF, 0xFF]
        
        for sample in samples:
            rgb_color = self.msx_to_12bit(sample, yjk_mode=False)
            yjk_color = self.msx_to_12bit(sample, yjk_mode=True)
            
            r1, g1, b1 = self.decode_12bit_color(rgb_color)
            r2, g2, b2 = self.decode_12bit_color(yjk_color)
            
            print(f"  MSX 0x{sample:02X}:")
            print(f"    RGB: 0x{rgb_color:03X} = R:{r1:1X} G:{g1:1X} B:{b1:1X}")
            print(f"    YJK: 0x{yjk_color:03X} = R:{r2:1X} G:{g2:1X} B:{b2:1X}")
            if rgb_color != yjk_color:
                print(f"    *** DIFFERENT ***")
    
    def close(self):
        """Закрыть соединение"""
        if self.fpga:
            self.fpga.close()
"""
FPGA Palette Controller for Aleste LX
Соответствует аппаратной реализации color_palette.v
"""

from .memory import FPGAMemory

class FPGAPalette:
    def __init__(self, fpga_memory=None, base_addr=0xFF0100):
        self.fpga = fpga_memory or FPGAMemory()
        self.palette_base = base_addr
        
        # Регистры палитры согласно color_palette.v
        self.REG_PALETTE_INDEX = 0x00
        self.REG_PALETTE_DATA_LOW = 0x01 
        self.REG_PALETTE_DATA_HIGH = 0x02
        self.REG_CONTROL = 0x03
        self.REG_MODIFIER = 0x04 
        self.REG_BORDER_LOW = 0x05
        self.REG_BORDER_HIGH = 0x06
        
        # Режимы записи палитры
        self.WRITE_MODE_CPC = 0
        self.WRITE_MODE_EX6BIT = 1 
        self.WRITE_MODE_MSX2P = 2
        self.WRITE_MODE_NATIVE12BIT = 3
    
    def _read_register(self, reg):
        """Прочитать регистр палитры"""
        try:
            data = self.fpga.read_memory(self.palette_base + reg, 1)
            return data[0] if data else None
        except Exception as e:
            print(f"❌ Palette read error 0x{reg:02X}: {e}")
            return None
    
    def _write_register(self, reg, value):
        """Записать регистр палитры"""
        try:
            return self.fpga.write_memory(self.palette_base + reg, bytes([value]))
        except Exception as e:
            print(f"❌ Palette write error 0x{reg:02X}: {e}")
            return False

    def set_write_mode(self, mode, auto_inc=False):
        """
        Установить режим записи палитры
        
        Args:
            mode: один из режимов:
                - WRITE_MODE_CPC (0) - CPC формат
                - WRITE_MODE_EX6BIT (1) - 6-битный формат  
                - WRITE_MODE_MSX2P (2) - MSX2+ формат
                - WRITE_MODE_NATIVE12BIT (3) - 12-битный нативный формат
            auto_inc: автоматическое увеличение индекса после записи
        """
        if mode not in [self.WRITE_MODE_CPC, self.WRITE_MODE_EX6BIT, 
                       self.WRITE_MODE_MSX2P, self.WRITE_MODE_NATIVE12BIT]:
            print(f"❌ Invalid palette write mode: {mode}")
            return False
        
        # Формируем значение control регистра
        # [7] - modifier_enable (0 - выключено)
        # [6] - modifier_type (0 - OR, 1 - XOR)  
        # [5] - auto_increment
        # [4:3] - palette_write_mode
        # [2:0] - reserved
        control_value = (mode & 0x3) << 3
        if auto_inc:
            control_value |= (1 << 5)
        
        return self._write_register(self.REG_CONTROL, control_value)
    
    def set_index(self, index):
        """Установить индекс палитры"""
        return self._write_register(self.REG_PALETTE_INDEX, index)
    
    def get_index(self):
        """Получить текущий индекс палитры"""
        return self._read_register(self.REG_PALETTE_INDEX)
    
    def set_color_12bit(self, index, color_12bit, auto_inc=False):
        """Записать 12-bit цвет в палитру"""
        if not self.set_index(index):
            return False
        
        # Устанавливаем режим записи
        if not self.set_write_mode(self.WRITE_MODE_NATIVE12BIT, auto_inc):
            return False
        
        # Записываем цвет (12-bit mode)
        low_byte = color_12bit & 0xFF
        high_byte = (color_12bit >> 8) & 0x0F
        
        if not self._write_register(self.REG_PALETTE_DATA_LOW, low_byte):
            return False
        if not self._write_register(self.REG_PALETTE_DATA_HIGH, high_byte):
            return False
            
        return True
    
    def set_color_cpc(self, index, cpc_color, auto_inc=False):
        """Записать цвет в формате CPC"""
        if not self.set_index(index):
            return False
        
        # Устанавливаем режим записи CPC
        if not self.set_write_mode(self.WRITE_MODE_CPC, auto_inc):
            return False
        
        # Записываем CPC цвет
        return self._write_register(self.REG_PALETTE_DATA_LOW, cpc_color)
    
    def set_color_msx(self, index, msx_color, auto_inc=False):
        """Записать цвет в формате MSX2+"""
        if not self.set_index(index):
            return False
        
        # Устанавливаем режим записи MSX2+
        if not self.set_write_mode(self.WRITE_MODE_MSX2P, auto_inc):
            return False
        
        # Записываем MSX2+ цвет
        return self._write_register(self.REG_PALETTE_DATA_LOW, msx_color)
    
    def set_color_6bit(self, index, color_6bit, auto_inc=False):
        """Записать цвет в 6-битном формате"""
        if not self.set_index(index):
            return False
        
        # Устанавливаем режим записи 6-bit
        if not self.set_write_mode(self.WRITE_MODE_EX6BIT, auto_inc):
            return False
        
        # Записываем 6-битный цвет
        return self._write_register(self.REG_PALETTE_DATA_LOW, color_6bit)
    
    def get_color(self, index=None):
        """Прочитать цвет из палитры"""
        if index is not None:
            if not self.set_index(index):
                return None
        
        # Читаем младший и старший байты
        low = self._read_register(self.REG_PALETTE_DATA_LOW)
        high = self._read_register(self.REG_PALETTE_DATA_HIGH)
        
        if low is None or high is None:
            return None
            
        return ((high & 0x0F) << 8) | low
    
    def set_border_color(self, color_12bit):
        """Установить цвет бордюра"""
        low_byte = color_12bit & 0xFF
        high_byte = (color_12bit >> 8) & 0x0F
        
        if not self._write_register(self.REG_BORDER_LOW, low_byte):
            return False
        return self._write_register(self.REG_BORDER_HIGH, high_byte)
    
    def get_border_color(self):
        """Получить цвет бордюра"""
        low = self._read_register(self.REG_BORDER_LOW)
        high = self._read_register(self.REG_BORDER_HIGH)
        
        if low is None or high is None:
            return None
            
        return ((high & 0x0F) << 8) | low
    
    def load_palette(self, palette_data, start_index=0):
        """Загрузить палитру из списка 12-bit цветов"""
        success_count = 0
        for i, color in enumerate(palette_data):
            if self.set_color_12bit(start_index + i, color):
                success_count += 1
        return success_count
    
    def load_palette_from_image(self, image_path, max_colors=256):
        """Извлечь палитру из изображения и загрузить"""
        try:
            from PIL import Image
            
            img = Image.open(image_path)
            if img.mode == 'P':
                # Изображение с палитрой
                palette = img.getpalette()
                colors = []
                for i in range(min(img.getcolors()[-1][0] if img.getcolors() else 256, max_colors)):
                    r = palette[i * 3] >> 4
                    g = palette[i * 3 + 1] >> 4  
                    b = palette[i * 3 + 2] >> 4
                    colors.append((r << 8) | (g << 4) | b)
                return self.load_palette(colors)
            else:
                # RGB изображение - извлекаем доминирующие цвета
                img = img.convert('RGB')
                # Упрощенная версия - берем первые max_colors уникальных цветов
                colors = set()
                for pixel in img.getdata():
                    r, g, b = pixel
                    color_12bit = (r >> 4) << 8 | (g >> 4) << 4 | (b >> 4)
                    colors.add(color_12bit)
                    if len(colors) >= max_colors:
                        break
                return self.load_palette(list(colors))
                
        except ImportError:
            print("❌ PIL required for image palette extraction")
            return 0
        except Exception as e:
            print(f"❌ Image palette error: {e}")
            return 0
    
    def decode_12bit_color(self, color_12bit):
        """Декодировать 12-bit цвет в RGB компоненты"""
        r = (color_12bit >> 8) & 0x0F
        g = (color_12bit >> 4) & 0x0F  
        b = color_12bit & 0x0F
        return (r, g, b)
    
    def close(self):
        """Закрыть соединение"""
        if self.fpga:
            self.fpga.close()

    def dump_palette(self, start=0, count=16):
        """Дамп палитры для отладки"""
        print(f"🎨 Palette dump #{start}-#{start+count-1}:")
        for i in range(count):
            index = start + i
            color = self.get_color(index)
            if color is not None:
                r, g, b = self.decode_12bit_color(color)
                print(f"  #{index:3d}: 0x{color:03X} = R:{r:1X} G:{g:1X} B:{b:1X}")
            else:
                print(f"  #{index:3d}: ❌ Error reading")
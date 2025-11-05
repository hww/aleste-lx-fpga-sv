"""
Умный загрузчик пресетов с поддержкой масок
"""

import time
import sys
import os

current_dir = os.path.dirname(os.path.abspath(__file__))
root_dir = os.path.join(current_dir, '../..')
sys.path.insert(0, root_dir)

from core.memory import FPGAMemory

class PresetLoader:
    def __init__(self, fpga=None):
        self.fpga = fpga or FPGAMemory()
        self.device_addrs = {
            'crtc':         0xFF0120, # CRTC controller (index register)
            'gate_array':   0xFF0100, # Gate Array
            'palette':      0xFF0100  # Color palette (index register)
        }
        
    def list_presets(self):
        """Показать все доступные пресеты"""
        from presets.graphics_presets import GRAPHICS_PRESETS
        
        print("🎮 Available graphics presets:")
        for name, preset in GRAPHICS_PRESETS.items():
            print(f"  {name:15} - {preset['name']}")
            print(f"                   {preset['description']}")
        return GRAPHICS_PRESETS
    
    def apply_preset(self, preset_name, verbose=True):
        """Применить пресет по имени"""
        from presets.graphics_presets import GRAPHICS_PRESETS
        
        if preset_name not in GRAPHICS_PRESETS:
            if verbose:
                print(f"❌ Unknown preset: {preset_name}")
                self.list_presets()
            return False
        
        preset = GRAPHICS_PRESETS[preset_name]
        
        if verbose:
            print(f"🎮 Loading preset: {preset['name']}")
            print(f"   {preset['description']}")
        
        # Программируем каждое устройство
        for device, registers in preset['devices'].items():
            if verbose:
                print(f"   ⚙️  Programming {device}...")
            
            success = self._program_device(device, registers, verbose)
            if not success:
                if verbose:
                    print(f"   ❌ Failed to program {device}")
                return False
            
            # Маленькая пауза между устройствами
            time.sleep(0.01)
        
        if verbose:
            print("✅ Preset loaded successfully!")
        
        return True
    
    def _program_device(self, device, registers, verbose=False):
        """Программировать конкретное устройство"""
        if device == 'crtc':
            return self._program_crtc(registers, verbose)
        elif device == 'palette':
            return self._program_palette(registers, verbose)
        else:
            return self._program_standard_device(device, registers, verbose)
    
    def _program_crtc(self, registers, verbose=False):
        """Программирование CRTC через индексный регистр"""
        crtc_index_addr = self.device_addrs['crtc']      # 0xFF0120 - индексный регистр
        crtc_data_addr = self.device_addrs['crtc'] + 1   # 0xFF0121 - регистр данных
        
        for reg_spec in registers:
            try:
                if isinstance(reg_spec, list) and len(reg_spec) >= 2:
                    if len(reg_spec) == 2:
                        reg, value = reg_spec
                        mask = 0xFF
                    elif len(reg_spec) == 3:
                        reg, value, mask = reg_spec
                    else:
                        if verbose:
                            print(f"     ❌  Invalid CRTC register spec: {reg_spec}")
                        continue
                    
                    # CRTC требует двухшаговой записи
                    if mask == 0xFF:
                        # Полная запись
                        if verbose:
                            print(f"     📝 CRTC[{reg:02X}] = 0x{value:02X}")
                        
                        # 1. Выбираем регистр
                        self.fpga.write_memory(crtc_index_addr, bytes([reg]))
                        # 2. Пишем данные
                        self.fpga.write_memory(crtc_data_addr, bytes([value]))
                    else:
                        # МАСКИРОВАННАЯ запись для CRTC
                        # 1. Выбираем регистр
                        self.fpga.write_memory(crtc_index_addr, bytes([reg]))
                        
                        # 2. Читаем текущее значение
                        current_data = self.fpga.read_memory(crtc_data_addr, 1)
                        if not current_data:
                            if verbose:
                                print(f"     ❌  Could not read CRTC register 0x{reg:02X}, masked write canceled")
                            continue
                        
                        current = current_data[0]
                        
                        # 3. Модифицируем только нужные биты
                        updated = (current & (255-mask)) | (value & mask)
                        
                        if verbose:
                            if current != updated:
                                print(f"     🔧 CRTC[{reg:02X}]: 0x{current:02X} -> 0x{updated:02X} (mask=0x{mask:02X})")
                            else:
                                print(f"     🔧 CRTC[{reg:02X}]: 0x{current:02X} unchanged (mask=0x{mask:02X})")
                        
                        # 4. Записываем обратно
                        self.fpga.write_memory(crtc_data_addr, bytes([updated]))
                            
            except Exception as e:
                if verbose:
                    print(f"     ❌ Error writing CRTC register {reg_spec}: {e}")
                return False
        
        return True
    
    def _program_palette(self, registers, verbose=False):
        """Программирование палитры через индексный регистр"""
        palette_index_addr = self.device_addrs['palette']      # 0xFF0100 - индекс палитры
        palette_data_addr = self.device_addrs['palette'] + 1   # 0xFF0101 - данные палитры
        
        for reg_spec in registers:
            try:
                if isinstance(reg_spec, list) and len(reg_spec) >= 2:
                    if len(reg_spec) == 2:
                        reg, value = reg_spec
                        mask = 0xFF
                    elif len(reg_spec) == 3:
                        reg, value, mask = reg_spec
                    else:
                        if verbose:
                            print(f"     ❌  Invalid palette register spec: {reg_spec}")
                        continue
                    
                    # Палитра требует двухшаговой записи
                    if mask == 0xFF:
                        # Полная запись
                        if verbose:
                            print(f"     🎨 Palette[{reg:02X}] = 0x{value:02X}")
                        
                        # 1. Выбираем индекс палитры
                        self.fpga.write_memory(palette_index_addr, bytes([reg]))
                        # 2. Пишем цвет
                        self.fpga.write_memory(palette_data_addr, bytes([value]))
                    else:
                        # МАСКИРОВАННАЯ запись для палитры
                        # 1. Выбираем индекс палитры
                        self.fpga.write_memory(palette_index_addr, bytes([reg]))
                        
                        # 2. Читаем текущее значение
                        current_data = self.fpga.read_memory(palette_data_addr, 1)
                        if not current_data:
                            if verbose:
                                print(f"     ❌  Could not read palette register 0x{reg:02X}, masked write canceled")
                            continue
                        
                        current = current_data[0]
                        
                        # 3. Модифицируем только нужные биты
                        updated = (current & (255-mask)) | (value & mask)
                        
                        if verbose:
                            if current != updated:
                                print(f"     🔧 Palette[{reg:02X}]: 0x{current:02X} -> 0x{updated:02X} (mask=0x{mask:02X})")
                            else:
                                print(f"     🔧 Palette[{reg:02X}]: 0x{current:02X} unchanged (mask=0x{mask:02X})")
                        
                        # 4. Записываем обратно
                        self.fpga.write_memory(palette_data_addr, bytes([updated]))
                            
            except Exception as e:
                if verbose:
                    print(f"     ❌ Error writing palette register {reg_spec}: {e}")
                return False
        
        return True
    
    def _program_standard_device(self, device, registers, verbose=False):
        """Программирование стандартных устройств (не CRTC и не палитра)"""
        base_addr = self.device_addrs[device]
        
        for reg_spec in registers:
            try:
                if isinstance(reg_spec, list) and len(reg_spec) >= 2:
                    if len(reg_spec) == 2:
                        reg, value = reg_spec
                        mask = 0xFF
                    elif len(reg_spec) == 3:
                        reg, value, mask = reg_spec
                    else:
                        if verbose:
                            print(f"     ❌  Invalid register spec: {reg_spec}")
                        continue
                    
                    self._write_masked(base_addr, reg, value, mask, verbose)
                    
                elif isinstance(reg_spec, list) and reg_spec:
                    self._handle_special_command(device, reg_spec, verbose)
                    
            except Exception as e:
                if verbose:
                    print(f"     ❌ Error writing register {reg_spec}: {e}")
                return False
        
        return True
    
    def _write_masked(self, base_addr, reg, new_value, mask, verbose=False):
        """Умная запись с маской: читаем-модифицируем-записываем"""
        address = base_addr + reg
        try:
            if mask == 0xFF:
                # Полная перезапись - просто пишем
                if verbose:
                    print(f"     📝 Reg 0x{reg:02X} = 0x{new_value:02X}")

                self.fpga.write_memory(address, bytes([new_value]))
            else:
                # Читаем текущее значение
                current_data = self.fpga.read_memory(base_addr + reg, 1)
                if not current_data:
                    if verbose:
                        print(f"     ❌  Could not read register 0x{reg:02X}, write canceled")
                    return
                
                current = current_data[0]
                
                # Модифицируем только нужные биты
                updated = (current & (255-mask)) | (new_value & mask)
                
                if verbose:
                    if current != updated:
                        print(f"     🔧 Reg 0x{reg:02X}: 0x{current:02X} -> 0x{updated:02X} (mask=0x{mask:02X})")
                
                # Записываем обратно
                self.fpga.write_memory(base_addr + reg, bytes([updated]))
                
        except Exception as e:
            print(f"     ❌ Error in masked write: {e}")
            raise
    
    def _handle_special_command(self, device, command, verbose=False):
        """Обработка специальных команд"""
        cmd_type = command[0]
        
        if cmd_type == "gradient_16c":
            if verbose:
                print("     ✓ Setting up 16-color gradient palette...")
            self._setup_gradient_palette(16)
            
        elif cmd_type == "gradient_256c":
            if verbose:
                print("     ✓ Setting up 256-color gradient palette...")  
            self._setup_gradient_palette(256)
            
        elif cmd_type == "default_palette":
            if verbose:
                print("     ✓ Setting up default palette...")
            self._setup_default_palette()
            
        else:
            if verbose:
                print(f"     ❌  Unknown special command: {cmd_type}")
    
    def _setup_gradient_palette(self, colors=16):
        """Настройка градиентной палитры"""
        palette_index_addr = self.device_addrs['palette']      # 0xFF0100
        palette_data_addr = self.device_addrs['palette'] + 1   # 0xFF0101
        
        for i in range(colors):
            # 1. Устанавливаем индекс палитры
            self.fpga.write_memory(palette_index_addr, bytes([i]))
            
            # 2. Создаем градиентный цвет
            if colors == 16:
                # 16-цветный градиент (4-битный)
                r = (i & 0x0C) >> 2  # 2 бита красного
                g = (i & 0x03)       # 2 бита зеленого  
                b = (i & 0x0C) >> 2  # 2 бита синего
                color = (r << 4) | (g << 2) | b
            else:
                # 256-цветный градиент (8-битный)
                color = i
            
            # 3. Записываем цвет
            self.fpga.write_memory(palette_data_addr, bytes([color]))
    
    def _setup_default_palette(self):
        """Настройка палитры по умолчанию"""
        palette_index_addr = self.device_addrs['palette']
        palette_data_addr = self.device_addrs['palette'] + 1
        
        # Простая палитра
        default_colors = [
            0x00,  # Black
            0x3F,  # White
            0x30,  # Red
            0x0C,  # Green  
            0x03,  # Blue
            0x3C,  # Yellow
            0x33,  # Magenta
            0x0F,  # Cyan
        ]
        
        for i, color in enumerate(default_colors):
            self.fpga.write_memory(palette_index_addr, bytes([i]))
            self.fpga.write_memory(palette_data_addr, bytes([color]))
    
    def close(self):
        """Закрыть соединение"""
        if self.fpga:
            self.fpga.close()
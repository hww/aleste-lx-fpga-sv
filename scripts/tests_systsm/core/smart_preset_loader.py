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

class SmartPresetLoader:
    def __init__(self, fpga=None):
        self.fpga = fpga or FPGAMemory()
        self.device_addrs = {
            'crtc': 0xFF0110,      # CRTC controller
            'gate_array': 0xFF0100, # Gate Array
            'palette': 0xFF0100     # Color palette (same as Gate Array but different registers)
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
        base_addr = self.device_addrs[device]
        
        for i, reg_spec in enumerate(registers):
            try:
                if isinstance(reg_spec, list) and len(reg_spec) >= 2:
                    # Обычная запись регистра
                    if len(reg_spec) == 2:
                        # [register, value] - полная перезапись
                        reg, value = reg_spec
                        mask = 0xFF
                    elif len(reg_spec) == 3:
                        # [register, value, mask] - умная запись
                        reg, value, mask = reg_spec
                    else:
                        if verbose:
                            print(f"     ⚠️  Invalid register spec: {reg_spec}")
                        continue
                    
                    self._write_masked(base_addr, reg, value, mask, verbose)
                    
                elif isinstance(reg_spec, list) and reg_spec:
                    # Специальная команда
                    self._handle_special_command(device, reg_spec, verbose)
                    
            except Exception as e:
                if verbose:
                    print(f"     ❌ Error writing register {reg_spec}: {e}")
                return False
        
        return True
    
    def _write_masked(self, base_addr, reg, new_value, mask, verbose=False):
        """Умная запись с маской: читаем-модифицируем-записываем"""
        try:
            if mask == 0xFF:
                # Полная перезапись - просто пишем
                if verbose:
                    print(f"     📝 Reg 0x{reg:02X} = 0x{new_value:02X} (full write)")
                self.fpga.write_memory(base_addr + reg, bytes([new_value]))
            else:
                # Читаем текущее значение
                current_data = self.fpga.read_memory(base_addr + reg, 1)
                if not current_data:
                    if verbose:
                        print(f"     ⚠️  Could not read register 0x{reg:02X}, doing full write")
                    self.fpga.write_memory(base_addr + reg, bytes([new_value & mask]))
                    return
                
                current = current_data[0]
                
                # Модифицируем только нужные биты
                updated = (current & ~mask) | (new_value & mask)
                
                if verbose:
                    if current != updated:
                        print(f"     🔧 Reg 0x{reg:02X}: 0x{current:02X} -> 0x{updated:02X} " +
                              f"(mask=0x{mask:02X}, changed=0x{current ^ updated:02X})")
                
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
                print("     🎨 Setting up 16-color gradient palette...")
            self._setup_gradient_palette(16)
            
        elif cmd_type == "gradient_256c":
            if verbose:
                print("     🎨 Setting up 256-color gradient palette...")  
            self._setup_gradient_palette(256)
            
        elif cmd_type == "default_palette":
            if verbose:
                print("     🎨 Setting up default palette...")
            self._setup_default_palette()
            
        else:
            if verbose:
                print(f"     ⚠️  Unknown special command: {cmd_type}")
    
    def _setup_gradient_palette(self, colors=16):
        """Настройка градиентной палитры"""
        palette_base = self.device_addrs['palette']
        
        for i in range(colors):
            # Устанавливаем индекс палитры
            self.fpga.write_memory(palette_base, bytes([i]))
            
            # Создаем градиентный цвет
            if colors == 16:
                # 16-цветный градиент (4-битный)
                r = (i & 0x0C) >> 2  # 2 бита красного
                g = (i & 0x03)       # 2 бита зеленого  
                b = (i & 0x0C) >> 2  # 2 бита синего (дублируем красный для простоты)
                color = (r << 4) | (g << 2) | b
            else:
                # 256-цветный градиент (8-битный)
                color = i
            
            # Записываем цвет
            self.fpga.write_memory(palette_base + 1, bytes([color]))
    
    def _setup_default_palette(self):
        """Настройка палитры по умолчанию"""
        # Можно добавить стандартную CPC палитру
        palette_base = self.device_addrs['palette']
        
        # Простая палитра: черный, белый, основные цвета
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
            self.fpga.write_memory(palette_base, bytes([i]))
            self.fpga.write_memory(palette_base + 1, bytes([color]))
    
    def close(self):
        """Закрыть соединение"""
        if self.fpga:
            self.fpga.close()
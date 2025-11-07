#!/usr/bin/env python3
"""
Исправленный генератор палитр для FPGA - точные CPC и MSX2+ цвета
"""

def generate_cpc_palette():
    """Генерирует точную CPC палитру в 12-bit формате"""
    # CPC цвета в 8-bit RGB (из документации)
    cpc_8bit_colors = [
        (0, 0, 0),       # 0: Black
        (0, 0, 128),     # 1: Blue
        (0, 0, 255),     # 2: Bright Blue
        (128, 0, 0),     # 3: Red
        (128, 0, 128),   # 4: Magenta
        (128, 0, 255),   # 5: Mauve
        (255, 0, 0),     # 6: Bright Red
        (255, 0, 128),   # 7: Purple
        (255, 0, 255),   # 8: Bright Magenta
        (0, 128, 0),     # 9: Green
        (0, 128, 128),   # 10: Cyan
        (0, 128, 255),   # 11: Sky Blue
        (128, 128, 0),   # 12: Yellow
        (128, 128, 128), # 13: White
        (128, 128, 255), # 14: Pastel Blue
        (255, 128, 0),   # 15: Orange
        (255, 128, 128), # 16: Pink
        (255, 128, 255), # 17: Pastel Magenta
        (0, 255, 0),     # 18: Bright Green
        (0, 255, 128),   # 19: Sea Green
        (0, 255, 255),   # 20: Bright Cyan
        (128, 255, 0),   # 21: Lime
        (128, 255, 128), # 22: Pastel Green
        (128, 255, 255), # 23: Pastel Cyan
        (255, 255, 0),   # 24: Bright Yellow
        (255, 255, 128), # 25: Pastel Yellow
        (255, 255, 255)  # 26: Bright White
    ]
    
    # Конвертация 8-bit → 4-bit (для 12-bit палитры)
    cpc_12bit_colors = []
    for r8, g8, b8 in cpc_8bit_colors:
        r4 = (r8 * 15) // 255  # Масштабирование 0-255 → 0-15
        g4 = (g8 * 15) // 255
        b4 = (b8 * 15) // 255
        color_12bit = (r4 << 8) | (g4 << 4) | b4
        cpc_12bit_colors.append(color_12bit)
    
    # Сохраняем в файл
    with open('cpc_palette.mem', 'w') as f:
        for color in cpc_12bit_colors:
            f.write(f"{color:03X}\n")
    
    print("✅ CPC палитра создана:")
    for i, color in enumerate(cpc_12bit_colors):
        r = (color >> 8) & 0xF
        g = (color >> 4) & 0xF  
        b = color & 0xF
        print(f"  Color {i:2d}: 0x{color:03X} = R:{r:1X} G:{g:1X} B:{b:1X}")
    
    return cpc_12bit_colors

def generate_rgb_palette():
    """Генерирует MSX2+ RGB палитру - проверяем алгоритм"""
    colors = []
    for i in range(256):
        # R component (биты 7-5)
        r_bits = (i >> 5) & 0x7
        # G component (биты 4-2)  
        g_bits = (i >> 2) & 0x7
        # B component (биты 1-0)
        b_bits = i & 0x3
        
        # Таблицы преобразования MSX2+
        r_table = [0x0, 0x3, 0x6, 0x9, 0xC, 0xD, 0xE, 0xF]
        g_table = [0x0, 0x3, 0x6, 0x9, 0xC, 0xD, 0xE, 0xF] 
        b_table = [0x0, 0x5, 0xA, 0xF]
        
        r_val = r_table[r_bits]
        g_val = g_table[g_bits]
        b_val = b_table[b_bits]
        
        color_12bit = (r_val << 8) | (g_val << 4) | b_val
        colors.append(color_12bit)
    
    print("✅ MSX RGB палитра создана (первые 10 цветов):")
    for i in range(10):
        color = colors[i]
        r = (color >> 8) & 0xF
        g = (color >> 4) & 0xF
        b = color & 0xF
        print(f"  MSX RGB 0x{i:02X}: 0x{color:03X} = R:{r:1X} G:{g:1X} B:{b:1X}")
    
    return colors

def generate_yjk_palette():
    """Генерирует MSX2+ YJK палитру - проверяем алгоритм"""
    colors = []
    for i in range(256):
        y = (i >> 5) & 0x07  # Luminance (0-7)
        j = (i >> 2) & 0x07  # Chrominance 1 (0-7)
        k = i & 0x03         # Chrominance 2 (0-3)
        
        # YJK to RGB conversion (проверяемая формула)
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
        
        color_12bit = (r_val << 8) | (g_val << 4) | b_val
        colors.append(color_12bit)
    
    print("✅ MSX YJK палитра создана (первые 10 цветов):")
    for i in range(10):
        color = colors[i]
        r = (color >> 8) & 0xF
        g = (color >> 4) & 0xF
        b = color & 0xF
        print(f"  MSX YJK 0x{i:02X}: 0x{color:03X} = R:{r:1X} G:{g:1X} B:{b:1X}")
    
    return colors

def save_mem_files():
    """Сохраняет все палитры в отдельные .mem файлы"""
    print("🎨 Генерация палитр для FPGA...")
    print("=" * 50)
    
    # Генерируем все палитры
    cpc_palette = generate_cpc_palette()
    rgb_palette = generate_rgb_palette() 
    yjk_palette = generate_yjk_palette()
    
    # Сохраняем CPC палитру
    with open('cpc_palette.mem', 'w') as f:
        for color in cpc_palette:
            f.write(f"{color:03X}\n")
    
    # Сохраняем MSX палитры (объединенные)
    with open('msx_palette.mem', 'w') as f:
        # Сначала RGB палитра (адреса 0-255)
        for color in rgb_palette:
            f.write(f"{color:03X}\n")
        
        # Затем YJK палитра (адреса 256-511)  
        for color in yjk_palette:
            f.write(f"{color:03X}\n")
    
    print("=" * 50)
    print("✅ Все файлы созданы успешно!")
    print(f"📁 cpc_palette.mem: {len(cpc_palette)} цветов")
    print(f"📁 msx_palette.mem: {len(rgb_palette)} RGB + {len(yjk_palette)} YJK цветов")

if __name__ == "__main__":
    save_mem_files()
    
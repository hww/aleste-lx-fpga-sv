#!/usr/bin/env python3
"""
Кроссплатформенный транспорт для FPGA - БАЛАНС ВЕРСИЯ
"""
import sys
import os
import json
import time

def generate_cpc_palette():
    colors = [
        0x000, 0x005, 0x00F, 0x500, 0x505, 0x50F, 0xF00, 0xF05, 0xF0F,
        0x050, 0x055, 0x05F, 0x550, 0x555, 0x55F, 0xF50, 0xF55, 0xF5F,
        0x0F0, 0x0F5, 0x0FF, 0x5F0, 0x5F5, 0x5FF, 0xFF0, 0xFF5, 0xFFF
    ]
    with open('cpc_palette.mem', 'w') as f:
        for color in colors:
            f.write(f"{color:03X}\n")

def generate_rgb_palette():
    """Генерирует RGB табличную палитру"""
    colors = []
    for i in range(256):
        # R component (биты 7-5)
        r_table = [0x0, 0x3, 0x6, 0x9, 0xC, 0xD, 0xE, 0xF]
        r_val = r_table[(i >> 5) & 0x07]
        
        # G component (биты 4-2)
        g_table = [0x0, 0x3, 0x6, 0x9, 0xC, 0xD, 0xE, 0xF]
        g_val = g_table[(i >> 2) & 0x07]
        
        # B component (биты 1-0)
        b_table = [0x0, 0x5, 0xA, 0xF]
        b_val = b_table[i & 0x03]
        
        colors.append((r_val << 8) | (g_val << 4) | b_val)
    return colors

def generate_yjk_palette():
    """Генерирует настоящую YJK палитру MSX2+"""
    colors = []
    for i in range(256):
        y = (i >> 5) & 0x07  # Luminance (0-7)
        j = (i >> 2) & 0x07  # Chrominance 1 (0-7)
        k = i & 0x03         # Chrominance 2 (0-3)
        
        # Базовые значения из Y компонента
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
        
        colors.append((r_val << 8) | (g_val << 4) | b_val)
    return colors

def save_mem_file():
    """Сохраняет обе палитры в .mem файл"""
    rgb_palette = generate_rgb_palette()
    yjk_palette = generate_yjk_palette()
    
    with open('msx_palette.mem', 'w') as f:
        # Сначала RGB палитра (адреса 0-255)
        for color in rgb_palette:
            f.write(f"{color:03X}\n")
        
        # Затем YJK палитра (адреса 256-511)  
        for color in yjk_palette:
            f.write(f"{color:03X}\n")
    
    print("Файл msx_palette.mem создан успешно!")
    print(f"RGB палитра: {len(rgb_palette)} цветов")
    print(f"YJK палитра: {len(yjk_palette)} цветов")

if __name__ == "__main__":
    save_mem_file()
    generate_cpc_palette()
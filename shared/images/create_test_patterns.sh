#!/bin/bash
# create_test_patterns.sh - Создает тестовые изображения

# Размеры для Aleste
WIDTH=320
HEIGHT=200

# Создаем простые BMP через Python (одноразово)
python3 -c "
import struct
import math

def create_bmp(filename, width, height, pattern_func):
    '''Создает 24-bit BMP файл'''
    file_size = 54 + 3 * width * height
    bmp_header = struct.pack('<2sIHHI', b'BM', file_size, 0, 0, 54)
    dib_header = struct.pack('<IIIHHIIIIII', 40, width, height, 1, 24, 0, 0, 0, 0, 0, 0)
    
    with open(filename, 'wb') as f:
        f.write(bmp_header)
        f.write(dib_header)
        
        # Данные изображения (BGR format)
        for y in range(height):
            for x in range(width):
                r, g, b = pattern_func(x, y, width, height)
                f.write(struct.pack('BBB', b, g, r))

# Паттерны
def checkerboard(x, y, w, h):
    '''Шахматная доска'''
    if ((x // 32) + (y // 32)) % 2 == 0:
        return (255, 255, 255)  # белый
    else:
        return (0, 0, 0)        # черный

def vertical_lines(x, y, w, h):
    '''Вертикальные линии'''
    if (x // 16) % 2 == 0:
        return (255, 255, 255)
    else:
        return (0, 0, 0)

def horizontal_lines(x, y, w, h):
    '''Горизонтальные линии'''
    if (y // 16) % 2 == 0:
        return (255, 255, 255)
    else:
        return (0, 0, 0)

def border(x, y, w, h):
    '''Рамка'''
    if x < 8 or x >= w-8 or y < 8 or y >= h-8:
        return (255, 255, 255)
    else:
        return (0, 0, 0)

def circle(x, y, w, h):
    '''Круг в центре'''
    center_x, center_y = w//2, h//2
    radius = min(w, h) // 3
    if (x - center_x)**2 + (y - center_y)**2 <= radius**2:
        return (255, 255, 255)
    else:
        return (0, 0, 0)

# Создаем изображения
create_bmp('test_checkerboard.bmp', $WIDTH, $HEIGHT, checkerboard)
create_bmp('test_vertical.bmp', $WIDTH, $HEIGHT, vertical_lines)  
create_bmp('test_horizontal.bmp', $WIDTH, $HEIGHT, horizontal_lines)
create_bmp('test_border.bmp', $WIDTH, $HEIGHT, border)
create_bmp('test_circle.bmp', $WIDTH, $HEIGHT, circle)

print('Созданы тестовые изображения:')
print('- test_checkerboard.bmp (шахматка)')
print('- test_vertical.bmp (вертикальные линии)')
print('- test_horizontal.bmp (горизонтальные линии)')
print('- test_border.bmp (рамка)')
print('- test_circle.bmp (круг)')
"
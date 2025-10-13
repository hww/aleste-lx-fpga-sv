# flash_content/pattern_generator.py
def generate_pattern():
    # Генерируем простой паттерн для тестирования
    pattern = []
    
    # Первые 16 байт - уникальные значения для проверки
    test_pattern = [
        0xAA, 0x55, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20,
        0x40, 0x80, 0xFF, 0x00, 0x33, 0xCC, 0x0F, 0xF0
    ]
    
    # Заполняем 64KB паттерном
    for i in range(32768):  # 64KB / 2 байта = 32768 слов
        if i < 8:  # Первые 8 слов = наши тестовые байты
            pattern.append(test_pattern[i*2 % 16])
            pattern.append(test_pattern[(i*2+1) % 16])
        else:
            # Остальное заполняем инкрементирующимся паттерном
            pattern.append(i & 0xFF)
            pattern.append((i >> 8) & 0xFF)
    
    return pattern

# Сохраняем в файл
with open('pattern.mem', 'w') as f:
    pattern = generate_pattern()
    for byte in pattern:
        f.write(f"{byte:02X}\n")
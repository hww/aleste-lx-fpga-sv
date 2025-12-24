#include "simple_stdio.h"
#include <stdarg.h>

#if USE_OUTPUT_BUFFER
// ==================== БУФЕР ВЫВОДА ====================
static char out_buffer[BUFFER_SIZE];
static uint8_t buf_index = 0;

void stdio_init(void) {
    buf_index = 0;
}

void flush(void) {
    if (buf_index > 0) {
        out_buffer[buf_index] = '\0';
        _puts_raw(out_buffer);  // Оптимизированный вывод строки
        buf_index = 0;
    }
}

void _buf_char(char c) {
    out_buffer[buf_index++] = c;
    if (buf_index >= BUFFER_SIZE - 1) {
        flush();  // Автоматический flush при заполнении
    }
}

void _buf_str(const char *s) {
    while (*s) {
        _buf_char(*s++);
    }
}
#endif // USE_OUTPUT_BUFFER

// ==================== ФИКСИРОВАННЫЕ ФОРМАТЫ ====================

#if USE_DIRECT_ASM
// ASM-оптимизированные версии для скорости
void put_dec(int16_t value) {
    #asm
    ; Вход: HL = value
    ld hl, 2
    add hl, sp
    ld e, (hl)
    inc hl
    ld d, (hl)      ; DE = value
    
    ld a, d
    or a
    jp p, pos_dec   ; Если положительное
    
    ; Отрицательное число
    ld a, '-'
    call putchar
    
    ; DE = -DE
    xor a
    sub e
    ld e, a
    ld a, 0
    sbc a, d
    ld d, a
    
pos_dec:
    ; Вывод числа из DE
    ld bc, -10000
    call .num1
    ld bc, -1000
    call .num1
    ld bc, -100
    call .num1
    ld c, -10
    call .num1
    ld c, b          ; B=0, C=-1
    
.num1:
    ld a, '0' - 1
.num2:
    inc a
    add hl, bc
    jr c, .num2
    sbc hl, bc
    
    cp '0'
    jr nz, .num3
    ; Пропуск ведущих нулей
    ret
    
.num3:
    push af
    call putchar
    pop af
    ret
    #endasm
}

void put_hex(uint16_t value) {
    #asm
    ; Вход: HL = value
    ld hl, 2
    add hl, sp
    ld e, (hl)
    inc hl
    ld d, (hl)      ; DE = value
    
    ; Вывод старшего байта
    ld a, d
    rra
    rra
    rra
    rra
    call .hex_digit
    ld a, d
    call .hex_digit
    
    ; Вывод младшего байта
    ld a, e
    rra
    rra
    rra
    rra
    call .hex_digit
    ld a, e
    call .hex_digit
    ret
    
.hex_digit:
    and 0x0F
    cp 10
    jr c, .digit
    add a, 'A' - 10 - '0'
.digit:
    add a, '0'
    push de
    call putchar
    pop de
    ret
    #endasm
}
#else
// C-версии (медленнее, но проще)
void put_dec(int16_t n) {
    if (n < 0) {
        putchar('-');
        n = -n;
    }
    
    if (n >= 10000) {
        putchar('0' + n / 10000);
        n %= 10000;
    }
    if (n >= 1000) {
        putchar('0' + n / 1000);
        n %= 1000;
    }
    if (n >= 100) {
        putchar('0' + n / 100);
        n %= 100;
    }
    if (n >= 10) {
        putchar('0' + n / 10);
        n %= 10;
    }
    putchar('0' + n);
}

void put_hex(uint16_t n) {
    const char hex[] = "0123456789ABCDEF";
    putchar(hex[(n >> 12) & 0xF]);
    putchar(hex[(n >> 8) & 0xF]);
    putchar(hex[(n >> 4) & 0xF]);
    putchar(hex[n & 0xF]);
}
#endif // USE_DIRECT_ASM

void put_hex_prefix(uint16_t value) {
    puts("0x");
    put_hex(value);
}

void put_bin8(uint8_t value) {
    for (int8_t i = 7; i >= 0; i--) {
        putchar((value & (1 << i)) ? '1' : '0');
        if (i == 4) putchar(' ');  // Разделитель для читаемости
    }
}

void put_bin16(uint16_t value) {
    put_bin8(value >> 8);
    putchar(' ');
    put_bin8(value & 0xFF);
}

void print_label_dec(const char *label, int16_t value) {
    puts(label);
    put_dec(value);
}

void print_label_hex(const char *label, uint16_t value) {
    puts(label);
    put_hex_prefix(value);
}

// ==================== ФОРМАТНЫЙ ВЫВОД ====================
#if USE_VARARGS

// Вспомогательная функция для вывода unsigned
static void put_udec(uint16_t n) {
    if (n >= 10000) {
        putchar('0' + n / 10000);
        n %= 10000;
    }
    if (n >= 1000) {
        putchar('0' + n / 1000);
        n %= 1000;
    }
    if (n >= 100) {
        putchar('0' + n / 100);
        n %= 100;
    }
    if (n >= 10) {
        putchar('0' + n / 10);
        n %= 10;
    }
    putchar('0' + n);
}

void printf(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    
    while (*fmt) {
        if (*fmt == '%') {
            fmt++;
            switch (*fmt) {
                case 'd':
                case 'i': {
                    int16_t val = va_arg(args, int);
                    put_dec(val);
                    break;
                }
                case 'u': {
                    uint16_t val = va_arg(args, unsigned int);
                    put_udec(val);
                    break;
                }
                case 'x': {
                    uint16_t val = va_arg(args, unsigned int);
                    put_hex(val);
                    break;
                }
                case 'X': {
                    uint16_t val = va_arg(args, unsigned int);
                    put_hex_prefix(val);
                    break;
                }
                case 'c': {
                    char val = (char)va_arg(args, int);
                    putchar(val);
                    break;
                }
                case 's': {
                    char *val = va_arg(args, char*);
                    puts(val);
                    break;
                }
                case '%': {
                    putchar('%');
                    break;
                }
                default: {
                    putchar('%');
                    putchar(*fmt);
                }
            }
        } else {
            putchar(*fmt);
        }
        fmt++;
    }
    
    va_end(args);
}

void printf_flush(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    
    // Локальный буфер для форматирования
    char local_buf[32];
    uint8_t idx = 0;
    
    while (*fmt && idx < 31) {
        if (*fmt == '%') {
            fmt++;
            // Упрощенная обработка для демонстрации
            // В реальности нужно полноценное форматирование
        } else {
            local_buf[idx++] = *fmt;
        }
        fmt++;
    }
    local_buf[idx] = '\0';
    
    va_end(args);
    
    // Вывод через оптимизированную функцию
    _puts_raw(local_buf);
    flush();
}

void sprintf_buf(char *buf, const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    
    while (*fmt) {
        if (*fmt == '%') {
            fmt++;
            // ... аналогично printf, но вывод в buf
        } else {
            *buf++ = *fmt;
        }
        fmt++;
    }
    *buf = '\0';
    
    va_end(args);
}
#endif // USE_VARARGS

// ==================== УТИЛИТЫ ====================

void fast_puts(const char *s) {
#if USE_DIRECT_ASM && !USE_OUTPUT_BUFFER
    // Прямой ASM вызов
    _puts_raw(s);
#else
    // Через буфер или обычный puts
    puts(s);
    flush();
#endif
}

void newline(void) {
    puts("\r\n");
    flush();
}

void separator(void) {
    puts("------------------------\r\n");
    flush();
}

void mem_dump(const uint8_t *data, uint16_t len, uint8_t per_line) {
    for (uint16_t i = 0; i < len; i++) {
        if (i % per_line == 0) {
            if (i > 0) newline();
            put_hex_prefix(i);
            puts(": ");
        }
        put_hex(data[i]);
        putchar(' ');
        
        if (i % 8 == 7) putchar(' ');
    }
    newline();
}
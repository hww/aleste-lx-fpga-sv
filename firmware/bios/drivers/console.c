/* console.c - полный драйвер с input/output */
#include <stdio.h>
#include "../src/syscalls.h"

/* Глобальные переменные которые требуются z88dk */
FILE *stdout = (FILE*)0x01;
FILE *stderr = (FILE*)0x02;

/* Для вывода */
static unsigned char cursor_x = 0;
static unsigned char cursor_y = 0;

/* Для ввода - буфер и позиция */
static char input_buffer[128];
static int input_pos = 0;

/* ========== OUTPUT ========== */

/* z88dk ищет ЭТУ функцию для вывода */
int fputc_cons(int c) {
    if (c == '\n') {
        cursor_x = 0;
        cursor_y++;
        if (cursor_y >= 25) cursor_y = 24;
        return c;
    }
    
    if (c == '\r') {
        cursor_x = 0;
        return c;
    }
    
    sys_put_char(c, cursor_x, cursor_y);
    cursor_x++;
    
    if (cursor_x >= 64) {
        cursor_x = 0;
        cursor_y++;
        if (cursor_y >= 25) cursor_y = 24;
    }
    
    return c;
}

/* putchar может просто вызывать fputc_cons */
int putchar(int c) {
    return fputc_cons(c);
}

/* ========== INPUT ========== */

/* Обработка backspace */
static void handle_backspace(void) {
    if (input_pos > 0) {
        input_pos--;
        /* Стираем символ на экране */
        putchar('\b');
        putchar(' ');
        putchar('\b');
    }
}

/* Обработка Enter */
static void handle_enter(void) {
    input_buffer[input_pos] = '\0';
    input_pos = 0;
    putchar('\n');
}

/* Блокирующий ввод - getchar() */
int getchar(void) {
    /* TODO: Реализовать реальный ввод с клавиатуры */
    /* Заглушка для тестирования - возвращаем 'A' */
    putchar('A');  /* Эхо на экран */
    return 'A';
}

/* Неблокирующий ввод - getk() */
int getk(void) {
    /* TODO: Реализовать проверку клавиатуры */
    return 0;  /* Нет нажатых клавиш */
}

/* Функция для чтения строки (упрощенная) */
char* simple_gets(char* buffer, int max_len) {
    int i = 0;
    char ch;
    
    while (i < max_len - 1) {
        ch = getchar();
        
        if (ch == '\n' || ch == '\r') {
            buffer[i] = '\0';
            putchar('\n');
            return buffer;
        }
        
        if (ch == '\b' || ch == 127) {  /* Backspace */
            if (i > 0) {
                i--;
                putchar('\b');
                putchar(' ');
                putchar('\b');
            }
            continue;
        }
        
        if (ch >= 32 && ch <= 126) {  /* Печатные символы */
            buffer[i++] = ch;
            putchar(ch);
        }
    }
    
    buffer[i] = '\0';
    return buffer;
}

/* ========== ИНИЦИАЛИЗАЦИЯ ========== */

void console_init(void) {
    cursor_x = 0;
    cursor_y = 0;
    input_pos = 0;
    sys_clear_screen();
}
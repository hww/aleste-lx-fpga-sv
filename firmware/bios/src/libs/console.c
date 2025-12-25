/* console.c - полный драйвер с input/output */

#include "../sys_api.h"


/* Для ввода - буфер и позиция */
static char input_buffer[128];
static int input_pos = 0;

/* ========== OUTPUT ========== */

/* putchar может просто вызывать fputc_cons */
int putchar(int c) {
    sys_console_put_char(c);   
    return c;
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
    input_pos = 0;
    sys_console_clear();
}
# KBD Пример использования

```c

#include "kbd/kbd.h"

// Простой пример
void keyboard_test(void) {
    sys_kbd_init();
    
    printf("Press any key...\n");
    
    uint8_t key = sys_kbd_wait_key();
    printf("Key pressed: 0x%02X\n", key);
    
    if (sys_kbd_is_shift_pressed()) {
        printf("Shift is pressed\n");
    }
    
    // Чтение с преобразованием в ASCII
    char ascii = sys_kbd_scancode_to_ascii(key);
    if (ascii != 0) {
        printf("ASCII: %c\n", ascii);
    }
}
```


```asm

; Пример на ассемблере
    call _sys_kbd_init
    
wait_for_key:
    call _sys_kbd_get_key
    cp 0xFF
    jr z, wait_for_key
    
    ; Клавиша в регистре A
    ld (last_key), a
    
    ; Проверка Shift
    call _sys_kbd_is_shift_pressed
    or a
    jr z, no_shift
    
    ; Обработка с Shift...
```

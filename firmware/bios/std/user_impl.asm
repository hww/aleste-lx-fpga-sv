; Низкоуровневые функции вывода
; Зависит от платформы

; В Z80 обычно через RST 16h для CP/M или свой драйвер
_putchar_raw:
    ; Вход: A = символ
    ; Выход: символ отправлен
    push bc
    push de
    push hl
    
    ; Пример для UART через порт 0x00
    out (0x00), a
    
    ; Ожидание готовности (если нужно)
.wait:
    in a, (0x01)
    and 0x02        ; Бит готовности
    jr z, .wait
    
    pop hl
    pop de
    pop bc
    ret

_puts_raw:
    ; Вход: HL = указатель на строку
    ; Выход: строка выведена
    push af
    push hl
    
.loop:
    ld a, (hl)
    or a
    jr z, .done
    
    call _putchar_raw
    inc hl
    jr .loop
    
.done:
    pop hl
    pop af
    ret
; ============================================================================
; INTERRUPTS AND TIMERS API JUMP TABLE
; Располагается в банке 0x25
; ============================================================================
SECTION BANK_25_INT_API
org 0xFF00

; ---- ПУБЛИЧНЫЕ СИМВОЛЫ ----
PUBLIC _sys_int_init, _sys_int_enable, _sys_int_disable, _sys_int_set_handler
PUBLIC _sys_int_get_handler, _sys_int_install, _sys_int_remove, _sys_int_get_status
PUBLIC _sys_timer_start, _sys_timer_stop, _sys_timer_set_callback, _sys_timer_get_count
PUBLIC _sys_timer_reset, _sys_timer_pause, _sys_timer_resume, _sys_get_tick_count
PUBLIC _sys_delay_ms, _sys_delay_us, _sys_get_time_ms, _sys_set_timer_frequency

; ---- ВНЕШНИЕ ССЫЛКИ ----
EXTERN _int_init, _int_enable, _int_disable, _int_set_handler, _int_get_handler
EXTERN _int_install, _int_remove, _timer_start, _timer_stop, _timer_set_callback
EXTERN _timer_get_count, _get_tick_count, _delay_ms, _delay_us

; ==================== ТАБЛИЦА ПЕРЕХОДОВ ====================

; ---- ПРЕРЫВАНИЯ ----
_sys_int_init:          jp _int_init
_sys_int_enable:        jp _int_enable
_sys_int_disable:       jp _int_disable
_sys_int_set_handler:   jp _int_set_handler
_sys_int_get_handler:   jp _int_get_handler
_sys_int_install:       jp _int_install
_sys_int_remove:        jp _int_remove

; ---- ТАЙМЕРЫ ----
_sys_timer_start:       jp _timer_start
_sys_timer_stop:        jp _timer_stop
_sys_timer_set_callback: jp _timer_set_callback
_sys_timer_get_count:   jp _timer_get_count

; ---- ВРЕМЯ И ЗАДЕРЖКИ ----
_sys_get_tick_count:    jp _get_tick_count
_sys_delay_ms:          jp _delay_ms
_sys_delay_us:          jp _delay_us

; ---- ДОПОЛНИТЕЛЬНЫЕ ФУНКЦИИ ----
_sys_int_get_status:
    ; Получить статус системы прерываний
    ld a, (int_enabled)
    ret

_sys_timer_reset:
    ; Сбросить таймер
    push af
    push hl
    
    call _timer_stop
    ld hl, 0
    call _timer_start
    
    pop hl
    pop af
    ret

_sys_timer_pause:
    ; Пауза таймера
    push af
    
    call _timer_stop
    
    pop af
    ret

_sys_timer_resume:
    ; Продолжить таймер
    push af
    push hl
    
    ; TODO: Сохранять предыдущий период
    ld hl, 1000  ; Заглушка
    call _timer_start
    
    pop hl
    pop af
    ret

_sys_get_time_ms:
    ; Получить время в миллисекундах
    push de
    
    call _get_tick_count
    
    ; HLDE содержит тики, конвертируем в мс
    ; 1 тик = 20 мс (при 50 Гц)
    ld bc, TIMER_TICK_MS
    call multiply_hl_bc  ; HL * BC
    
    pop de
    ret

_sys_set_timer_frequency:
    ; Установить частоту системного таймера
    ; Вход: HL = частота в Гц
    push af
    push bc
    push de
    push hl
    
    ; TODO: Настроить аппаратный таймер на новую частоту
    
    ; Сохраняем частоту
    ld (timer_frequency), hl
    
    ; Вычисляем период в мс
    ld de, 1000
    call divide_de_hl    ; 1000 / частота
    
    ; Сохраняем период
    ld (timer_tick_ms), hl
    
    pop hl
    pop de
    pop bc
    pop af
    ret

; ==================== ВСПОМОГАТЕЛЬНЫЕ ФУНКЦИИ ====================

; Умножение HL * BC
multiply_hl_bc:
    push af
    push de
    
    ld de, 0
    
.mul_loop:
    ; Проверяем младший бит HL
    bit 0, l
    jr z, .no_add
    
    ; Добавляем BC к DE
    push hl
    ld hl, de
    add hl, bc
    ld d, h
    ld e, l
    pop hl

.no_add:
    ; Сдвигаем HL вправо, BC влево
    srl h
    rr l
    sla c
    rl b
    
    ; Проверяем, закончили ли
    ld a, h
    or l
    jr nz, .mul_loop
    
    ; Результат в DE
    ld h, d
    ld l, e
    
    pop de
    pop af
    ret

; Деление DE / HL
divide_de_hl:
    push bc
    
    ld bc, 0
    
.div_loop:
    ; Проверяем, можно ли вычесть
    or a
    sbc hl, de
    jr c, .done
    
    ; Увеличиваем частное
    inc bc
    jr .div_loop

.done:
    ; Восстанавливаем
    add hl, de
    
    ; Возвращаем частное в HL
    ld h, b
    ld l, c
    
    pop bc
    ret

; ==================== ДАННЫЕ ====================

SECTION INT_CONST

; Константы частоты таймера
timer_frequency:      dw TIMER_TICK_HZ
timer_tick_ms:        dw TIMER_TICK_MS

; Таблица векторов прерываний по умолчанию
default_interrupt_vectors:
    dw default_irq_handler  ; IRQ0
    dw default_irq_handler  ; IRQ1
    dw default_irq_handler  ; IRQ2
    dw default_irq_handler  ; IRQ3
    dw default_irq_handler  ; IRQ4
    dw default_irq_handler  ; IRQ5
    dw default_irq_handler  ; IRQ6
    dw default_irq_handler  ; IRQ7

; Приоритеты прерываний
interrupt_priorities:
    db 7  ; IRQ0 - наивысший приоритет (системный таймер)
    db 6  ; IRQ1 - клавиатура
    db 5  ; IRQ2 - COM1
    db 4  ; IRQ3 - COM2
    db 3  ; IRQ4 - диск
    db 2  ; IRQ5 - звук
    db 1  ; IRQ6 - видео
    db 0  ; IRQ7 - пользовательское

; Заполнение до конца страницы
    ds 0xFFFF - $, 0xFF
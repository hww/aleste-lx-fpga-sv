; ============================================================================
; INTERRUPTS AND TIMERS DRIVER
; ============================================================================
module interrupts_driver

; ---- КОНСТАНТЫ ----
INT_NO_ERROR            equ 0x00
INT_NOT_INITIALIZED     equ 0x01
INT_INVALID_VECTOR      equ 0x02
INT_HANDLER_EXISTS      equ 0x03
INT_INVALID_PRIORITY    equ 0x05
INT_CHAIN_TOO_LONG      equ 0x06

TIMER_NO_ERROR          equ 0x00
TIMER_NOT_INITIALIZED   equ 0x01
TIMER_INVALID_NUM       equ 0x02
TIMER_ALREADY_RUNNING   equ 0x03
TIMER_NOT_RUNNING       equ 0x04

; Номера прерываний
INT_NMI                 equ 0x00    ; Маска NMI
INT_IRQ0                equ 0x01    ; IRQ0 (таймер)
INT_IRQ1                equ 0x02    ; IRQ1 (клавиатура)
INT_IRQ2                equ 0x03    ; IRQ2 (COM1)
INT_IRQ3                equ 0x04    ; IRQ3 (COM2)
INT_IRQ4                equ 0x05    ; IRQ4 (диск)
INT_IRQ5                equ 0x06    ; IRQ5 (звук)
INT_IRQ6                equ 0x07    ; IRQ6 (видео)
INT_IRQ7                equ 0x08    ; IRQ7 (пользовательское)

; Количество таймеров
TIMER_COUNT             equ 4
TIMER_TICK_HZ           equ 50      ; Частота системного таймера (50 Гц)
TIMER_TICK_MS           equ 20      ; Период тика в мс (1000/50)

; Форматы обработчиков
HANDLER_SINGLE          equ 0x00
HANDLER_CHAIN_START     equ 0xFF
HANDLER_CHAIN_END       equ 0x00

; ---- ДАННЫЕ ДРАЙВЕРА ----
SECTION INT_DATA

; Системный счетчик тиков (32 бита)
system_ticks:           ds 4        ; 32-битный счетчик

; Обработчики прерываний
int_handlers:           ds 16       ; 8 прерываний * 2 байта адрес

; Состояние системы прерываний
int_initialized:        db 0
int_enabled:            db 0
int_nesting_level:      db 0

; Данные таймеров
timer_initialized:      db 0
timer_counters:         ds TIMER_COUNT * 4  ; 32-битные счетчики
timer_periods:          ds TIMER_COUNT * 2  ; 16-битные периоды
timer_running:          ds TIMER_COUNT      ; Флаги запуска
timer_callbacks:        ds TIMER_COUNT * 2  ; Коллбэки таймеров

; Для задержки
delay_counter:          dw 0
delay_accumulator:      db 0

; Для int_install
int_install_vector:     db 0
int_install_handler:    dw 0
int_install_priority:   db 0
int_old_handler:        dw 0

; Таблица приоритетов
interrupt_priorities:   ds 8

; Буфер для цепочек обработчиков
handler_chain_buffer:   ds 32  ; Максимум 8 обработчиков в цепочке

; ---- МАКРОСЫ ----
; Сохранение всех регистров
MACRO SAVE_ALL
    push af
    push bc
    push de
    push hl
    push ix
    push iy
    ex af, af'
    exx
    push af
    push bc
    push de
    push hl
ENDM

; Восстановление всех регистров
MACRO RESTORE_ALL
    pop hl
    pop de
    pop bc
    pop af
    exx
    ex af, af'
    pop iy
    pop ix
    pop hl
    pop de
    pop bc
    pop af
ENDM

; ==================== СИСТЕМНЫЕ ФУНКЦИИ ====================

SECTION INT_CODE

; ----------------------------------------------------------------------------
; int_init - Инициализация системы прерываний
; Выход: A = код ошибки
; ----------------------------------------------------------------------------
PUBLIC _int_init
_int_init:
    push bc
    push de
    push hl
    
    ; Проверяем, уже инициализировано ли
    ld a, (int_initialized)
    or a
    jr nz, @already_init
    
    ; Сбрасываем счетчик тиков
    xor a
    ld hl, system_ticks
    ld (hl), a
    inc hl
    ld (hl), a
    inc hl
    ld (hl), a
    inc hl
    ld (hl), a
    
    ; Очищаем обработчики прерываний
    ld hl, int_handlers
    ld de, int_handlers + 1
    ld bc, 15
    ld (hl), 0
    ldir
    
    ; Очищаем данные таймеров
    ld hl, timer_counters
    ld de, timer_counters + 1
    ld bc, (TIMER_COUNT * 4) + (TIMER_COUNT * 2) + TIMER_COUNT + (TIMER_COUNT * 2) - 1
    ld (hl), 0
    ldir
    
    ; Очищаем таблицу приоритетов
    ld hl, interrupt_priorities
    ld de, interrupt_priorities + 1
    ld bc, 7
    ld (hl), 0
    ldir
    
    ; Устанавливаем обработчик по умолчанию для IRQ0 (системный таймер)
    ld hl, system_timer_handler
    ld a, INT_IRQ0
    call int_set_handler_internal
    
    ; Настраиваем аппаратные прерывания
    call setup_hardware_interrupts
    
    ; Инициализируем таймеры
    call timer_init_hardware
    
    ; Устанавливаем флаги
    ld a, 1
    ld (int_initialized), a
    ld (timer_initialized), a
    
    ; Разрешаем прерывания
    ei
    
    xor a  ; Успех
    jr @exit

@already_init:
    xor a  ; Уже инициализировано

@exit:
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; int_enable - Разрешить прерывания
; ----------------------------------------------------------------------------
PUBLIC _int_enable
_int_enable:
    push af
    
    ld a, 1
    ld (int_enabled), a
    ei
    
    pop af
    ret

; ----------------------------------------------------------------------------
; int_disable - Запретить прерывания
; ----------------------------------------------------------------------------
PUBLIC _int_disable
_int_disable:
    push af
    
    di
    xor a
    ld (int_enabled), a
    
    pop af
    ret

; ----------------------------------------------------------------------------
; int_set_handler - Установить обработчик прерывания
; Вход: A = номер прерывания (0-7)
;       HL = адрес обработчика
; Выход: A = код ошибки
; ----------------------------------------------------------------------------
PUBLIC _int_set_handler
_int_set_handler:
    push bc
    push de
    push hl
    
    ; Проверяем инициализацию
    ld b, a
    ld a, (int_initialized)
    or a
    jr z, @not_initialized
    
    ; Проверяем номер прерывания
    ld a, b
    cp 8
    jr nc, @invalid_vector
    
    ; Устанавливаем обработчик
    call int_set_handler_internal
    
    xor a  ; Успех
    jr @exit

@not_initialized:
    ld a, INT_NOT_INITIALIZED
    jr @exit
    
@invalid_vector:
    ld a, INT_INVALID_VECTOR

@exit:
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; int_get_handler - Получить адрес обработчика прерывания
; Вход: A = номер прерывания
; Выход: HL = адрес обработчика
; ----------------------------------------------------------------------------
PUBLIC _int_get_handler
_int_get_handler:
    push bc
    push de
    
    ; Получаем адрес из таблицы
    ld b, 0
    ld c, a
    sla c           ; Умножаем на 2 (каждая запись - 2 байта)
    ld hl, int_handlers
    add hl, bc
    ld a, (hl)
    inc hl
    ld h, (hl)
    ld l, a
    
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; int_install - Установить пользовательское прерывание
; Вход: A = номер прерывания
;       HL = адрес обработчика
;       B = приоритет (0-7)
; Выход: A = код ошибки
; ----------------------------------------------------------------------------
PUBLIC _int_install
_int_install:
    push bc
    push de
    push hl
    push ix
    
    ; Сохраняем параметры
    ld (int_install_vector), a
    ld (int_install_handler), hl
    ld a, b
    ld (int_install_priority), a
    
    ; Проверяем инициализацию
    ld a, (int_initialized)
    or a
    jr z, @not_initialized
    
    ; Проверяем номер прерывания
    ld a, (int_install_vector)
    cp 8
    jr nc, @invalid_vector
    
    ; Проверяем приоритет
    ld a, (int_install_priority)
    cp 8
    jr nc, @invalid_priority
    
    ; Получаем текущий обработчик если есть
    ld a, (int_install_vector)
    call int_get_handler_internal
    ld (int_old_handler), hl
    
    ; Устанавливаем новый обработчик с приоритетом
    call int_set_handler_with_priority
    
    ; Обновляем таблицу приоритетов
    ld a, (int_install_vector)
    ld hl, interrupt_priorities
    ld d, 0
    ld e, a
    add hl, de
    
    ld a, (int_install_priority)
    ld (hl), a
    
    xor a  ; Успех
    jr @exit

@not_initialized:
    ld a, INT_NOT_INITIALIZED
    jr @exit
    
@invalid_vector:
    ld a, INT_INVALID_VECTOR
    jr @exit
    
@invalid_priority:
    ld a, INT_INVALID_PRIORITY

@exit:
    pop ix
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; int_set_handler_with_priority - Установить обработчик с приоритетом
; ----------------------------------------------------------------------------
int_set_handler_with_priority:
    push af
    push bc
    push de
    push hl
    
    ; Получаем вектор прерывания
    ld a, (int_install_vector)
    
    ; Проверяем, если уже есть обработчик с более высоким приоритетом
    ld hl, interrupt_priorities
    ld d, 0
    ld e, a
    add hl, de
    
    ld b, (hl)  ; Текущий приоритет
    ld a, (int_install_priority)
    cp b
    jr c, @lower_priority  ; Новый приоритет ниже
    
    ; Устанавливаем новый обработчик
    ld hl, (int_install_handler)
    call int_set_handler_internal
    
    ; Сохраняем старый обработчик в цепочке
    ld hl, (int_old_handler)
    ld a, l
    or h
    jr z, @no_chain  ; Не было старого обработчика
    
    ; Добавляем в цепочку обработчиков
    call add_to_handler_chain
    
    jr @exit

@lower_priority:
    ; Добавляем в конец цепочки
    call add_to_handler_chain_end
    jr @exit
    
@no_chain:
    ; Просто устанавливаем новый

@exit:
    pop hl
    pop de
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; int_remove - Удалить обработчик прерывания
; Вход: A = номер прерывания
; Выход: A = код ошибки
; ----------------------------------------------------------------------------
PUBLIC _int_remove
_int_remove:
    push bc
    push hl
    
    ; Проверяем номер прерывания
    cp 8
    jr nc, @invalid_vector
    
    ; Удаляем обработчик (устанавливаем в 0)
    ld b, 0
    ld c, a
    sla c
    ld hl, int_handlers
    add hl, bc
    ld (hl), 0
    inc hl
    ld (hl), 0
    
    ; Сбрасываем приоритет
    ld hl, interrupt_priorities
    ld d, 0
    ld e, a
    add hl, de
    ld (hl), 0
    
    xor a  ; Успех
    jr @exit

@invalid_vector:
    ld a, INT_INVALID_VECTOR

@exit:
    pop hl
    pop bc
    ret

; ==================== ТАЙМЕРЫ ====================

; ----------------------------------------------------------------------------
; timer_start - Запустить таймер
; Вход: A = номер таймера (0-3)
;       HL = период в тиках
; Выход: A = код ошибки
; ----------------------------------------------------------------------------
PUBLIC _timer_start
_timer_start:
    push bc
    push de
    push hl
    
    ; Проверяем инициализацию
    ld b, a
    ld a, (timer_initialized)
    or a
    jr z, @not_initialized
    
    ; Проверяем номер таймера
    ld a, b
    cp TIMER_COUNT
    jr nc, @invalid_timer
    
    ; Проверяем, не запущен ли уже
    ld hl, timer_running
    ld d, 0
    ld e, a
    add hl, de
    ld a, (hl)
    or a
    jr nz, @already_running
    
    ; Сохраняем период
    pop hl
    push hl
    ld d, 0
    ld e, b
    sla e           ; Умножаем на 2 (период 2 байта)
    ld ix, timer_periods
    add ix, de
    ld (ix), l
    ld (ix+1), h
    
    ; Сбрасываем счетчик
    ld hl, timer_counters
    ld d, 0
    ld e, b
    sla e
    sla e           ; Умножаем на 4 (счетчик 4 байта)
    add hl, de
    ld (hl), 0
    inc hl
    ld (hl), 0
    inc hl
    ld (hl), 0
    inc hl
    ld (hl), 0
    
    ; Устанавливаем флаг запуска
    ld hl, timer_running
    add hl, de
    ld a, 1
    ld (hl), a
    
    ; Запускаем аппаратный таймер если нужно
    call timer_start_hardware
    
    xor a  ; Успех
    jr @exit

@not_initialized:
    ld a, TIMER_NOT_INITIALIZED
    jr @exit
    
@invalid_timer:
    ld a, TIMER_INVALID_NUM
    jr @exit
    
@already_running:
    ld a, TIMER_ALREADY_RUNNING

@exit:
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; timer_stop - Остановить таймер
; Вход: A = номер таймера
; Выход: A = код ошибки
; ----------------------------------------------------------------------------
PUBLIC _timer_stop
_timer_stop:
    push bc
    push hl
    
    ; Проверяем номер таймера
    cp TIMER_COUNT
    jr nc, @invalid_timer
    
    ; Проверяем, запущен ли
    ld hl, timer_running
    ld d, 0
    ld e, a
    add hl, de
    ld a, (hl)
    or a
    jr z, @not_running
    
    ; Останавливаем
    xor a
    ld (hl), a
    
    ; Останавливаем аппаратный таймер если нужно
    call timer_stop_hardware
    
    xor a  ; Успех
    jr @exit

@invalid_timer:
    ld a, TIMER_INVALID_NUM
    jr @exit
    
@not_running:
    ld a, TIMER_NOT_RUNNING

@exit:
    pop hl
    pop bc
    ret

; ----------------------------------------------------------------------------
; timer_set_callback - Установить callback для таймера
; Вход: A = номер таймера
;       HL = адрес callback-функции
; Выход: A = код ошибки
; ----------------------------------------------------------------------------
PUBLIC _timer_set_callback
_timer_set_callback:
    push bc
    push de
    push hl
    
    ; Проверяем номер таймера
    cp TIMER_COUNT
    jr nc, @invalid_timer
    
    ; Устанавливаем callback
    ld d, 0
    ld e, a
    sla e           ; Умножаем на 2 (адрес 2 байта)
    ld ix, timer_callbacks
    add ix, de
    pop hl
    push hl
    ld (ix), l
    ld (ix+1), h
    
    xor a  ; Успех
    jr @exit

@invalid_timer:
    ld a, TIMER_INVALID_NUM

@exit:
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; timer_get_count - Получить текущее значение таймера
; Вход: A = номер таймера
; Выход: HL = значение счетчика (младшее слово)
;        DE = значение счетчика (старшее слово)
; ----------------------------------------------------------------------------
PUBLIC _timer_get_count
_timer_get_count:
    push bc
    
    ; Проверяем номер таймера
    cp TIMER_COUNT
    jr nc, @invalid_timer
    
    ; Получаем счетчик
    ld hl, timer_counters
    ld d, 0
    ld e, a
    sla e
    sla e           ; Умножаем на 4
    add hl, de
    
    ; Читаем 32-битное значение
    ld e, (hl)
    inc hl
    ld d, (hl)
    inc hl
    ld c, (hl)
    inc hl
    ld b, (hl)
    
    ; Возвращаем в HL:DE
    ld l, e
    ld h, d
    ld e, c
    ld d, b
    
    jr @exit

@invalid_timer:
    ld hl, 0
    ld de, 0

@exit:
    pop bc
    ret

; ----------------------------------------------------------------------------
; get_tick_count - Получить счетчик тиков системы
; Выход: HLDE = 32-битный счетчик тиков
; ----------------------------------------------------------------------------
PUBLIC _get_tick_count
_get_tick_count:
    di                  ; Отключаем прерывания на время чтения
    
    ld hl, (system_ticks)
    ld de, (system_ticks + 2)
    
    ei                  ; Включаем прерывания обратно
    ret

; ----------------------------------------------------------------------------
; delay_ms - Задержка в миллисекундах
; Вход: HL = количество миллисекунд
; Выход: Нет
; ----------------------------------------------------------------------------
PUBLIC _delay_ms
_delay_ms:
    push af
    push bc
    push de
    push hl
    
    ; Конвертируем миллисекунды в тики
    ; 1 тик = 20 мс (при 50 Гц)
    ld de, TIMER_TICK_MS
    call divide_hl_de   ; HL = количество тиков
    
    ; Получаем начальное значение счетчика
    call _get_tick_count
    push hl
    push de
    
    ; Вычисляем целевое значение
    pop de
    pop hl
    add hl, bc          ; Добавляем требуемое количество тиков
    jr nc, @no_carry
    inc de
@no_carry:
    
    ; Ждем
@wait_loop:
    push hl
    push de
    
    call _get_tick_count
    
    ; Сравниваем текущее время с целевым
    ; DEHL = текущее время
    ; (SP) = целевое время
    
    ; Сравниваем старшие слова
    ex de, hl
    ex (sp), hl
    push hl
    ex de, hl
    sbc hl, de
    pop hl
    ex de, hl
    jr nz, @check_done
    
    ; Старшие слова равны, сравниваем младшие
    ex (sp), hl
    sbc hl, de
    ex (sp), hl
    
@check_done:
    pop de
    pop hl
    
    jr c, @wait_loop    ; Если текущее < целевого, продолжаем ждать
    jr z, @wait_loop
    
    pop hl
    pop de
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; delay_us - Задержка в микросекундах (грубая)
; Вход: HL = количество микросекунд
; Выход: Нет
; ----------------------------------------------------------------------------
PUBLIC _delay_us
_delay_us:
    push bc
    push hl
    
    ; Грубая задержка на циклах процессора
    ; Примерно 4 цикла на итерацию
    ld b, h
    ld c, l
    srl b
    rr c
    srl b
    rr c              ; Делим на 4
    
@delay_loop:
    dec bc
    ld a, b
    or c
    jr nz, @delay_loop
    
    pop hl
    pop bc
    ret

; ==================== ОБРАБОТЧИКИ ПРЕРЫВАНИЙ ====================

; ----------------------------------------------------------------------------
; system_timer_handler - Обработчик системного таймера
; ----------------------------------------------------------------------------
system_timer_handler:
    SAVE_ALL
    
    ; Увеличиваем системный счетчик тиков
    ld hl, system_ticks
    call increment_32bit
    
    ; Обновляем программные таймеры
    call update_timers
    
    ; Восстанавливаем и выходим
    RESTORE_ALL
    ei
    reti

; ----------------------------------------------------------------------------
; default_irq_handler - Обработчик прерывания по умолчанию
; ----------------------------------------------------------------------------
default_irq_handler:
    ei
    reti

; ----------------------------------------------------------------------------
; update_timers - Обновить все таймеры
; ----------------------------------------------------------------------------
update_timers:
    push af
    push bc
    push de
    push hl
    push ix
    
    ld b, TIMER_COUNT
    ld ix, timer_counters
    
@timer_loop:
    ; Проверяем, запущен ли таймер
    push ix
    ld hl, timer_running
    ld d, 0
    ld e, b
    dec e
    add hl, de
    ld a, (hl)
    pop ix
    
    or a
    jr z, @next_timer
    
    ; Увеличиваем счетчик таймера
    call increment_32bit_ptr
    
    ; Проверяем, не достигли ли периода
    push ix
    push bc
    
    ; Получаем период для этого таймера
    ld hl, timer_periods
    ld d, 0
    ld e, b
    dec e
    sla e           ; Умножаем на 2
    add hl, de
    
    ; Сравниваем счетчик с периодом
    ld c, (hl)
    inc hl
    ld b, (hl)
    
    ; Получаем младшее слово счетчика
    ld e, (ix)
    ld d, (ix+1)
    
    ; Сравниваем
    ld a, d
    cp b
    jr nz, @not_equal
    ld a, e
    cp c
    
@not_equal:
    pop bc
    pop ix
    
    jr c, @next_timer   ; Если счетчик < периода
    
    ; Счетчик достиг периода
    ; Сбрасываем счетчик
    xor a
    ld (ix), a
    ld (ix+1), a
    ld (ix+2), a
    ld (ix+3), a
    
    ; Вызываем callback если есть
    push ix
    push bc
    
    ld hl, timer_callbacks
    ld d, 0
    ld e, b
    dec e
    sla e
    add hl, de
    
    ld a, (hl)
    inc hl
    ld h, (hl)
    ld l, a
    
    or h
    jr z, @no_callback
    
    ; Вызываем callback
    push ix
    push bc
    call call_hl
    pop bc
    pop ix
    
@no_callback:
    pop bc
    pop ix

@next_timer:
    ; Следующий таймер
    ld de, 4
    add ix, de
    djnz @timer_loop
    
    pop ix
    pop hl
    pop de
    pop bc
    pop af
    ret

; ==================== ВНУТРЕННИЕ ФУНКЦИИ ====================

; ----------------------------------------------------------------------------
; int_set_handler_internal - Внутренняя установка обработчика
; Вход: A = номер прерывания, HL = адрес
; ----------------------------------------------------------------------------
int_set_handler_internal:
    push bc
    push de
    push hl
    
    ; A = номер прерывания (0-7)
    ; HL = адрес обработчика
    
    ; Вычисляем смещение в таблице: A * 2
    ld b, 0
    ld c, a
    sla c               ; Умножаем на 2
    
    ; Вычисляем адрес в таблице
    ld de, int_handlers ; DE = начало таблицы
    ex de, hl           ; HL = начало таблицы, DE = адрес обработчика
    add hl, bc          ; HL = int_handlers + A*2
    
    ; Сохраняем адрес обработчика
    ld (hl), e          ; Младший байт адреса из DE
    inc hl
    ld (hl), d          ; Старший байт адреса из DE
    
    ; Настраиваем аппаратный вектор если нужно
    call setup_interrupt_vector
    
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; int_get_handler_internal - Получить обработчик прерывания
; Вход: A = номер прерывания
; Выход: HL = адрес обработчика
; ----------------------------------------------------------------------------
int_get_handler_internal:
    push bc
    push de
    
    ld b, 0
    ld c, a
    sla c           ; Умножаем на 2
    ld hl, int_handlers
    add hl, bc
    
    ld a, (hl)
    inc hl
    ld h, (hl)
    ld l, a
    
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; add_to_handler_chain - Добавить обработчик в цепочку
; ----------------------------------------------------------------------------
add_to_handler_chain:
    push af
    push bc
    push de
    push hl
    push ix
    
    ; HL = старый обработчик
    ; Нужно создать цепочку
    
    ; Проверяем, является ли старый обработчик цепочкой
    call is_handler_chain
    jr c, @create_chain
    
    ; Старый обработчик - одиночный, создаем цепочку
    ld ix, handler_chain_buffer
    ld (ix), 0xFF           ; Маркер начала цепочки
    inc ix
    ld (ix), l              ; Сохраняем старый обработчик
    inc ix
    ld (ix), h
    inc ix
    ld hl, (int_install_handler)
    ld (ix), l              ; Добавляем новый
    inc ix
    ld (ix), h
    inc ix
    ld (ix), 0x00           ; Маркер конца цепочки
    
    ; Устанавливаем цепочку как обработчик
    ld hl, handler_chain_buffer
    ld a, (int_install_vector)
    call int_set_handler_internal
    
    jr @exit

@create_chain:
    ; HL указывает на существующую цепочку
    ; Находим конец цепочки
@find_end:
    ld a, (hl)
    inc hl
    cp 0x00
    jr z, @found_end
    cp 0xFF
    jr z, @skip_marker
    inc hl                  ; Пропускаем адрес
    jr @find_end

@skip_marker:
    inc hl
    jr @find_end

@found_end:
    ; Добавляем новый обработчик
    dec hl                  ; Возвращаемся к маркеру конца
    ld a, 0xFF              ; Заменяем на маркер продолжения
    ld (hl), a
    inc hl
    ld de, (int_install_handler)
    ld (hl), e
    inc hl
    ld (hl), d
    inc hl
    ld (hl), 0x00           ; Новый маркер конца

@exit:
    pop ix
    pop hl
    pop de
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; add_to_handler_chain_end - Добавить обработчик в конец цепочки
; ----------------------------------------------------------------------------
add_to_handler_chain_end:
    ; Похоже на add_to_handler_chain, но всегда добавляет в конец
    jp add_to_handler_chain

; ----------------------------------------------------------------------------
; is_handler_chain - Проверить, является ли обработчик цепочкой
; Вход: HL = адрес обработчика
; Выход: CY = 1 если цепочка
; ----------------------------------------------------------------------------
is_handler_chain:
    push af
    
    ld a, (hl)
    cp 0xFF
    jr z, @is_chain
    
    ; Не цепочка
    or a  ; Сбрасываем CY
    jr @exit

@is_chain:
    scf   ; Устанавливаем CY

@exit:
    pop af
    ret

; ----------------------------------------------------------------------------
; int_chain_dispatcher - Диспетчер для цепочек обработчиков
; Вход: Цепочка обработчиков в памяти
; ----------------------------------------------------------------------------
int_chain_dispatcher:
    push af
    push bc
    push de
    push hl
    push ix
    
    ; HL указывает на начало цепочки
    ld a, (hl)
    cp 0xFF
    jr nz, @single_handler
    
    ; Цепочка обработчиков
    inc hl  ; Пропускаем маркер
    
@chain_loop:
    ld e, (hl)
    inc hl
    ld d, (hl)
    inc hl
    
    ; DE = адрес обработчика
    ld a, d
    or e
    jr z, @chain_end  ; Конец цепочки
    
    ; Сохраняем текущую позицию
    push hl
    
    ; Вызываем обработчик
    ld hl, @chain_return
    push hl
    push de
    ret
    
@chain_return:
    ; Восстанавливаем позицию
    pop hl
    
    ; Проверяем следующий элемент
    ld a, (hl)
    cp 0x00
    jr z, @chain_end
    
    ; Продолжаем цепочку
    jr @chain_loop

@chain_end:
    jr @exit

@single_handler:
    ; Одиночный обработчик
    call call_hl

@exit:
    pop ix
    pop hl
    pop de
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; setup_hardware_interrupts - Настройка аппаратных прерываний
; ----------------------------------------------------------------------------
setup_hardware_interrupts:
    ; TODO: Настроить контроллер прерываний
    ; Для Z80 это обычно настройка режима прерываний
    ld a, 0x00
    ld i, a          ; Устанавливаем старший байт вектора
    im 1             ; Режим прерываний 1
    ret

; ----------------------------------------------------------------------------
; timer_init_hardware - Инициализация аппаратных таймеров
; ----------------------------------------------------------------------------
timer_init_hardware:
    ; TODO: Инициализировать аппаратные таймеры
    ; Например, Z80 CTC
    ret

; ----------------------------------------------------------------------------
; timer_start_hardware - Запуск аппаратного таймера
; ----------------------------------------------------------------------------
timer_start_hardware:
    ; TODO: Запустить аппаратный таймер
    ret

; ----------------------------------------------------------------------------
; timer_stop_hardware - Остановка аппаратного таймера
; ----------------------------------------------------------------------------
timer_stop_hardware:
    ; TODO: Остановить аппаратный таймер
    ret

; ----------------------------------------------------------------------------
; setup_interrupt_vector - Настройка аппаратного вектора прерывания
; Вход: A = номер прерывания, HL = адрес обработчика
; ----------------------------------------------------------------------------
setup_interrupt_vector:
    ; TODO: Настроить аппаратный вектор
    ; Зависит от конкретного оборудования
    ret

; ----------------------------------------------------------------------------
; increment_32bit - Увеличить 32-битное число по адресу HL
; ----------------------------------------------------------------------------
increment_32bit:
    push af
    
    inc (hl)
    jr nz, @no_carry1
    inc hl
    inc (hl)
    jr nz, @no_carry2
    inc hl
    inc (hl)
    jr nz, @no_carry3
    inc hl
    inc (hl)
    pop af
    ret
    
@no_carry3:
    dec hl
@no_carry2:
    dec hl
@no_carry1:
    pop af
    ret

; ----------------------------------------------------------------------------
; increment_32bit_ptr - Увеличить 32-битное число по адресу IX
; ----------------------------------------------------------------------------
increment_32bit_ptr:
    push af
    
    inc (ix)
    jr nz, @no_carry1
    inc (ix+1)
    jr nz, @no_carry2
    inc (ix+2)
    jr nz, @no_carry3
    inc (ix+3)
    
@no_carry3:
@no_carry2:
@no_carry1:
    pop af
    ret

; ----------------------------------------------------------------------------
; call_hl - Вызов функции по адресу в HL
; ----------------------------------------------------------------------------
call_hl:
    jp (hl)

; ----------------------------------------------------------------------------
; divide_hl_de - Деление HL на DE
; Вход: HL = делимое, DE = делитель
; Выход: HL = частное
; ----------------------------------------------------------------------------
divide_hl_de:
    push bc
    push de
    
    ld bc, 0
    
@div_loop:
    ; Вычитаем DE из HL
    or a            ; Сбрасываем carry
    sbc hl, de
    jr c, @done     ; Если результат отрицательный
    
    ; Увеличиваем частное
    inc bc
    jr @div_loop

@done:
    ; Восстанавливаем HL (добавляем DE обратно)
    add hl, de
    
    ; Возвращаем частное в HL
    ld h, b
    ld l, c
    
    pop de
    pop bc
    ret
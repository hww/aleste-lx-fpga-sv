SECTION code_user
ORG 0xC000

PUBLIC __Start       ; Точка входа для системы
; НЕ _main - это будет конфликтовать с C-функцией

__Start:
    di
    ld a, 0x07
    out (0xF0), a
    ld sp, 0xFF00
    ld a, 0x02
    out (0xF0), a
    
    call _main       ; Вызываем C-функцию main()
    
    di
    halt
    jp $


    ; =============== НАЧАЛО ПРОГРАММЫ ===============
    org 0x0000
    
start:
    ; 1. Инициализация стека
    LD SP, STACK
    
    ; 2. Настроить слоты (система в Supervisor после сброса)
    LD A, 0               ; Слот 0 для Supervisor
    OUT (SUPER_SLOT), A
    
    ; 3. Настроить банки памяти
    CALL setup_memory_map
    
    ; 4. Перейти в User Native Mode
    LD A, %00000010       ; supervisor=0, native=1
    OUT (GLOBAL_CTRL), A
    
    ; 5. Установить User слот (такой же как Supervisor)
    LD A, 0
    OUT (USER_SLOT), A
    
    ; 6. Инициализировать видео
    CALL init_video
    
    ; 7. Очистить экран и вывести приветствие
    CALL clear_screen
    
    LD HL, welcome_msg
    LD DE, 0x0A0A         ; X=10, Y=10
    CALL print_string
    
    ; 8. Вечный цикл
    jr $


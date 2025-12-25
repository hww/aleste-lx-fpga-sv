; ============================================================================
; PROCESS MANAGEMENT DRIVER
; Реализация многозадачности
; ============================================================================
module process_driver

; ---- КОНСТАНТЫ ----
PROC_NO_ERROR           equ 0x00
PROC_ERROR_NO_MEMORY    equ 0x01
PROC_ERROR_INVALID_ID   equ 0x02
PROC_ERROR_DEAD         equ 0x03
PROC_ERROR_BUSY         equ 0x04
PROC_ERROR_MAX_PROC     equ 0x05
PROC_ERROR_STACK_OVF    equ 0x06

; Состояния процесса
PROC_STATE_READY        equ 0x00
PROC_STATE_RUNNING      equ 0x01
PROC_STATE_SLEEPING     equ 0x02
PROC_STATE_SUSPENDED    equ 0x03
PROC_STATE_WAITING      equ 0x04
PROC_STATE_ZOMBIE       equ 0x05
PROC_STATE_DEAD         equ 0xFF

; Приоритеты процессов
PRIORITY_IDLE           equ 0
PRIORITY_LOW            equ 1
PRIORITY_NORMAL         equ 2
PRIORITY_HIGH           equ 3
PRIORITY_REALTIME       equ 4

; Максимальное количество процессов
MAX_PROCESSES           equ 8
PROCESS_TABLE_SIZE      equ 32  ; 32 байта на процесс

; Размер стека по умолчанию
DEFAULT_STACK_SIZE      equ 1024

; ---- ДАННЫЕ ДРАЙВЕРА ----
SECTION PROC_DATA

; Таблица процессов
proc_table:             ds MAX_PROCESSES * PROCESS_TABLE_SIZE

; Текущий и следующий процесс
current_pid:            db 0
next_pid:               db 0
proc_count:             db 0

; Счетчик PID
last_pid:               db 0

; Очередь готовых процессов
ready_queue:            ds MAX_PROCESSES
queue_head:             db 0
queue_tail:             db 0

; Статистика
context_switches:       dw 0
total_processes:        dw 0

; Системные стеки для процессов
proc_stacks:            ds MAX_PROCESSES * DEFAULT_STACK_SIZE

; ==================== ОСНОВНЫЕ ФУНКЦИИ ====================

SECTION PROC_CODE

; ----------------------------------------------------------------------------
; proc_init - Инициализация диспетчера процессов
; Выход: A = код ошибки
; ----------------------------------------------------------------------------
PUBLIC _proc_init
_proc_init:
proc_init_:
    push bc
    push de
    push hl
    
    ; Очищаем таблицу процессов
    ld hl, proc_table
    ld de, proc_table + 1
    ld bc, (MAX_PROCESSES * PROCESS_TABLE_SIZE) - 1
    ld (hl), 0
    ldir
    
    ; Очищаем очередь
    ld hl, ready_queue
    ld de, ready_queue + 1
    ld bc, MAX_PROCESSES - 1
    ld (hl), 0
    ldir
    
    xor a
    ld (current_pid), a
    ld (next_pid), a
    ld (proc_count), a
    ld (last_pid), a
    ld (queue_head), a
    ld (queue_tail), a
    
    ; Создаем нулевой процесс (idle)
    call create_idle_process
    
    xor a  ; Успех
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; proc_create - Создать новый процесс
; Вход: HL = точка входа
;       BC = размер стека
;       DE = аргумент
; Выход: A = ID процесса (0=ошибка)
; ----------------------------------------------------------------------------
PUBLIC _proc_create
_proc_create:
proc_create_:
    push bc
    push de
    push hl
    push ix
    push iy
    
    ; Проверяем максимальное количество процессов
    ld a, (proc_count)
    cp MAX_PROCESSES
    jr nc, .max_proc
    
    ; Ищем свободный слот в таблице
    call find_free_process_slot
    cp 0xFF
    jr z, .no_slot
    
    ; Сохраняем PID
    ld (new_pid), a
    
    ; Создаем запись процесса
    call create_process_entry
    
    ; Добавляем в очередь готовых
    call add_to_ready_queue
    
    ; Увеличиваем счетчики
    ld hl, total_processes
    inc (hl)
    ld a, (proc_count)
    inc a
    ld (proc_count), a
    
    ; Возвращаем PID
    ld a, (new_pid)
    jr .exit

.max_proc:
    ld a, PROC_ERROR_MAX_PROC
    jr .exit
    
.no_slot:
    ld a, PROC_ERROR_NO_MEMORY

.exit:
    pop iy
    pop ix
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; proc_kill - Завершить процесс
; Вход: A = ID процесса
; Выход: A = код ошибки
; ----------------------------------------------------------------------------
PUBLIC _proc_kill
_proc_kill:
proc_kill_:
    push bc
    push de
    push hl
    
    ; Проверяем PID
    cp MAX_PROCESSES
    jr nc, .invalid_id
    
    ; Получаем запись процесса
    call get_process_entry
    jr c, .invalid_id
    
    ; Проверяем состояние
    ld a, (ix + proc_state)
    cp PROC_STATE_DEAD
    jr z, .already_dead
    
    ; Устанавливаем состояние ZOMBIE
    ld a, PROC_STATE_ZOMBIE
    ld (ix + proc_state), a
    
    ; Устанавливаем флаг завершения
    ld a, 1
    ld (ix + proc_exit_flag), a
    
    ; Удаляем из очереди готовых
    call remove_from_ready_queue
    
    xor a  ; Успех
    jr .exit

.invalid_id:
    ld a, PROC_ERROR_INVALID_ID
    jr .exit
    
.already_dead:
    xor a  ; Уже завершен

.exit:
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; proc_suspend - Приостановить процесс
; Вход: A = ID процесса
; Выход: A = код ошибки
; ----------------------------------------------------------------------------
PUBLIC _proc_suspend
_proc_suspend:
proc_suspend_:
    push bc
    push de
    push hl
    
    ; Проверяем PID
    cp MAX_PROCESSES
    jr nc, .invalid_id
    
    ; Получаем запись процесса
    call get_process_entry
    jr c, .invalid_id
    
    ; Проверяем состояние
    ld a, (ix + proc_state)
    cp PROC_STATE_RUNNING
    jr z, .can_suspend
    cp PROC_STATE_READY
    jr z, .can_suspend
    
    ; Нельзя приостановить
    ld a, PROC_ERROR_BUSY
    jr .exit

.can_suspend:
    ; Устанавливаем состояние SUSPENDED
    ld a, PROC_STATE_SUSPENDED
    ld (ix + proc_state), a
    
    ; Удаляем из очереди готовых
    call remove_from_ready_queue
    
    xor a  ; Успех
    jr .exit

.invalid_id:
    ld a, PROC_ERROR_INVALID_ID

.exit:
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; proc_resume - Возобновить процесс
; Вход: A = ID процесса
; Выход: A = код ошибки
; ----------------------------------------------------------------------------
PUBLIC _proc_resume
_proc_resume:
proc_resume_:
    push bc
    push de
    push hl
    
    ; Проверяем PID
    cp MAX_PROCESSES
    jr nc, .invalid_id
    
    ; Получаем запись процесса
    call get_process_entry
    jr c, .invalid_id
    
    ; Проверяем состояние
    ld a, (ix + proc_state)
    cp PROC_STATE_SUSPENDED
    jr nz, .not_suspended
    
    ; Устанавливаем состояние READY
    ld a, PROC_STATE_READY
    ld (ix + proc_state), a
    
    ; Добавляем в очередь готовых
    call add_to_ready_queue
    
    xor a  ; Успех
    jr .exit

.invalid_id:
    ld a, PROC_ERROR_INVALID_ID
    jr .exit
    
.not_suspended:
    ld a, PROC_ERROR_BUSY

.exit:
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; proc_get_info - Получить информацию о процессе
; Вход: A = ID процесса
;       HL = буфер для информации
; Выход: Буфер заполнен
; ----------------------------------------------------------------------------
PUBLIC _proc_get_info
_proc_get_info:
proc_get_info_:
    push af
    push bc
    push de
    push hl
    
    ; Проверяем PID
    cp MAX_PROCESSES
    jr nc, .invalid_id
    
    ; Получаем запись процесса
    call get_process_entry
    jr c, .invalid_id
    
    ; Копируем информацию в буфер
    ld de, hl  ; DE = буфер пользователя
    ld bc, PROCESS_TABLE_SIZE
    ldir
    
    jr .exit

.invalid_id:
    ; Заполняем нулями
    pop hl
    push hl
    ld b, PROCESS_TABLE_SIZE
    xor a
.fill_zero:
    ld (hl), a
    inc hl
    djnz .fill_zero

.exit:
    pop hl
    pop de
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; proc_yield - Передать управление следующему процессу
; Вход: Нет
; Выход: Нет
; ----------------------------------------------------------------------------
PUBLIC _proc_yield
_proc_yield:
proc_yield_:
    push af
    push bc
    push de
    push hl
    
    ; Сохраняем контекст текущего процесса
    call save_current_context
    
    ; Выбираем следующий процесс
    call schedule_next
    
    ; Восстанавливаем контекст нового процесса
    call restore_context
    
    pop hl
    pop de
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; proc_sleep - Усыпить процесс на время
; Вход: HL = время в тиках
; Выход: Нет
; ----------------------------------------------------------------------------
PUBLIC _proc_sleep
_proc_sleep:
proc_sleep_:
    push af
    push bc
    push de
    push hl
    
    ; Получаем PID текущего процесса
    ld a, (current_pid)
    
    ; Получаем запись процесса
    call get_process_entry
    jr c, .exit
    
    ; Устанавливаем состояние SLEEPING
    ld a, PROC_STATE_SLEEPING
    ld (ix + proc_state), a
    
    ; Устанавливаем время пробуждения
    ld (ix + proc_wake_time), l
    ld (ix + proc_wake_time + 1), h
    
    ; Удаляем из очереди готовых
    call remove_from_ready_queue
    
    ; Переключаем контекст
    call proc_yield
    
.exit:
    pop hl
    pop de
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; proc_get_current - Получить ID текущего процесса
; Выход: A = PID текущего процесса
; ----------------------------------------------------------------------------
PUBLIC _proc_get_current
_proc_get_current:
proc_get_current_:
    ld a, (current_pid)
    ret

; ----------------------------------------------------------------------------
; proc_get_count - Получить количество активных процессов
; Выход: A = количество процессов
; ----------------------------------------------------------------------------
PUBLIC _proc_get_count
_proc_get_count:
proc_get_count_:
    ld a, (proc_count)
    ret

; ----------------------------------------------------------------------------
; proc_wait - Ожидать завершения процесса
; Вход: A = ID процесса
; Выход: A = код завершения
; ----------------------------------------------------------------------------
PUBLIC _proc_wait
_proc_wait:
proc_wait_:
    push bc
    push de
    push hl
    
    ; Проверяем PID
    cp MAX_PROCESSES
    jr nc, .invalid_id
    
    ; Получаем запись процесса
    call get_process_entry
    jr c, .invalid_id
    
.wait_loop:
    ; Проверяем, завершен ли процесс
    ld a, (ix + proc_state)
    cp PROC_STATE_ZOMBIE
    jr z, .zombie_found
    cp PROC_STATE_DEAD
    jr z, .dead_found
    
    ; Передаем управление другим процессам
    call proc_yield
    jr .wait_loop

.zombie_found:
    ; Получаем код завершения
    ld a, (ix + proc_exit_code)
    jr .cleanup

.dead_found:
    ; Процесс уже завершен и очищен
    xor a
    jr .exit

.invalid_id:
    ld a, PROC_ERROR_INVALID_ID
    jr .exit

.cleanup:
    ; Очищаем запись процесса
    call cleanup_process
    
    ; Уменьшаем счетчик процессов
    ld a, (proc_count)
    dec a
    ld (proc_count), a

.exit:
    pop hl
    pop de
    pop bc
    ret

; ==================== ВНУТРЕННИЕ ФУНКЦИИ ====================

; ----------------------------------------------------------------------------
; create_idle_process - Создать idle процесс
; ----------------------------------------------------------------------------
create_idle_process:
    push hl
    push de
    push bc
    
    ; Ищем свободный слот (должен быть слот 0)
    ld a, 0
    ld (new_pid), a
    
    ; Создаем idle процесс
    ld hl, idle_process
    ld bc, DEFAULT_STACK_SIZE
    ld de, 0
    call create_process_entry
    
    ; Устанавливаем состояние READY
    ld a, 0
    call get_process_entry
    ld a, PROC_STATE_READY
    ld (ix + proc_state), a
    
    ; Устанавливаем приоритет IDLE
    ld a, PRIORITY_IDLE
    ld (ix + proc_priority), a
    
    ; Добавляем в очередь
    call add_to_ready_queue
    
    ; Устанавливаем как текущий
    ld a, 0
    ld (current_pid), a
    
    ; Увеличиваем счетчики
    ld a, 1
    ld (proc_count), a
    ld hl, total_processes
    inc (hl)
    
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; idle_process - Процесс холостого хода
; ----------------------------------------------------------------------------
idle_process:
.idle_loop:
    halt          ; Экономия энергии
    nop
    jr .idle_loop

; ----------------------------------------------------------------------------
; find_free_process_slot - Найти свободный слот в таблице процессов
; Выход: A = номер слота или 0xFF если нет свободных
; ----------------------------------------------------------------------------
find_free_process_slot:
    push bc
    push hl
    
    ld hl, proc_table
    ld b, MAX_PROCESSES
    
.search_loop:
    ld a, (hl)
    cp PROC_STATE_DEAD
    jr z, .found_free
    
    ; Переходим к следующей записи
    ld de, PROCESS_TABLE_SIZE
    add hl, de
    
    djnz .search_loop
    
    ; Свободных слотов нет
    ld a, 0xFF
    jr .exit

.found_free:
    ; Вычисляем номер слота
    ld a, MAX_PROCESSES
    sub b
    ld (free_slot), a

.exit:
    pop hl
    pop bc
    ret

; ----------------------------------------------------------------------------
; get_process_entry - Получить запись процесса по PID
; Вход: A = PID
; Выход: IX = указатель на запись, CY = 1 если ошибка
; ----------------------------------------------------------------------------
get_process_entry:
    push bc
    push de
    push hl
    
    ; Проверяем PID
    cp MAX_PROCESSES
    jr nc, .error
    
    ; Вычисляем адрес записи
    ld l, a
    ld h, 0
    ld de, PROCESS_TABLE_SIZE
    call multiply_hl_de
    
    ld ix, proc_table
    add ix, hl
    
    ; Проверяем, что процесс не мертв
    ld a, (ix + proc_state)
    cp PROC_STATE_DEAD
    jr z, .error
    
    or a  ; Сбрасываем CY (успех)
    jr .exit

.error:
    scf  ; Устанавливаем CY (ошибка)

.exit:
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; create_process_entry - Создать запись процесса
; Вход: new_pid = PID, HL = точка входа, BC = размер стека, DE = аргумент
; ----------------------------------------------------------------------------
create_process_entry:
    push af
    push bc
    push de
    push hl
    push ix
    
    ; Получаем указатель на запись
    ld a, (new_pid)
    call calc_process_addr
    ld ix, hl
    
    ; Инициализируем поля
    ld (ix + proc_pid), a          ; PID
    ld (ix + proc_state), PROC_STATE_READY
    ld (ix + proc_priority), PRIORITY_NORMAL
    
    ; Сохраняем точку входа
    ld (ix + proc_entry), l
    ld (ix + proc_entry + 1), h
    
    ; Сохраняем аргумент
    ld (ix + proc_arg), e
    ld (ix + proc_arg + 1), d
    
    ; Выделяем стек
    call allocate_stack
    ld (ix + proc_stack_ptr), l
    ld (ix + proc_stack_ptr + 1), h
    
    ; Инициализируем регистры процесса
    call init_process_registers
    
    ; Инициализируем оставшиеся поля
    xor a
    ld (ix + proc_exit_flag), a
    ld (ix + proc_exit_code), a
    ld (ix + proc_wake_time), a
    ld (ix + proc_wake_time + 1), a
    
    ; Статистика
    ld (ix + proc_cpu_time), a
    ld (ix + proc_cpu_time + 1), a
    ld (ix + proc_cpu_time + 2), a
    ld (ix + proc_cpu_time + 3), a
    
    pop ix
    pop hl
    pop de
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; allocate_stack - Выделить стек для процесса
; Вход: BC = размер стека
; Выход: HL = указатель на вершину стека
; ----------------------------------------------------------------------------
allocate_stack:
    push bc
    push de
    
    ; Вычисляем адрес стека
    ld a, (new_pid)
    ld l, a
    ld h, 0
    ld de, DEFAULT_STACK_SIZE
    call multiply_hl_de
    
    ld de, proc_stacks
    add hl, de
    
    ; Добавляем размер стека
    add hl, bc
    
    ; Вершина стека (растет вниз)
    dec hl
    
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; init_process_registers - Инициализировать регистры процесса
; Вход: IX = запись процесса, HL = точка входа, DE = аргумент
; ----------------------------------------------------------------------------
init_process_registers:
    ; Сохраняем точку возврата на стеке
    ld bc, (ix + proc_stack_ptr)
    dec bc
    ld a, process_exit_handler >> 8
    ld (bc), a
    dec bc
    ld a, process_exit_handler & 0xFF
    ld (bc), a
    
    ; Сохраняем указатель стека
    ld (ix + proc_sp), c
    ld (ix + proc_sp + 1), b
    
    ; Инициализируем PC
    ld hl, (ix + proc_entry)
    ld (ix + proc_pc), l
    ld (ix + proc_pc + 1), h
    
    ; Инициализируем регистры
    xor a
    ld (ix + proc_af), a
    ld (ix + proc_af + 1), a
    ld (ix + proc_bc), a
    ld (ix + proc_bc + 1), a
    ld (ix + proc_de), a
    ld (ix + proc_de + 1), a
    ld (ix + proc_hl), a
    ld (ix + proc_hl + 1), a
    ld (ix + proc_ix), a
    ld (ix + proc_ix + 1), a
    ld (ix + proc_iy), a
    ld (ix + proc_iy + 1), a
    
    ; Аргумент в HL
    ld hl, (ix + proc_arg)
    ld (ix + proc_hl), l
    ld (ix + proc_hl + 1), h
    
    ret

; ----------------------------------------------------------------------------
; process_exit_handler - Обработчик завершения процесса
; ----------------------------------------------------------------------------
process_exit_handler:
    ; Завершаем текущий процесс
    ld a, (current_pid)
    call _proc_kill
    
    ; Переключаем на следующий процесс
    jp _proc_yield

; ----------------------------------------------------------------------------
; add_to_ready_queue - Добавить процесс в очередь готовых
; Вход: new_pid = PID процесса
; ----------------------------------------------------------------------------
add_to_ready_queue:
    push af
    push bc
    push hl
    
    ld a, (queue_tail)
    ld c, a
    ld b, 0
    ld hl, ready_queue
    add hl, bc
    
    ; Добавляем PID
    ld a, (new_pid)
    ld (hl), a
    
    ; Увеличиваем tail
    ld a, (queue_tail)
    inc a
    cp MAX_PROCESSES
    jr nz, .no_wrap
    xor a
.no_wrap:
    ld (queue_tail), a
    
    pop hl
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; remove_from_ready_queue - Удалить процесс из очереди готовых
; Вход: A = PID процесса
; ----------------------------------------------------------------------------
remove_from_ready_queue:
    push af
    push bc
    push de
    push hl
    
    ld d, a  ; Сохраняем PID для удаления
    
    ; Ищем процесс в очереди
    ld hl, ready_queue
    ld b, MAX_PROCESSES
    ld c, 0
    
.search_loop:
    ld a, (hl)
    cp d
    jr z, .found
    
    inc hl
    inc c
    djnz .search_loop
    
    ; Не найден
    jr .exit

.found:
    ; Сдвигаем очередь
    ld e, l
    ld d, h
    inc de
    
.shift_loop:
    ld a, (de)
    ld (hl), a
    inc hl
    inc de
    djnz .shift_loop
    
    ; Уменьшаем tail
    ld a, (queue_tail)
    dec a
    cp 0xFF
    jr nz, .no_wrap2
    ld a, MAX_PROCESSES - 1
.no_wrap2:
    ld (queue_tail), a

.exit:
    pop hl
    pop de
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; schedule_next - Выбрать следующий процесс для выполнения
; Выход: A = PID следующего процесса
; ----------------------------------------------------------------------------
schedule_next:
    push bc
    push hl
    
    ; Увеличиваем счетчик переключений
    ld hl, context_switches
    inc (hl)
    jr nz, .no_carry
    inc hl
    inc (hl)
.no_carry:
    
    ; Простой Round Robin планировщик
    ld a, (queue_head)
    ld c, a
    ld b, 0
    ld hl, ready_queue
    add hl, bc
    
    ; Читаем PID следующего процесса
    ld a, (hl)
    ld (next_pid), a
    
    ; Увеличиваем head
    inc c
    ld a, c
    cp MAX_PROCESSES
    jr nz, .no_wrap
    ld c, 0
.no_wrap:
    ld a, c
    ld (queue_head), a
    
    ; Обновляем текущий PID
    ld a, (next_pid)
    ld (current_pid), a
    
    pop hl
    pop bc
    ret

; ----------------------------------------------------------------------------
; save_current_context - Сохранить контекст текущего процесса
; ----------------------------------------------------------------------------
save_current_context:
    push af
    push bc
    push de
    push hl
    push ix
    
    ; Получаем запись текущего процесса
    ld a, (current_pid)
    call get_process_entry
    jr c, .no_save
    
    ; Сохраняем регистры
    ; AF сохраняется позже
    pop hl  ; IX из стека
    ld (ix + proc_ix), l
    ld (ix + proc_ix + 1), h
    
    pop hl  ; HL из стека
    ld (ix + proc_hl), l
    ld (ix + proc_hl + 1), h
    
    pop hl  ; DE из стека
    ld (ix + proc_de), l
    ld (ix + proc_de + 1), h
    
    pop hl  ; BC из стека
    ld (ix + proc_bc), l
    ld (ix + proc_bc + 1), h
    
    pop hl  ; AF из стека
    ld (ix + proc_af), l
    ld (ix + proc_af + 1), h
    
    ; Сохраняем SP
    ld (ix + proc_sp), sp
    
    ; Сохраняем PC (адрес возврата уже в стеке)
    pop hl  ; Адрес возврата
    ld (ix + proc_pc), l
    ld (ix + proc_pc + 1), h
    
    push hl ; Возвращаем адрес обратно
    jr .exit

.no_save:
    ; Очищаем стек
    pop ix
    pop hl
    pop de
    pop bc
    pop af

.exit:
    ret

; ----------------------------------------------------------------------------
; restore_context - Восстановить контекст процесса
; ----------------------------------------------------------------------------
restore_context:
    push af
    push bc
    push de
    push hl
    
    ; Получаем запись следующего процесса
    ld a, (next_pid)
    call get_process_entry
    jr c, .no_restore
    
    ; Восстанавливаем SP
    ld sp, (ix + proc_sp)
    
    ; Восстанавливаем PC (кладем в стек)
    ld hl, (ix + proc_pc)
    push hl
    
    ; Восстанавливаем регистры
    ld l, (ix + proc_af)
    ld h, (ix + proc_af + 1)
    push hl
    
    ld l, (ix + proc_bc)
    ld h, (ix + proc_bc + 1)
    push hl
    
    ld l, (ix + proc_de)
    ld h, (ix + proc_de + 1)
    push hl
    
    ld l, (ix + proc_hl)
    ld h, (ix + proc_hl + 1)
    push hl
    
    ld l, (ix + proc_ix)
    ld h, (ix + proc_ix + 1)
    push hl
    
    ; Восстанавливаем IY
    ld l, (ix + proc_iy)
    ld h, (ix + proc_iy + 1)
    push hl
    pop iy
    
    ; Устанавливаем состояние RUNNING
    ld a, PROC_STATE_RUNNING
    ld (ix + proc_state), a
    
    jr .exit

.no_restore:
    ; В случае ошибки возвращаемся к idle
    ld a, 0
    ld (current_pid), a
    jr restore_context

.exit:
    ; Восстанавливаем регистры
    pop ix
    pop hl
    pop de
    pop bc
    pop af
    
    ; Возвращаемся в новый процесс
    ret

; ----------------------------------------------------------------------------
; cleanup_process - Очистить запись процесса
; Вход: IX = запись процесса
; ----------------------------------------------------------------------------
cleanup_process:
    ; Устанавливаем состояние DEAD
    ld a, PROC_STATE_DEAD
    ld (ix + proc_state), a
    
    ; Очищаем запись
    ld b, PROCESS_TABLE_SIZE
    xor a
.clean_loop:
    ld (ix), a
    inc ix
    djnz .clean_loop
    
    ret

; ----------------------------------------------------------------------------
; calc_process_addr - Вычислить адрес записи процесса
; Вход: A = PID
; Выход: HL = адрес записи
; ----------------------------------------------------------------------------
calc_process_addr:
    push bc
    push de
    
    ld l, a
    ld h, 0
    ld de, PROCESS_TABLE_SIZE
    call multiply_hl_de
    
    ld de, proc_table
    add hl, de
    
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; multiply_hl_de - Умножение HL * DE
; Вход: HL = множимое, DE = множитель
; Выход: HL = произведение
; ----------------------------------------------------------------------------
multiply_hl_de:
    push bc
    push de
    
    ld bc, 0
    
.mul_loop:
    ; Проверяем младший бит HL
    bit 0, l
    jr z, .no_add
    
    ; Добавляем DE к BC
    push hl
    ld hl, bc
    add hl, de
    ld b, h
    ld c, l
    pop hl

.no_add:
    ; Сдвигаем HL вправо, DE влево
    srl h
    rr l
    sla e
    rl d
    
    ; Проверяем, закончили ли
    ld a, h
    or l
    jr nz, .mul_loop
    
    ; Результат в BC, переносим в HL
    ld h, b
    ld l, c
    
    pop de
    pop bc
    ret

; ==================== ДАННЫЕ ====================

; Смещения в структуре процесса
proc_pid            equ 0    ; 1 байт
proc_state          equ 1    ; 1 байт
proc_priority       equ 2    ; 1 байт
proc_exit_flag      equ 3    ; 1 байт
proc_exit_code      equ 4    ; 1 байт
proc_wake_time      equ 5    ; 2 байта
proc_cpu_time       equ 7    ; 4 байта
proc_entry          equ 11   ; 2 байта
proc_arg            equ 13   ; 2 байта
proc_stack_ptr      equ 15   ; 2 байта
proc_sp             equ 17   ; 2 байта
proc_pc             equ 19   ; 2 байта
proc_af             equ 21   ; 2 байта
proc_bc             equ 23   ; 2 байта
proc_de             equ 25   ; 2 байта
proc_hl             equ 27   ; 2 байта
proc_ix             equ 29   ; 2 байта
proc_iy             equ 31   ; 2 байта

; Временные переменные
new_pid:            db 0
free_slot:          db 0
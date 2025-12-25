; ============================================================================
; PROCESS MANAGEMENT API JUMP TABLE
; Располагается в банке 0x2A
; ============================================================================
SECTION BANK_2A_PROC_API
org 0xFF00

; ---- ПУБЛИЧНЫЕ СИМВОЛЫ ----
PUBLIC _sys_proc_init, _sys_proc_create, _sys_proc_kill, _sys_proc_suspend
PUBLIC _sys_proc_resume, _sys_proc_get_info, _sys_proc_yield, _sys_proc_sleep
PUBLIC _sys_proc_get_current, _sys_proc_get_count, _sys_proc_wait
PUBLIC _sys_proc_set_priority, _sys_proc_get_priority, _sys_proc_get_stats

; ---- ВНЕШНИЕ ССЫЛКИ ----
EXTERN _proc_init, _proc_create, _proc_kill, _proc_suspend, _proc_resume
EXTERN _proc_get_info, _proc_yield, _proc_sleep, _proc_get_current
EXTERN _proc_get_count, _proc_wait

; ==================== ТАБЛИЦА ПЕРЕХОДОВ ====================

_sys_proc_init:         jp _proc_init
_sys_proc_create:       jp _proc_create
_sys_proc_kill:         jp _proc_kill
_sys_proc_suspend:      jp _proc_suspend
_sys_proc_resume:       jp _proc_resume
_sys_proc_get_info:     jp _proc_get_info
_sys_proc_yield:        jp _proc_yield
_sys_proc_sleep:        jp _proc_sleep
_sys_proc_get_current:  jp _proc_get_current
_sys_proc_get_count:    jp _proc_get_count
_sys_proc_wait:         jp _proc_wait

; ---- ДОПОЛНИТЕЛЬНЫЕ ФУНКЦИИ ----
_sys_proc_set_priority:
    ; Установить приоритет процесса
    push af
    push bc
    push de
    push hl
    
    ; A = PID, B = приоритет
    call set_process_priority
    
    pop hl
    pop de
    pop bc
    pop af
    ret

_sys_proc_get_priority:
    ; Получить приоритет процесса
    push bc
    push hl
    
    ; A = PID
    call get_process_priority
    
    pop hl
    pop bc
    ret

_sys_proc_get_stats:
    ; Получить статистику процессов
    push hl
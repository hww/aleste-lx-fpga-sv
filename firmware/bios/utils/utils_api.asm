; ============================================================================
; UTILITIES API JUMP TABLE
; Располагается в банке 0x27
; ============================================================================
SECTION BANK_27_UTILS_API
org 0xFF00

; ---- ПУБЛИЧНЫЕ СИМВОЛЫ ----
PUBLIC _sys_memcpy, _sys_memmove, _sys_memset, _sys_memcmp, _sys_memchr
PUBLIC _sys_strcpy, _sys_strncpy, _sys_strlen, _sys_strcmp, _sys_strncmp
PUBLIC _sys_strchr, _sys_strstr, _sys_rand, _sys_srand, _sys_rand_range
PUBLIC _sys_atoi, _sys_itoa, _sys_bit_set, _sys_bit_clear, _sys_bit_test
PUBLIC _sys_swap_bytes, _sys_bcd_to_bin, _sys_bin_to_bcd

; ---- ВНЕШНИЕ ССЫЛКИ ----
EXTERN _memcpy, _memmove, _memset, _memcmp, _memchr
EXTERN _strcpy, _strncpy, _strlen, _strcmp, _strncmp
EXTERN _strchr, _strstr, _rand, _srand, _rand_range
EXTERN _atoi, _itoa, _bit_set, _bit_clear, _bit_test
EXTERN _swap_bytes, _bcd_to_bin, _bin_to_bcd

; ==================== ТАБЛИЦА ПЕРЕХОДОВ ====================

; ---- ФУНКЦИИ РАБОТЫ С ПАМЯТЬЮ ----
_sys_memcpy:        jp _memcpy
_sys_memmove:       jp _memmove
_sys_memset:        jp _memset
_sys_memcmp:        jp _memcmp
_sys_memchr:        jp _memchr

; ---- ФУНКЦИИ РАБОТЫ СО СТРОКАМИ ----
_sys_strcpy:        jp _strcpy
_sys_strncpy:       jp _strncpy
_sys_strlen:        jp _strlen
_sys_strcmp:        jp _strcmp
_sys_strncmp:       jp _strncmp
_sys_strchr:        jp _strchr
_sys_strstr:        jp _strstr

; ---- МАТЕМАТИЧЕСКИЕ ФУНКЦИИ ----
_sys_rand:          jp _rand
_sys_srand:         jp _srand
_sys_rand_range:    jp _rand_range
_sys_atoi:          jp _atoi
_sys_itoa:          jp _itoa

; ---- БИТОВЫЕ ОПЕРАЦИИ ----
_sys_bit_set:       jp _bit_set
_sys_bit_clear:     jp _bit_clear
_sys_bit_test:      jp _bit_test

; ---- ПРОЧИЕ УТИЛИТЫ ----
_sys_swap_bytes:    jp _swap_bytes
_sys_bcd_to_bin:    jp _bcd_to_bin
_sys_bin_to_bcd:    jp _bin_to_bcd

; ==================== ДАННЫЕ И КОНСТАНТЫ ====================

; Таблица для быстрого поиска символов
ctype_table:
    ; 128 байт для классификации символов
    ; Бит 0: isdigit, Бит 1: isalpha, Бит 2: isspace
    ; Бит 3: isupper, Бит 4: islower, Бит 5: isxdigit
    include "ctype.inc"

; Таблица умножения (для быстрых операций)
mult_table_10:
    dw 0, 10, 20, 30, 40, 50, 60, 70, 80, 90
    dw 100, 110, 120, 130, 140, 150, 160, 170, 180, 190
    dw 200, 210, 220, 230, 240, 250, 260, 270, 280, 290
    dw 300, 310, 320, 330, 340, 350, 360, 370, 380, 390

; Таблица степеней 2
pow2_table:
    dw 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768

; Заполнение до конца страницы
    ds 0xFFFF - $, 0xFF
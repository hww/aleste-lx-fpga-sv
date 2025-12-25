; ============================================================================
; FILESYSTEM CONSTANTS
; ============================================================================

; ---- ДИСКОВЫЕ КОНСТАНТЫ ----
DISK_MAX_DRIVES       equ 4
DISK_SECTOR_SIZE      equ 512
DISK_BUFFER_SIZE      equ 1024

; Статус диска
DISK_STATUS_READY     equ 0x01
DISK_STATUS_WRPROT    equ 0x02
DISK_STATUS_ERROR     equ 0x80

; ---- ФАЙЛОВАЯ СИСТЕМА ----
FS_MAX_HANDLES        equ 16
FS_MAX_PATH           equ 256
FS_MAX_FILENAME       equ 64

; Типы файловых систем
FS_TYPE_FAT16         equ 0
FS_TYPE_FAT32         equ 1
FS_TYPE_EXT2          equ 2

; Режимы открытия
FS_MODE_READ          equ 0
FS_MODE_WRITE         equ 1
FS_MODE_READWRITE     equ 2

; ---- СТРУКТУРЫ ----
; Структура дескриптора файла
struc FILE_HANDLE
    .drive        resb 1
    .mode         resb 1
    .position     resd 2  ; 64-битная позиция
    .cluster      resd 1
    .sector       resd 1
    .offset       resw 1
    .size         resd 2  ; 64-битный размер
endstruc

; Размер структуры
FILE_HANDLE_SIZE equ 20
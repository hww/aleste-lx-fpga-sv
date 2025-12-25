; ============================================================================
; FILESYSTEM API JUMP TABLE
; Располагается в банке 0x22
; ============================================================================
SECTION BANK_22_FS_API
org 0xFF00

; ---- ДИСКОВЫЕ ОПЕРАЦИИ ----
PUBLIC _sys_disk_read, _sys_disk_write, _sys_disk_get_status
PUBLIC _sys_disk_get_info, _sys_disk_format, _sys_disk_seek

; ---- ФАЙЛОВАЯ СИСТЕМА ----
PUBLIC _sys_fs_open, _sys_fs_close, _sys_fs_read, _sys_fs_write
PUBLIC _sys_fs_seek, _sys_fs_tell, _sys_fs_delete, _sys_fs_rename
PUBLIC _sys_fs_get_attr, _sys_fs_set_attr, _sys_fs_get_free_space
PUBLIC _sys_fs_mount, _sys_fs_unmount

; ---- ВНЕШНИЕ ССЫЛКИ ----
EXTERN _disk_read, _disk_write, _disk_get_status, _disk_get_info
EXTERN _disk_format, _disk_seek
EXTERN _fs_open, _fs_close, _fs_read, _fs_write, _fs_seek, _fs_tell
EXTERN _fs_delete, _fs_rename, _fs_get_attr, _fs_set_attr, _fs_get_free_space
EXTERN _fs_mount, _fs_unmount

; ==================== ТАБЛИЦА ПЕРЕХОДОВ ====================

; ---- ДИСКОВЫЕ ОПЕРАЦИИ ----
_sys_disk_read:          jp _disk_read
_sys_disk_write:         jp _disk_write
_sys_disk_get_status:    jp _disk_get_status
_sys_disk_get_info:      jp _disk_get_info
_sys_disk_format:        jp _disk_format
_sys_disk_seek:          jp _disk_seek

; ---- ФАЙЛОВАЯ СИСТЕМА ----
_sys_fs_open:            jp _fs_open
_sys_fs_close:           jp _fs_close
_sys_fs_read:            jp _fs_read
_sys_fs_write:           jp _fs_write
_sys_fs_seek:            jp _fs_seek
_sys_fs_tell:            jp _fs_tell
_sys_fs_delete:          jp _fs_delete
_sys_fs_rename:          jp _fs_rename
_sys_fs_get_attr:        jp _fs_get_attr
_sys_fs_set_attr:        jp _fs_set_attr
_sys_fs_get_free_space:  jp _fs_get_free_space
_sys_fs_mount:           jp _fs_mount
_sys_fs_unmount:         jp _fs_unmount

; ==================== ДАННЫЕ И КОНСТАНТЫ ====================
; (опционально, если нужно хранить данные в этом банке)

; ---- СТРУКТУРА ДИСКА ----
disk_info_structure:
    dw 0      ; cylinders
    dw 0      ; heads
    dw 0      ; sectors per track
    dd 0      ; total sectors
    db 0      ; sector size (0=128,1=256,2=512,3=1024)
    db 0      ; flags
    dd 0      ; serial number

; ---- СТРУКТУРА ФАЙЛА ----
file_attr_structure:
    db 0      ; атрибуты
    dd 0      ; размер файла
    dd 0      ; дата создания
    dd 0      ; дата модификации
    dd 0      ; дата доступа

; Заполнение до конца страницы
    ds 0xFFFF - $, 0xFF
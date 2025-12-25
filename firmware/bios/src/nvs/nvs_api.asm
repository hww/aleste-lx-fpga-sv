; nvs_api.asm
; Jump table для NVS API

    .module NVS_API
    .area _CODE

; Публичные символы
.globl _nvs_init
.globl _nvs_read_byte
.globl _nvs_write_byte
.globl _nvs_read_block
.globl _nvs_write_block
.globl _nvs_get_i32
.globl _nvs_set_i32
.globl _nvs_get_blob
.globl _nvs_set_blob
.globl _nvs_commit
.globl _nvs_erase_all

; --- Jump table ---
_nvs_init:
    jp __nvs_init

_nvs_read_byte:
    jp __nvs_read_byte

_nvs_write_byte:
    jp __nvs_write_byte

_nvs_read_block:
    jp __nvs_read_block

_nvs_write_block:
    jp __nvs_write_block

_nvs_get_i32:
    jp __nvs_get_i32

_nvs_set_i32:
    jp __nvs_set_i32

_nvs_get_blob:
    jp __nvs_get_blob

_nvs_set_blob:
    jp __nvs_set_blob

_nvs_commit:
    jp __nvs_commit

_nvs_erase_all:
    jp __nvs_erase_all
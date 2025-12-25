# NVS (Non-Volatile Storage) Driver для Z80

## Обзор
NVS драйвер предоставляет простой механизм хранения пар "ключ-значение" в энергонезависимой памяти для систем на базе Z80. Реализация оптимизирована для использования с компилятором z88dk.

## Архитектура

```
┌─────────────────────────────────────────┐
│            Пользовательский код         │
│                 (C или ASM)             │
└─────────────────┬───────────────────────┘
                  │
┌─────────────────▼───────────────────────┐
│            nvs_api.asm                  │
│           (Jump Table API)              │
└─────────────────┬───────────────────────┘
                  │
          ┌───────┴───────┐
          │               │
┌─────────▼─────────┐ ┌───▼───────────────┐
│   nvs_fs.asm      │ │   nvs_drv.asm     │
│ (Логика типов     │ │ (Низкоуровневый   │
│  и поиска)        │ │  доступ к памяти) │
└───────────────────┘ └───────────────────┘
```

## Файлы

### 1. `nvs.h` - Заголовочный файл для C
```c
/* nvs.h - Simple NVS for Z80 with z88dk */
#ifndef NVS_H
#define NVS_H

#include <stdint.h>

/* Инициализация NVS */
void nvs_init(void);

/* Базовые операции с памятью */
uint8_t nvs_read_byte(uint16_t addr);
void nvs_write_byte(uint16_t addr, uint8_t data);
void nvs_read_block(void *dest, uint16_t addr, uint16_t size);
void nvs_write_block(uint16_t addr, void *src, uint16_t size);

/* Работа с данными */
int32_t nvs_get_i32(const char *key, int32_t default_value);
void nvs_set_i32(const char *key, int32_t value);

/* Работа с бинарными данными */
uint8_t nvs_get_blob(const char *key, void *buffer, uint8_t max_size);
uint8_t nvs_set_blob(const char *key, void *data, uint8_t size);

/* Управление */
void nvs_commit(void);
void nvs_erase_all(void);

#endif /* NVS_H */
```

### 2. `nvs_api.asm` - Jump Table интерфейс
```asm
; nvs_api.asm
; Публичный API через jump table для совместимости

    .module NVS_API
    .area _CODE

.globl _nvs_init, _nvs_read_byte, _nvs_write_byte
.globl _nvs_read_block, _nvs_write_block
.globl _nvs_get_i32, _nvs_set_i32
.globl _nvs_get_blob, _nvs_set_blob
.globl _nvs_commit, _nvs_erase_all

_nvs_init:      jp __nvs_init
_nvs_read_byte: jp __nvs_read_byte
; ... остальные переходы
```

### 3. `nvs_drv.asm` - Низкоуровневый драйвер
```asm
; nvs_drv.asm
; Драйвер для работы с физической памятью

    .module NVS_DRV
    .area _CODE

; Константы памяти
NVS_START:      .equ 0xF000  ; Начало NVS области
NVS_SIZE:       .equ 0x0800  ; 2KB - размер NVS
NVS_END:        .equ NVS_START + NVS_SIZE

; Инициализация драйвера
__nvs_init:
    ; TODO: Инициализация аппаратной части
    ; - Проверка наличия памяти
    ; - Проверка целостности
    ; - Настройка контроллера
    ret

; Чтение байта по адресу в NVS
__nvs_read_byte:
    ; HL = адрес (0..NVS_SIZE-1)
    ; Возврат: A = данные
    ld de, #NVS_START
    add hl, de
    ld a, (hl)
    ret

; Запись байта по адресу в NVS
__nvs_write_byte:
    ; HL = адрес, A = данные
    push hl
    ld de, #NVS_START
    add hl, de
    ld (hl), a
    pop hl
    ret

; Чтение блока данных
__nvs_read_block:
    ; HL = буфер назначения
    ; DE = адрес в NVS
    ; BC = размер
    push de
    push hl
    push bc
    
    ; Преобразование адреса
    ld hl, #NVS_START
    add hl, de
    ex de, hl
    
    pop bc
    pop hl
    ldir
    
    pop de
    ret

; Запись блока данных
__nvs_write_block:
    ; HL = адрес в NVS
    ; DE = буфер источника
    ; BC = размер
    push hl
    push de
    push bc
    
    ; Преобразование адреса
    ld a, h
    ld h, #NVS_START >> 8
    add a, h
    ld h, a
    
    ex de, hl
    ldir
    
    pop bc
    pop de
    pop hl
    ret

; Фиксация изменений
__nvs_commit:
    ; TODO: Синхронизация с физической памятью
    ; Для EEPROM: запись буфера
    ret

; Очистка всей памяти
__nvs_erase_all:
    ld hl, #NVS_START
    ld de, #NVS_START + 1
    ld bc, #NVS_SIZE - 1
    ld (hl), #0xFF
    ldir
    ret
```

### 4. `nvs_fs.asm` - Файловая система
```asm
; nvs_fs.asm
; Управление типами данных и поиском

    .module NVS_FS
    .area _CODE

; Константы
KEY_MAX_LEN:    .equ 15     ; Макс. длина ключа
BLOB_MAX_SIZE:  .equ 64     ; Макс. размер blob

; Типы данных
TYPE_I32:       .equ 0x01   ; 32-битное целое
TYPE_BLOB:      .equ 0x02   ; Бинарные данные
TYPE_DELETED:   .equ 0xFF   ; Удаленная запись

; Структура записи:
; Байт 0:    Тип данных (0x01, 0x02, 0xFF)
; Байт 1:    Длина ключа (1..15)
; Байты 2-N: Ключ (ASCIIZ)
; Байт N+1:  Длина данных
; Байты N+2: Данные

__nvs_get_i32:
    ; TODO: Поиск по ключу и чтение int32
    ret

__nvs_set_i32:
    ; TODO: Поиск/создание записи, запись int32
    ret

__nvs_get_blob:
    ; TODO: Чтение blob данных
    ret

__nvs_set_blob:
    ; TODO: Запись blob данных
    ret
```

## API функции

### Инициализация
```c
void nvs_init(void);
```
**Описание:** Инициализирует NVS систему. Должна вызываться первой.

### Базовые операции
```c
uint8_t nvs_read_byte(uint16_t addr);
void nvs_write_byte(uint16_t addr, uint8_t data);
void nvs_read_block(void *dest, uint16_t addr, uint16_t size);
void nvs_write_block(uint16_t addr, void *src, uint16_t size);
```
**Параметры:**
- `addr`: Адрес в NVS памяти (0..2047)
- `data`: Данные для записи
- `dest/src`: Указатели на буферы
- `size`: Размер блока в байтах

### Работа с данными
```c
int32_t nvs_get_i32(const char *key, int32_t default_value);
void nvs_set_i32(const char *key, int32_t value);
```
**Параметры:**
- `key`: Строка-ключ (макс. 15 символов)
- `value`: Значение для записи
- `default_value`: Возвращается если ключ не найден

### Бинарные данные
```c
uint8_t nvs_get_blob(const char *key, void *buffer, uint8_t max_size);
uint8_t nvs_set_blob(const char *key, void *data, uint8_t size);
```
**Параметры:**
- `buffer`: Буфер для чтения
- `max_size`: Максимальный размер для чтения
- `data`: Данные для записи
- `size`: Размер данных

**Возврат:** Фактический размер прочитанных данных

### Управление
```c
void nvs_commit(void);
void nvs_erase_all(void);
```
**Описание:** Фиксация изменений и полная очистка NVS.

## Использование из C
```c
#include "nvs.h"

void example_usage(void) {
    // Инициализация
    nvs_init();
    
    // Работа с целыми числами
    int32_t counter = nvs_get_i32("counter", 0);
    counter++;
    nvs_set_i32("counter", counter);
    
    // Работа с бинарными данными
    uint8_t config[32];
    uint8_t size = nvs_get_blob("config", config, sizeof(config));
    
    // Фиксация изменений
    nvs_commit();
}
```

## Использование из ассемблера
```asm
; Пример чтения байта
ld hl, #0x0010      ; Адрес в NVS
call _nvs_read_byte ; A = данные

; Пример записи int32
ld hl, #key_string  ; Указатель на ключ
ld de, #value       ; Младшая часть
ld bc, #0           ; Старшая часть
call _nvs_set_i32

key_string: .asciz "counter"
value:      .dw 1234
```

## Ограничения
1. **Размер памяти:** 2KB фиксированного размера
2. **Длина ключа:** Максимум 15 символов
3. **Типы данных:** Поддерживаются только int32 и blob
4. **Износостойкость:** Без wear-leveling (для EEPROM)
5. **Потокобезопасность:** Не предназначен для многозадачности

## Порты для оборудования
Для адаптации под конкретное железо нужно изменить:

### Для RAM-версии (отладка):
```asm
; Использовать обычную память
NVS_START: .equ 0xC000
```

### Для EEPROM 24Cxx:
```asm
; Добавить I2C функции
__nvs_read_byte:
    ; Инициализация I2C
    ; Отправка адреса
    ; Чтение байта
    ret
```

### Для Flash чипа:
```asm
; Добавить команды стирания/записи
__nvs_write_byte:
    ; Разблокировка flash
    ; Запись байта
    ; Ожидание завершения
    ret
```

## TODO для реализации
1. [ ] Реализовать поиск записей по ключу
2. [ ] Добавить проверку CRC для целостности
3. [ ] Реализовать сборку мусора (удаленные записи)
4. [ ] Добавить wear-leveling для EEPROM
5. [ ] Поддержку строковых данных
6. [ ] Оптимизировать для скорости

## Примечания
- Для отладки используйте RAM-версию
- Реализуйте `__nvs_commit()` для EEPROM/flash
- Добавьте контрольные суммы для надежности
- Ограничьте количество операций записи для EEPROM

Этот драйвер предоставляет базовый функционал для хранения настроек и данных между перезагрузками в системах на Z80.
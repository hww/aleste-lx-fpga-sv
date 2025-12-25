/* nvs.h - Simple NVS for Z80 with z88dk */

#ifndef NVS_H
#define NVS_H

#include <stdint.h>
#include <stdbool.h>

/* Инициализация */
void nvs_init(void);

/* Базовые операции */
uint8_t nvs_read_byte(uint16_t addr);
void nvs_write_byte(uint16_t addr, uint8_t data);

/* Работа с блоками */
void nvs_read_block(void *dest, uint16_t addr, uint16_t size);
void nvs_write_block(uint16_t addr, void *src, uint16_t size);

/* Типы данных */
int32_t nvs_get_i32(const char *key, int32_t default_value);
void nvs_set_i32(const char *key, int32_t value);

uint8_t nvs_get_blob(const char *key, void *buffer, uint8_t max_size);
uint8_t nvs_set_blob(const char *key, void *data, uint8_t size);

/* Управление */
void nvs_commit(void);
void nvs_erase_all(void);

#endif /* NVS_H */
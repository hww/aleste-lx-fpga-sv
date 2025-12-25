#ifndef FS_API_H
#define FS_API_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// ==================== ДИСКОВЫЕ ОПЕРАЦИИ ====================

// Коды ошибок диска
#define DISK_NO_ERROR          0x00
#define DISK_NOT_READY         0x01
#define DISK_WRITE_PROTECTED   0x02
#define DISK_SEEK_ERROR        0x03
#define DISK_SECTOR_ERROR      0x04
#define DISK_CRC_ERROR         0x05
#define DISK_CONTROLLER_ERROR  0x06
#define DISK_NOT_IMPLEMENTED   0xFF

// Структура информации о диске
typedef struct {
    uint16_t cylinders;
    uint16_t heads;
    uint16_t sectors_per_track;
    uint32_t total_sectors;
    uint8_t  sector_size_code;  // 0=128,1=256,2=512,3=1024
    uint8_t  flags;
    uint32_t serial_number;
} disk_info_t;

// Функции диска
uint8_t sys_disk_read(uint8_t drive, uint32_t lba, uint8_t* buffer, uint16_t count);
uint8_t sys_disk_write(uint8_t drive, uint32_t lba, const uint8_t* buffer, uint16_t count);
uint8_t sys_disk_get_status(uint8_t drive);
void    sys_disk_get_info(uint8_t drive, disk_info_t* info);
uint8_t sys_disk_format(uint8_t drive);
uint8_t sys_disk_seek(uint8_t drive, uint32_t lba);

// ==================== ФАЙЛОВАЯ СИСТЕМА ====================

// Коды ошибок ФС
#define FS_NO_ERROR           0x00
#define FS_FILE_NOT_FOUND     0x01
#define FS_PATH_NOT_FOUND     0x02
#define FS_ACCESS_DENIED      0x03
#define FS_DISK_FULL          0x04
#define FS_INVALID_HANDLE     0x05
#define FS_INVALID_NAME       0x06
#define FS_WRITE_PROTECTED    0x07
#define FS_NOT_MOUNTED        0x08
#define FS_NOT_IMPLEMENTED    0xFF

// Режимы открытия файла
#define FS_READ               0x00
#define FS_WRITE              0x01
#define FS_READ_WRITE         0x02

// Атрибуты файла
#define FS_ATTR_READ_ONLY     0x01
#define FS_ATTR_HIDDEN        0x02
#define FS_ATTR_SYSTEM        0x04
#define FS_ATTR_DIRECTORY     0x10
#define FS_ATTR_ARCHIVE       0x20

// Структура атрибутов файла
typedef struct {
    uint8_t  attributes;
    uint32_t file_size;
    uint32_t create_date;
    uint32_t modify_date;
    uint32_t access_date;
} file_attr_t;

// Функции файловой системы
uint8_t  sys_fs_open(const char* filename, uint8_t mode);
uint8_t  sys_fs_close(uint8_t handle);
uint8_t  sys_fs_read(uint8_t handle, void* buffer, uint16_t size, uint16_t* bytes_read);
uint8_t  sys_fs_write(uint8_t handle, const void* buffer, uint16_t size, uint16_t* bytes_written);
uint8_t  sys_fs_seek(uint8_t handle, uint32_t offset, uint8_t mode);
uint32_t sys_fs_tell(uint8_t handle);
uint8_t  sys_fs_delete(const char* filename);
uint8_t  sys_fs_rename(const char* oldname, const char* newname);
uint8_t  sys_fs_get_attr(const char* filename, file_attr_t* attr);
uint8_t  sys_fs_set_attr(const char* filename, const file_attr_t* attr);
uint8_t  sys_fs_get_free_space(uint8_t drive, uint32_t* free_bytes);
uint8_t  sys_fs_mount(uint8_t drive, uint8_t fs_type);
uint8_t  sys_fs_unmount(uint8_t drive);

#ifdef __cplusplus
}
#endif

#endif // FS_API_H
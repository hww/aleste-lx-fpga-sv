# FS Использование

```c

// Программа на C
#include "fs/fs.h"

void example() {
    disk_info_t info;
    sys_disk_get_info(0, &info);
    
    uint8_t handle = sys_fs_open("test.txt", FS_READ);
    if (handle != 0xFF) {
        char buffer[100];
        uint16_t bytes;
        sys_fs_read(handle, buffer, sizeof(buffer), &bytes);
        sys_fs_close(handle);
    }
}
```

```asm

; Программа на ассемблере
    ld a, 0                  ; диск 0
    ld hl, disk_buffer
    ld bc, 0                 ; LBA high
    ld de, 0                 ; LBA low
    ld iy, 1                 ; 1 сектор
    call _sys_disk_read      ; через jump table
```

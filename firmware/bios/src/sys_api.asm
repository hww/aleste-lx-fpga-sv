SEGMENT BANK_20_JUMPTABLE
org 0xFD00

// Low level drivers
include "utils/utils.asm"
include "mmu/mmu.asm"
include "int/int.asm"
include "kbd/kbd.asm"
include "audio/audio.asm"
include "video/video.asm"
include "sysinfo/sysinfo.asm"

// Hi level drivers
include "fs/fs.asm"
;include "net/net.asm"
;include "proc/proc.asm"


#endif // SYS_API_H
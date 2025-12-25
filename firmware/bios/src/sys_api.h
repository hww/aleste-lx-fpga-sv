#ifndef SYS_API_H
#define SYS_API_H

#include <stdint.h>

// Low level drivers
#include "utils/utils.h"
#include "mmu/mmu.h"
#include "int/int.h"
#include "kbd/kbd.h"
#include "audio/audio.h"
#include "video/video.h"
#include "sysinfo/sysinfo.h"

// Hi level drivers
#include "fs/fs.h"
#include "net/net.h"
#include "proc/proc.h"


#endif // SYS_API_H
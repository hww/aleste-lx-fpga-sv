#include <stdlib.h>
#include <iostream>
#include <fstream>


#ifndef WB_DMA_CONFIG_H
#define WB_DMA_CONFIG_H

constexpr int ADDR_WIDTH = 24;
constexpr int DATA_WIDTH = 16;
constexpr int CHANNELS = 4;
constexpr uint32_t BASE_ADDR = 0x100000;
constexpr uint32_t ADDR_MASK = 0xFF0000;

#endif
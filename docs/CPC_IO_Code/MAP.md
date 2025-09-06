Отлично! Сделаю полную иерархическую карту в едином стиле.

# 🗺️ Complete Memory Map - Aleste LX

## 1. 🧠 CPU Memory - CPC Mode

### Banked Memory Regions
```
0000-3FFF → ROM Bank [ROM_SEL] + offset
4000-7FFF → Fixed Bank 1 + offset
8000-BFFF → RAM Bank [GA:0-1] + offset  
C000-FFFF → RAM Bank [GA:2-3] + offset
```

### Special Behaviors
```
0000-3FFF → ROM writes go to underlying RAM bank
```

## 2. 🧠 CPU Memory - LX Native Mode

### Page Mapping

```
0000-3FFF → Slot[0] Bank[0] + offset
4000-7FFF → Slot[1] Bank[1] + offset  
8000-BFFF → Slot[2] Bank[2] + offset
C000-FFFF → Fixed MMIO Space
```

### Slot Selection

```
Slot[0] → USER[0] or SUPERVISOR[0] | 0x03
Slot[1] → USER[1] or SUPERVISOR[1] | 0x03
Slot[2] → USER[2] or SUPERVISOR[2] | 0x03
```

## 3. 🔧 CPU I/O - CPC Mode

### Device Regions

```
0000-007F → 8-bit IO Window (to WB)
BC00-BD00 → CRTC Controller
7F00-7F00 → Gate Array (Write)
DF00-DF00 → ROM Select (Write) 
F400-F700 → PPI Interface
FE00-FE00 → CPC MMIO Access
FF00-FFFF → Reserved
```

### Individual Ports

```
7F00 → Gate Array (Memory banking)
DF00 → ROM Select (ROM bank)  
FE00 → CPC MMIO Page access
```

## 4. 🔧 CPU I/O - LX Classic 8-bit

### IO Window Mapping

```
0000-007F → [IO_PAGE:8][port:7] → WB 0xFF55xx
```

### Control Registers

```
D800 → Slot Select User Page 0
D900 → Slot Select Supervisor Page 0
DA00 → Reserved
DB00 → Reserved
F000 → Control Register
F100 → IO Page Select
FD00 → CPC MMIO Page Select
```

## 5. 🔧 CPU I/O - MMIO LX Mode

### Direct MMIO Access
```
C000-FFFF → Fixed mapping to 0xFF0000-0xFF3FFF
```

### Special MMIO Ports

```
FE00 → [CPC_MMIO_PAGE:8][00:8] → 0xFFBB00
```

## 6. 🎰 Slot Space Architecture

### Single Slot Structure (4 pages)

```
Page 0 → 0000-3FFF → Mapper[slot][0] + offset
Page 1 → 4000-7FFF → Mapper[slot][1] + offset  
Page 2 → 8000-BFFF → Mapper[slot][2] + offset
Page 3 → C000-FFFF → Mapper[slot][3] + offset
```

### Slot Types

```
Slot 0-3 → User banks (configurable)
```

## 7. 🌐 Wishbone Space

### Memory Regions
```
000000-FFFFFF → Main memory space
FF0000-FFFFFF → MMIO and control space
```

### MMIO Hierarchy
```
FF0000-FF3FFF → Fixed CPU MMIO window
FF55xx       → 8-bit IO window mapping  
FFBB00       → CPC-style MMIO access
FFF00000-FFFFFFFF → Control registers space
```

### Control Regions
```
FFF0D800 → Slot Select User
FFF0D900 → Slot Select Supervisor
FFF0F000 → Control Register
FFF0F100 → IO Page Select  
FFF0FD00 → CPC MMIO Page Select
```

## 8. ⚙️ Control Register Details

### F000 - Control Register
```
bit 0 → Native mode (0=CPC, 1=Native)
bit 1 → Supervisor mode
bits 2-7 → Reserved
```

### Slot Selection Logic
```
User mode → Use USER slot registers
Supervisor mode → Use SUPERVISOR slot registers | 0x03
```

### Banking Example
```
LX Native mode, User slot[0]=1, Supervisor slot[0]=2
- User: Page0 → Slot 1, Bank 0
- Supervisor: Page0 → Slot 3, Bank 0 (2 | 0x03)
```

## 9. 🔄 Translation Examples

### CPC to Physical
```
8000 → Bank [GA:0-1] << 16 + 0000
C000 → Bank [GA:2-3] << 16 + 0000
```

### LX to Physical  
```
1000 → Slot[0] << 24 + Bank[0] << 16 + 1000
5000 → Slot[1] << 24 + Bank[1] << 16 + 1000
9000 → Slot[2] << 24 + Bank[2] << 16 + 1000
```

### IO to WB
```
0040 → 0xFF55xx (IO_PAGE << 7 + 40)
FE00 → 0xFFBB00 (CPC_MMIO_PAGE << 8)
F000 → 0xFFF0F000 (Control register space)
```
```

Эта карта сохраняет:
- Единый стиль: адрес слева → описание справа
- Иерархическую структуру: от общего к частному
- Четкое разделение регионов и отдельных портов
- Пропорциональное представление (блочные регионы vs точечные порты)
- Все запрошенные уровни абстракции
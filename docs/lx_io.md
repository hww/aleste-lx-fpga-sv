# Alexte LX устройства ввода/выводя для 

Для совместимотси с legacy устройствами поодержиавется Legacy режим, а для нового ПО нативный Native режим. В 24 битном адресном простренсве роазсположены 4 слота. Оследний слот SL3 в последней странице памяти имеет 64 KB область MMIO разбитую на две части MMIO_HI и MMIO_LO.

- MMIO_HI предназначена для Legacy режима и проецирует A[15:0] процессора напрямую;
- MMIO_LO предназначена для нативного режима и проецирует A[7:0] в обоих режимах (Legacy, Native) по разному;

Режимы переключаются битом в LX_MMU менеджере памяти Aleste LX

## Режим Legacy

Пространсво I/O подчиняется законам мира CPC и имеет два новых регистра:

1. `MMIO Page Register` (`D300`)-- хранит номер 256 байтной страницы области MMIO_LOW
2. `MMIO Data Window` (`D0XX`) -- производит чтение или запист в обласи MMIO по формуле ```MMIO_LOW + { PAGE[7:0], A[6:0] }```

Таким образом CPC имеет возможность доступатся к MMIO_LOW а значит ипользовать все современные устройства.

## Режим Native

Пространсво I/O подчиняется новым законам. Перефилийные устройства расположены в адресах 00-FF. При этом:

1. В старших адресах C0-FF расположен MMU и резервные области, а в младших 192 байтах `MMIO Data Window`
2. `MMIO Page Register` (`D3` ) -- хранит номер 256 байтной страницы области MMIO_LOW
3. `MMIO Data Window` (`00-BF`) -- производит чтение или запист в обласи MMIO по формуле ```MMIO_LOW + { PAGE[7:0], A[6:0] }```

Таким образом Z80 имеет возможность доступатся к MMIO_LOW а значит ипользовать все современные и Legacy устройства.


| Device / Description                       | RW | D7 | D6 | Legacy IO Address | Legacy Wishbone Address | Native IO Address | Native Wishbone Address |
|--------------------------------------------|----|----|----|-------------------|-------------------------|-------------------|-------------------------|
| **ОРИГИНАЛЬНЫЕ УСТРОЙСТВА CPC**            |    |    |    |                   |                         |                   |                         |
| Gate Array                                 | W  |    |    | 7FXX              | FF7FXX                  | -                 | FC0100 (16 байт)        |
| Gate Array Palette Index                   | W  | 0  | 0  | 7FXX              | FF7FXX                  | -                 | ↳ +0                    |
| Gate Array Palette Value                   | W  | 0  | 1  | 7FXX              | FF7FXX                  | -                 | ↳ +0                    |
| Gate Array Rom enable                      | W  | 1  | 0  | 7FXX              | FF7FXX                  | -                 | ↳ +0                    |
| Gate Array RAM banking                     | W  | 1  | 1  | 7FXX              | FF7FXX                  | -                 | ↳ +0                    |
| CRTC 6845 Index Register                   | W  |    |    | BCXX              | FFBCXX                  | -                 | FС0110 (16 байт)        |
| CRTC 6845 Data Register                    | RW |    |    | BDXX              | FFBDXX                  | -                 | ↳ +1                    |
| Upper ROM Select                           | W  |    |    | DFXX              | FFDFXX                  | -                 | FС0140                  |
| Printer Port                               | W  |    |    | EFXX              |                         | W                 |                         |
| **CPC PPI**                                |    |    |    |                   |                         |                   |                         |
| 8255 PPI Port A (PSG Data)                 | RW |    |    | F4XX              | FFF4XX                  | -                 | FС0120                  |
| 8255 PPI Port B (Vsync,PrnBusy,Tape,etc.)  | RW |    |    | F5XX              | FFF5XX                  | -                 | ↳ +1                    |
| 8255 PPI Port C (KeybRow,Tape,PSG Control) | RW |    |    | F6XX              | FFF6XX                  | -                 | ↳ +2                    |
| PPI Control Register                       | W  |    |    | F7XX              | FFF7XX                  | -                 | ↳ +3                    |
| **CPC FDC**                                |    |    |    |                   |                         |                   |                         |
| FFloppy Motor Control (for 765 FDC)        | W  |    |    | FA7E              | FFFA7E                  | -                 | FС0130                  |
| 765 FDC (internal) Status Register         | R  |    |    | FB7E              | FFFA7E                  | -                 | ↳ +0                    |
| 765 FDC (internal) Data Register           | RW |    |    | FB7F              | FFFB7F                  | -                 | ↳ +1                    |
| **CPC SERIAL**                             |    |    |    |                   |                         |                   |                         |
| 80-SIO / DART port                         | RW |    |    | FADC-FADF         | FFFADC-FFFADF           | -                 | FС0150 (16 байт)        |
| 8253 Timer                                 | RW |    |    | FBDC-FBDF         | FFFBDC-FFFBDF           | -                 | FС0160 (16 байт)        |
| **LX MMU РЕГИСТРЫ (CLASSIC 8-bit)**        |    |    |    |                   |                         |                   |                         |
| MMIO Data Window                           | RW |    |    | D0XX              | FC0000 + {PAGE, ADDR}   | 00-BF             | FC0000 + {PAGE, ADDR}   |
| MMIO Page Register                         | RW |    |    | D300              | FC0003                  | D3                | FC0003                  |
| Control Register                           | RW |    |    | -                 | FC0007                  | D7                | FC0007                  |
| Super Slot Select                          | RW |    |    | -                 | FC0009                  | D9                | FC0009                  |
| User Slot Select                           | RW |    |    | -                 | FC000B                  | DB                | FC000B                  |
| Bank 0 Register                            | RW |    |    | -                 | FC000C                  | DC                | FC000C                  |
| Bank 1 Register                            | RW |    |    | -                 | FC000D                  | DD                | FC000D                  |
| Bank 2 Register                            | RW |    |    | -                 | FC000E                  | DE                | FC000E                  |
| Bank 3 Register                            | RW |    |    | -                 | FC000F                  | DF                | FC000F                  |
| **Расширеный доступ к мапперу**            |    |    |    |                   |                         |                   |                         |
| Bank 0-3 Registers                         | RW |    |    | -                 | FC0010-FC001F           | -                 | FC0010-FC001F           |
| **LX MMIO УСТРОЙСТВА**                     |    |    |    |                   |                         |                   |                         |
| PIC Controller                             | RW |    |    | -                 | FC0020 (32 байт)        | -                 | FC0020 (32 байт)        |
| IPC Controller                             | RW |    |    |                   | FC0040 (32 байт)        |                   | FC0040 (32 байт)        |
| System Timer                               | RW |    |    | -                 | FC0060 (32 байт)        | -                 | FC0060 (32 байт)        |
| RTC Controller                             | RW |    |    | -                 | FC0080 (32 байт)        | -                 | FC0080 (32 байт)        |
| (Reserved Legacy Devices)                  | RW |    |    | -                 | FC0100 (64 байт)        | -                 | FC0100 (64 байт)        |
| DMA Controller                             | RW |    |    | -                 | FC0200 (256 байт)       | -                 | FC0200 (256 байт)       |
| Graphics Chip                              | RW |    |    | -                 | FC0300 (256 байт)       | -                 | FC0300 (256 байт)       |
| Sound Chip                                 | RW |    |    | -                 | FC0400 (256 байт)       | -                 | FC0400 (256 байт)       |


## MMIO LOW

Первая страница (Page 0) содержит самые необходимые устройства с шагом 32 байт:

- 0000 MMU Мененджер памяти
- 0020 PIC Котнроллер прерываний
- 0040 System Timer Системный таймер
- 0060 RTC контроллер
- 0080 И далее резев

Отсальные страницы сожержат:

- FC0100 Пространство Legacy устройств  
- FC0200 DMA Controller  
- FC0300 Graphics Chip   
- FC0400 Sound Chip  

## Итоги

- В Legacy режимае CPC приложения имеют знакомое окружение и ничего лишнего кроме двух устройств;
- В Legacy режимае CPC приложения имеют возможность достуматься к современным устройствам через механизм MMIO Windod;
- В Native режимае Aleste не имеет конфликтов с Legacy устройствами;
- В Native режимае Aleste имеет быстрый доступ к MMU;
- В Native режимае Aleste имеет доступ к современным и Legacy устройствам через механизм MMIO Windod;
- Программы Aleste LX могут обращаться к IO как к ячейкам памяти;
- Все перефириные устройства в памяти находятся в слоте 3 зарезервированным за супервизором;
- Все устройства и память помещаются в 24 битный адрес шины Wishbone;
- Любой DMA котроллер имеет доступ к перифирийным устройствам по быстрой WB шине;
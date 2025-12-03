# Архитектура системы Aleste LX

## 1. Базовые принципы

Система построена на процессоре Z80 с расширенным 24-битным адресным пространством (16 МБ) через механизм банкового переключения, аналогичный MSX, но с расширенной функциональностью. Поддерживает два основных режима работы для обратной совместимости и расширенной функциональности.

## 2. Режимы работы

Состояние системы определяется двумя независимыми параметрами: режимом привилегий и набором устройств ввода/вывода.
`S = {supervisor_mode, native_mode, mmio_userlock}`

### 2.1. Режим привилегий (Privilege Mode)
Определяет уровень доступа к ресурсам системы.
*   **User Mode**: Выполнение прикладного кода. Ограниченный доступ к слотам памяти и портам ввода/вывода.
*   **Supervisor Mode**: Выполнение кода ядра (привилегированный режим). Полный доступ ко всем ресурсам системы. Аппаратный вход по событиям (trap). После сброса система всегда запускается в этом режиме.

### 2.2. Режим совместимости (Compatibility Mode)
Определяет, какой набор устройств ввода/вывода и механизм управления памятью активен.
*   **Legacy Mode**: Полная аппаратная и программная совместимость с Amstrad CPC. Используется портовая адресация CPC. В режиме `supervisor` этот режим игнорируется, всегда действует `native`.
*   **Native Mode**: Расширенный режим с новой функциональностью, использованием современного набора портов ввода/вывода (00h-BFh) и полноценным слотовым механизмом.

## 3. Организация памяти

### 3.1. Логическое и физическое пространство
*   **Физическое адресное пространство**: 24 бита (16 МБ).
*   **Логическое адресное пространство Z80**: 16 бит (64 КБ).
*   **Логические слоты**: 64 КБ логического пространства делится на 4 слота по 16 КБ:
    *   **Slot 0**: 0000-3FFF (CPC RAM, базовая память)
    *   **Slot 1**: 4000-7FFF (CPC ROM, ПЗУ системы)
    *   **Slot 2**: 8000-BFFF (User extended memory)
    *   **Slot 3**: C000-FFFF (Supervisor memory, привилегированная)
*   **Банковое переключение**: Для отображения 16КБ логического слота на 16МБ физической памяти используется 8-битный регистр страницы (банка).
    `physical_address = {bank_reg[7:0], cpu_a[13:0]}`

### 3.2. MMIO Пространство: Концепция HI и LO

Последние 64 КБ физического адресного пространства (адреса `FF0000h - FFFFFFh`) зарезервированы для памяти устройств ввода/вывода (MMIO). Это пространство логически разделено на две части, что является фундаментальным принципом архитектуры:

*   **`MMIO_HI` (Адреса `FF4000h - FFFFFFh`, условно)**: Эта область предназначена для **эмуляции Legacy-устройств** Amstrad CPC в нативной системе. Устройства в этой области **жёстко привязаны** к своим физическим адресам (например, `Gate Array` на `FF0100h`, `CRTC` на `FF0110h`). В Legacy-режиме обращение к портам CPC (7FXXh, BCXXh и т.д.) транслируется в прямые обращения к этим фиксированным адресам в MMIO_HI через механизм полного отображения адреса шины Z80 `A[15:0]`.

*   **`MMIO_LO` (Адреса `FF0000h - FF3FFFh`, основная)**: Эта область предназначена для **новых устройств** системы Aleste LX (PIC, DMA, современный звук, графика) и доступна через механизм банкового переключения (окно). Доступ к этому пространству осуществляется через специальное 256-байтное "окно" в адресном пространстве Z80.

**Важно:** Адрес устройства в MMIO-пространстве является частью его архитектурного контракта. Это позволяет не только CPU, но и другим мастерам шины (например, **DMA-контроллеру**) напрямую обращаться к периферийным устройствам по их фиксированным адресам на быстрой шине Wishbone, что критично для производительности. Однако MMU не отображается в этом пространстве и является устройством с доступом только от процессора. 



### 3.3. Структура MMIO_LO (Page 0)

Первая страница MMIO_LO (Page 0, адреса `FF0000h - FF3FFFh`) содержит самые необходимые системные устройства, размещенные с шагом в 32 байта для выравнивания и простоты декодирования адресов:

*   **`FF0000h`**: PIC Controller (контроллер прерываний).
*   **`FF0020h`**: NMI Controller (контроллер прерываний).
*   **`FF0040h`**: IPC Mailbox (системный почтовый ящик).
*   **`FF0060h`**: System Timer (системный таймер).
*   **`FF0080h`**: RTC Controller (часы реального времени).
*   **`FF00A0h - FF00BFh`**: Зарезервировано для будущих системных устройств.
*   **`FF00C0h` - `FF00FFh`**: Зарезервировано для MMU (менеджер памяти).
    *   **`FF00D0h` - `FF00EFh`**: Блок регистров MMU (менеджер памяти).

Последующие страницы MMIO_LO содержат более сложные и объемные устройства:
*   **`FF0100h`**: Пространство для Legacy-устройств CPC (Gate Array, CRTC и т.д.).
*   **`FF0200h`**: DMA Controller.
*   **`FF0300h`**: Graphics Chip.
*   **`FF0400h`**: Sound Chip.

## 4. Система регистров управления

### 4.1. Управляющие регистры (Native Mode)
Доступны через порты ввода/вывода в диапазоне D0-FF.
*   **`GLOBAL_CTRL` (Port `D7`)**: Главный регистр управления режимами.

    | Бит | Группа     | Назначение                                                                                                             |
    |-----|------------|------------------------------------------------------------------------------------------------------------------------|
    | 0   | Functional | **native_mode**: 1=Нативный режим, 0=Legacy режим.                                                                     |
    | 1   | Functional | **supervisor_mode**: 1=Режим супервизора (устанавливается аппаратно или программно).                                   |
    | 2   | Functional | **supervisor_hook**: 1=Включить аппаратный захват (trap) по адресам 0038h/0066h.                                       |
    | 3   | Reserved   | Для будущего расширения функциональности.                                                                              |
    | 4   | Security   | **mmio_userlock**: (0=Разрешить прямой доступ к MMIO, 1=Заблокировать доступ -> только SysCall) **<- По умолчанию 1!** |
    | 5-7 | Reserved   | Для будущих битов безопасности.                                                                                        |

*   **`SUPER_SLOT` (Port `D9`)**: Выбор активного слота для режима **supervisor**.
*   **`USER_SLOT` (Port `DB`)**: Выбор активного слота для режима **user**.
*   **`BANK_0` - `BANK_3` (Ports `DC`-`DF`)**: Выбор страницы памяти для четырёх областей (слотов) в текущем режиме.
*   **`SYS_CALL_CMD_PORT` (Port `D4`)**: Порт для вызова команд операционной системы (**Нативный режим**).
*   **`MMIO_PAGE` (Port `D3`)**: Номер 256-байтной страницы в пространстве MMIO_LO.
*   **`MMIO_WINDOW` (Ports `00h-СFh`)**: Окно для чтения/записи данных по выбранной странице MMIO_LO.
    `mmio_physical_address = FF0000h + {MMIO_PAGE, cpu_a[6:0]}`

### 4.2. Регистры совместимости (Legacy Mode)
Предназначены для эмуляции окружения Amstrad CPC. Доступны через порты вида `XXYYh`.
*   **`RMR` / `MMR` (Port `7FXXh`)**: Регистры управления памятью и графикой CPC.
*   **`ROM_SEL` (Port `DFXXh`)**: Выбор банка ROM для верхней области памяти (C000-FFFF).
*   **`SYSCALL_LEGACY` (Port `D400h`)**: Вызов функции операционной системы. (Аналог порта `D4` в Native-режиме).

## 5. Механизмы переключения режимов

### 5.1. Программное переключение
Запись в регистр `GLOBAL_CTRL` (порт `D7`):
`S ← {data[1], data[0]}` (устанавливаются режимы supervisor и native).

### 5.2. Аппаратное переключение (Trap) в Supervisor Mode
Вход в привилегированный режим осуществляется аппаратно при выполнении условия:
`trap = (supervisor_hook == 1) ∧ (сигнал M1 активен) ∧ (address_bus == 0038h ∨ address_bus == 0066h)`
Это позволяет ядру перехватывать обработку прерываний или сброса.

### 5.3. Переключение через Syscall
Запись в регистр `syscall` производит переход в Supervisor mode. Супервизор должен обнулить регистр по окончании выполения операции.

- Код функции: Передается в регистре A.
- Аргументы: Передаются через регистры. Стандартное соглашение для подобных систем (например, CP/M, MSX-DOS) — использование регистровых пар.
  - BC — 1-й аргумент (например, хэндл файла, номер устройства)
  - DE — 2-й аргумент (например, указатель на данные или размер)
  - HL — 3-й аргумент (например, указатель на буфер или дополнительный параметр)

Возвращаемое значение: Как правило, в регистре A (статус) или в HL (результат, указатель).

Сохранение регистров: Ожидается, что обработчик системного вызова в супервизоре сохранит и восстановит все регистры, кроме тех, что используются для возврата значения.

Пример корректного вызова:

```asm
; Подготовка аргументов для syscall_write (код функции 0x02)
LD A, 2          ; A = Код функции 'write'
LD BC, file_handle ; BC = 1-й арг.: хэндл файла
LD DE, data_size ; DE = 2-й арг.: размер данных
LD HL, data_buffer ; HL = 3-й арг.: указатель на буфер
CALL syscall     ; Вызов обертки
; Проверка возвращаемого значения в A (0=успех, иначе код ошибки)
; Обработчик в супервизоре будет знать, что для функции 0x02 аргументы ожидаются именно в BC, DE, HL.
```


```asm
; Сама обертка находится в пользовательском пространстве
syscall:
    OUT (D4h), A    ; !!! ВОЛШЕБНАЯ КОМАНДА !!! (Для Native Mode: порт D4)
    RET             ; Сюда программа вернется после выполнения syscall

; Или для Legacy Mode:
syscall_legacy:
    OUT (D400h), A  ; !!! ВОЛШЕБНАЯ КОМАНДА !!! (Для Legacy Mode: порт D400)
    RET
```

Supervisor-mode код (обработчик):

```asm
Syscall_Dispatcher:
    ; A уже содержит код функции
    CP 0
    JP Z, Syscall_OpenFile
    CP 1
    JP Z, Syscall_ReadFile
    CP 2
    JP Z, Syscall_WriteFile ; <--- Переход сюда
    ; ... и т.д.

Syscall_WriteFile:
    ; Параметры уже в регистрах: A=код, BC=file_handle, HL=buffer, DE=size
    ; BC = file_handle, HL = data_buffer, E = size
    ; Осталось только выполнить работу.
    ; ... обработка ...    
    RET ; Возврат из диспетчера
```

### 5.4. Выход из Supervisor Mode
Выход является **многошаговым процессом**, синхронизированным с циклом команд процессора, что гарантирует корректное завершение исполнения кода ядра.

1.  **Инициация выхода**: Программа ядра выполняет команду `OUT` с данными `0` в специальный порт.
    ```asm
    out (supervisor_mode_port), a ; где a=0
    ```
2.  **Детекция**: Аппаратура детектирует эту запись и устанавливает внутренний флаг `EXIT_SUPERVISOR_PENDING = 1`. **Важно:** На этом этапе процессор всё ещё находится в супервизорном режиме.
3.  **Исполнение RETN**: Следующая команда (обычно `RETN` или `RETI`) исполняется полностью в супервизорном режиме, восстанавливая адрес возврата в пользовательском коде.
    ```asm
    retn ; Команда исполняется в супервизорном режиме
    ```
4.  **Синхронизация по M1**: Аппаратура ожидает **следующий** цикл шины `M1` (начало выборки новой команды). Это точка синхронизации.
5.  **Переключение**: При активации `M1` и поднятом флаге `EXIT_SUPERVISOR_PENDING` аппаратура сбрасывает режим `supervisor_mode` и переключает банки памяти на пользовательские.
6.  **Выборка в User Mode**: Выборка команды по адресу возврата происходит уже из пользовательской памяти.


**Итог:** Команда `RETN` выполняется в супервизоре, а следующая за ней команда — уже в пользовательском режиме.

### 5.5. Определение активного слота
Активный слот выбирается в зависимости от текущего режима привилегий:
`current_slot = (supervisor_mode == 1) ? SUPER_SLOT : USER_SLOT`

### 5.6. Алгоритм работы маппера
Обращение к регистрам банков `BANK_0`...`BANK_3` перенаправляется в один из 16-ти внутренних регистров маппера в зависимости от активного слота.
```cpp
void write_to_bank_register(uint8_t address_low_bits, uint8_t data) {
    page_index = (current_slot * 4) + (address_low_bits & 0b00000011);
    internal_mapper_registers[page_index] = data;
}
```

### 5.7. Политика безопасности доступа
- User Native Mode: При `mmio_userlock=1` запрещен доступ к портам 00-BF и D3, D7, D9, DB-DF. Разрешен только D4 (SysCall).
- User Legacy Mode: При `mmio_userlock=1` Разрешен D400 (SysCall) и все стандартные CPC-порты.
- Supervisor Mode: Доступ разрешен всегда.

### 5.8. Системный вызов для снятия блокировки доступа к MMIO

Для снятия блокировки доступа к портам `mmio` существует `SYS_MMIO_ACCESS_REQUEST` (Код функции: `0xFE`).

- **Назначение:** Запрос на снятие блокировки прямого доступа к MMIO.
- **Вход:** `A = 0xFE`, `BC = 0x0001` (флаг запроса на MMIO).
- **Выход:** `A = Код результата` (0: разрешено, 1: запрещено).
- **Поведение:** Ядро может запросить подтверждение у пользователя или проверить цифровую подпись программы. В случае успеха выставляет `mmio_userlock = 0`.

## 6. Детальная информация о регистрах MMU нативного режима

### 6.1 Регистр GLOBAL_CTRL
Полная таблица регистра приведена в разделе 4.1.

### 6.2 Расширенный доступ к мапперу
Предназначен для использования с системным DMA для быстрого сохранения и восстановления состояния всего маппера.

| Wishbone Adress | Slot | CPU Page |
|:---------------:|:----:|----------|
|     FF00E0      |  0   | 0000     |
|     FF00E1      |  0   | 4000     |
|     FF00E2      |  0   | 8000     |
|     FF00E3      |  0   | C000     |
|     FF00E4      |  1   | 0000     |
|     FF00E5      |  1   | 4000     |
|     FF00E6      |  1   | 8000     |
|     FF00E7      |  1   | C000     |
|     FF00E8      |  2   | 0000     |
|     FF00E9      |  2   | 4000     |
|     FF00EA      |  2   | 8000     |
|     FF00EB      |  2   | C000     |
|     FF00EC      |  3   | 0000     |
|     FF00ED      |  3   | 4000     |
|     FF00EE      |  3   | 8000     |
|     FF00EF      |  3   | C000     |

## 7. IPC Mailbox (Системный почтовый ящик)

**Назначение:** Обеспечить сверхбыстрый, детерминированный и безопасный обмен служебными командами и уведомлениями между **Супервизором (Ядром)** и **Драйверами**, работающими в пространстве ядра.

**Местоположение:** Выделенная область в MMIO пространстве (например, `FF0040h - FF005Fh`).

**Аппаратная Реализация:** Состоит из набора регистров:
*   **`MAILBOX_CMD`**: Драйвер записывает сюда код действия (напр., `SND_BUF_EMPTY`, `DSK_IO_DONE`).
*   **`MAILBOX_DATA_*`**: Параметры команды (номер канала, адрес и т.д.).
*   **`MAILBOX_STATUS`**: Биты `FULL` (сообщение не прочитано) и `ACK` (подтверждение обработки).
*   **`MAILBOX_INT_CTRL`**: Управление прерыванием по приему сообщения.

**Протокол:** Драйвер пишет команду и данные, аппаратура выставляет `FULL` и генерарует прерывание ядру (если разрешено). Ядро, обработав сообщение, сбрасывает флаг `FULL`.

## 8. Математическая модель

### 8.1. Преобразование адреса
Алгоритм трансляции логического адреса в физический зависит от режимов.
```
physical_address =
    if (supervisor_mode == 1) or (native_mode == 1) then
        // Нативный или супервизорный режим: используем маппер
        { internal_mapper_registers[current_slot * 4 + page_number], cpu_a[13:0] }
    else
        // Legacy-режим: используем механику CPC
        legacy_cpc_mapping(cpu_a, RMR, MMR)
```

### 8.2. Автомат состояний
Изменение состояния системы можно описать как:
```
S(t+1) =
    if trap_condition then
        {1, S(t).native_mode} // Вход в Supervisor, Native режим не меняется
    else if exit_supervisor_pending & next_M1_cycle then
        {0, S(t).native_mode} // Выход в User, Native режим не меняется
    else if io_write_to_D7h then
        {data[1], data[0]}    // Программная установка обоих режимов
    else
        S(t)                  // Состояние не изменяется
```

## 9. Таблица регистров и адресов


| Device / Description                       | RW | D7 | D6 | Legacy IO Address | Legacy Wishbone Address | Native IO Address | Native Wishbone Address |
|--------------------------------------------|----|----|----|-------------------|-------------------------|-------------------|-------------------------|
| **ОРИГИНАЛЬНЫЕ УСТРОЙСТВА CPC**            |    |    |    |                   |                         |                   |                         |
| Gate Array                                 | W  |    |    | 7FXX              | FF7FXX                  | -                 | FF0100 (16 байт)        |
| Gate Array Palette Index                   | W  | 0  | 0  | 7FXX              | FF7FXX                  | -                 | ↳ +0                    |
| Gate Array Palette Value                   | W  | 0  | 1  | 7FXX              | FF7FXX                  | -                 | ↳ +0                    |
| Gate Array Rom enable                      | W  | 1  | 0  | 7FXX              | FF7FXX                  | -                 | ↳ +0                    |
| Gate Array RAM banking                     | W  | 1  | 1  | 7FXX              | FF7FXX                  | -                 | ↳ +0                    |
| CRTC 6845 Index Register                   | W  |    |    | BCXX              | FFBCXX                  | -                 | FF0110 (16 байт)        |
| CRTC 6845 Data Register                    | RW |    |    | BDXX              | FFBDXX                  | -                 | ↳ +1                    |
| Upper ROM Select                           | W  |    |    | DFXX              | FFDFXX                  | -                 | FF0120 (16 байт)        |
| Printer Port                               | W  |    |    | EFXX              | FFEFXX                  | W                 | FF0130 (16 байт)        |
| **CPC PPI**                                |    |    |    |                   |                         |                   |                         |
| 8255 PPI Port A (PSG Data)                 | RW |    |    | F4XX              | FFF4XX                  | -                 | FF0140 (16 байт)        |
| 8255 PPI Port B (Vsync,PrnBusy,Tape,etc.)  | RW |    |    | F5XX              | FFF5XX                  | -                 | ↳ +1                    |
| 8255 PPI Port C (KeybRow,Tape,PSG Control) | RW |    |    | F6XX              | FFF6XX                  | -                 | ↳ +2                    |
| PPI Control Register                       | W  |    |    | F7XX              | FFF7XX                  | -                 | ↳ +3                    |
| **CPC FDC**                                |    |    |    |                   |                         |                   |                         |
| FFloppy Motor Control (for 765 FDC)        | W  |    |    | FA7E              | FFFA7E                  | -                 | FF0150 (16 байт)        |
| 765 FDC (internal) Status Register         | R  |    |    | FB7E              | FFFA7E                  | -                 | ↳ +0                    |
| 765 FDC (internal) Data Register           | RW |    |    | FB7F              | FFFB7F                  | -                 | ↳ +1                    |
| **CPC SERIAL**                             |    |    |    |                   |                         |                   |                         |
| 80-SIO / DART port                         | RW |    |    | FADC-FADF         | FFFADC-FFFADF           | -                 | FF0160 (16 байт)        |
| 8253 Timer                                 | RW |    |    | FBDC-FBDF         | FFFBDC-FFFBDF           | -                 | FF0170 (16 байт)        |
| MMIO SYSCALL                               | RW |    |    | D400              | FF00D4                  | -                 | `4`                     |
| **LX MMU РЕГИСТРЫ (CLASSIC 8-bit)**        |    |    |    |                   |                         |                   |                         |
| MMIO Data Window                           | RW |    |    | -                 | -                       | 00-BF             | FF00D0 + {PAGE, ADDR}   |
| MMIO Page Register                         | RW |    |    | -                 | -                       | D3                | FF00D3                  |
| MMIO SYSCALL                               | RW |    |    | D400              | FF00D4                  | D4                | FF00D4                  |
| Control Register                           | RW |    |    | -                 | -                       | D7                | FF00D7                  |
| Super Slot Select                          | RW |    |    | -                 | -                       | D9                | FF00D9                  |
| User Slot Select                           | RW |    |    | -                 | -                       | DB                | FF00DB                  |
| Bank 0 Register                            | RW |    |    | -                 | -                       | DC                | FF00DC                  |
| Bank 1 Register                            | RW |    |    | -                 | -                       | DD                | FF00DD                  |
| Bank 2 Register                            | RW |    |    | -                 | -                       | DE                | FF00DE                  |
| Bank 3 Register                            | RW |    |    | -                 | -                       | DF                | FF00DF                  |
| **Расширеный доступ к мапперу**            |    |    |    |                   |                         |                   |                         |
| Bank 0-3 Registers                         | RW |    |    | -                 | FF00DC-FF00DF           | -                 | FF00DC-FF00DF           |
| **LX MMIO PAGE 0**                         |    |    |    |                   |                         |                   |                         |
| PIC Controller                             | RW |    |    | -                 | -                       | -                 | FF0000 (32 байт)        |
| NMI Controller                             | RW |    |    | -                 | -                       | -                 | FF0020 (32 байт)        |
| IPC Mailbox                                | RW |    |    | -                 | -                       | -                 | FF0040 (32 байт)        |
| System Timer                               | RW |    |    | -                 | -                       | -                 | FF0060 (32 байт)        |
| RTC Controller                             | RW |    |    | -                 | -                       | -                 | FF0080 (32 байт)        |
| **LX MMIO PAGE 1**                         |    |    |    |                   |                         |                   |                         |
| (Reserved Legacy Devices)                  | RW |    |    | -                 | -                       | -                 | FF0100 (64 байт)        |
| **LX MMIO PAGE 2 и следующие**             |    |    |    |                   |                         |                   |                         |
| DMA Controller                             | RW |    |    | -                 | -                       | -                 | FF0200 (256 байт)       |
| Graphics Chip                              | RW |    |    | -                 | -                       | -                 | FF0300 (256 байт)       |
| Sound Chip                                 | RW |    |    | -                 | -                       | -                 | FF0400 (256 байт)       |

`1` MMIO Data Window обращается не к фиксированному адресу, а к диапазону `FF0000 - FFFFFF` в зависимости от регистра страницы.
`2` MMIO Data Window окно доступно только только в режиме `superviser` или если разрешен доступ `mmio_userlock`
`3` MMIO Data Window не доступно в легаси режиме но доступен SYSCALL.
`4` В легаси режиме регистр SYSCALL доступен по адресу D400 но отвечает по этому адресу нативный FF00D4

## 10. Legacy MMU регистры

Ниже приведены регистры исключлительно для MMU оригинальной платформы CPC 6128

### Register RMR (Control Interrupt counter, ROM mapping and Graphics mode)

his is a general purpose register responsible for the graphics mode and the ROM configuration.

| bit  |              | Action                                            |
|------|--------------|---------------------------------------------------|
| 7    |              | Must be 1                                         |
| 6    |              | Must be 0                                         |
| 5    | -            | must be 0 on Plus machines with ASIC unlocked     |
| 4    | irq_control  | Interrupt generation control                      |
| 3    | upper_rom    | 1=Upper ROM area disable, 0=Upper ROM area enable |
| 2    | lower_rom    | 1=Lower ROM area disable, 0=Lower ROM area enable |
| 1..0 | graphic_mode | Graphics Mode selection e                         |

- `upper_rom` starts С000
- `lower_rom` starts from 0000
- `graphic_mode` определяет режим графики, это наследие CPC и даже не смотря на то что не имеет отношение к MMU дожно быть поддержано именно в MMU для упрощения.
- В Amstrad запись в ROM производит запись в RAM лежащую под ней.

### Upper ROM Select (DFXX)

Восьмибитный регистр который 16 ВБ банк памяти в в адресах C000-CFFF когда она подключена `upper_rom` равна 1

### Register MMR (RAM memory mapping)

| Бит | Назначение | Описание                                                                   |
|:----|:-----------|:---------------------------------------------------------------------------|
| 7   | 1          | Muste be 1                                                                 |
| 6   | 1          | Must be 1                                                                  |
| 5-3 | **bbb**    | Старшие биты номера банка. Они выбирают блок по 64КБ в расширенной памяти. |
| 2-0 | **ccc**    | Конфигурация определяющяя младшие биты номера банка.       |                           |

**CPC 128 Memory map**

| -Address- | 0     | 1     | 2     | 3     | 4     | 5     | 6     | 7     |
|-----------|-------|-------|-------|-------|-------|-------|-------|-------|
| C000-FFFF | RAM_3 | RAM_7 | RAM_7 | RAM_7 | RAM_3 | RAM_3 | RAM_3 | RAM_3 |
| 8000-BFFF | RAM_2 | RAM_2 | RAM_6 | RAM_2 | RAM_2 | RAM_2 | RAM_2 | RAM_2 |
| 4000-7FFF | RAM_1 | RAM_1 | RAM_5 | RAM_3 | RAM_4 | RAM_5 | RAM_6 | RAM_7 |
| 0000-3FFF | RAM_0 | RAM_0 | RAM_4 | RAM_0 | RAM_0 | RAM_0 | RAM_0 | RAM_0 |

**CPC 512 KB Memory map**

| Адрес     | ccc=0 | ccc=1     | ccc=2     | ccc=3     | ccc=4     | ccc=5     | ccc=6     | ccc=7     |
|-----------|-------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
| 0000-3FFF | 0     | 0         | bbb*4 + 0 | 0         | 0         | 0         | 0         | 0         |
| 4000-7FFF | 1     | 1         | bbb*4 + 1 | 3         | bbb*4 + 0 | bbb*4 + 1 | bbb*4 + 2 | bbb*4 + 3 |
| 8000-BFFF | 2     | 2         | bbb*4 + 2 | 2         | 2         | 2         | 2         | 2         |
| C000-FFFF | 3     | bbb*4 + 3 | bbb*4 + 3 | bbb*4 + 3 | 3         | 3         | 3         | 3         |

---

## Address Space Architecture Description

### Overview
In this FPGA retro-computing platform (Aliste EX, Xeste LX, Amstrad CPC), the memory mapping system uses a streamlined approach where:

- **Master devices** only output raw addresses without additional decoding
- **Slave devices** utilize TAG signals for address space identification  
- **Interconnect system** performs centralized address-to-TAG conversion

### Address-to-TAG Mapping
The interconnect system converts address ranges into 2-bit TAG signals as follows:

```
TAG[1:0] Encoding:
00 - Memory space        (0x0000-0xFFFF) - 64KB main memory
01 - Native IO System    (0x0000-0x01FF) - First 512 bytes (MMU, palette, system)
10 - Native IO Extended  (0x0200-0x7FFF) - Remaining 32KB minus 512 bytes
11 - Legacy IO           (0x8000-0xFFFF) - Upper 32KB for legacy devices
```

### Address Decoding Logic
```
IF a[23:16] == 8'hFF THEN       -> IO Space
    IF a[15:9] == 7'b0000000 THEN    -> Native IO System (TAG = 01)
    ELSE IF a[15] == 1'b0 THEN       -> Native IO Extended (TAG = 10)  
    ELSE                             -> Legacy IO (TAG = 11)
ELSE                                 -> Memory Space (TAG = 00)
```

### Key Benefits
- **Critical System Access**: MMU and palette registers always accessible via fast TAG=01 decoding
- **Efficient Peripheral Scaling**: 192-byte blocks for modern devices in Native IO Extended space
- **Legacy Compatibility**: Full Amstrad CPC IO space preservation in Legacy IO
- **Optimized Decoding**: Slaves use simple TAG comparisons instead of complex address range checks

This architecture maintains backward compatibility while providing an optimized, scalable IO mapping system for modern peripherals.

## Legacy Units In MMIO

### 5. **Финальная таблица размещения устройств:**

| Устройство | Legacy Port | Native Address | Регистры |
|------------|-------------|----------------|----------|
| **Gate Array** | `7FXXh` | `FF0100h` | 4 регистра |
| **CRTC 6845** | `BCXXh/BDXXh` | `FF0110h` | Index/Data |
| **Upper ROM** | `DFXXh` | `FF0120h` | 1 регистр |
| **Printer** | `EFXXh` | `FF0130h` | 1 регистр |
| **PPI 8255** | `F4XXh-F7XXh` | `FF0140h` | 4 порта |
| **FDC 765** | `FAXXh-FBXXh` | `FF0150h` | Status/Data |


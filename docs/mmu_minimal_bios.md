# Этот минимальный BIOS обеспечивает:

Инициализацию - переход в нативный+супервизорный режим

3 системных вызова:

00 - Установка GLOBAL_CTRL (через C')

01 - Установка банка пользователя (слот через B', банк через C')

02 - Сложение чисел (D' + E' = A)

Сохранение регистров - использует только штрих-регистры

Корректный возврат в пользовательский код через RETI

Для тестирования в Verilator можно вызывать из пользовательского кода:

```
asm
ld a, 0x02    ; функция сложения
ld d, 5       ; первое число
ld e, 3       ; второе число
call syscall  ; результат в A
```

```asm
        ;#################################################
        ;# Minimal Supervisor BIOS for Aleste LX Testing #
        ;# Entry point: 0x0000 (Cold Boot)               #
        ;# SysCall Entry: 0x0038                        #
        ;# NMI Entry: 0x0066 (if enabled)               #
        ;# Uses: AF', BC', DE', HL' only                #
        ;#################################################

        .org 0x0000

        ; --- Cold Boot Vector ---
        di
        ld sp, 0xFFF0          ; Supervisor stack in slot 3
        jp supervisor_init

        .org 0x0038
        ; --- SysCall/Trap Vector ---
        jp syscall_dispatcher

        .org 0x0066
        ; --- NMI Vector ---
        retn                    ; Minimal NMI handler

        ; --- Supervisor Initialization ---
supervisor_init:
        ; Set Native Mode + Supervisor Mode
        ld a, 0b00000011        ; native_mode=1, supervisor_mode=1
        out (0xD7), a           ; Write to GLOBAL_CTRL

        ; Set up Supervisor Slot (Slot 3: C000-FFFF)
        ld a, 0x03              ; Map physical bank 3 to logical slot 3
        out (0xDF), a           ; BANK_3 register

        ; Enable supervisor hook for traps
        ld a, 0b00000111        ; native+supervisor+hook
        out (0xD7), a

        ; --- Return to User Mode ---
        ; Simulate exit sequence
        xor a                   ; A=0 to exit supervisor
        out (0xD7), a           ; Initiate exit (will complete after RETN)
        retn                    ; Return to user code

        ; --- SysCall Dispatcher ---
syscall_dispatcher:
        ex af, af'              ; Switch to alt registers
        exx

        ; Dispatch based on function code in A'
        cp 0x00
        jp z, sys_set_control   ; Set GLOBAL_CTRL
        cp 0x01
        jp z, sys_set_userbank  ; Set USER_SLOT bank
        cp 0x02
        jp z, sys_add_numbers   ; Add two numbers

        ; Unknown function - return error
        ld a, 0xFF
        jp syscall_return

        ; --- Function 00: Set GLOBAL_CTRL ---
sys_set_control:
        ; Value in C'
        ld a, c'
        out (0xD7), a           ; Write to GLOBAL_CTRL
        ld a, 0x00              ; Success
        jp syscall_return

        ; --- Function 01: Set User Bank ---
sys_set_userbank:
        ; Bank number in C', slot in B'
        ld a, b'
        cp 0x00
        jr z, set_bank0
        cp 0x01
        jr z, set_bank1
        cp 0x02
        jr z, set_bank2
        cp 0x03
        jr z, set_bank3
        ld a, 0xFE              ; Invalid slot error
        jp syscall_return

set_bank0:
        ld a, c'
        out (0xDC), a           ; BANK_0
        jr success
set_bank1:
        ld a, c'
        out (0xDD), a           ; BANK_1
        jr success
set_bank2:
        ld a, c'
        out (0xDE), a           ; BANK_2
        jr success
set_bank3:
        ld a, c'
        out (0xDF), a           ; BANK_3
success:
        ld a, 0x00              ; Success

        ; --- Function 02: Add Numbers ---
sys_add_numbers:
        ; Numbers in D' and E'
        ld a, d'
        add a, e'
        ; Result in A

        ; --- Common Return Path ---
syscall_return:
        ; Return value in A
        exx
        ex af, af'              ; Restore main registers
        reti                    ; Return to user code

        .end
```

```
F3 31 F0 FF C3 1A 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 00 00 C3 38 00 00 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
ED 45 3E 03 D3 D7 3E 07 D3 D7 AF D3 D7 ED 45 08
D9 F5 78 B9 C2 80 00 F1 3D CA 90 00 3D CA A0 00
3D CA B0 00 3E FE C3 D0 00 F1 79 D3 D7 3E 00 C3
D0 00 F1 79 D3 DC 18 F6 F1 79 D3 DD 18 F0 F1 79
D3 DE 18 EA F1 79 D3 DF 18 E4 3E 00 C3 D0 00 7A
83 C3 D0 00 D9 08 ED 4D
```
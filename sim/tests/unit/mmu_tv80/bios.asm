; TV80LX BIOS for sjasmplus
;    device z80

    org 0x0000
    di              ; 1 байт  (0x0000: F3)
    jp init         ; 3 байта (0x0001: C3 20 00)
    ; Всего 4 байта - идеально влезает до 0x0008!

    org 0x0008      ; Теперь здесь чисто!
    jp int1_handler ; 3 байта (0x0008: C3 50 00)

    org 0x0010      ; int2 vector
    jp int2_handler ; 3 байта (0x0010: C3 60 00)

    org 0x0018      ; syscall vector  
    jp syscall_handler ; 3 байта (0x0018: C3 38 00)



; === SYSCALL HANDLER (0x0038) ===
    org 0x0038
syscall_handler:
    ex af,af'
    exx
    push af
    ld a,b
    cp c
    jp nz,error
    pop af
    dec a
    jp z,func1
    dec a
    jp z,func2
    dec a
    jp z,func3
error:
    ld a,0xFF
    jp return

; === FUNCTION 1 (0x0080) ===
    org 0x0080
func1:
    pop af
    ld a,b
    out (0xD7),a
    ld a,0x00
    jp return

; === FUNCTION 2 (0x0090) ===
    org 0x0090
func2:
    pop af
    ld a,b
    out (0xDC),a
    ld a,0x00
    jp return

; === FUNCTION 3 (0x00A0) ===
    org 0x00A0
func3:
    ld a,d
    add a,e
    jp return

; === COMMON RETURN (0x00D0) ===
    org 0x00D0
return:
    exx
    ex af,af'
    reti

; === INTERRUPT 1 HANDLER (0x0050) ===
    org 0x0050
int1_handler:
    push af
    push bc
    push de
    push hl
    pop hl
    pop de
    pop bc
    pop af
    reti

; === INTERRUPT 2 HANDLER (0x0060) ===
    org 0x0060
int2_handler:
    push af
    push bc
    push de
    push hl
    pop hl
    pop de
    pop bc
    pop af
    reti

; === NMI HANDLER (0x0066) ===
    org 0x0066
nmi_handler:
    push af
    ld a,0x80
    out (0xD8),a
    pop af
    retn

    org 0x00D0      ; main program
init:
    ld sp,0xFFF0  ; 3 байта (0x0020: 31 F0 FF)
    ld hl,0x0000  ; 3 байта (0x0023: 21 00 00)
    ;; mapper
    ld a,0x00
    out (0xE0),a
    ld a,0x01
    out (0xE1),a
    ld a,0x02
    out (0xE2),a
    ld a,0x03
    out (0xE3),a
    ld a,0x01
    out (0xD7),a
    jp (hl)

; === FILL REST WITH 0x00 ===
    org 0x0100
    db 0
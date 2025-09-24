;   device z80
    org 0x0000

main:
    ld a,0x02
    ld d,0x05
    ld e,0x03
    call syscall
    ld (0xC000),a
    halt

    org 0x0040
syscall:
    out (0xD4),a
    ret

; Fill rest with zeros
    org 0x0100
    db 0
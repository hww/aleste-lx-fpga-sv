    org 0x0000
    
    di
    ; Страница 0 всегда Slot 3
    ; Тестируем BANK_1 (4000-7FFF)
    
    ; 1. Пишем в Slot 0
    ld a, 0x03        ; Bank0:3, Bank1:0
    out (0xFA), a
    
    ld a, 0           ; Страница 0 в BANK_1
    out (0xFD), a
    
    ld a, 0xA0        ; Метка для слота 0
    ld (0x7FFF), a
    
    ; 2. Пишем в Slot 1  
    ld a, 0x07        ; Bank0:3, Bank1:1
    out (0xFA), a
    
    ld a, 0           ; Та же страница 0
    out (0xFD), a
    
    ld a, 0xA1        ; Метка для слота 1
    ld (0x7FFF), a
    
    ; 3. Читаем из Slot 0
    ld a, 0x03        ; Bank0:3, Bank1:0
    out (0xFA), a
    
    ld a, 0
    out (0xFD), a
    
    ; Читаем в регистр B
    ld a, (0x7FFF)    ; Должно быть A0
    
    ; 4. Читаем из Slot 1
    ld a, 0x07        ; Bank0:3, Bank1:1
    out (0xFA), a
    
    ld a, 0
    out (0xFD), a
    
    ; Читаем в регистр C  
    ld a, (0x7FFF)    ; Должно быть A1
    
    ; Бесконечный цикл
    di
    halt
; ============================================================================
; NETWORK DRIVER
; Поддержка TCP/IP стека
; ============================================================================
module network_driver

; ---- КОНСТАНТЫ ----
NET_NO_ERROR              equ 0x00
NET_NOT_INITIALIZED       equ 0x01
NET_HARDWARE_ERROR        equ 0x02
NET_BUFFER_OVERFLOW       equ 0x03
NET_INVALID_PARAM         equ 0x04
NET_TIMEOUT               equ 0x05
NET_CONNECTION_REFUSED    equ 0x06
NET_CONNECTION_CLOSED     equ 0x07
NET_NOT_IMPLEMENTED       equ 0xFF

; Типы протоколов
PROTOCOL_IP               equ 0x01
PROTOCOL_ICMP             equ 0x02
PROTOCOL_TCP              equ 0x03
PROTOCOL_UDP              equ 0x04

; Флаги состояния сети
NET_FLAG_INITIALIZED      equ 0x01
NET_FLAG_HW_PRESENT       equ 0x02
NET_FLAG_LINK_UP          equ 0x04
NET_FLAG_IP_CONFIGURED    equ 0x08
NET_FLAG_GATEWAY_SET      equ 0x10
NET_FLAG_DNS_SET          equ 0x20

; Порт по умолчанию для TCP
TCP_PORT_DEFAULT          equ 80

; Максимальный размер пакета
MAX_PACKET_SIZE           equ 1518
MAX_TCP_SEGMENT           equ 1460

; ---- ДАННЫЕ ДРАЙВЕРА ----
SECTION NET_DATA

; Состояние сети
net_initialized:          db 0
net_flags:                db 0
net_hardware_type:        db 0

; IP конфигурация
net_ip_address:           ds 4      ; IP адрес
net_subnet_mask:          ds 4      ; Маска подсети
net_gateway:              ds 4      ; Шлюз по умолчанию
net_dns_server:           ds 4      ; DNS сервер
net_mac_address:          ds 6      ; MAC адрес

; Буферы
net_rx_buffer:            ds MAX_PACKET_SIZE
net_tx_buffer:            ds MAX_PACKET_SIZE
net_rx_ptr:               dw net_rx_buffer
net_tx_ptr:               dw net_tx_buffer

; Счетчики статистики
net_stats_rx_packets:     ds 4      ; 32-bit
net_stats_tx_packets:     ds 4
net_stats_rx_bytes:       ds 4
net_stats_tx_bytes:       ds 4
net_stats_errors:         ds 4

; Таблица соединений (максимум 8 соединений)
connection_table:         ds 8 * 16 ; 8 соединений по 16 байт

; ==================== ОСНОВНЫЕ ФУНКЦИИ ====================

SECTION NET_CODE

; ----------------------------------------------------------------------------
; net_init - Инициализация сетевого стека
; Выход: A = код ошибки
; ----------------------------------------------------------------------------
PUBLIC _net_init
_net_init:
net_init_:
    push bc
    push de
    push hl
    
    ; Проверяем, уже инициализировано ли
    ld a, (net_initialized)
    or a
    jr nz, @already_init
    
    ; Определяем сетевое железо
    call detect_network_hardware
    ld (net_hardware_type), a
    or a
    jr z, @no_hardware
    
    ; Инициализируем железо
    call init_network_hardware
    
    ; Читаем MAC адрес
    call read_mac_address
    
    ; Устанавливаем IP по умолчанию
    call set_default_ip
    
    ; Инициализируем буферы
    call init_buffers
    
    ; Инициализируем таблицу соединений
    call init_connection_table
    
    ; Устанавливаем флаги
    ld a, NET_FLAG_INITIALIZED | NET_FLAG_HW_PRESENT
    ld (net_flags), a
    
    ; Устанавливаем флаг инициализации
    ld a, 1
    ld (net_initialized), a
    
    xor a  ; Успех
    jr @exit

@already_init:
    xor a  ; Уже инициализировано
    jr @exit

@no_hardware:
    ld a, NET_HARDWARE_ERROR

@exit:
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; net_send - Отправить пакет
; Вход: HL = данные, DE = длина, BC = адрес назначения
; Выход: A = код ошибки
; ----------------------------------------------------------------------------
PUBLIC _net_send
_net_send:
net_send_:
    push bc
    push de
    push hl
    push ix
    
    ; Проверяем инициализацию
    ld a, (net_initialized)
    or a
    jr z, @not_initialized
    
    ; Проверяем длину
    ld a, d
    or e
    jr z, @invalid_param
    
    ; Копируем данные в буфер
    push de
    push hl
    
    ld hl, net_tx_buffer
    ld (net_tx_ptr), hl
    
    pop de  ; DE = источник данных
    pop bc  ; BC = длина
    
    ; Копируем данные
    ldir
    
    ; Отправляем через железо
    call hardware_send
    
    ; Обновляем статистику
    call update_tx_stats
    
    xor a  ; Успех
    jr @exit

@not_initialized:
    ld a, NET_NOT_INITIALIZED
    jr @exit
    
@invalid_param:
    ld a, NET_INVALID_PARAM

@exit:
    pop ix
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; net_receive - Получить пакет
; Вход: HL = буфер для данных, DE = размер буфера, BC = информация об отправителе
; Выход: A = код ошибки, DE = длина данных
; ----------------------------------------------------------------------------
PUBLIC _net_receive
_net_receive:
net_receive_:
    push bc
    push hl
    push ix
    
    ; Проверяем инициализацию
    ld a, (net_initialized)
    or a
    jr z, @not_initialized
    
    ; Проверяем, есть ли данные
    call hardware_receive_ready
    or a
    jr z, @no_data
    
    ; Читаем пакет
    call hardware_receive
    
    ; Копируем данные в пользовательский буфер
    push de
    
    ld de, hl  ; DE = пользовательский буфер
    ld hl, (net_rx_ptr)
    ld bc, (packet_length)
    
    ; Проверяем размер
    push de
    ld a, b
    or c
    jr z, @empty_packet
    
    ; Копируем данные
    ldir
    
    ; Обновляем статистику
    call update_rx_stats
    
    ; Возвращаем длину
    pop de
    pop de
    ld de, (packet_length)
    
    xor a  ; Успех
    jr @exit

@not_initialized:
    ld a, NET_NOT_INITIALIZED
    jr @exit
    
@no_data:
    ld a, NET_TIMEOUT
    jr @exit
    
@empty_packet:
    pop de
    pop de
    xor a
    ld de, 0

@exit:
    pop ix
    pop hl
    pop bc
    ret

; ----------------------------------------------------------------------------
; net_get_ip - Получить IP адрес системы
; Вход: HL = буфер для IP (4 байта)
; ----------------------------------------------------------------------------
PUBLIC _net_get_ip
_net_get_ip:
net_get_ip_:
    push bc
    push de
    push hl
    
    ld de, hl
    ld hl, net_ip_address
    ld bc, 4
    ldir
    
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; net_set_ip - Установить IP адрес
; Вход: HL = указатель на IP (4 байта)
; Выход: A = код ошибки
; ----------------------------------------------------------------------------
PUBLIC _net_set_ip
_net_set_ip:
net_set_ip_:
    push bc
    push de
    push hl
    
    ; Копируем IP
    ld de, net_ip_address
    ld bc, 4
    ldir
    
    ; Устанавливаем флаг
    ld a, (net_flags)
    or NET_FLAG_IP_CONFIGURED
    ld (net_flags), a
    
    xor a  ; Успех
    
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; net_connect - Установить TCP соединение
; Вход: HL = указатель на структуру соединения
; Выход: A = дескриптор соединения (0xFF=ошибка)
; ----------------------------------------------------------------------------
PUBLIC _net_connect
_net_connect:
net_connect_:
    push bc
    push de
    push hl
    push ix
    
    ; Проверяем инициализацию
    ld a, (net_initialized)
    or a
    jr z, @not_initialized
    
    ; Ищем свободный слот в таблице соединений
    call find_free_connection
    cp 0xFF
    jr z, @no_free_slots
    
    ; Создаем соединение
    ld (connection_handle), a
    call create_connection
    
    ; Инициируем TCP handshake
    call tcp_connect
    
    ; Возвращаем handle
    ld a, (connection_handle)
    jr @exit

@not_initialized:
    ld a, NET_NOT_INITIALIZED
    jr @exit
    
@no_free_slots:
    ld a, 0xFF

@exit:
    pop ix
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; net_disconnect - Закрыть соединение
; Вход: A = дескриптор соединения
; Выход: A = код ошибки
; ----------------------------------------------------------------------------
PUBLIC _net_disconnect
_net_disconnect:
net_disconnect_:
    push hl
    push bc
    
    ; Проверяем handle
    cp 8
    jr nc, @invalid_handle
    
    ; Закрываем соединение
    call tcp_disconnect
    
    ; Освобождаем слот
    call free_connection
    
    xor a  ; Успех
    jr @exit

@invalid_handle:
    ld a, NET_INVALID_PARAM

@exit:
    pop bc
    pop hl
    ret

; ----------------------------------------------------------------------------
; net_send_tcp - Отправить данные через TCP
; Вход: A = дескриптор соединения
;       HL = данные, DE = длина
; Выход: A = код ошибки, DE = отправлено байт
; ----------------------------------------------------------------------------
PUBLIC _net_send_tcp
_net_send_tcp:
net_send_tcp_:
    push bc
    push hl
    push ix
    
    ; Проверяем handle
    cp 8
    jr nc, @invalid_handle
    
    ; Отправляем через TCP
    call tcp_send_data
    
    xor a  ; Успех
    jr @exit

@invalid_handle:
    ld a, NET_INVALID_PARAM

@exit:
    pop ix
    pop hl
    pop bc
    ret

; ----------------------------------------------------------------------------
; net_receive_tcp - Получить данные через TCP
; Вход: A = дескриптор соединения
;       HL = буфер, DE = размер буфера
; Выход: A = код ошибки, DE = получено байт
; ----------------------------------------------------------------------------
PUBLIC _net_receive_tcp
_net_receive_tcp:
net_receive_tcp_:
    push bc
    push hl
    push ix
    
    ; Проверяем handle
    cp 8
    jr nc, @invalid_handle
    
    ; Получаем данные через TCP
    call tcp_receive_data
    
    xor a  ; Успех
    jr @exit

@invalid_handle:
    ld a, NET_INVALID_PARAM

@exit:
    pop ix
    pop hl
    pop bc
    ret

; ----------------------------------------------------------------------------
; net_get_mac - Получить MAC адрес
; Вход: HL = буфер для MAC (6 байт)
; ----------------------------------------------------------------------------
PUBLIC _net_get_mac
_net_get_mac:
net_get_mac_:
    push bc
    push de
    push hl
    
    ld de, hl
    ld hl, net_mac_address
    ld bc, 6
    ldir
    
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; net_set_gateway - Установить шлюз по умолчанию
; Вход: HL = указатель на IP шлюза (4 байта)
; Выход: A = код ошибки
; ----------------------------------------------------------------------------
PUBLIC _net_set_gateway
_net_set_gateway:
net_set_gateway_:
    push bc
    push de
    push hl
    
    ; Копируем шлюз
    ld de, net_gateway
    ld bc, 4
    ldir
    
    ; Устанавливаем флаг
    ld a, (net_flags)
    or NET_FLAG_GATEWAY_SET
    ld (net_flags), a
    
    xor a  ; Успех
    
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; net_set_dns - Установить DNS сервер
; Вход: HL = указатель на IP DNS (4 байта)
; Выход: A = код ошибки
; ----------------------------------------------------------------------------
PUBLIC _net_set_dns
_net_set_dns:
net_set_dns_:
    push bc
    push de
    push hl
    
    ; Копируем DNS
    ld de, net_dns_server
    ld bc, 4
    ldir
    
    ; Устанавливаем флаг
    ld a, (net_flags)
    or NET_FLAG_DNS_SET
    ld (net_flags), a
    
    xor a  ; Успех
    
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; net_get_stats - Получить статистику сети
; Вход: HL = указатель на структуру статистики
; ----------------------------------------------------------------------------
PUBLIC _net_get_stats
_net_get_stats:
net_get_stats_:
    push bc
    push de
    push hl
    
    ld de, hl
    
    ; Копируем статистику
    ld hl, net_stats_rx_packets
    ld bc, 16  ; 4 поля по 4 байта
    ldir
    
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; net_reset_stats - Сбросить статистику
; ----------------------------------------------------------------------------
PUBLIC _net_reset_stats
_net_reset_stats:
net_reset_stats_:
    push bc
    push hl
    
    ld hl, net_stats_rx_packets
    ld bc, 16
    xor a
    call memset_
    
    pop hl
    pop bc
    ret

; ----------------------------------------------------------------------------
; net_poll - Обработка сетевых событий (вызывать периодически)
; ----------------------------------------------------------------------------
PUBLIC _net_poll
_net_poll:
net_poll_:
    push af
    push bc
    push de
    push hl
    
    ; Обрабатываем входящие пакеты
    call process_incoming_packets
    
    ; Обрабатываем TCP таймеры
    call tcp_timer_handler
    
    ; Обрабатываем ARP кэш
    call arp_timer_handler
    
    pop hl
    pop de
    pop bc
    pop af
    ret

; ==================== ВНУТРЕННИЕ ФУНКЦИИ ====================

; ----------------------------------------------------------------------------
; detect_network_hardware - Определить сетевое железо
; Выход: A = тип железа (0=нет, 1=W5500, 2=ENC28J60)
; ----------------------------------------------------------------------------
detect_network_hardware:
    push bc
    
    ; Пробуем W5500
    call detect_w5500
    or a
    jr nz, @w5500_found
    
    ; Пробуем ENC28J60
    call detect_enc28j60
    or a
    jr nz, @enc28j60_found
    
    ; Железо не найдено
    xor a
    jr @exit

@w5500_found:
    ld a, 1
    jr @exit
    
@enc28j60_found:
    ld a, 2

@exit:
    pop bc
    ret

; ----------------------------------------------------------------------------
; init_network_hardware - Инициализировать сетевое железо
; Вход: A = тип железа
; ----------------------------------------------------------------------------
init_network_hardware:
    cp 1
    jr z, @init_w5500
    cp 2
    jr z, @init_enc28j60
    ret

@init_w5500:
    call w5500_init
    ret

@init_enc28j60:
    call enc28j60_init
    ret

; ----------------------------------------------------------------------------
; read_mac_address - Прочитать MAC адрес
; ----------------------------------------------------------------------------
read_mac_address:
    push bc
    push de
    push hl
    
    ld a, (net_hardware_type)
    cp 1
    jr z, @read_w5500_mac
    cp 2
    jr z, @read_enc28j60_mac
    
    ; Устанавливаем случайный MAC по умолчанию
    call generate_random_mac
    jr @exit

@read_w5500_mac:
    call w5500_read_mac
    jr @exit
    
@read_enc28j60_mac:

@exit:
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; set_default_ip - Установить IP по умолчанию
; ----------------------------------------------------------------------------
set_default_ip:
    push hl
    
    ; Устанавливаем 192@168@1@100
    ld hl, net_ip_address
    ld (hl), 192
    inc hl
    ld (hl), 168
    inc hl
    ld (hl), 1
    inc hl
    ld (hl), 100
    
    ; Маска 255@255@255@0
    ld hl, net_subnet_mask
    ld (hl), 255
    inc hl
    ld (hl), 255
    inc hl
    ld (hl), 255
    inc hl
    ld (hl), 0
    
    ; Шлюз 192@168@1@1
    ld hl, net_gateway
    ld (hl), 192
    inc hl
    ld (hl), 168
    inc hl
    ld (hl), 1
    inc hl
    ld (hl), 1
    
    ; DNS 8@8@8@8
    ld hl, net_dns_server
    ld (hl), 8
    inc hl
    ld (hl), 8
    inc hl
    ld (hl), 8
    inc hl
    ld (hl), 8
    
    pop hl
    ret

; ----------------------------------------------------------------------------
; init_buffers - Инициализировать буферы
; ----------------------------------------------------------------------------
init_buffers:
    push bc
    push hl
    
    ; Очищаем буферы
    ld hl, net_rx_buffer
    ld bc, MAX_PACKET_SIZE
    xor a
    call memset_
    
    ld hl, net_tx_buffer
    ld bc, MAX_PACKET_SIZE
    xor a
    call memset_
    
    ; Устанавливаем указатели
    ld hl, net_rx_buffer
    ld (net_rx_ptr), hl
    
    ld hl, net_tx_buffer
    ld (net_tx_ptr), hl
    
    pop hl
    pop bc
    ret

; ----------------------------------------------------------------------------
; init_connection_table - Инициализировать таблицу соединений
; ----------------------------------------------------------------------------
init_connection_table:
    push bc
    push hl
    
    ld hl, connection_table
    ld bc, 8 * 16
    xor a
    call memset_
    
    pop hl
    pop bc
    ret

; ----------------------------------------------------------------------------
; find_free_connection - Найти свободный слот для соединения
; Выход: A = номер слота или 0xFF если нет свободных
; ----------------------------------------------------------------------------
find_free_connection:
    push bc
    push hl
    
    ld hl, connection_table
    ld b, 8
    
@search_loop:
    ld a, (hl)
    or a
    jr z, @found_free
    
    ; Переходим к следующему слоту (16 байт на слот)
    ld de, 16
    add hl, de
    
    djnz @search_loop
    
    ; Свободных слотов нет
    ld a, 0xFF
    jr @exit

@found_free:
    ; Вычисляем номер слота
    ld a, 8
    sub b
    ld (connection_slot), a

@exit:
    pop hl
    pop bc
    ret

; ----------------------------------------------------------------------------
; create_connection - Создать запись о соединении
; Вход: A = номер слота, HL = параметры соединения
; ----------------------------------------------------------------------------
create_connection:
    push bc
    push de
    push hl
    
    ; Вычисляем адрес в таблице
    ld e, a
    ld d, 0
    sla e
    sla e
    sla e
    sla e  ; *16
    ld hl, connection_table
    add hl, de
    
    ; Копируем параметры
    ld de, hl
    pop hl
    push hl
    ld bc, 16
    ldir
    
    ; Устанавливаем состояние соединения
    ld (de), 1  ; STATE_CONNECTING
    
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; free_connection - Освободить слот соединения
; Вход: A = номер слота
; ----------------------------------------------------------------------------
free_connection:
    push bc
    push hl
    
    ; Вычисляем адрес в таблице
    ld e, a
    ld d, 0
    sla e
    sla e
    sla e
    sla e  ; *16
    ld hl, connection_table
    add hl, de
    
    ; Очищаем слот
    ld bc, 16
    xor a
    call memset_
    
    pop hl
    pop bc
    ret

; ----------------------------------------------------------------------------
; update_tx_stats - Обновить статистику отправки
; Вход: BC = количество байт
; ----------------------------------------------------------------------------
update_tx_stats:
    push hl
    push de
    push bc
    
    ; Увеличиваем счетчик пакетов
    ld hl, net_stats_tx_packets
    call increment_32bit
    
    ; Увеличиваем счетчик байт
    ld hl, net_stats_tx_bytes
    ld de, bc
    call add_32bit
    
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; update_rx_stats - Обновить статистику приема
; Вход: BC = количество байт
; ----------------------------------------------------------------------------
update_rx_stats:
    push hl
    push de
    push bc
    
    ; Увеличиваем счетчик пакетов
    ld hl, net_stats_rx_packets
    call increment_32bit
    
    ; Увеличиваем счетчик байт
    ld hl, net_stats_rx_bytes
    ld de, bc
    call add_32bit
    
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; increment_32bit - Увеличить 32-битное число
; Вход: HL = указатель на число
; ----------------------------------------------------------------------------
increment_32bit:
    inc (hl)
    ret nz
    inc hl
    inc (hl)
    ret nz
    inc hl
    inc (hl)
    ret nz
    inc hl
    inc (hl)
    ret

; ----------------------------------------------------------------------------
; add_32bit - Добавить к 32-битному числу
; Вход: HL = указатель на число, DE = добавляемое значение
; ----------------------------------------------------------------------------
add_32bit:
    ld a, (hl)
    add a, e
    ld (hl), a
    inc hl
    
    ld a, (hl)
    adc a, d
    ld (hl), a
    inc hl
    
    ld a, (hl)
    adc a, 0
    ld (hl), a
    inc hl
    
    ld a, (hl)
    adc a, 0
    ld (hl), a
    
    ret

; ----------------------------------------------------------------------------
; memset - Заполнение памяти
; ----------------------------------------------------------------------------
memset_:
    push hl
    push de
    push bc
    
    ld d, a
    ld a, b
    or c
    jr z, @done
    
    ld (hl), d
    dec bc
    ld a, b
    or c
    jr z, @done
    
    ld e, l
    ld d, h
    inc de
    ldir
    
@done:
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; generate_random_mac - Сгенерировать случайный MAC
; ----------------------------------------------------------------------------
generate_random_mac:
    push hl
    push bc
    
    ld hl, net_mac_address
    
    ; Первые 3 байта - OUI (организационно уникальный идентификатор)
    ; Используем локально управляемый адрес
    ld (hl), 0x02  ; Локально управляемый, универсальный
    inc hl
    
    ; Случайные значения для остальных байтов
    call sys_rand
    ld (hl), h
    inc hl
    ld (hl), l
    inc hl
    
    call sys_rand
    ld (hl), h
    inc hl
    ld (hl), l
    inc hl
    
    call sys_rand
    ld (hl), h
    inc hl
    ld (hl), l
    
    pop bc
    pop hl
    ret

; Включим протоколы и драйверы железа
INCLUDE "protocols/tcp@asm"
INCLUDE "protocols/udp@asm"
INCLUDE "protocols/ip@asm"
INCLUDE "hardware/w5500@asm"
INCLUDE "hardware/enc28j60@asm"

; ==================== ДАННЫЕ ====================

SECTION NET_VARS

; Временные переменные
packet_length:       dw 0
connection_handle:   db 0
connection_slot:     db 0

; Буфер для обработки пакетов
packet_buffer:       ds MAX_PACKET_SIZE

; ARP кэш
arp_cache:           ds 10 * 8  ; 10 записей по 8 байт

; Таблица маршрутизации
route_table:         ds 8 * 8   ; 8 записей по 8 байт
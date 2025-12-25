; ============================================================================
; NETWORK API JUMP TABLE
; Располагается в банке 0x29
; ============================================================================
SECTION BANK_29_NET_API
org 0xFF00

; ---- ПУБЛИЧНЫЕ СИМВОЛЫ ----
PUBLIC _sys_net_init, _sys_net_send, _sys_net_receive
PUBLIC _sys_net_get_ip, _sys_net_set_ip, _sys_net_connect
PUBLIC _sys_net_disconnect, _sys_net_send_tcp, _sys_net_receive_tcp
PUBLIC _sys_net_get_mac, _sys_net_set_gateway, _sys_net_set_dns
PUBLIC _sys_net_get_stats, _sys_net_reset_stats, _sys_net_poll
PUBLIC _sys_net_udp_send, _sys_net_udp_receive, _sys_net_ping

; ---- ВНЕШНИЕ ССЫЛКИ ----
EXTERN _net_init, _net_send, _net_receive, _net_get_ip, _net_set_ip
EXTERN _net_connect, _net_disconnect, _net_send_tcp, _net_receive_tcp
EXTERN _net_get_mac, _net_set_gateway, _net_set_dns, _net_get_stats
EXTERN _net_reset_stats, _net_poll

; ==================== ТАБЛИЦА ПЕРЕХОДОВ ====================

_sys_net_init:         jp _net_init
_sys_net_send:         jp _net_send
_sys_net_receive:      jp _net_receive
_sys_net_get_ip:       jp _net_get_ip
_sys_net_set_ip:       jp _net_set_ip
_sys_net_connect:      jp _net_connect
_sys_net_disconnect:   jp _net_disconnect
_sys_net_send_tcp:     jp _net_send_tcp
_sys_net_receive_tcp:  jp _net_receive_tcp
_sys_net_get_mac:      jp _net_get_mac
_sys_net_set_gateway:  jp _net_set_gateway
_sys_net_set_dns:      jp _net_set_dns
_sys_net_get_stats:    jp _net_get_stats
_sys_net_reset_stats:  jp _net_reset_stats
_sys_net_poll:         jp _net_poll

; ---- ДОПОЛНИТЕЛЬНЫЕ ФУНКЦИИ ----
_sys_net_udp_send:
    ; Отправить UDP пакет
    jp udp_send

_sys_net_udp_receive:
    ; Получить UDP пакет
    jp udp_receive

_sys_net_ping:
    ; Выполнить ping
    push hl
    push de
    push bc
    
    ; HL = IP адрес, BC = timeout
    call icmp_ping
    
    pop bc
    pop de
    pop hl
    ret

; ==================== ДАННЫЕ И КОНСТАНТЫ ====================

; ---- СТРУКТУРЫ СЕТИ ----

; Структура IP адреса
ip_address_structure:
    db 0, 0, 0, 0

; Структура MAC адреса
mac_address_structure:
    db 0, 0, 0, 0, 0, 0

; Структура соединения
connection_structure:
    dw 0      ; remote_ip
    dw 0
    dw 0      ; remote_port
    dw 0      ; local_port
    db 0      ; protocol
    db 0      ; state
    db 0      ; flags
    db 0      ; reserved
    dw 0      ; seq_number
    dw 0
    dw 0      ; ack_number
    dw 0

; Статистика сети
network_stats_structure:
    dd 0      ; rx_packets
    dd 0      ; tx_packets
    dd 0      ; rx_bytes
    dd 0      ; tx_bytes
    dd 0      ; errors

; ---- СЕТЕВЫЕ КОНСТАНТЫ ----

; Портные номера
PORT_HTTP             equ 80
PORT_FTP              equ 21
PORT_TELNET           equ 23
PORT_SMTP             equ 25
PORT_DNS              equ 53
PORT_DHCP_CLIENT      equ 68
PORT_DHCP_SERVER      equ 67

; Флаги Ethernet
ETH_TYPE_IP           equ 0x0800
ETH_TYPE_ARP          equ 0x0806
ETH_TYPE_IPV6         equ 0x86DD

; ---- ТАБЛИЦЫ СЕТИ ----

; Таблица портов по умолчанию
port_table:
    dw PORT_HTTP,     "HTTP    "
    dw PORT_FTP,      "FTP     "
    dw PORT_TELNET,   "TELNET  "
    dw PORT_SMTP,     "SMTP    "
    dw PORT_DNS,      "DNS     "

; Таблица протоколов
protocol_table:
    db IP_PROTOCOL_ICMP, "ICMP"
    db IP_PROTOCOL_TCP,  "TCP "
    db IP_PROTOCOL_UDP,  "UDP "

; Заполнение до конца страницы
    ds 0xFFFF - $, 0xFF
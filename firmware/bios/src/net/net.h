#ifndef NET_API_H
#define NET_API_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// ==================== КОНСТАНТЫ ====================

// Коды ошибок сети
#define NET_NO_ERROR           0x00
#define NET_NOT_INITIALIZED    0x01
#define NET_HARDWARE_ERROR     0x02
#define NET_BUFFER_OVERFLOW    0x03
#define NET_INVALID_PARAM      0x04
#define NET_TIMEOUT            0x05
#define NET_CONNECTION_REFUSED 0x06
#define NET_CONNECTION_CLOSED  0x07
#define NET_NOT_IMPLEMENTED    0xFF

// Типы протоколов
#define PROTOCOL_TCP           0x01
#define PROTOCOL_UDP           0x02
#define PROTOCOL_RAW           0x03

// Состояния соединения
#define CONN_STATE_CLOSED      0x00
#define CONN_STATE_LISTENING   0x01
#define CONN_STATE_SYN_SENT    0x02
#define CONN_STATE_SYN_RCVD    0x03
#define CONN_STATE_ESTABLISHED 0x04
#define CONN_STATE_FIN_WAIT_1  0x05
#define CONN_STATE_FIN_WAIT_2  0x06
#define CONN_STATE_CLOSE_WAIT  0x07
#define CONN_STATE_CLOSING     0x08
#define CONN_STATE_LAST_ACK    0x09
#define CONN_STATE_TIME_WAIT   0x0A

// Флаги сети
#define NET_FLAG_INITIALIZED   0x01
#define NET_FLAG_HW_PRESENT    0x02
#define NET_FLAG_LINK_UP       0x04
#define NET_FLAG_IP_CONFIGURED 0x08
#define NET_FLAG_GATEWAY_SET   0x10
#define NET_FLAG_DNS_SET       0x20

// Портные номера
#define PORT_HTTP              80
#define PORT_FTP               21
#define PORT_TELNET            23
#define PORT_SMTP              25
#define PORT_DNS               53
#define PORT_DHCP_CLIENT       68
#define PORT_DHCP_SERVER       67

// Максимальные размеры
#define MAX_PACKET_SIZE        1518
#define MAX_TCP_SEGMENT        1460
#define MAX_UDP_DATAGRAM       1472

// ==================== СТРУКТУРЫ ====================

// IP адрес
typedef struct {
    uint8_t octet[4];
} ip_address_t;

// MAC адрес
typedef struct {
    uint8_t octet[6];
} mac_address_t;

// Параметры соединения
typedef struct {
    ip_address_t remote_ip;
    uint16_t remote_port;
    uint16_t local_port;
    uint8_t protocol;
    uint8_t flags;
    uint16_t timeout;      // в секундах
    uint8_t reserved[3];
} connection_params_t;

// Информация о соединении
typedef struct {
    uint8_t handle;
    uint8_t state;
    ip_address_t local_ip;
    ip_address_t remote_ip;
    uint16_t local_port;
    uint16_t remote_port;
    uint32_t bytes_sent;
    uint32_t bytes_received;
    uint16_t errors;
    uint8_t reserved[8];
} connection_info_t;

// Статистика сети
typedef struct {
    uint32_t rx_packets;
    uint32_t tx_packets;
    uint32_t rx_bytes;
    uint32_t tx_bytes;
    uint32_t errors;
    uint32_t arp_requests;
    uint32_t arp_replies;
    uint32_t icmp_packets;
    uint32_t tcp_packets;
    uint32_t udp_packets;
} network_stats_t;

// UDP пакет
typedef struct {
    ip_address_t src_ip;
    ip_address_t dst_ip;
    uint16_t src_port;
    uint16_t dst_port;
    uint16_t length;
    uint16_t checksum;
    uint8_t data[MAX_UDP_DATAGRAM];
} udp_packet_t;

// ==================== ОСНОВНЫЕ ФУНКЦИИ ====================

// Инициализация
uint8_t sys_net_init(void);

// Базовая отправка/прием
uint8_t sys_net_send(const void* data, uint16_t length, const ip_address_t* dest);
uint8_t sys_net_receive(void* buffer, uint16_t buffer_size, 
                       ip_address_t* src, uint16_t* length);

// Работа с IP
void sys_net_get_ip(ip_address_t* ip);
uint8_t sys_net_set_ip(const ip_address_t* ip);
void sys_net_get_mac(mac_address_t* mac);

// Конфигурация сети
uint8_t sys_net_set_gateway(const ip_address_t* gateway);
uint8_t sys_net_set_dns(const ip_address_t* dns);
uint8_t sys_net_set_subnet_mask(const ip_address_t* mask);

// TCP соединения
uint8_t sys_net_connect(const connection_params_t* params);
uint8_t sys_net_disconnect(uint8_t handle);
uint8_t sys_net_send_tcp(uint8_t handle, const void* data, uint16_t length);
uint8_t sys_net_receive_tcp(uint8_t handle, void* buffer, uint16_t buffer_size, 
                           uint16_t* length);

// UDP работа
uint8_t sys_net_udp_send(const udp_packet_t* packet);
uint8_t sys_net_udp_receive(udp_packet_t* packet);

// Управление
uint8_t sys_net_get_connection_info(uint8_t handle, connection_info_t* info);
void sys_net_get_stats(network_stats_t* stats);
void sys_net_reset_stats(void);
void sys_net_poll(void);

// Сервисные функции
uint8_t sys_net_ping(const ip_address_t* ip, uint16_t timeout);
uint8_t sys_net_resolve_hostname(const char* hostname, ip_address_t* ip);
uint8_t sys_net_get_hostname(char* buffer, uint16_t buffer_size);
uint8_t sys_net_set_hostname(const char* hostname);

// ==================== ДОПОЛНИТЕЛЬНЫЕ ФУНКЦИИ ====================

// DHCP клиент
uint8_t sys_net_dhcp_request(void);
uint8_t sys_net_dhcp_release(void);
uint8_t sys_net_dhcp_renew(void);

// ARP кэш
uint8_t sys_net_arp_lookup(const ip_address_t* ip, mac_address_t* mac);
uint8_t sys_net_arp_add(const ip_address_t* ip, const mac_address_t* mac);
void sys_net_arp_clear(void);

// Сокеты (упрощенный API)
uint8_t sys_net_socket_open(uint8_t protocol, uint16_t port);
uint8_t sys_net_socket_close(uint8_t socket);
uint8_t sys_net_socket_bind(uint8_t socket, uint16_t port);
uint8_t sys_net_socket_listen(uint8_t socket, uint8_t backlog);
uint8_t sys_net_socket_accept(uint8_t socket, connection_info_t* info);
uint8_t sys_net_socket_connect(uint8_t socket, const ip_address_t* ip, uint16_t port);

// ==================== УТИЛИТЫ И МАКРОСЫ ====================

// Преобразование IP в строку
void ip_to_string(const ip_address_t* ip, char* buffer);
uint8_t string_to_ip(const char* str, ip_address_t* ip);

// Преобразование MAC в строку
void mac_to_string(const mac_address_t* mac, char* buffer);
uint8_t string_to_mac(const char* str, mac_address_t* mac);

// Сравнение IP адресов
static inline uint8_t ip_equal(const ip_address_t* ip1, const ip_address_t* ip2) {
    return (ip1->octet[0] == ip2->octet[0]) &&
           (ip1->octet[1] == ip2->octet[1]) &&
           (ip1->octet[2] == ip2->octet[2]) &&
           (ip1->octet[3] == ip2->octet[3]);
}

// Проверка приватных IP
static inline uint8_t ip_is_private(const ip_address_t* ip) {
    // 10.0.0.0/8
    if (ip->octet[0] == 10) return 1;
    
    // 172.16.0.0/12
    if (ip->octet[0] == 172 && ip->octet[1] >= 16 && ip->octet[1] <= 31) return 1;
    
    // 192.168.0.0/16
    if (ip->octet[0] == 192 && ip->octet[1] == 168) return 1;
    
    return 0;
}

// Проверка localhost
static inline uint8_t ip_is_localhost(const ip_address_t* ip) {
    return (ip->octet[0] == 127);
}

// ==================== ПРИМЕРЫ ИСПОЛЬЗОВАНИЯ ====================

/*
Пример 1: Инициализация и получение IP
ip_address_t my_ip;
sys_net_init();
sys_net_get_ip(&my_ip);
printf("My IP: %d.%d.%d.%d\n", 
       my_ip.octet[0], my_ip.octet[1], 
       my_ip.octet[2], my_ip.octet[3]);

Пример 2: TCP соединение
connection_params_t params;
params.remote_ip.octet[0] = 192;
params.remote_ip.octet[1] = 168;
params.remote_ip.octet[2] = 1;
params.remote_ip.octet[3] = 1;
params.remote_port = 80;
params.local_port = 0;  // любой свободный
params.protocol = PROTOCOL_TCP;

uint8_t handle = sys_net_connect(&params);
if (handle != 0xFF) {
    // Отправляем HTTP запрос
    const char* request = "GET / HTTP/1.0\r\n\r\n";
    sys_net_send_tcp(handle, request, strlen(request));
    
    // Получаем ответ
    char buffer[1024];
    uint16_t received;
    sys_net_receive_tcp(handle, buffer, sizeof(buffer), &received);
    
    // Закрываем соединение
    sys_net_disconnect(handle);
}

Пример 3: UDP отправка
udp_packet_t packet;
packet.dst_ip.octet[0] = 8;
packet.dst_ip.octet[1] = 8;
packet.dst_ip.octet[2] = 8;
packet.dst_ip.octet[3] = 8;
packet.dst_port = 53;  // DNS
packet.src_port = 12345;
strcpy(packet.data, "DNS query");
packet.length = strlen(packet.data);

sys_net_udp_send(&packet);

Пример 4: Ping
ip_address_t target;
target.octet[0] = 8;
target.octet[1] = 8;
target.octet[2] = 8;
target.octet[3] = 8;

uint8_t result = sys_net_ping(&target, 1000);
if (result == NET_NO_ERROR) {
    printf("Host is reachable\n");
}
*/

#ifdef __cplusplus
}
#endif

#endif // NET_API_H
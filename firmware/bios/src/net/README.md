
# Net Примеры

Внимание. Эта папка в целом скетч и требует более детальной реализации

Пример 1: Инициализация и получение IP
```
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
```
Пример 3: UDP отправка
```c
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
```
Пример 4: Ping
```c
ip_address_t target;
target.octet[0] = 8;
target.octet[1] = 8;
target.octet[2] = 8;
target.octet[3] = 8;

uint8_t result = sys_net_ping(&target, 1000);
if (result == NET_NO_ERROR) {
    printf("Host is reachable\n");
}
```
# Utilities

Пример 1: Работа со строками

```c
char buffer[20];
sys_strcpy(buffer, "Hello");
sys_strcat(buffer, " World!");
uint16_t len = sys_strlen(buffer);  // 12
```

Пример 2: Преобразования чисел

```c
char str[10];
int16_t num = -123;
sys_itoa(num, str);  // "-123"
```

Пример 3: Битовые операции

```c
uint8_t flags = 0;
sys_bit_set(&flags, 3);    // Установить бит 3
if (sys_bit_test(&flags, 3)) {
    // Бит 3 установлен
}
```

Пример 4: Случайные числа

```c
sys_srand(0x1234);
uint16_t rnd = sys_rand_range(100);  // Случайное число 0-99
```
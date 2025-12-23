#include <stdio.h>
#include "src/syscalls.h"

void console_init(void);

int main() {
    /* Инициализация */
    sys_init_video();
    console_init();
    
    /* Тестируем printf - должен работать */
    printf("=== Aleste LX Console Test ===\n");
    printf("Testing printf output:\n");
    printf("Decimal: %d\n", 12345);
    printf("Hex: 0x%X\n", 0xABCD);
    
    /* Если нужен ввод, но он не реализован - комментируем */
    /*
    printf("\nEnter something: ");
    char buffer[100];
    fgets(buffer, sizeof(buffer), stdin);
    printf("You entered: %s\n", buffer);
    */
    
    /* Просто бесконечный цикл с выводом */
    int counter = 0;
    while(1) {
        printf("Counter: %d\n", counter++);
        
        /* Задержка */
        volatile int i;
        for (i = 0; i < 10000; i++);
    }
}
    
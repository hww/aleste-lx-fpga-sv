# Interrupts 

```c
#include "int/int.h"

// Пример обработчика прерывания клавиатуры
void keyboard_interrupt_handler(void) {
    // Обработка прерывания клавиатуры
    uint8_t scancode = in_port(0x40);
    // ... обработка ...
    
    // Подтверждение прерывания
    out_port(0x20, 0x20);
}

// Пример callback-функции таймера
void timer_callback(uint8_t timer_num) {
    printf("Timer %d fired!\n", timer_num);
    
    // Мигаем светодиодом или что-то подобное
    static uint8_t led_state = 0;
    led_state = !led_state;
    out_port(0x80, led_state);
}

// Основной пример
void interrupts_example(void) {
    // Инициализируем систему прерываний
    if (sys_int_init() != INT_NO_ERROR) {
        printf("Interrupt system init failed\n");
        return;
    }
    
    // Устанавливаем обработчик для клавиатуры
    sys_int_set_handler(INT_IRQ1, keyboard_interrupt_handler);
    
    // Запускаем таймер с callback
    sys_timer_set_callback(TIMER_USER1, timer_callback);
    sys_timer_start(TIMER_USER1, 100);  // 100 тиков (2 секунды при 50 Гц)
    
    // Разрешаем прерывания
    sys_int_enable();
    
    // Основной цикл
    while (1) {
        // Делаем что-то полезное
        printf("Working...\n");
        
        // Задержка 1 секунда
        sys_delay_ms(1000);
    }
}

// Пример использования критических секций
void critical_section_example(void) {
    // Входим в критическую секцию (отключаем прерывания)
    sys_enter_critical();
    
    // Читаем/изменяем общие данные
    shared_counter++;
    
    // Выходим из критической секции
    sys_exit_critical();
}

// Пример измерения времени выполнения
void performance_example(void) {
    sys_perf_start(0);
    
    // Код, время выполнения которого измеряем
    for (int i = 0; i < 1000; i++) {
        complex_calculation();
    }
    
    uint32_t cycles = sys_perf_stop(0);
    printf("Execution took %lu cycles\n", cycles);
}
```

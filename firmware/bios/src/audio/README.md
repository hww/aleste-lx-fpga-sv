# AY*910 Пример использования:


```c
#include "audio/audio.h"

// Простой пример воспроизведения звука
void play_test_sound(void) {
    // Инициализируем аудио
    if (sys_audio_init() != AUDIO_NO_ERROR) {
        printf("Audio init failed\n");
        return;
    }
    
    // Воспроизводим ноту на AY
    sys_ay8910_play_note(NOTE_C4, AUDIO_CHANNEL_A, 12);
    
    // Ждем 500 мс
    delay_ms(500);
    
    // Меняем ноту
    sys_ay8910_play_note(NOTE_E4, AUDIO_CHANNEL_A, 12);
    delay_ms(500);
    
    // Добавляем второй канал
    sys_ay8910_play_note(NOTE_G4, AUDIO_CHANNEL_B, 10);
    delay_ms(500);
    
    // Останавливаем
    sys_audio_stop();
}
```

##  Пример воспроизведения аккорда

```c
void play_chord(void) {
    sys_ay8910_init();
    
    // Аккорд C мажор: C, E, G
    sys_ay8910_play_note(NOTE_C4, AUDIO_CHANNEL_A, 10);
    sys_ay8910_play_note(NOTE_E4, AUDIO_CHANNEL_B, 10);
    sys_ay8910_play_note(NOTE_G4, AUDIO_CHANNEL_C, 10);
    
    // Устанавливаем огибающую
    sys_ay8910_set_envelope(0x1000, AY_ENV_DOWN_HOLD);
    sys_ay8910_enable_envelope(AUDIO_CHANNEL_A, 1);
    sys_ay8910_enable_envelope(AUDIO_CHANNEL_B, 1);
    sys_ay8910_enable_envelope(AUDIO_CHANNEL_C, 1);
    
    delay_ms(1000);
    sys_audio_stop();
}
```

## Пример использования шума для эффектов

```c
void play_drum_effect(void) {
    sys_ay8910_init();
    
    // Короткий шум для эффекта барабана
    sys_ay8910_set_noise(1);  // Короткий период
    sys_ay8910_enable_noise(AUDIO_CHANNEL_C, 1);
    sys_ay8910_play_note(0, AUDIO_CHANNEL_C, 15);  // Максимальная громкость
    
    delay_ms(50);
    
    // Отключаем шум
    sys_ay8910_enable_noise(AUDIO_CHANNEL_C, 0);
    sys_audio_stop();
}
```
#ifndef AUDIO_API_H
#define AUDIO_API_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// ==================== КОНСТАНТЫ ====================

// Коды ошибок
#define AUDIO_NO_ERROR           0x00
#define AUDIO_NOT_INITIALIZED    0x01
#define AUDIO_HARDWARE_ERROR     0x02
#define AUDIO_BUFFER_OVERFLOW    0x03
#define AUDIO_INVALID_FORMAT     0x04
#define AUDIO_PLAYBACK_ACTIVE    0x05
#define AUDIO_CHIP_NOT_FOUND     0x06

// Статус воспроизведения
#define AUDIO_STATUS_IDLE        0x00
#define AUDIO_STATUS_PLAYING     0x01
#define AUDIO_STATUS_PAUSED      0x02
#define AUDIO_STATUS_STOPPED     0x03

// Типы аудио устройств
#define AUDIO_TYPE_NONE          0x00
#define AUDIO_TYPE_AY8910        0x01
#define AUDIO_TYPE_AY8912        0x02
#define AUDIO_TYPE_YM2149        0x03
#define AUDIO_TYPE_SAA1099       0x04
#define AUDIO_TYPE_SN76489       0x05

// Форматы аудио
#define AUDIO_FORMAT_RAW         0x00
#define AUDIO_FORMAT_VTX         0x01
#define AUDIO_FORMAT_PTK         0x02
#define AUDIO_FORMAT_WAV         0x03
#define AUDIO_FORMAT_VGM         0x04

// Каналы AY-3-8910
#define AUDIO_CHANNEL_A          0
#define AUDIO_CHANNEL_B          1
#define AUDIO_CHANNEL_C          2

// Формы огибающей AY
#define AY_ENV_DOWN              0x00  // \_________
#define AY_ENV_UP                0x0C  // /_________
#define AY_ENV_DOWN_HOLD         0x08  // \~~~~~~~~~
#define AY_ENV_UP_HOLD           0x0C  // /~~~~~~~~~
#define AY_ENV_TRIANGLE          0x0A  // /\/\/\/\
#define AY_ENV_SAWTOOTH          0x08  // /|/|/|/|

// Ноты (0-95, где 0=C0, 95=B7)
#define NOTE_C0  0
#define NOTE_CS0 1
#define NOTE_D0  2
// ... остальные ноты
#define NOTE_B7  95

// ==================== СТРУКТУРЫ ====================

// Структура информации об аудио устройстве
typedef struct {
    uint8_t  device_type;
    uint8_t  num_channels;
    uint16_t max_frequency;
    uint16_t min_frequency;
    uint8_t  volume_levels;  // Уровней громкости (16 для AY)
    uint8_t  supports_noise;
    uint8_t  supports_envelope;
} audio_device_info_t;

// Структура конфигурации аудио
typedef struct {
    uint8_t  master_volume;    // 0-255
    uint8_t  sample_rate;      // 0=11025, 1=22050, 2=44100
    uint8_t  channels;         // 1=моно, 2=стерео
    uint8_t  format;           // Формат данных
    uint16_t buffer_size;      // Размер буфера
} audio_config_t;

// Структура для работы с AY-3-8910
typedef struct {
    uint16_t tone_a;      // Частота канала A
    uint16_t tone_b;      // Частота канала B
    uint16_t tone_c;      // Частота канала C
    uint8_t  noise_period; // Период шума
    uint8_t  mixer;       // Регистр включения
    uint8_t  volume_a;    // Громкость A
    uint8_t  volume_b;    // Громкость B
    uint8_t  volume_c;    // Громкость C
    uint16_t env_period;  // Период огибающей
    uint8_t  env_shape;   // Форма огибающей
} ay8910_state_t;

// ==================== ОСНОВНЫЕ ФУНКЦИИ ====================

// Инициализация
uint8_t sys_audio_init(void);
void sys_audio_shutdown(void);

// Воспроизведение
uint8_t sys_audio_play(const void* data, uint32_t length, 
                      uint8_t sample_rate, uint8_t channels);
void sys_audio_stop(void);
void sys_audio_pause(void);
void sys_audio_resume(void);

// Громкость
void sys_audio_set_volume(uint8_t volume, uint8_t channel);
uint8_t sys_audio_get_volume(uint8_t channel);

// Статус
uint8_t sys_audio_get_status(void);
uint8_t sys_audio_get_device_type(void);
void sys_audio_get_device_info(audio_device_info_t* info);

// Конфигурация
void sys_audio_get_config(audio_config_t* config);
void sys_audio_set_config(const audio_config_t* config);

// ==================== ФУНКЦИИ AY-3-8910/8912 ====================

// Инициализация AY
uint8_t sys_ay8910_init(void);

// Воспроизведение нот
void sys_ay8910_play_note(uint8_t note, uint8_t channel, uint8_t volume);
void sys_ay8910_stop_note(uint8_t channel);

// Шум
void sys_ay8910_set_noise(uint8_t period);
void sys_ay8910_enable_noise(uint8_t channel, uint8_t enable);

// Огибающая
void sys_ay8910_set_envelope(uint16_t period, uint8_t shape);
void sys_ay8910_enable_envelope(uint8_t channel, uint8_t enable);

// Управление каналами
void sys_ay8910_enable_channel(uint8_t channel_mask);
void sys_ay8910_disable_channel(uint8_t channel_mask);

// Состояние
void sys_ay8910_get_state(ay8910_state_t* state);
void sys_ay8910_set_state(const ay8910_state_t* state);

// Специальные функции
void sys_ay8910_play_chord(uint8_t note1, uint8_t note2, uint8_t note3, 
                          uint8_t duration_ms);
void sys_ay8910_play_effect(uint8_t effect_type, uint8_t param);

// ==================== ВСПОМОГАТЕЛЬНЫЕ ФУНКЦИИ ====================

// Преобразование нот
uint16_t sys_audio_note_to_frequency(uint8_t note);
uint8_t sys_audio_frequency_to_note(uint16_t frequency);

// Форматы
uint8_t sys_audio_detect_format(const void* data);
const char* sys_audio_format_name(uint8_t format);

// Утилиты
void sys_audio_beep(uint16_t frequency, uint16_t duration_ms);
void sys_audio_error_beep(void);
void sys_audio_success_beep(void);

// Музыкальные функции
void sys_audio_play_melody(const uint8_t* notes, const uint8_t* durations, 
                          uint16_t length, uint8_t tempo);
void sys_audio_play_song(const void* song_data);

#ifdef __cplusplus
}
#endif

#endif // AUDIO_API_H
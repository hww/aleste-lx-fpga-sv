SECTION AY8912_DATA

PUBLIC _ay8912_vtable
PUBLIC _ay8912_ay_base_init, _ay8912_ay_base_play_note, _ay8912_ay_base_set_register, _ay8912_ay_base_get_register
PUBLIC  _ay8912_ay_base_stop,    _ay8912_ay_base_pause, _ay8912_ay_base_resume, _ay8912_ay_base_set_volume, _ay8912_ay_base_start_playback
PUBLIC _ay8912_detect
; Таблица методов для AY-3-8912 (всё как у базового, кроме detect)
_ay8912_vtable:
_ay8912_ay_base_init:           jp ay_base_init          ; init
_ay8912_ay_base_play_note:      jp ay_base_play_note     ; play_note
_ay8912_ay_base_set_register:   jp ay_base_set_register  ; set_register
_ay8912_ay_base_get_register:   jp ay_base_get_register  ; get_register
_ay8912_ay_base_stop:           jp ay_base_stop          ; stop
_ay8912_ay_base_pause:          jp ay_base_pause         ; pause
_ay8912_ay_base_resume:         jp ay_base_resume        ; resume
_ay8912_ay_base_set_volume:     jp ay_base_set_volume    ; set_volume
_ay8912_ay_base_start_playback: jp ay_base_start_playback; start_playback
_ay8912_detect:                 jp ay8912_detect         ; detect (СВОЙ метод!)
SECTION AY8910_DATA

PUBLIC _ay8910_vtable
PUBLIC _ay8910_base_init, _ay8910_base_play_note, _ay8910_base_set_register, _ay8910_base_get_register
PUBLIC _ay8910_base_stop, _ay8910_base_pause, _ay8910_base_resume, _ay8910_base_set_volume
PUBLIC _ay8910_base_start_playback, _ay8910_detect

; Таблица методов (vtable) для AY-3-8910
_ay8910_vtable:
_ay8910_base_init:          jp ay_base_init          ; 0: init
_ay8910_base_play_note:     jp ay_base_play_note     ; 2: play_note
_ay8910_base_set_register:  jp ay_base_set_register  ; 4: set_register
_ay8910_base_get_register:  jp ay_base_get_register  ; 6: get_register
_ay8910_base_stop:          jp ay_base_stop          ; 8: stop
_ay8910_base_pause:         jp ay_base_pause         ; 10: pause
_ay8910_base_resume:        jp ay_base_resume        ; 12: resume
_ay8910_base_set_volume:    jp ay_base_set_volume    ; 14: set_volume
_ay8910_base_start_playback: jp ay_base_start_playback; 16: start_playback
_ay8910_detect:             jp ay8910_detect         ; 18: detect (СВОЙ метод!)

; ---- VTABLE ДЛЯ 1BPP ----
SECTION GFX_1BPP_VTABLE

PUBLIC gfx_1bpp_driver
gfx_1bpp_driver:
_gfx_1bpp_init:          jp gfx_1bpp_init          ; 0: init
_gfx_1bpp_get_info:      jp gfx_1bpp_get_info      ; 2: get_info
_gfx_1bpp_draw_pixel:    jp gfx_1bpp_draw_pixel    ; 4: draw_pixel
_gfx_1bpp_get_pixel:     jp gfx_1bpp_get_pixel     ; 6: get_pixel
_gfx_1bpp_fill_rect:     jp gfx_1bpp_fill_rect     ; 8: fill_rect
_gfx_1bpp_copy_rect:     jp gfx_1bpp_copy_rect     ; 10: copy_rect
_gfx_1bpp_scroll_up:     jp gfx_1bpp_scroll_up     ; 12: scroll_up
_gfx_1bpp_scroll_down:   jp gfx_1bpp_scroll_down   ; 14: scroll_down
_gfx_1bpp_put_char:      jp gfx_1bpp_put_char      ; 16: put_char
_gfx_1bpp_put_string:    jp gfx_1bpp_put_string    ; 18: put_string
_gfx_1bpp_draw_line:     jp gfx_draw_line          ; 20: draw_line (общая)
_gfx_1bpp_draw_rect:     jp gfx_draw_rect          ; 22: draw_rect (общая)
_gfx_1bpp_draw_circle:   jp gfx_draw_circle        ; 24: draw_circle (общая)
_gfx_1bpp_set_palette:   jp gfx_1bpp_set_palette   ; 26: set_palette
_gfx_1bpp_get_palette:   jp gfx_1bpp_get_palette   ; 28: get_palette
_gfx_1bpp_crtc_wait_vsync: jp crtc_wait_vsync      ; 30: wait_vsync
_gfx_1bpp_clear_screen:  jp gfx_clear_screen       ; clear screen

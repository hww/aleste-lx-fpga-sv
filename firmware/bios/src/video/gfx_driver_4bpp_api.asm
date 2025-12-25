
; ---- VTABLE ДЛЯ 4BPP ----
SECTION GFX_4BPP_VTABLE

PUBLIC gfx_4bpp_driver
gfx_4bpp_driver:
_gfx_4bpp_init:          jp gfx_4bpp_init          ; init
_gfx_4bpp_get_info:      jp gfx_4bpp_get_info      ; get_info
_gfx_4bpp_draw_pixel:    jp gfx_4bpp_draw_pixel    ; draw_pixel (ОСОБЫЙ!)
_gfx_4bpp_get_pixel:     jp gfx_4bpp_get_pixel     ; get_pixel (ОСОБЫЙ!)
_gfx_4bpp_fill_rect:     jp gfx_4bpp_fill_rect     ; fill_rect
_gfx_4bpp_copy_rect:     jp gfx_4bpp_copy_rect     ; copy_rect (ОСОБЫЙ - выравнивание!)
_gfx_4bpp_scroll_up:     jp gfx_4bpp_scroll_up     ; scroll_up
_gfx_4bpp_scroll_down:   jp gfx_4bpp_scroll_down   ; scroll_down
_gfx_4bpp_put_char:      jp gfx_4bpp_put_char      ; put_char (ОСОБЫЙ - тетрады!)
_gfx_4bpp_put_string:    jp gfx_4bpp_put_string    ; put_string
_gfx_4bpp_draw_line:     jp gfx_draw_line          ; draw_line
_gfx_4bpp_draw_rect:     jp gfx_draw_rect          ; draw_rect
_gfx_4bpp_draw_circle:   jp gfx_draw_circle        ; draw_circle
_gfx_4bpp_set_palette:   jp gfx_4bpp_set_palette   ; set_palette (12-bit!)
_gfx_4bpp_get_palette:   jp gfx_4bpp_get_palette   ; get_palette
_gfx_4bpp_crtc_wait_vsync: jp crtc_wait_vsync      ; wait_vsync
_gfx_4bpp_clear_screen:  jp gfx_clear_screen       ; clear screen
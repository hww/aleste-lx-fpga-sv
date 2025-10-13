// wb_arbiter_internal.v - ПРОСТОЙ распределитель
`default_nettype none

module wb_arbiter_internal (
    input clk, rst,
    
    // External Wishbone Interface
    input               wb_ext_cyc_i,
    input               wb_ext_stb_i,
    output              wb_ext_sel_o,
    output              wb_ext_ack_o,
    input               wb_ext_we_i,
    input        [23:0] wb_ext_adr_i,
    input        [15:0] wb_ext_dat_i,
    output       [15:0] wb_ext_dat_o,
    input        [1:0]  wb_ext_sel_i,
    input        [1:0]  wb_ext_tag_i,
    
    // Internal Device Interfaces - ВСЕ сигналы идут ко всем устройствам
    output              palette_cyc_o,
    output              palette_stb_o,
    input               palette_sel_i,    
    input               palette_ack_i,
    output              palette_we_o,
    output       [15:0] palette_adr_o,
    output       [15:0] palette_dat_o,
    input        [15:0] palette_dat_i,
    output       [1:0]  palette_sel_o,
    output       [1:0]  palette_tag_o,

    output              crtc_cyc_o,
    output              crtc_stb_o,
    input               crtc_sel_i,
    input               crtc_ack_i,
    output              crtc_we_o,
    output       [15:0] crtc_adr_o,
    output       [15:0] crtc_dat_o,
    input        [15:0] crtc_dat_i,
    output       [1:0]  crtc_sel_o,
    output       [1:0]  crtc_tag_o,
    
    output              mem_cyc_o,
    output              mem_stb_o,
    input               mem_sel_i,
    input               mem_ack_i,
    output              mem_we_o,
    output       [23:0] mem_adr_o,
    output       [15:0] mem_dat_o,
    input        [15:0] mem_dat_i,
    output       [1:0]  mem_sel_o,
    output       [1:0]  mem_tag_o
);

// ВСЕ сигналы просто проходят ко всем устройствам

assign palette_cyc_o = wb_ext_cyc_i;
assign palette_stb_o = wb_ext_stb_i;
assign palette_we_o  = wb_ext_we_i;
assign palette_adr_o = wb_ext_adr_i[15:0];
assign palette_dat_o = wb_ext_dat_i;
assign palette_sel_o = wb_ext_sel_i;
assign palette_tag_o = wb_ext_tag_i;

assign crtc_cyc_o = wb_ext_cyc_i;
assign crtc_stb_o = wb_ext_stb_i;
assign crtc_we_o  = wb_ext_we_i;
assign crtc_adr_o = wb_ext_adr_i[15:0];
assign crtc_dat_o = wb_ext_dat_i;
assign crtc_sel_o = wb_ext_sel_i;
assign crtc_tag_o = wb_ext_tag_i;

assign mem_cyc_o = wb_ext_cyc_i;
assign mem_stb_o = wb_ext_stb_i;
assign mem_we_o  = wb_ext_we_i;
assign mem_adr_o = wb_ext_adr_i;
assign mem_dat_o = wb_ext_dat_i;
assign mem_sel_o = wb_ext_sel_i;
assign mem_tag_o = wb_ext_tag_i;


// Мультиплексируем ответы ОТ устройств
always @(*) begin
    wb_ext_ack_o = 1'b0;
    wb_ext_dat_o = 16'b0;
    wb_ext_sel_o = 1'b0;
    
    if (wb_ext_cyc_i && wb_ext_stb_i) begin
        // Приоритет: первое условие выигрывает
        if (palette_sel_i) begin
            wb_ext_ack_o = palette_ack_i;
            wb_ext_dat_o = palette_dat_i;
            wb_ext_sel_o = 1'b1;
        end else if (crtc_sel_i) begin
            wb_ext_ack_o = crtc_ack_i;
            wb_ext_dat_o = crtc_dat_i;
            wb_ext_sel_o = 1'b1;
        end else if (mem_sel_i) begin
            wb_ext_ack_o = mem_ack_i;
            wb_ext_dat_o = mem_dat_i;
            wb_ext_sel_o = 1'b1;
        end
        // Если никто не ответил - ack=0 (timeout на верхнем уровне)
    end
end

endmodule

// wb_arbiter_internal.v - ПРОСТОЙ распределитель
`default_nettype none

module wb_arbiter_internal (
    input clk, rst,
    
    // External Wishbone Interface
    input               wb_ext_cyc_i,
    input               wb_ext_stb_i,
    output reg          wb_ext_ack_o,
    input               wb_ext_we_i,
    input        [23:0] wb_ext_adr_i,
    input        [15:0] wb_ext_dat_i,
    output reg   [15:0] wb_ext_dat_o,
    input        [1:0]  wb_ext_sel_i,
    input        [1:0]  wb_ext_tag_i,
    
    // Internal Device Interfaces - ВСЕ сигналы идут ко всем устройствам
    output reg          palette_cyc_o,
    output reg          palette_stb_o,
    input               palette_ack_i,
    output reg          palette_we_o,
    output reg   [15:0] palette_adr_o,
    output reg   [15:0] palette_dat_o,
    input        [15:0] palette_dat_i,
    output reg   [1:0]  palette_sel_o,
    
    output reg          crtc_cyc_o,
    output reg          crtc_stb_o,
    input               crtc_ack_i,
    output reg          crtc_we_o,
    output reg   [15:0] crtc_adr_o,
    output reg   [15:0] crtc_dat_o,
    input        [15:0] crtc_dat_i,
    output reg   [1:0]  crtc_sel_o,
    
    output reg          mem_cyc_o,
    output reg          mem_stb_o,
    input               mem_ack_i,
    output reg          mem_we_o,
    output reg   [23:0] mem_adr_o,
    output reg   [15:0] mem_dat_o,
    input        [15:0] mem_dat_i,
    output reg   [1:0]  mem_sel_o,
    output reg   [1:0]  mem_tag_o
);

// ВСЕ сигналы просто проходят ко всем устройствам
always @(*) begin
    palette_cyc_o = wb_ext_cyc_i;
    palette_stb_o = wb_ext_stb_i;
    palette_we_o  = wb_ext_we_i;
    palette_adr_o = wb_ext_adr_i[15:0];
    palette_dat_o = wb_ext_dat_i;
    palette_sel_o = wb_ext_sel_i;
    
    crtc_cyc_o = wb_ext_cyc_i;
    crtc_stb_o = wb_ext_stb_i;
    crtc_we_o  = wb_ext_we_i;
    crtc_adr_o = wb_ext_adr_i[15:0];
    crtc_dat_o = wb_ext_dat_i;
    crtc_sel_o = wb_ext_sel_i;
    
    mem_cyc_o = wb_ext_cyc_i;
    mem_stb_o = wb_ext_stb_i;
    mem_we_o  = wb_ext_we_i;
    mem_adr_o = wb_ext_adr_i;
    mem_dat_o = wb_ext_dat_i;
    mem_sel_o = wb_ext_sel_i;
    mem_tag_o = wb_ext_tag_i;
end

// Мультиплексируем ответы ОТ устройств
always @(*) begin
    wb_ext_ack_o = 1'b0;
    wb_ext_dat_o = 16'b0;
    
    if (wb_ext_cyc_i && wb_ext_stb_i) begin
        // Приоритет: первое условие выигрывает
        if (palette_ack_i) begin
            wb_ext_ack_o = palette_ack_i;
            wb_ext_dat_o = palette_dat_i;
        end else if (crtc_ack_i) begin
            wb_ext_ack_o = crtc_ack_i;
            wb_ext_dat_o = crtc_dat_i;
        end else if (mem_ack_i) begin
            wb_ext_ack_o = mem_ack_i;
            wb_ext_dat_o = mem_dat_i;
        end
        // Если никто не ответил - ack=0 (timeout на верхнем уровне)
    end
end

endmodule

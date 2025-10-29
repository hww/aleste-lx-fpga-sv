// wb_arbiter_internal.v - ПРОСТОЙ распределитель
`default_nettype none

module system_arbiter (
    input logic         clk, 
    input logic         clke, 
    input logic         rst,
    
    // ==========================================
    // External Wishbone Interface
    // ==========================================
    input  logic        wb_ext_cyc_i,
    input  logic        wb_ext_stb_i,
    output logic        wb_ext_grant_o,
    output logic        wb_ext_ack_o,
    input  logic        wb_ext_we_i,
    input  logic [23:0] wb_ext_adr_i,
    input  logic [7:0]  wb_ext_dat_i,
    output logic [7:0]  wb_ext_dat_o,
    input  logic [1:0]  wb_ext_tag_i,
    
    // ==========================================
    // Internal Device Interfaces - ВСЕ сигналы 
    // идут ко всем устройствам
    // ==========================================

    // Color Palette
    output logic        palette_cyc_o,
    output logic        palette_stb_o,
    input  logic        palette_grant_i,    
    input  logic        palette_ack_i,
    output logic        palette_we_o,
    output logic [23:0] palette_adr_o,
    output logic [7:0]  palette_dat_o,
    input  logic [7:0]  palette_dat_i,
    output logic [1:0]  palette_tag_o,

    // CRTClogicroller
    output logic        crtc_cyc_o,
    output logic        crtc_stb_o,
    input  logic        crtc_grant_i,
    input  logic        crtc_ack_i,
    output logic        crtc_we_o,
    output logic [23:0] crtc_adr_o,
    output logic [7:0]  crtc_dat_o,
    input  logic [7:0]  crtc_dat_i,
    output logic [1:0]  crtc_tag_o,
    
    // Memory Controller
    output logic         mem_cyc_o,
    output logic         mem_stb_o,
    input  logic         mem_grant_i,
    input  logic         mem_ack_i,
    output logic         mem_we_o,
    output logic  [23:0] mem_adr_o,
    output logic  [7:0]  mem_dat_o,
    input  logic  [7:0]  mem_dat_i,
    output logic  [1:0]  mem_tag_o
);
// ==========================================
// ВСЕ сигналы просто проходят ко всем устройствам
// ==========================================

// Color Palette
assign palette_cyc_o = wb_ext_cyc_i;
assign palette_stb_o = wb_ext_stb_i;
assign palette_we_o  = wb_ext_we_i;
assign palette_adr_o = wb_ext_adr_i;
assign palette_dat_o = wb_ext_dat_i;
assign palette_tag_o = wb_ext_tag_i;

// CRTC Controller
assign crtc_cyc_o = wb_ext_cyc_i;
assign crtc_stb_o = wb_ext_stb_i;
assign crtc_we_o  = wb_ext_we_i;
assign crtc_adr_o = wb_ext_adr_i;
assign crtc_dat_o = wb_ext_dat_i;
assign crtc_tag_o = wb_ext_tag_i;

// Memory Controller
assign mem_cyc_o = wb_ext_cyc_i;
assign mem_stb_o = wb_ext_stb_i;
assign mem_we_o  = wb_ext_we_i;
assign mem_adr_o = wb_ext_adr_i;
assign mem_dat_o = wb_ext_dat_i;
assign mem_tag_o = wb_ext_tag_i;


// Мультиплексируем ответы ОТ устройств
always @(*) begin
    wb_ext_ack_o = 1'b0;
    wb_ext_dat_o = 16'b0;
    wb_ext_grant_o = 1'b0;
    
    if (wb_ext_cyc_i && wb_ext_stb_i) begin
        // Приоритет: первое условие выигрывает
        if (palette_grant_i) begin
            wb_ext_ack_o = palette_ack_i;
            wb_ext_dat_o = palette_dat_i;
            wb_ext_grant_o = 1'b1;
        end else if (crtc_grant_i) begin
            wb_ext_ack_o = crtc_ack_i;
            wb_ext_dat_o = crtc_dat_i;
            wb_ext_grant_o = 1'b1;
        end else if (mem_grant_i) begin
            wb_ext_ack_o = mem_ack_i;
            wb_ext_dat_o = mem_dat_i;
            wb_ext_grant_o = 1'b1;
        end
        // Если никто не ответил - ack=0 (timeout на верхнем уровне)
        // Это потому что доступ от видеоконтроллера на более низком 
        // Уровне
    end
end

endmodule

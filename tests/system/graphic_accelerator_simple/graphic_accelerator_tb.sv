`timescale 1ns/1ps

module graphic_accelerator_tb(
    // Тактирование и сброс
    input  logic        clk_i;
    input  logic        rst_i;
    input  logic        cke_i;
    
    // Wishbone Slave Interface (конфигурация)
    input  logic        wb_cyc_i;
    input  logic        wb_stb_i;
    input  logic        wb_we_i;
    input  logic [3:0]  wb_sel_i;
    input  logic [31:0] wb_adr_i;
    input  logic [31:0] wb_dat_i;
    output logic [31:0] wb_dat_o;
    output logic        wb_ack_o;
    output logic        wb_err_o;
    
    // Wishbone Master Interface (доступ к памяти)
    output logic        wbm_cyc_o;
    output logic        wbm_stb_o;
    output logic        wbm_we_o;
    output logic [3:0]  wbm_sel_o;
    output logic [31:0] wbm_adr_o;
    output logic [31:0] wbm_dat_o;
    input  logic [31:0] wbm_dat_i;
    input  logic        wbm_ack_i;
    input  logic        wbm_err_i;
    
    // Прерывания
    output logic        irq_o;
);

    // Генератор тактовой частоты
    initial begin
        clk_i = 0;
        forever #5 clk_i = ~clk_i;
    end
    
    // DUT
    graphic_accelerator dut (
        .clk_i(clk_i),
        .rst_i(rst_i),
        .cke_i(cke_i),
        .wb_cyc_i(wb_cyc_i),
        .wb_stb_i(wb_stb_i),
        .wb_we_i(wb_we_i),
        .wb_sel_i(wb_sel_i),
        .wb_adr_i(wb_adr_i),
        .wb_dat_i(wb_dat_i),
        .wb_dat_o(wb_dat_o),
        .wb_ack_o(wb_ack_o),
        .wb_err_o(wb_err_o),
        .wbm_cyc_o(wbm_cyc_o),
        .wbm_stb_o(wbm_stb_o),
        .wbm_we_o(wbm_we_o),
        .wbm_sel_o(wbm_sel_o),
        .wbm_adr_o(wbm_adr_o),
        .wbm_dat_o(wbm_dat_o),
        .wbm_dat_i(wbm_dat_i),
        .wbm_ack_i(wbm_ack_i),
        .wbm_err_i(wbm_err_i),
        .irq_o(irq_o)
    );
    
    // Инициализация
    initial begin
        rst_i = 1;
        cke_i = 1;
        wb_cyc_i = 0;
        wb_stb_i = 0;
        wb_we_i = 0;
        wb_sel_i = 4'b0;
        wb_adr_i = 32'b0;
        wb_dat_i = 32'b0;
        wbm_dat_i = 32'b0;
        wbm_ack_i = 0;
        wbm_err_i = 0;
        
        #20 rst_i = 0;
    end
    
    // Завершение симуляции
    initial begin
        #1000 $finish;
    end
    
    // Логирование
    initial begin
        $dumpfile("graphic_accelerator_tb.vcd");
        $dumpvars(0, graphic_accelerator_tb);
    end

endmodule
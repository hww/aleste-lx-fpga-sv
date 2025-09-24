module tv80_wb_tb (
    // Global signals (from CPP to DUT)
    input          nrst_i,
    input          clk_i,
    
    // WISHBONE master interface (from DUT to CPP)
    output [15:0]  wbm_adr_o,
    output [1:0]   wbm_tga_o,
    input  [7:0]   wbm_dat_i,   // Input from CPP to DUT
    output [7:0]   wbm_dat_o,
    output         wbm_cyc_o,
    output         wbm_stb_o,
    output         wbm_we_o,
    input          wbm_ack_i,   // Input from CPP to DUT
    
    // Z80-specific interface (from CPP to DUT)
    input          nmi_req_i,
    input          int_req_i,
    input          busrq_i,
    output         busak_o
);

    //--------------------------------------------------------------------------
    // DUT Instantiation
    //--------------------------------------------------------------------------
    tv80_wb dut (
        // Global signals
        .nrst_i     (nrst_i),
        .clk_i      (clk_i),
        
        // WISHBONE master interface
        .wbm_adr_o  (wbm_adr_o),
        .wbm_tga_o  (wbm_tga_o),
        .wbm_dat_i  (wbm_dat_i),  // Direct connection from CPP
        .wbm_dat_o  (wbm_dat_o),
        .wbm_cyc_o  (wbm_cyc_o),
        .wbm_stb_o  (wbm_stb_o),
        .wbm_we_o   (wbm_we_o),
        .wbm_ack_i  (wbm_ack_i),  // Direct connection from CPP
        
        // Z80-specific interface
        .nmi_req_i  (nmi_req_i),
        .int_req_i  (int_req_i),
        .busrq_i    (busrq_i),
        .busak_o    (busak_o)
    );
    
    //--------------------------------------------------------------------------
    // Initial block for testbench setup
    //--------------------------------------------------------------------------
    initial begin
        $display("TV80 WB Testbench initialized");
    end

endmodule

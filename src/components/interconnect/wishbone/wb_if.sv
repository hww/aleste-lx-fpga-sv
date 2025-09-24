// Wishbone interface with parameterized data width and all conversion modports
interface wb_if #(
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 32
)(
    input logic clk,
    input logic rst
);
    logic [ADDR_WIDTH-1:0] adr_o;
    logic [DATA_WIDTH-1:0] dat_o;
    logic [DATA_WIDTH-1:0] dat_i;
    logic                  we_o;
    logic [DATA_WIDTH/8-1:0] sel_o;
    logic                  cyc_o;
    logic                  stb_o;
    logic                  ack_i;
    logic                  err_i;
    logic                  rty_i;
    logic                  sel_i;  // Slave address select
    
    // Standard modports
    modport master (
        output adr_o, dat_o, we_o, sel_o, cyc_o, stb_o,
        input  dat_i, ack_i, err_i, rty_i
    );
    
    modport slave (
        input  adr_o, dat_o, we_o, sel_o, cyc_o, stb_o,
        output dat_i, ack_i, err_i, rty_i, sel_i
    );
    
    // Specific width modports for converters
    modport master32 (
        output adr_o, dat_o, we_o, sel_o, cyc_o, stb_o,
        input  dat_i, ack_i, err_i, rty_i
    );
    
    modport master16 (
        output adr_o, dat_o, we_o, sel_o, cyc_o, stb_o,
        input  dat_i, ack_i, err_i, rty_i
    );
    
    modport master8 (
        output adr_o, dat_o, we_o, sel_o, cyc_o, stb_o,
        input  dat_i, ack_i, err_i, rty_i
    );
    
    modport slave32 (
        input  adr_o, dat_o, we_o, sel_o, cyc_o, stb_o,
        output dat_i, ack_i, err_i, rty_i, sel_i
    );
    
    modport slave16 (
        input  adr_o, dat_o, we_o, sel_o, cyc_o, stb_o,
        output dat_i, ack_i, err_i, rty_i, sel_i
    );
    
    modport slave8 (
        input  adr_o, dat_o, we_o, sel_o, cyc_o, stb_o,
        output dat_i, ack_i, err_i, rty_i, sel_i
    );
endinterface

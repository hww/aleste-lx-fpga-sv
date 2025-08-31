module register_file (
    input  logic        clk_i,
    input  logic        rst_i,
    input  logic        cke_i,
    
    // Register access interface
    input  logic [7:0]  reg_addr_i,
    input  logic [31:0] reg_data_i,
    input  logic        reg_write_i,
    output logic [31:0] reg_data_o,
    
    // Hardware registers
    output logic [31:0] src_base_addr_reg,
    output logic [31:0] dst_base_addr_reg,
    output logic [15:0] src_x_reg, src_y_reg,
    output logic [15:0] dst_x_reg, dst_y_reg,
    output logic [15:0] width_reg, height_reg,
    output logic [15:0] fill_color_reg,
    output logic [15:0] transparent_color_reg,
    output logic [7:0]  alpha_value_reg,
    output logic [15:0] bit_mask_pattern_reg,
    output logic [7:0]  bit_shift_offset_reg,
    output logic [7:0]  operation_mode_reg,
    output logic [7:0]  status_reg,
    
    // Control signals
    output logic        start_op_reg,
    output logic        auto_clip_reg,
    output logic        use_transparency_reg,
    output logic        enable_alpha_reg
);

// Internal registers
logic [31:0] registers [0:31];
logic [31:0] read_data;

// Register addresses (byte aligned, but we use word addressing)
localparam REG_SRC_BASE_ADDR  = 8'h00;
localparam REG_DST_BASE_ADDR  = 8'h04;
localparam REG_SRC_XY         = 8'h08;
localparam REG_DST_XY         = 8'h0C;
localparam REG_WIDTH_HEIGHT   = 8'h10;
localparam REG_FILL_COLOR     = 8'h14;
localparam REG_TRANS_COLOR    = 8'h18;
localparam REG_ALPHA_VALUE    = 8'h1C;
localparam REG_BIT_MASK       = 8'h20;
localparam REG_BIT_SHIFT      = 8'h24;
localparam REG_OP_MODE        = 8'h28;
localparam REG_STATUS         = 8'h2C;
localparam REG_CONTROL        = 8'h30;

// Write operation
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        foreach (registers[i]) registers[i] <= '0;
        start_op_reg <= 1'b0;
    end else if (cke_i && reg_write_i) begin
        case (reg_addr_i)
            REG_SRC_BASE_ADDR:  registers[0] <= reg_data_i;
            REG_DST_BASE_ADDR:  registers[1] <= reg_data_i;
            REG_SRC_XY:         registers[2] <= reg_data_i;
            REG_DST_XY:         registers[3] <= reg_data_i;
            REG_WIDTH_HEIGHT:   registers[4] <= reg_data_i;
            REG_FILL_COLOR:     registers[5] <= reg_data_i;
            REG_TRANS_COLOR:    registers[6] <= reg_data_i;
            REG_ALPHA_VALUE:    registers[7] <= reg_data_i;
            REG_BIT_MASK:       registers[8] <= reg_data_i;
            REG_BIT_SHIFT:      registers[9] <= reg_data_i;
            REG_OP_MODE:        registers[10] <= reg_data_i;
            REG_STATUS:         registers[11] <= reg_data_i; // Read-only mostly
            REG_CONTROL:        begin
                registers[12] <= reg_data_i;
                start_op_reg <= reg_data_i[0]; // Auto-clear on write
            end
            default: ; // Ignore invalid addresses
        endcase
    end else begin
        start_op_reg <= 1'b0; // Auto-clear after one cycle
    end
end

// Read operation
always_comb begin
    case (reg_addr_i)
        REG_SRC_BASE_ADDR:  read_data = registers[0];
        REG_DST_BASE_ADDR:  read_data = registers[1];
        REG_SRC_XY:         read_data = registers[2];
        REG_DST_XY:         read_data = registers[3];
        REG_WIDTH_HEIGHT:   read_data = registers[4];
        REG_FILL_COLOR:     read_data = registers[5];
        REG_TRANS_COLOR:    read_data = registers[6];
        REG_ALPHA_VALUE:    read_data = registers[7];
        REG_BIT_MASK:       read_data = registers[8];
        REG_BIT_SHIFT:      read_data = registers[9];
        REG_OP_MODE:        read_data = registers[10];
        REG_STATUS:         read_data = registers[11];
        REG_CONTROL:        read_data = registers[12];
        default:            read_data = 32'h0;
    endcase
end

// Output assignments
assign reg_data_o = read_data;

assign src_base_addr_reg = registers[0];
assign dst_base_addr_reg = registers[1];
assign src_x_reg = registers[2][31:16];
assign src_y_reg = registers[2][15:0];
assign dst_x_reg = registers[3][31:16];
assign dst_y_reg = registers[3][15:0];
assign width_reg = registers[4][31:16];
assign height_reg = registers[4][15:0];
assign fill_color_reg = registers[5][15:0];
assign transparent_color_reg = registers[6][15:0];
assign alpha_value_reg = registers[7][7:0];
assign bit_mask_pattern_reg = registers[8][15:0];
assign bit_shift_offset_reg = registers[9][7:0];
assign operation_mode_reg = registers[10][7:0];
assign status_reg = registers[11][7:0];

// Control signals from operation mode register
assign auto_clip_reg = operation_mode_reg[0];
assign use_transparency_reg = operation_mode_reg[1];
assign enable_alpha_reg = operation_mode_reg[2];

endmodule
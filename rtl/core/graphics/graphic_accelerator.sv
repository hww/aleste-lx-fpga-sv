module graphic_accelerator (
    // Тактирование и сброс
    input  logic        clk_i,          // Тактовая частота
    input  logic        rst_i,          // Сброс (активный 1)
    input  logic        cke_i,          // Clock Enable
    
    // Wishbone Slave Interface (конфигурация)
    input  logic        wb_cyc_i,
    input  logic        wb_stb_i,
    input  logic        wb_we_i,
    input  logic [3:0]  wb_sel_i,       // Byte select
    input  logic [31:0] wb_adr_i,
    input  logic [31:0] wb_dat_i,
    output logic [31:0] wb_dat_o,
    output logic        wb_ack_o,
    output logic        wb_err_o,       // Ошибка Wishbone
    
    // Wishbone Master Interface (доступ к памяти)
    output logic        wbm_cyc_o,
    output logic        wbm_stb_o,
    output logic        wbm_we_o,
    output logic [3:0]  wbm_sel_o,      // Byte select
    output logic [31:0] wbm_adr_o,
    output logic [31:0] wbm_dat_o,
    input  logic [31:0] wbm_dat_i,
    input  logic        wbm_ack_i,
    input  logic        wbm_err_i,      // Ошибка памяти
    
    // Прерывания
    output logic        irq_o           // Запрос прерывания
);

// Internal signals
logic [7:0] reg_addr;
logic [31:0] reg_data_to_file;
logic [31:0] reg_data_from_file;
logic reg_write;
logic bus_error;

// Memory controller signals
logic mem_read_req;
logic mem_write_req;
logic [31:0] mem_addr;
logic [31:0] mem_data_to_ctrl;
logic [31:0] mem_data_from_ctrl;
logic mem_ready;
logic mem_error;

// Register file outputs
logic [31:0] src_base_addr;
logic [31:0] dst_base_addr;
logic [15:0] src_x, src_y;
logic [15:0] dst_x, dst_y;
logic [15:0] width, height;
logic [15:0] fill_color;
logic [15:0] transparent_color;
logic [7:0] alpha_value;
logic [15:0] bit_mask_pattern;
logic [7:0] bit_shift_offset;
logic [7:0] operation_mode;
logic [7:0] status_reg;
logic start_op;
logic auto_clip;
logic use_transparency;
logic enable_alpha;

// New registers for fast operations
logic [15:0] char_fg_color;
logic [15:0] char_bg_color;
logic char_bg_transparent;
logic [63:0] char_pattern;
logic fast_point_enable;
logic [15:0] fast_point_data;

// Core status
logic core_busy;
logic core_done;
logic core_error;

// Instantiate modules
wishbone_interface wb_if (
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
    .reg_addr_o(reg_addr),
    .reg_data_o(reg_data_to_file),
    .reg_write_o(reg_write),
    .reg_data_i(reg_data_from_file),
    .bus_error_o(bus_error)
);

register_file reg_file (
    .clk_i(clk_i),
    .rst_i(rst_i),
    .cke_i(cke_i),
    .reg_addr_i(reg_addr),
    .reg_data_i(reg_data_to_file),
    .reg_write_i(reg_write),
    .reg_data_o(reg_data_from_file),
    .src_base_addr_reg(src_base_addr),
    .dst_base_addr_reg(dst_base_addr),
    .src_x_reg(src_x),
    .src_y_reg(src_y),
    .dst_x_reg(dst_x),
    .dst_y_reg(dst_y),
    .width_reg(width),
    .height_reg(height),
    .fill_color_reg(fill_color),
    .transparent_color_reg(transparent_color),
    .alpha_value_reg(alpha_value),
    .bit_mask_pattern_reg(bit_mask_pattern),
    .bit_shift_offset_reg(bit_shift_offset),
    .operation_mode_reg(operation_mode),
    .status_reg(status_reg),
    .start_op_reg(start_op),
    .auto_clip_reg(auto_clip),
    .use_transparency_reg(use_transparency),
    .enable_alpha_reg(enable_alpha),
    .char_fg_color_reg(char_fg_color),
    .char_bg_color_reg(char_bg_color),
    .char_bg_transparent_reg(char_bg_transparent),
    .char_pattern_reg(char_pattern),
    .fast_point_enable_reg(fast_point_enable),
    .fast_point_data_reg(fast_point_data)
);

memory_controller mem_ctrl (
    .clk_i(clk_i),
    .rst_i(rst_i),
    .cke_i(cke_i),
    .read_enable_i(mem_read_req),
    .write_enable_i(mem_write_req),
    .address_i(mem_addr),
    .data_i(mem_data_to_ctrl),
    .data_o(mem_data_from_ctrl),
    .ready_o(mem_ready),
    .error_o(mem_error),
    .wbm_cyc_o(wbm_cyc_o),
    .wbm_stb_o(wbm_stb_o),
    .wbm_we_o(wbm_we_o),
    .wbm_sel_o(wbm_sel_o),
    .wbm_adr_o(wbm_adr_o),
    .wbm_dat_o(wbm_dat_o),
    .wbm_dat_i(wbm_dat_i),
    .wbm_ack_i(wbm_ack_i),
    .wbm_err_i(wbm_err_i),
    .prefetch_enable_i(1'b1),
    .buffer_size_i(2'b11)
);

accelerator_core core (
    .clk_i(clk_i),
    .rst_i(rst_i),
    .cke_i(cke_i),
    .src_base_addr_i(src_base_addr),
    .dst_base_addr_i(dst_base_addr),
    .src_x_i(src_x),
    .src_y_i(src_y),
    .dst_x_i(dst_x),
    .dst_y_i(dst_y),
    .width_i(width),
    .height_i(height),
    .fill_color_i(fill_color),
    .transparent_color_i(transparent_color),
    .start_i(start_op),
    .operation_mode_i(operation_mode),
    .char_fg_color_i(char_fg_color),
    .char_bg_color_i(char_bg_color),
    .char_bg_transparent_i(char_bg_transparent),
    .char_pattern_i(char_pattern),
    .fast_point_enable_i(fast_point_enable),
    .fast_point_data_i(fast_point_data),
    .mem_read_req_o(mem_read_req),
    .mem_write_req_o(mem_write_req),
    .mem_addr_o(mem_addr),
    .mem_data_o(mem_data_to_ctrl),
    .mem_data_i(mem_data_from_ctrl),
    .mem_ready_i(mem_ready),
    .busy_o(core_busy),
    .done_o(core_done),
    .error_o(core_error)
);

// Interrupt generation
assign irq_o = core_done || core_error || mem_error;

// Update status register
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        status_reg <= 8'h0;
    end else if (cke_i) begin
        status_reg[0] <= core_busy;
        status_reg[1] <= core_done;
        status_reg[2] <= core_error;
        status_reg[3] <= mem_error;
        status_reg[4] <= bus_error;
        // Other status bits...
    end
end

endmodule
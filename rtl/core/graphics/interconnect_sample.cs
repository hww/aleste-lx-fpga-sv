// Пример соединения модулей
accelerator_core core (
    .clk_i(clk_i),
    .rst_i(rst_i),
    .cke_i(cke_i),
    .src_base_addr_i(reg_file.src_base_addr_reg),
    .dst_base_addr_i(reg_file.dst_base_addr_reg),
    // ... все регистры
    .mem_read_req_o(mem_ctrl.read_enable_i),
    .mem_write_req_o(mem_ctrl.write_enable_i),
    .mem_addr_o(mem_ctrl.address_i),
    .mem_data_o(mem_ctrl.data_i),
    .mem_data_i(mem_ctrl.data_o),
    .mem_ready_i(mem_ctrl.ready_o),
    .busy_o(status_reg.busy),
    .done_o(status_reg.done)
);
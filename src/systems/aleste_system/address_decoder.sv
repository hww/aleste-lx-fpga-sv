`default_nettype none

module address_decoder (
    input  logic        cfg_legacy_i,

    input  logic [23:0] wb_adr_i,
    output logic [2:0]  wb_tag_o,           // ← output

    output logic [7:0]  cs_native_o,        // 8 устройств в native space
    output logic [7:0]  cs_system_o,        // system devices  
    output logic [7:0]  cs_legacy_o         // legacy devices
);


// Address regions
logic mmio_space    = (wb_adr_i[23:16] == 8'hFF);
logic mmio_native   = mmio_space && !wb_adr_i[15] && !wb_adr_i[14];  // 0xFF0000-0xFF3FFF
logic mmio_legacy   = mmio_space &&  wb_adr_i[15] &&  wb_adr_i[14];  // 0xFF4000-0xFFFFFF

// TAG encoding - mutually exclusive
always_comb begin
    wb_tag_o = 3'b000;
    if (mmio_native)       wb_tag_o = 3'b010;  // Native IO
    else if (mmio_legacy)  wb_tag_o = 3'b100;  // Legacy IO  
    else                   wb_tag_o = 3'b001;  // Memory space
end

// Native devices (8 units, 4KB each)
assign cs_native_o[0] = mmio_native && (wb_adr_i[10:8] == 3'b000); // system devices live here
assign cs_native_o[1] = mmio_native && (wb_adr_i[10:8] == 3'b001); // legacy devices live here  
assign cs_native_o[2] = mmio_native && (wb_adr_i[10:8] == 3'b010); // 0xFF1000-0xFF17FF
assign cs_native_o[3] = mmio_native && (wb_adr_i[10:8] == 3'b011); // 0xFF1800-0xFF1FFF
assign cs_native_o[4] = mmio_native && (wb_adr_i[10:8] == 3'b100); // 0xFF2000-0xFF27FF
assign cs_native_o[5] = mmio_native && (wb_adr_i[10:8] == 3'b101); // 0xFF2800-0xFF2FFF
assign cs_native_o[6] = mmio_native && (wb_adr_i[10:8] == 3'b110); // 0xFF3000-0xFF37FF
assign cs_native_o[7] = mmio_native && (wb_adr_i[10:8] == 3'b111); // 0xFF3800-0xFF3FFF

// System devices (8 devices, 32 bytes each) - в первом native блоке
assign cs_system_o[0] = cs_native_o[0] && (wb_adr_i[7:5] == 3'b000); 
assign cs_system_o[1] = cs_native_o[0] && (wb_adr_i[7:5] == 3'b001);
assign cs_system_o[2] = cs_native_o[0] && (wb_adr_i[7:5] == 3'b010);
assign cs_system_o[3] = cs_native_o[0] && (wb_adr_i[7:5] == 3'b011);
assign cs_system_o[4] = cs_native_o[0] && (wb_adr_i[7:5] == 3'b100);
assign cs_system_o[5] = cs_native_o[0] && (wb_adr_i[7:5] == 3'b101);
assign cs_system_o[6] = cs_native_o[0] && (wb_adr_i[7:5] == 3'b110);
assign cs_system_o[7] = cs_native_o[0] && (wb_adr_i[7:5] == 3'b111);

// Legacy devices (8 devices, 32 bytes each) - во втором native блоке  
assign cs_legacy_o[0] = cs_native_o[1] && (wb_adr_i[7:5] == 3'b000);
assign cs_legacy_o[1] = cs_native_o[1] && (wb_adr_i[7:5] == 3'b001);
assign cs_legacy_o[2] = cs_native_o[1] && (wb_adr_i[7:5] == 3'b010);
assign cs_legacy_o[3] = cs_native_o[1] && (wb_adr_i[7:5] == 3'b011);
assign cs_legacy_o[4] = cs_native_o[1] && (wb_adr_i[7:5] == 3'b100);
assign cs_legacy_o[5] = cs_native_o[1] && (wb_adr_i[7:5] == 3'b101);
assign cs_legacy_o[6] = cs_native_o[1] && (wb_adr_i[7:5] == 3'b110);
assign cs_legacy_o[7] = cs_native_o[1] && (wb_adr_i[7:5] == 3'b111);

endmodule

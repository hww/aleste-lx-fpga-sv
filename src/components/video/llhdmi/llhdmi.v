`default_nettype none

module llhdmi #(
  // Register input color with latency 1
  parameter INPUT_LATENCY = 0,
  // Timing parameters for 640x480 @ 60Hz
  parameter H_VISIBLE     = 640,
  parameter H_FRONT_PORCH = 16,
  parameter H_SYNC_PULSE  = 96,
  parameter H_BACK_PORCH  = 48,

  parameter V_VISIBLE     = 480,
  parameter V_FRONT_PORCH = 10,
  parameter V_SYNC_PULSE  = 2,
  parameter V_BACK_PORCH  = 33,
  
  // TMDS parameters
  parameter TMDS_WIDTH    = 10,
  parameter PIXEL_RATIO   = 10  // i_tmdsclk : i_pixclk ratio
)(
  // Clock inputs
  input  wire i_tmdsclk,        // TMDS clock (10x pixel clock)
  input  wire i_pixclk,         // Pixel clock
  
  // Control inputs
  input  wire i_reset,          // Active high reset
  
  // Pixel data inputs
  input  wire [7:0] i_red,      // Red color component
  input  wire [7:0] i_grn,      // Green color component  
  input  wire [7:0] i_blu,      // Blue color component
  
  // Status outputs
  output wire o_rd,             // Ready to accept pixel data
  output wire o_newline,        // Last pixel of line pulse
  output wire o_newframe,       // Last pixel of frame pulse
  output wire o_resline,        // Last pixel of line pulse
  output wire o_resframe,       // Last pixel of frame pulse

  // TMDS outputs
  output wire o_red,            // Red TMDS data stream
  output wire o_grn,            // Green TMDS data stream
  output wire o_blu,            // Blue TMDS data stream
  output wire [10:0] o_x,       // Needs to count up to 799
  output wire [9:0]  o_y        // Needs to count up to 524

  // Debug outputs (Verilator only)
`ifdef VERILATOR
  ,                             // Blue TMDS data stream
  output wire [TMDS_WIDTH-1:0] o_TMDS_red,
  output wire [TMDS_WIDTH-1:0] o_TMDS_grn, 
  output wire [TMDS_WIDTH-1:0] o_TMDS_blu
`endif
);
  localparam H_TOTAL       = H_VISIBLE + H_FRONT_PORCH + H_SYNC_PULSE + H_BACK_PORCH;
  localparam V_TOTAL       = V_VISIBLE + V_FRONT_PORCH + V_SYNC_PULSE + V_BACK_PORCH;
  
  // Sync pulse positions
  localparam H_SYNC_START  = H_VISIBLE + H_FRONT_PORCH;
  localparam H_SYNC_END    = H_SYNC_START + H_SYNC_PULSE;
  localparam V_SYNC_START  = V_VISIBLE + V_FRONT_PORCH;
  localparam V_SYNC_END    = V_SYNC_START + V_SYNC_PULSE;


  // Pixel position counters
  reg [10:0] CounterX = 0;  // Needs to count up to 799
  reg [9:0]  CounterY = 0;  // Needs to count up to 524

  assign o_x = CounterX;
  assign o_y = CounterY;
  
  // Sync and control signals
  reg hSync = 0;
  reg vSync = 0;
  reg DrawArea = 0;

  assign o_resline = CounterX == H_TOTAL - 1;
  // Horizontal counter
  always @(posedge i_pixclk) begin
    if (i_reset) begin
      CounterX <= 0;
    end else begin
      if (o_resline) begin
        CounterX <= 0;
      end else begin
        CounterX <= CounterX + 1;
      end
    end
  end

  assign o_resframe = CounterY == V_TOTAL - 1;
  // Vertical counter (increments at end of each line)
  always @(posedge i_pixclk) begin
    if (i_reset) begin
      CounterY <= 0;
    end else if (o_resline) begin
      if (o_resframe) begin
        CounterY <= 0;
      end else begin
        CounterY <= CounterY + 1;
      end
    end
  end

  reg newline = 0;
  reg newframe = 0;

  // New line/frame detection
  always @(posedge i_pixclk) begin
    newline  <= (CounterX == H_VISIBLE - 1) ? 1'b1 : 1'b0;
    newframe <= (CounterX == H_VISIBLE - 1) && (CounterY == V_VISIBLE - 1) ? 1'b1 : 1'b0;
  end

  assign o_newline = newline;
  assign o_newframe = newframe;

  // Draw area detection
  always @(posedge i_pixclk) begin
    DrawArea <= (CounterX < H_VISIBLE) && (CounterY < V_VISIBLE);
  end

  // Ready signal - can accept pixel data when in draw area and not reset
  assign o_rd = ~i_reset & DrawArea;

  // Sync pulse generation
  always @(posedge i_pixclk) begin
    hSync <= (CounterX >= H_SYNC_START) && (CounterX < H_SYNC_END);
    vSync <= (CounterY >= V_SYNC_START) && (CounterY < V_SYNC_END);
  end
  
  // =================================================
  // Added by h2w the register on input color
  // =================================================

  // There are latch registers for signals
  reg [7:0] red_ff = 0;
  reg [7:0] grn_ff = 0;
  reg [7:0] blu_ff = 0;
  reg [1:0] cd_ff = 0;
  reg draw_area_ff = 0;
  
  wire [7:0] cur_red;
  wire [7:0] cur_grn;
  wire [7:0] cur_blu;
  wire [1:0] cur_cd;
  wire cur_draw_area;

  // Latch colors and control signals
  always @(posedge i_pixclk) begin
    red_ff <= i_red;
    grn_ff <= i_grn;
    blu_ff <= i_blu;
    cd_ff  <= {vSync, hSync};
    draw_area_ff <= DrawArea;
  end

  // Select active signals
  assign cur_red   = (INPUT_LATENCY == 1)     ? red_ff   : i_red;
  assign cur_grn   = (INPUT_LATENCY == 1)     ? grn_ff : i_grn;
  assign cur_blu   = (INPUT_LATENCY == 1)     ? blu_ff  : i_blu;
  assign cur_cd    = (INPUT_LATENCY == 1)     ? cd_ff    : {vSync, hSync};
  assign cur_draw_area = (INPUT_LATENCY == 1) ? draw_area_ff : DrawArea;

  // =================================================
  // TMDS encoding
  // =================================================

  wire [TMDS_WIDTH-1:0] TMDS_red, TMDS_grn, TMDS_blu;
  
  tmds_encoder #(
  ) encode_R (
    .clk(i_pixclk),
    .VD(cur_red),
    .CD(2'b00),           // Control data for red channel
    .VDE(cur_draw_area),
    .TMDS(TMDS_red)
  );
  
  tmds_encoder #(
  ) encode_G (
    .clk(i_pixclk),
    .VD(cur_grn),
    .CD(2'b00),           // Control data for green channel
    .VDE(DrawArea),
    .TMDS(TMDS_grn)
  );
  
  tmds_encoder #(
  ) encode_B (
    .clk(i_pixclk), 
    .VD(cur_blu),
    .CD(cur_cd),  // Sync signals on blue channel
    .VDE(cur_draw_area),
    .TMDS(TMDS_blu)
  );

  // TMDS clock domain crossing and serialization
  reg [3:0] TMDS_mod10 = 0;
  reg TMDS_shift_load = 0;
  
  // Generate load pulse every 10 TMDS clocks
  always @(posedge i_tmdsclk) begin
    if (i_reset) begin
      TMDS_mod10 <= 0;
      TMDS_shift_load <= 0;
    end else begin
      if (TMDS_mod10 == PIXEL_RATIO - 1) begin
        TMDS_mod10 <= 0;
        TMDS_shift_load <= 1'b1;
      end else begin
        TMDS_mod10 <= TMDS_mod10 + 1;
        TMDS_shift_load <= 1'b0;
      end
    end
  end

  // TMDS shift registers
  reg [TMDS_WIDTH-1:0] TMDS_shift_red = 0;
  reg [TMDS_WIDTH-1:0] TMDS_shift_grn = 0; 
  reg [TMDS_WIDTH-1:0] TMDS_shift_blu = 0;
  
  always @(posedge i_tmdsclk) begin
    if (i_reset) begin
      TMDS_shift_red <= 0;
      TMDS_shift_grn <= 0;
      TMDS_shift_blu <= 0;
    end else begin
      if (TMDS_shift_load) begin
        // Load new TMDS word
        TMDS_shift_red <= TMDS_red;
        TMDS_shift_grn <= TMDS_grn;
        TMDS_shift_blu <= TMDS_blu;
      end else begin
        // Shift out bits
        TMDS_shift_red <= {1'b0, TMDS_shift_red[TMDS_WIDTH-1:1]};
        TMDS_shift_grn <= {1'b0, TMDS_shift_grn[TMDS_WIDTH-1:1]};
        TMDS_shift_blu <= {1'b0, TMDS_shift_blu[TMDS_WIDTH-1:1]};
      end
    end
  end

  // Serial TMDS outputs
  assign o_red = TMDS_shift_red[0];
  assign o_grn = TMDS_shift_grn[0];
  assign o_blu = TMDS_shift_blu[0];

  // Debug outputs for Verilator
`ifdef VERILATOR
  assign o_TMDS_red = TMDS_red;
  assign o_TMDS_grn = TMDS_grn;
  assign o_TMDS_blu = TMDS_blu;
`endif

endmodule
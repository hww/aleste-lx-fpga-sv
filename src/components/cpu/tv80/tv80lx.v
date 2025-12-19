`define TV80DELAY

module tv80lx (
  // Outputs
  m1_n, mreq_n, iorq_n, rd_n, wr_n, rfsh_n, halt_n, busak_n, A, dout, 
  // Inputs
  reset_n, clk, cen, wait_n, int_n, nmi_n, busrq_n, di
);

  parameter Mode = 0;    // 0 => Z80, 1 => Fast Z80, 2 => 8080, 3 => GB
  parameter T2Write = 1; // 0 => wr_n active in T3, /=0 => wr_n active in T2
  parameter IOWait  = 1; // 0 => Single cycle I/O, 1 => Std I/O cycle
  
  input         reset_n; 
  input         clk; 
  input         cen;
  input         wait_n; 
  input         int_n; 
  input         nmi_n; 
  input         busrq_n; 
  output        m1_n; 
  output        mreq_n; 
  output        iorq_n; 
  output        rd_n; 
  output        wr_n; 
  output        rfsh_n; 
  output        halt_n; 
  output        busak_n; 
  output [15:0] A;
  input [7:0]   di;
  output [7:0]  dout;

  reg           mreq_n; 
  reg           iorq_n; 
  reg           rd_n; 
  reg           wr_n; 
  
  // Комбинационные сигналы для быстрой реакции на wait_n
  wire          nxt_rd_n;
  wire          nxt_wr_n;
  wire          nxt_iorq_n;
  wire          nxt_mreq_n;

  wire          intcycle_n;
  wire          no_read;
  wire          write;
  wire          iorq;
  reg [7:0]     di_reg;
  wire [6:0]    mcycle;
  wire [6:0]    tstate;

  tv80_core #(Mode, IOWait) i_tv80_core (
     .cen (cen),
     .m1_n (m1_n),
     .iorq (iorq),
     .no_read (no_read),
     .write (write),
     .rfsh_n (rfsh_n),
     .halt_n (halt_n),
     .wait_n (wait_n),
     .int_n (int_n),
     .nmi_n (nmi_n),
     .reset_n (reset_n),
     .busrq_n (busrq_n),
     .busak_n (busak_n),
     .clk (clk),
     .IntE (),
     .stop (),
     .A (A),
     .dinst (di),
     .di (di_reg),
     .dout (dout),
     .mc (mcycle),
     .ts (tstate),
     .intcycle_n (intcycle_n)
  );  

  // Комбинационная логика с быстрой реакцией на wait_n (как в tv80n)
  always @* begin
    nxt_mreq_n = 1;
    nxt_rd_n   = 1;
    nxt_iorq_n = 1;
    nxt_wr_n   = 1;
    
    if (mcycle[0]) begin
      if (tstate[1] || (tstate[2] && !wait_n)) begin
        nxt_rd_n = ~ intcycle_n;
        nxt_mreq_n = ~ intcycle_n;
        nxt_iorq_n = intcycle_n;
      end
    end else begin
      if ((tstate[1] || (tstate[2] && !wait_n)) && !no_read && !write) begin
        nxt_rd_n = 1'b0;
        nxt_iorq_n = ~ iorq;
        nxt_mreq_n = iorq;
      end
      
      // Быстрая запись (T2Write=1)
      if ((tstate[1] || (tstate[2] && !wait_n)) && write) begin
        nxt_wr_n = 1'b0;
        nxt_iorq_n = ~ iorq;
        nxt_mreq_n = iorq;
      end
    end
  end

  // Регистры по фронту (как в tv80s)
  always @(posedge clk or negedge reset_n) begin
    if (!reset_n) begin
      rd_n   <= `TV80DELAY 1'b1;
      wr_n   <= `TV80DELAY 1'b1;
      iorq_n <= `TV80DELAY 1'b1;
      mreq_n <= `TV80DELAY 1'b1;
      di_reg <= `TV80DELAY 0;
    end else if (cen) begin  // Учет внешнего cen
      rd_n   <= `TV80DELAY nxt_rd_n;
      wr_n   <= `TV80DELAY nxt_wr_n;
      iorq_n <= `TV80DELAY nxt_iorq_n;
      mreq_n <= `TV80DELAY nxt_mreq_n;
      
      if (tstate[2] && wait_n && !write && !no_read)
        di_reg <= `TV80DELAY di;
    end
  end
  
endmodule


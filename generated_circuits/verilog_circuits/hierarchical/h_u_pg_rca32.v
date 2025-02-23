module xor_gate(input a, input b, output out);
  assign out = a ^ b;
endmodule

module and_gate(input a, input b, output out);
  assign out = a & b;
endmodule

module or_gate(input a, input b, output out);
  assign out = a | b;
endmodule

module pg_fa(input [0:0] a, input [0:0] b, input [0:0] cin, output [0:0] pg_fa_xor0, output [0:0] pg_fa_and0, output [0:0] pg_fa_xor1);
  xor_gate xor_gate_pg_fa_xor0(.a(a[0]), .b(b[0]), .out(pg_fa_xor0));
  and_gate and_gate_pg_fa_and0(.a(a[0]), .b(b[0]), .out(pg_fa_and0));
  xor_gate xor_gate_pg_fa_xor1(.a(pg_fa_xor0[0]), .b(cin[0]), .out(pg_fa_xor1));
endmodule

module h_u_pg_rca32(input [31:0] a, input [31:0] b, output [32:0] h_u_pg_rca32_out);
  wire [0:0] h_u_pg_rca32_pg_fa0_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa0_and0;
  wire [0:0] h_u_pg_rca32_pg_fa1_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa1_and0;
  wire [0:0] h_u_pg_rca32_pg_fa1_xor1;
  wire [0:0] h_u_pg_rca32_and1;
  wire [0:0] h_u_pg_rca32_or1;
  wire [0:0] h_u_pg_rca32_pg_fa2_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa2_and0;
  wire [0:0] h_u_pg_rca32_pg_fa2_xor1;
  wire [0:0] h_u_pg_rca32_and2;
  wire [0:0] h_u_pg_rca32_or2;
  wire [0:0] h_u_pg_rca32_pg_fa3_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa3_and0;
  wire [0:0] h_u_pg_rca32_pg_fa3_xor1;
  wire [0:0] h_u_pg_rca32_and3;
  wire [0:0] h_u_pg_rca32_or3;
  wire [0:0] h_u_pg_rca32_pg_fa4_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa4_and0;
  wire [0:0] h_u_pg_rca32_pg_fa4_xor1;
  wire [0:0] h_u_pg_rca32_and4;
  wire [0:0] h_u_pg_rca32_or4;
  wire [0:0] h_u_pg_rca32_pg_fa5_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa5_and0;
  wire [0:0] h_u_pg_rca32_pg_fa5_xor1;
  wire [0:0] h_u_pg_rca32_and5;
  wire [0:0] h_u_pg_rca32_or5;
  wire [0:0] h_u_pg_rca32_pg_fa6_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa6_and0;
  wire [0:0] h_u_pg_rca32_pg_fa6_xor1;
  wire [0:0] h_u_pg_rca32_and6;
  wire [0:0] h_u_pg_rca32_or6;
  wire [0:0] h_u_pg_rca32_pg_fa7_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa7_and0;
  wire [0:0] h_u_pg_rca32_pg_fa7_xor1;
  wire [0:0] h_u_pg_rca32_and7;
  wire [0:0] h_u_pg_rca32_or7;
  wire [0:0] h_u_pg_rca32_pg_fa8_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa8_and0;
  wire [0:0] h_u_pg_rca32_pg_fa8_xor1;
  wire [0:0] h_u_pg_rca32_and8;
  wire [0:0] h_u_pg_rca32_or8;
  wire [0:0] h_u_pg_rca32_pg_fa9_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa9_and0;
  wire [0:0] h_u_pg_rca32_pg_fa9_xor1;
  wire [0:0] h_u_pg_rca32_and9;
  wire [0:0] h_u_pg_rca32_or9;
  wire [0:0] h_u_pg_rca32_pg_fa10_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa10_and0;
  wire [0:0] h_u_pg_rca32_pg_fa10_xor1;
  wire [0:0] h_u_pg_rca32_and10;
  wire [0:0] h_u_pg_rca32_or10;
  wire [0:0] h_u_pg_rca32_pg_fa11_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa11_and0;
  wire [0:0] h_u_pg_rca32_pg_fa11_xor1;
  wire [0:0] h_u_pg_rca32_and11;
  wire [0:0] h_u_pg_rca32_or11;
  wire [0:0] h_u_pg_rca32_pg_fa12_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa12_and0;
  wire [0:0] h_u_pg_rca32_pg_fa12_xor1;
  wire [0:0] h_u_pg_rca32_and12;
  wire [0:0] h_u_pg_rca32_or12;
  wire [0:0] h_u_pg_rca32_pg_fa13_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa13_and0;
  wire [0:0] h_u_pg_rca32_pg_fa13_xor1;
  wire [0:0] h_u_pg_rca32_and13;
  wire [0:0] h_u_pg_rca32_or13;
  wire [0:0] h_u_pg_rca32_pg_fa14_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa14_and0;
  wire [0:0] h_u_pg_rca32_pg_fa14_xor1;
  wire [0:0] h_u_pg_rca32_and14;
  wire [0:0] h_u_pg_rca32_or14;
  wire [0:0] h_u_pg_rca32_pg_fa15_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa15_and0;
  wire [0:0] h_u_pg_rca32_pg_fa15_xor1;
  wire [0:0] h_u_pg_rca32_and15;
  wire [0:0] h_u_pg_rca32_or15;
  wire [0:0] h_u_pg_rca32_pg_fa16_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa16_and0;
  wire [0:0] h_u_pg_rca32_pg_fa16_xor1;
  wire [0:0] h_u_pg_rca32_and16;
  wire [0:0] h_u_pg_rca32_or16;
  wire [0:0] h_u_pg_rca32_pg_fa17_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa17_and0;
  wire [0:0] h_u_pg_rca32_pg_fa17_xor1;
  wire [0:0] h_u_pg_rca32_and17;
  wire [0:0] h_u_pg_rca32_or17;
  wire [0:0] h_u_pg_rca32_pg_fa18_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa18_and0;
  wire [0:0] h_u_pg_rca32_pg_fa18_xor1;
  wire [0:0] h_u_pg_rca32_and18;
  wire [0:0] h_u_pg_rca32_or18;
  wire [0:0] h_u_pg_rca32_pg_fa19_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa19_and0;
  wire [0:0] h_u_pg_rca32_pg_fa19_xor1;
  wire [0:0] h_u_pg_rca32_and19;
  wire [0:0] h_u_pg_rca32_or19;
  wire [0:0] h_u_pg_rca32_pg_fa20_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa20_and0;
  wire [0:0] h_u_pg_rca32_pg_fa20_xor1;
  wire [0:0] h_u_pg_rca32_and20;
  wire [0:0] h_u_pg_rca32_or20;
  wire [0:0] h_u_pg_rca32_pg_fa21_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa21_and0;
  wire [0:0] h_u_pg_rca32_pg_fa21_xor1;
  wire [0:0] h_u_pg_rca32_and21;
  wire [0:0] h_u_pg_rca32_or21;
  wire [0:0] h_u_pg_rca32_pg_fa22_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa22_and0;
  wire [0:0] h_u_pg_rca32_pg_fa22_xor1;
  wire [0:0] h_u_pg_rca32_and22;
  wire [0:0] h_u_pg_rca32_or22;
  wire [0:0] h_u_pg_rca32_pg_fa23_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa23_and0;
  wire [0:0] h_u_pg_rca32_pg_fa23_xor1;
  wire [0:0] h_u_pg_rca32_and23;
  wire [0:0] h_u_pg_rca32_or23;
  wire [0:0] h_u_pg_rca32_pg_fa24_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa24_and0;
  wire [0:0] h_u_pg_rca32_pg_fa24_xor1;
  wire [0:0] h_u_pg_rca32_and24;
  wire [0:0] h_u_pg_rca32_or24;
  wire [0:0] h_u_pg_rca32_pg_fa25_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa25_and0;
  wire [0:0] h_u_pg_rca32_pg_fa25_xor1;
  wire [0:0] h_u_pg_rca32_and25;
  wire [0:0] h_u_pg_rca32_or25;
  wire [0:0] h_u_pg_rca32_pg_fa26_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa26_and0;
  wire [0:0] h_u_pg_rca32_pg_fa26_xor1;
  wire [0:0] h_u_pg_rca32_and26;
  wire [0:0] h_u_pg_rca32_or26;
  wire [0:0] h_u_pg_rca32_pg_fa27_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa27_and0;
  wire [0:0] h_u_pg_rca32_pg_fa27_xor1;
  wire [0:0] h_u_pg_rca32_and27;
  wire [0:0] h_u_pg_rca32_or27;
  wire [0:0] h_u_pg_rca32_pg_fa28_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa28_and0;
  wire [0:0] h_u_pg_rca32_pg_fa28_xor1;
  wire [0:0] h_u_pg_rca32_and28;
  wire [0:0] h_u_pg_rca32_or28;
  wire [0:0] h_u_pg_rca32_pg_fa29_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa29_and0;
  wire [0:0] h_u_pg_rca32_pg_fa29_xor1;
  wire [0:0] h_u_pg_rca32_and29;
  wire [0:0] h_u_pg_rca32_or29;
  wire [0:0] h_u_pg_rca32_pg_fa30_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa30_and0;
  wire [0:0] h_u_pg_rca32_pg_fa30_xor1;
  wire [0:0] h_u_pg_rca32_and30;
  wire [0:0] h_u_pg_rca32_or30;
  wire [0:0] h_u_pg_rca32_pg_fa31_xor0;
  wire [0:0] h_u_pg_rca32_pg_fa31_and0;
  wire [0:0] h_u_pg_rca32_pg_fa31_xor1;
  wire [0:0] h_u_pg_rca32_and31;
  wire [0:0] h_u_pg_rca32_or31;

  pg_fa pg_fa_h_u_pg_rca32_pg_fa0_out(.a(a[0]), .b(b[0]), .cin(1'b0), .pg_fa_xor0(h_u_pg_rca32_pg_fa0_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa0_and0), .pg_fa_xor1());
  pg_fa pg_fa_h_u_pg_rca32_pg_fa1_out(.a(a[1]), .b(b[1]), .cin(h_u_pg_rca32_pg_fa0_and0[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa1_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa1_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa1_xor1));
  and_gate and_gate_h_u_pg_rca32_and1(.a(h_u_pg_rca32_pg_fa0_and0[0]), .b(h_u_pg_rca32_pg_fa1_xor0[0]), .out(h_u_pg_rca32_and1));
  or_gate or_gate_h_u_pg_rca32_or1(.a(h_u_pg_rca32_and1[0]), .b(h_u_pg_rca32_pg_fa1_and0[0]), .out(h_u_pg_rca32_or1));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa2_out(.a(a[2]), .b(b[2]), .cin(h_u_pg_rca32_or1[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa2_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa2_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa2_xor1));
  and_gate and_gate_h_u_pg_rca32_and2(.a(h_u_pg_rca32_or1[0]), .b(h_u_pg_rca32_pg_fa2_xor0[0]), .out(h_u_pg_rca32_and2));
  or_gate or_gate_h_u_pg_rca32_or2(.a(h_u_pg_rca32_and2[0]), .b(h_u_pg_rca32_pg_fa2_and0[0]), .out(h_u_pg_rca32_or2));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa3_out(.a(a[3]), .b(b[3]), .cin(h_u_pg_rca32_or2[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa3_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa3_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa3_xor1));
  and_gate and_gate_h_u_pg_rca32_and3(.a(h_u_pg_rca32_or2[0]), .b(h_u_pg_rca32_pg_fa3_xor0[0]), .out(h_u_pg_rca32_and3));
  or_gate or_gate_h_u_pg_rca32_or3(.a(h_u_pg_rca32_and3[0]), .b(h_u_pg_rca32_pg_fa3_and0[0]), .out(h_u_pg_rca32_or3));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa4_out(.a(a[4]), .b(b[4]), .cin(h_u_pg_rca32_or3[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa4_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa4_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa4_xor1));
  and_gate and_gate_h_u_pg_rca32_and4(.a(h_u_pg_rca32_or3[0]), .b(h_u_pg_rca32_pg_fa4_xor0[0]), .out(h_u_pg_rca32_and4));
  or_gate or_gate_h_u_pg_rca32_or4(.a(h_u_pg_rca32_and4[0]), .b(h_u_pg_rca32_pg_fa4_and0[0]), .out(h_u_pg_rca32_or4));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa5_out(.a(a[5]), .b(b[5]), .cin(h_u_pg_rca32_or4[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa5_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa5_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa5_xor1));
  and_gate and_gate_h_u_pg_rca32_and5(.a(h_u_pg_rca32_or4[0]), .b(h_u_pg_rca32_pg_fa5_xor0[0]), .out(h_u_pg_rca32_and5));
  or_gate or_gate_h_u_pg_rca32_or5(.a(h_u_pg_rca32_and5[0]), .b(h_u_pg_rca32_pg_fa5_and0[0]), .out(h_u_pg_rca32_or5));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa6_out(.a(a[6]), .b(b[6]), .cin(h_u_pg_rca32_or5[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa6_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa6_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa6_xor1));
  and_gate and_gate_h_u_pg_rca32_and6(.a(h_u_pg_rca32_or5[0]), .b(h_u_pg_rca32_pg_fa6_xor0[0]), .out(h_u_pg_rca32_and6));
  or_gate or_gate_h_u_pg_rca32_or6(.a(h_u_pg_rca32_and6[0]), .b(h_u_pg_rca32_pg_fa6_and0[0]), .out(h_u_pg_rca32_or6));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa7_out(.a(a[7]), .b(b[7]), .cin(h_u_pg_rca32_or6[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa7_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa7_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa7_xor1));
  and_gate and_gate_h_u_pg_rca32_and7(.a(h_u_pg_rca32_or6[0]), .b(h_u_pg_rca32_pg_fa7_xor0[0]), .out(h_u_pg_rca32_and7));
  or_gate or_gate_h_u_pg_rca32_or7(.a(h_u_pg_rca32_and7[0]), .b(h_u_pg_rca32_pg_fa7_and0[0]), .out(h_u_pg_rca32_or7));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa8_out(.a(a[8]), .b(b[8]), .cin(h_u_pg_rca32_or7[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa8_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa8_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa8_xor1));
  and_gate and_gate_h_u_pg_rca32_and8(.a(h_u_pg_rca32_or7[0]), .b(h_u_pg_rca32_pg_fa8_xor0[0]), .out(h_u_pg_rca32_and8));
  or_gate or_gate_h_u_pg_rca32_or8(.a(h_u_pg_rca32_and8[0]), .b(h_u_pg_rca32_pg_fa8_and0[0]), .out(h_u_pg_rca32_or8));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa9_out(.a(a[9]), .b(b[9]), .cin(h_u_pg_rca32_or8[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa9_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa9_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa9_xor1));
  and_gate and_gate_h_u_pg_rca32_and9(.a(h_u_pg_rca32_or8[0]), .b(h_u_pg_rca32_pg_fa9_xor0[0]), .out(h_u_pg_rca32_and9));
  or_gate or_gate_h_u_pg_rca32_or9(.a(h_u_pg_rca32_and9[0]), .b(h_u_pg_rca32_pg_fa9_and0[0]), .out(h_u_pg_rca32_or9));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa10_out(.a(a[10]), .b(b[10]), .cin(h_u_pg_rca32_or9[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa10_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa10_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa10_xor1));
  and_gate and_gate_h_u_pg_rca32_and10(.a(h_u_pg_rca32_or9[0]), .b(h_u_pg_rca32_pg_fa10_xor0[0]), .out(h_u_pg_rca32_and10));
  or_gate or_gate_h_u_pg_rca32_or10(.a(h_u_pg_rca32_and10[0]), .b(h_u_pg_rca32_pg_fa10_and0[0]), .out(h_u_pg_rca32_or10));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa11_out(.a(a[11]), .b(b[11]), .cin(h_u_pg_rca32_or10[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa11_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa11_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa11_xor1));
  and_gate and_gate_h_u_pg_rca32_and11(.a(h_u_pg_rca32_or10[0]), .b(h_u_pg_rca32_pg_fa11_xor0[0]), .out(h_u_pg_rca32_and11));
  or_gate or_gate_h_u_pg_rca32_or11(.a(h_u_pg_rca32_and11[0]), .b(h_u_pg_rca32_pg_fa11_and0[0]), .out(h_u_pg_rca32_or11));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa12_out(.a(a[12]), .b(b[12]), .cin(h_u_pg_rca32_or11[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa12_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa12_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa12_xor1));
  and_gate and_gate_h_u_pg_rca32_and12(.a(h_u_pg_rca32_or11[0]), .b(h_u_pg_rca32_pg_fa12_xor0[0]), .out(h_u_pg_rca32_and12));
  or_gate or_gate_h_u_pg_rca32_or12(.a(h_u_pg_rca32_and12[0]), .b(h_u_pg_rca32_pg_fa12_and0[0]), .out(h_u_pg_rca32_or12));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa13_out(.a(a[13]), .b(b[13]), .cin(h_u_pg_rca32_or12[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa13_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa13_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa13_xor1));
  and_gate and_gate_h_u_pg_rca32_and13(.a(h_u_pg_rca32_or12[0]), .b(h_u_pg_rca32_pg_fa13_xor0[0]), .out(h_u_pg_rca32_and13));
  or_gate or_gate_h_u_pg_rca32_or13(.a(h_u_pg_rca32_and13[0]), .b(h_u_pg_rca32_pg_fa13_and0[0]), .out(h_u_pg_rca32_or13));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa14_out(.a(a[14]), .b(b[14]), .cin(h_u_pg_rca32_or13[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa14_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa14_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa14_xor1));
  and_gate and_gate_h_u_pg_rca32_and14(.a(h_u_pg_rca32_or13[0]), .b(h_u_pg_rca32_pg_fa14_xor0[0]), .out(h_u_pg_rca32_and14));
  or_gate or_gate_h_u_pg_rca32_or14(.a(h_u_pg_rca32_and14[0]), .b(h_u_pg_rca32_pg_fa14_and0[0]), .out(h_u_pg_rca32_or14));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa15_out(.a(a[15]), .b(b[15]), .cin(h_u_pg_rca32_or14[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa15_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa15_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa15_xor1));
  and_gate and_gate_h_u_pg_rca32_and15(.a(h_u_pg_rca32_or14[0]), .b(h_u_pg_rca32_pg_fa15_xor0[0]), .out(h_u_pg_rca32_and15));
  or_gate or_gate_h_u_pg_rca32_or15(.a(h_u_pg_rca32_and15[0]), .b(h_u_pg_rca32_pg_fa15_and0[0]), .out(h_u_pg_rca32_or15));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa16_out(.a(a[16]), .b(b[16]), .cin(h_u_pg_rca32_or15[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa16_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa16_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa16_xor1));
  and_gate and_gate_h_u_pg_rca32_and16(.a(h_u_pg_rca32_or15[0]), .b(h_u_pg_rca32_pg_fa16_xor0[0]), .out(h_u_pg_rca32_and16));
  or_gate or_gate_h_u_pg_rca32_or16(.a(h_u_pg_rca32_and16[0]), .b(h_u_pg_rca32_pg_fa16_and0[0]), .out(h_u_pg_rca32_or16));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa17_out(.a(a[17]), .b(b[17]), .cin(h_u_pg_rca32_or16[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa17_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa17_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa17_xor1));
  and_gate and_gate_h_u_pg_rca32_and17(.a(h_u_pg_rca32_or16[0]), .b(h_u_pg_rca32_pg_fa17_xor0[0]), .out(h_u_pg_rca32_and17));
  or_gate or_gate_h_u_pg_rca32_or17(.a(h_u_pg_rca32_and17[0]), .b(h_u_pg_rca32_pg_fa17_and0[0]), .out(h_u_pg_rca32_or17));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa18_out(.a(a[18]), .b(b[18]), .cin(h_u_pg_rca32_or17[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa18_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa18_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa18_xor1));
  and_gate and_gate_h_u_pg_rca32_and18(.a(h_u_pg_rca32_or17[0]), .b(h_u_pg_rca32_pg_fa18_xor0[0]), .out(h_u_pg_rca32_and18));
  or_gate or_gate_h_u_pg_rca32_or18(.a(h_u_pg_rca32_and18[0]), .b(h_u_pg_rca32_pg_fa18_and0[0]), .out(h_u_pg_rca32_or18));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa19_out(.a(a[19]), .b(b[19]), .cin(h_u_pg_rca32_or18[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa19_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa19_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa19_xor1));
  and_gate and_gate_h_u_pg_rca32_and19(.a(h_u_pg_rca32_or18[0]), .b(h_u_pg_rca32_pg_fa19_xor0[0]), .out(h_u_pg_rca32_and19));
  or_gate or_gate_h_u_pg_rca32_or19(.a(h_u_pg_rca32_and19[0]), .b(h_u_pg_rca32_pg_fa19_and0[0]), .out(h_u_pg_rca32_or19));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa20_out(.a(a[20]), .b(b[20]), .cin(h_u_pg_rca32_or19[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa20_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa20_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa20_xor1));
  and_gate and_gate_h_u_pg_rca32_and20(.a(h_u_pg_rca32_or19[0]), .b(h_u_pg_rca32_pg_fa20_xor0[0]), .out(h_u_pg_rca32_and20));
  or_gate or_gate_h_u_pg_rca32_or20(.a(h_u_pg_rca32_and20[0]), .b(h_u_pg_rca32_pg_fa20_and0[0]), .out(h_u_pg_rca32_or20));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa21_out(.a(a[21]), .b(b[21]), .cin(h_u_pg_rca32_or20[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa21_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa21_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa21_xor1));
  and_gate and_gate_h_u_pg_rca32_and21(.a(h_u_pg_rca32_or20[0]), .b(h_u_pg_rca32_pg_fa21_xor0[0]), .out(h_u_pg_rca32_and21));
  or_gate or_gate_h_u_pg_rca32_or21(.a(h_u_pg_rca32_and21[0]), .b(h_u_pg_rca32_pg_fa21_and0[0]), .out(h_u_pg_rca32_or21));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa22_out(.a(a[22]), .b(b[22]), .cin(h_u_pg_rca32_or21[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa22_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa22_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa22_xor1));
  and_gate and_gate_h_u_pg_rca32_and22(.a(h_u_pg_rca32_or21[0]), .b(h_u_pg_rca32_pg_fa22_xor0[0]), .out(h_u_pg_rca32_and22));
  or_gate or_gate_h_u_pg_rca32_or22(.a(h_u_pg_rca32_and22[0]), .b(h_u_pg_rca32_pg_fa22_and0[0]), .out(h_u_pg_rca32_or22));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa23_out(.a(a[23]), .b(b[23]), .cin(h_u_pg_rca32_or22[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa23_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa23_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa23_xor1));
  and_gate and_gate_h_u_pg_rca32_and23(.a(h_u_pg_rca32_or22[0]), .b(h_u_pg_rca32_pg_fa23_xor0[0]), .out(h_u_pg_rca32_and23));
  or_gate or_gate_h_u_pg_rca32_or23(.a(h_u_pg_rca32_and23[0]), .b(h_u_pg_rca32_pg_fa23_and0[0]), .out(h_u_pg_rca32_or23));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa24_out(.a(a[24]), .b(b[24]), .cin(h_u_pg_rca32_or23[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa24_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa24_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa24_xor1));
  and_gate and_gate_h_u_pg_rca32_and24(.a(h_u_pg_rca32_or23[0]), .b(h_u_pg_rca32_pg_fa24_xor0[0]), .out(h_u_pg_rca32_and24));
  or_gate or_gate_h_u_pg_rca32_or24(.a(h_u_pg_rca32_and24[0]), .b(h_u_pg_rca32_pg_fa24_and0[0]), .out(h_u_pg_rca32_or24));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa25_out(.a(a[25]), .b(b[25]), .cin(h_u_pg_rca32_or24[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa25_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa25_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa25_xor1));
  and_gate and_gate_h_u_pg_rca32_and25(.a(h_u_pg_rca32_or24[0]), .b(h_u_pg_rca32_pg_fa25_xor0[0]), .out(h_u_pg_rca32_and25));
  or_gate or_gate_h_u_pg_rca32_or25(.a(h_u_pg_rca32_and25[0]), .b(h_u_pg_rca32_pg_fa25_and0[0]), .out(h_u_pg_rca32_or25));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa26_out(.a(a[26]), .b(b[26]), .cin(h_u_pg_rca32_or25[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa26_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa26_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa26_xor1));
  and_gate and_gate_h_u_pg_rca32_and26(.a(h_u_pg_rca32_or25[0]), .b(h_u_pg_rca32_pg_fa26_xor0[0]), .out(h_u_pg_rca32_and26));
  or_gate or_gate_h_u_pg_rca32_or26(.a(h_u_pg_rca32_and26[0]), .b(h_u_pg_rca32_pg_fa26_and0[0]), .out(h_u_pg_rca32_or26));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa27_out(.a(a[27]), .b(b[27]), .cin(h_u_pg_rca32_or26[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa27_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa27_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa27_xor1));
  and_gate and_gate_h_u_pg_rca32_and27(.a(h_u_pg_rca32_or26[0]), .b(h_u_pg_rca32_pg_fa27_xor0[0]), .out(h_u_pg_rca32_and27));
  or_gate or_gate_h_u_pg_rca32_or27(.a(h_u_pg_rca32_and27[0]), .b(h_u_pg_rca32_pg_fa27_and0[0]), .out(h_u_pg_rca32_or27));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa28_out(.a(a[28]), .b(b[28]), .cin(h_u_pg_rca32_or27[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa28_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa28_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa28_xor1));
  and_gate and_gate_h_u_pg_rca32_and28(.a(h_u_pg_rca32_or27[0]), .b(h_u_pg_rca32_pg_fa28_xor0[0]), .out(h_u_pg_rca32_and28));
  or_gate or_gate_h_u_pg_rca32_or28(.a(h_u_pg_rca32_and28[0]), .b(h_u_pg_rca32_pg_fa28_and0[0]), .out(h_u_pg_rca32_or28));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa29_out(.a(a[29]), .b(b[29]), .cin(h_u_pg_rca32_or28[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa29_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa29_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa29_xor1));
  and_gate and_gate_h_u_pg_rca32_and29(.a(h_u_pg_rca32_or28[0]), .b(h_u_pg_rca32_pg_fa29_xor0[0]), .out(h_u_pg_rca32_and29));
  or_gate or_gate_h_u_pg_rca32_or29(.a(h_u_pg_rca32_and29[0]), .b(h_u_pg_rca32_pg_fa29_and0[0]), .out(h_u_pg_rca32_or29));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa30_out(.a(a[30]), .b(b[30]), .cin(h_u_pg_rca32_or29[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa30_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa30_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa30_xor1));
  and_gate and_gate_h_u_pg_rca32_and30(.a(h_u_pg_rca32_or29[0]), .b(h_u_pg_rca32_pg_fa30_xor0[0]), .out(h_u_pg_rca32_and30));
  or_gate or_gate_h_u_pg_rca32_or30(.a(h_u_pg_rca32_and30[0]), .b(h_u_pg_rca32_pg_fa30_and0[0]), .out(h_u_pg_rca32_or30));
  pg_fa pg_fa_h_u_pg_rca32_pg_fa31_out(.a(a[31]), .b(b[31]), .cin(h_u_pg_rca32_or30[0]), .pg_fa_xor0(h_u_pg_rca32_pg_fa31_xor0), .pg_fa_and0(h_u_pg_rca32_pg_fa31_and0), .pg_fa_xor1(h_u_pg_rca32_pg_fa31_xor1));
  and_gate and_gate_h_u_pg_rca32_and31(.a(h_u_pg_rca32_or30[0]), .b(h_u_pg_rca32_pg_fa31_xor0[0]), .out(h_u_pg_rca32_and31));
  or_gate or_gate_h_u_pg_rca32_or31(.a(h_u_pg_rca32_and31[0]), .b(h_u_pg_rca32_pg_fa31_and0[0]), .out(h_u_pg_rca32_or31));

  assign h_u_pg_rca32_out[0] = h_u_pg_rca32_pg_fa0_xor0[0];
  assign h_u_pg_rca32_out[1] = h_u_pg_rca32_pg_fa1_xor1[0];
  assign h_u_pg_rca32_out[2] = h_u_pg_rca32_pg_fa2_xor1[0];
  assign h_u_pg_rca32_out[3] = h_u_pg_rca32_pg_fa3_xor1[0];
  assign h_u_pg_rca32_out[4] = h_u_pg_rca32_pg_fa4_xor1[0];
  assign h_u_pg_rca32_out[5] = h_u_pg_rca32_pg_fa5_xor1[0];
  assign h_u_pg_rca32_out[6] = h_u_pg_rca32_pg_fa6_xor1[0];
  assign h_u_pg_rca32_out[7] = h_u_pg_rca32_pg_fa7_xor1[0];
  assign h_u_pg_rca32_out[8] = h_u_pg_rca32_pg_fa8_xor1[0];
  assign h_u_pg_rca32_out[9] = h_u_pg_rca32_pg_fa9_xor1[0];
  assign h_u_pg_rca32_out[10] = h_u_pg_rca32_pg_fa10_xor1[0];
  assign h_u_pg_rca32_out[11] = h_u_pg_rca32_pg_fa11_xor1[0];
  assign h_u_pg_rca32_out[12] = h_u_pg_rca32_pg_fa12_xor1[0];
  assign h_u_pg_rca32_out[13] = h_u_pg_rca32_pg_fa13_xor1[0];
  assign h_u_pg_rca32_out[14] = h_u_pg_rca32_pg_fa14_xor1[0];
  assign h_u_pg_rca32_out[15] = h_u_pg_rca32_pg_fa15_xor1[0];
  assign h_u_pg_rca32_out[16] = h_u_pg_rca32_pg_fa16_xor1[0];
  assign h_u_pg_rca32_out[17] = h_u_pg_rca32_pg_fa17_xor1[0];
  assign h_u_pg_rca32_out[18] = h_u_pg_rca32_pg_fa18_xor1[0];
  assign h_u_pg_rca32_out[19] = h_u_pg_rca32_pg_fa19_xor1[0];
  assign h_u_pg_rca32_out[20] = h_u_pg_rca32_pg_fa20_xor1[0];
  assign h_u_pg_rca32_out[21] = h_u_pg_rca32_pg_fa21_xor1[0];
  assign h_u_pg_rca32_out[22] = h_u_pg_rca32_pg_fa22_xor1[0];
  assign h_u_pg_rca32_out[23] = h_u_pg_rca32_pg_fa23_xor1[0];
  assign h_u_pg_rca32_out[24] = h_u_pg_rca32_pg_fa24_xor1[0];
  assign h_u_pg_rca32_out[25] = h_u_pg_rca32_pg_fa25_xor1[0];
  assign h_u_pg_rca32_out[26] = h_u_pg_rca32_pg_fa26_xor1[0];
  assign h_u_pg_rca32_out[27] = h_u_pg_rca32_pg_fa27_xor1[0];
  assign h_u_pg_rca32_out[28] = h_u_pg_rca32_pg_fa28_xor1[0];
  assign h_u_pg_rca32_out[29] = h_u_pg_rca32_pg_fa29_xor1[0];
  assign h_u_pg_rca32_out[30] = h_u_pg_rca32_pg_fa30_xor1[0];
  assign h_u_pg_rca32_out[31] = h_u_pg_rca32_pg_fa31_xor1[0];
  assign h_u_pg_rca32_out[32] = h_u_pg_rca32_or31[0];
endmodule
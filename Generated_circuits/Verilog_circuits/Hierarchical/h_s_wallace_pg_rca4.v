module xor_gate(input _a, input _b, output _y0);
  assign _y0 = _a ^ _b;
endmodule

module xnor_gate(input _a, input _b, output _y0);
  assign _y0 = ~(_a ^ _b);
endmodule

module or_gate(input _a, input _b, output _y0);
  assign _y0 = _a | _b;
endmodule

module and_gate(input _a, input _b, output _y0);
  assign _y0 = _a & _b;
endmodule

module nand_gate(input _a, input _b, output _y0);
  assign _y0 = ~(_a & _b);
endmodule

module nor_gate(input _a, input _b, output _y0);
  assign _y0 = ~(_a | _b);
endmodule

module constant_wire_value_1(input a, input b, output constant_wire_1);
  wire constant_wire_value_1_a;
  wire constant_wire_value_1_b;
  wire constant_wire_value_1_y0;
  wire constant_wire_value_1_y1;

  assign constant_wire_value_1_a = a;
  assign constant_wire_value_1_b = b;

  xor_gate xor_gate_constant_wire_value_1_y0(constant_wire_value_1_a, constant_wire_value_1_b, constant_wire_value_1_y0);
  xnor_gate xnor_gate_constant_wire_value_1_y1(constant_wire_value_1_a, constant_wire_value_1_b, constant_wire_value_1_y1);
  or_gate or_gate_constant_wire_1(constant_wire_value_1_y0, constant_wire_value_1_y1, constant_wire_1);
endmodule

module ha(input a, input b, output ha_y0, output ha_y1);
  wire ha_a;
  wire ha_b;

  assign ha_a = a;
  assign ha_b = b;

  xor_gate xor_gate_ha_y0(ha_a, ha_b, ha_y0);
  and_gate and_gate_ha_y1(ha_a, ha_b, ha_y1);
endmodule

module fa(input a, input b, input cin, output fa_y2, output fa_y4);
  wire fa_a;
  wire fa_b;
  wire fa_y0;
  wire fa_y1;
  wire fa_cin;
  wire fa_y3;

  assign fa_a = a;
  assign fa_b = b;
  assign fa_cin = cin;

  xor_gate xor_gate_fa_y0(fa_a, fa_b, fa_y0);
  and_gate and_gate_fa_y1(fa_a, fa_b, fa_y1);
  xor_gate xor_gate_fa_y2(fa_y0, fa_cin, fa_y2);
  and_gate and_gate_fa_y3(fa_y0, fa_cin, fa_y3);
  or_gate or_gate_fa_y4(fa_y1, fa_y3, fa_y4);
endmodule

module constant_wire_value_0(input a, input b, output constant_wire_0);
  wire constant_wire_value_0_a;
  wire constant_wire_value_0_b;
  wire constant_wire_value_0_y0;
  wire constant_wire_value_0_y1;

  assign constant_wire_value_0_a = a;
  assign constant_wire_value_0_b = b;

  xor_gate xor_gate_constant_wire_value_0_y0(constant_wire_value_0_a, constant_wire_value_0_b, constant_wire_value_0_y0);
  xnor_gate xnor_gate_constant_wire_value_0_y1(constant_wire_value_0_a, constant_wire_value_0_b, constant_wire_value_0_y1);
  nor_gate nor_gate_constant_wire_0(constant_wire_value_0_y0, constant_wire_value_0_y1, constant_wire_0);
endmodule

module fa_cla(input a, input b, input cin, output fa_cla_y0, output fa_cla_y1, output fa_cla_y2);
  wire fa_cla_a;
  wire fa_cla_b;
  wire fa_cla_cin;

  assign fa_cla_a = a;
  assign fa_cla_b = b;
  assign fa_cla_cin = cin;

  xor_gate xor_gate_fa_cla_y0(fa_cla_a, fa_cla_b, fa_cla_y0);
  and_gate and_gate_fa_cla_y1(fa_cla_a, fa_cla_b, fa_cla_y1);
  xor_gate xor_gate_fa_cla_y2(fa_cla_y0, fa_cla_cin, fa_cla_y2);
endmodule

module u_pg_rca6(input [5:0] a, input [5:0] b, output [6:0] out);
  wire a_0;
  wire a_1;
  wire a_2;
  wire a_3;
  wire a_4;
  wire a_5;
  wire b_0;
  wire b_1;
  wire b_2;
  wire b_3;
  wire b_4;
  wire b_5;
  wire constant_wire_0;
  wire u_pg_rca6_fa0_y0;
  wire u_pg_rca6_fa0_y1;
  wire u_pg_rca6_fa0_y2;
  wire u_pg_rca6_and0_y0;
  wire u_pg_rca6_or0_y0;
  wire u_pg_rca6_fa1_y0;
  wire u_pg_rca6_fa1_y1;
  wire u_pg_rca6_fa1_y2;
  wire u_pg_rca6_and1_y0;
  wire u_pg_rca6_or1_y0;
  wire u_pg_rca6_fa2_y0;
  wire u_pg_rca6_fa2_y1;
  wire u_pg_rca6_fa2_y2;
  wire u_pg_rca6_and2_y0;
  wire u_pg_rca6_or2_y0;
  wire u_pg_rca6_fa3_y0;
  wire u_pg_rca6_fa3_y1;
  wire u_pg_rca6_fa3_y2;
  wire u_pg_rca6_and3_y0;
  wire u_pg_rca6_or3_y0;
  wire u_pg_rca6_fa4_y0;
  wire u_pg_rca6_fa4_y1;
  wire u_pg_rca6_fa4_y2;
  wire u_pg_rca6_and4_y0;
  wire u_pg_rca6_or4_y0;
  wire u_pg_rca6_fa5_y0;
  wire u_pg_rca6_fa5_y1;
  wire u_pg_rca6_fa5_y2;
  wire u_pg_rca6_and5_y0;
  wire u_pg_rca6_or5_y0;

  assign a_0 = a[0];
  assign a_1 = a[1];
  assign a_2 = a[2];
  assign a_3 = a[3];
  assign a_4 = a[4];
  assign a_5 = a[5];
  assign b_0 = b[0];
  assign b_1 = b[1];
  assign b_2 = b[2];
  assign b_3 = b[3];
  assign b_4 = b[4];
  assign b_5 = b[5];
  constant_wire_value_0 constant_wire_value_0_constant_wire_0(a_0, b_0, constant_wire_0);
  fa_cla fa_cla_u_pg_rca6_fa0_y0(a_0, b_0, constant_wire_0, u_pg_rca6_fa0_y0, u_pg_rca6_fa0_y1, u_pg_rca6_fa0_y2);
  and_gate and_gate_u_pg_rca6_and0_y0(constant_wire_0, u_pg_rca6_fa0_y0, u_pg_rca6_and0_y0);
  or_gate or_gate_u_pg_rca6_or0_y0(u_pg_rca6_and0_y0, u_pg_rca6_fa0_y1, u_pg_rca6_or0_y0);
  fa_cla fa_cla_u_pg_rca6_fa1_y0(a_1, b_1, u_pg_rca6_or0_y0, u_pg_rca6_fa1_y0, u_pg_rca6_fa1_y1, u_pg_rca6_fa1_y2);
  and_gate and_gate_u_pg_rca6_and1_y0(u_pg_rca6_or0_y0, u_pg_rca6_fa1_y0, u_pg_rca6_and1_y0);
  or_gate or_gate_u_pg_rca6_or1_y0(u_pg_rca6_and1_y0, u_pg_rca6_fa1_y1, u_pg_rca6_or1_y0);
  fa_cla fa_cla_u_pg_rca6_fa2_y0(a_2, b_2, u_pg_rca6_or1_y0, u_pg_rca6_fa2_y0, u_pg_rca6_fa2_y1, u_pg_rca6_fa2_y2);
  and_gate and_gate_u_pg_rca6_and2_y0(u_pg_rca6_or1_y0, u_pg_rca6_fa2_y0, u_pg_rca6_and2_y0);
  or_gate or_gate_u_pg_rca6_or2_y0(u_pg_rca6_and2_y0, u_pg_rca6_fa2_y1, u_pg_rca6_or2_y0);
  fa_cla fa_cla_u_pg_rca6_fa3_y0(a_3, b_3, u_pg_rca6_or2_y0, u_pg_rca6_fa3_y0, u_pg_rca6_fa3_y1, u_pg_rca6_fa3_y2);
  and_gate and_gate_u_pg_rca6_and3_y0(u_pg_rca6_or2_y0, u_pg_rca6_fa3_y0, u_pg_rca6_and3_y0);
  or_gate or_gate_u_pg_rca6_or3_y0(u_pg_rca6_and3_y0, u_pg_rca6_fa3_y1, u_pg_rca6_or3_y0);
  fa_cla fa_cla_u_pg_rca6_fa4_y0(a_4, b_4, u_pg_rca6_or3_y0, u_pg_rca6_fa4_y0, u_pg_rca6_fa4_y1, u_pg_rca6_fa4_y2);
  and_gate and_gate_u_pg_rca6_and4_y0(u_pg_rca6_or3_y0, u_pg_rca6_fa4_y0, u_pg_rca6_and4_y0);
  or_gate or_gate_u_pg_rca6_or4_y0(u_pg_rca6_and4_y0, u_pg_rca6_fa4_y1, u_pg_rca6_or4_y0);
  fa_cla fa_cla_u_pg_rca6_fa5_y0(a_5, b_5, u_pg_rca6_or4_y0, u_pg_rca6_fa5_y0, u_pg_rca6_fa5_y1, u_pg_rca6_fa5_y2);
  and_gate and_gate_u_pg_rca6_and5_y0(u_pg_rca6_or4_y0, u_pg_rca6_fa5_y0, u_pg_rca6_and5_y0);
  or_gate or_gate_u_pg_rca6_or5_y0(u_pg_rca6_and5_y0, u_pg_rca6_fa5_y1, u_pg_rca6_or5_y0);

  assign out[0] = u_pg_rca6_fa0_y2;
  assign out[1] = u_pg_rca6_fa1_y2;
  assign out[2] = u_pg_rca6_fa2_y2;
  assign out[3] = u_pg_rca6_fa3_y2;
  assign out[4] = u_pg_rca6_fa4_y2;
  assign out[5] = u_pg_rca6_fa5_y2;
  assign out[6] = u_pg_rca6_or5_y0;
endmodule

module h_s_wallace_pg_rca4(input [3:0] a, input [3:0] b, output [7:0] out);
  wire a_0;
  wire a_1;
  wire a_2;
  wire a_3;
  wire b_0;
  wire b_1;
  wire b_2;
  wire b_3;
  wire constant_wire_1;
  wire h_s_wallace_pg_rca4_and_2_0_y0;
  wire h_s_wallace_pg_rca4_and_1_1_y0;
  wire h_s_wallace_pg_rca4_ha0_y0;
  wire h_s_wallace_pg_rca4_ha0_y1;
  wire h_s_wallace_pg_rca4_nand_3_0_y0;
  wire h_s_wallace_pg_rca4_and_2_1_y0;
  wire h_s_wallace_pg_rca4_fa0_y2;
  wire h_s_wallace_pg_rca4_fa0_y4;
  wire h_s_wallace_pg_rca4_nand_3_1_y0;
  wire h_s_wallace_pg_rca4_fa1_y2;
  wire h_s_wallace_pg_rca4_fa1_y4;
  wire h_s_wallace_pg_rca4_and_1_2_y0;
  wire h_s_wallace_pg_rca4_nand_0_3_y0;
  wire h_s_wallace_pg_rca4_ha1_y0;
  wire h_s_wallace_pg_rca4_ha1_y1;
  wire h_s_wallace_pg_rca4_and_2_2_y0;
  wire h_s_wallace_pg_rca4_nand_1_3_y0;
  wire h_s_wallace_pg_rca4_fa2_y2;
  wire h_s_wallace_pg_rca4_fa2_y4;
  wire h_s_wallace_pg_rca4_nand_3_2_y0;
  wire h_s_wallace_pg_rca4_fa3_y2;
  wire h_s_wallace_pg_rca4_fa3_y4;
  wire h_s_wallace_pg_rca4_and_0_0_y0;
  wire h_s_wallace_pg_rca4_and_1_0_y0;
  wire h_s_wallace_pg_rca4_and_0_2_y0;
  wire h_s_wallace_pg_rca4_nand_2_3_y0;
  wire h_s_wallace_pg_rca4_and_0_1_y0;
  wire h_s_wallace_pg_rca4_and_3_3_y0;
  wire [5:0] h_s_wallace_pg_rca4_u_pg_rca6_u_pg_rca6_a;
  wire [5:0] h_s_wallace_pg_rca4_u_pg_rca6_u_pg_rca6_b;
  wire [6:0] h_s_wallace_pg_rca4_u_pg_rca6_out;
  wire h_s_wallace_pg_rca4_u_pg_rca6_fa0_y2;
  wire h_s_wallace_pg_rca4_u_pg_rca6_fa1_y2;
  wire h_s_wallace_pg_rca4_u_pg_rca6_fa2_y2;
  wire h_s_wallace_pg_rca4_u_pg_rca6_fa3_y2;
  wire h_s_wallace_pg_rca4_u_pg_rca6_fa4_y2;
  wire h_s_wallace_pg_rca4_u_pg_rca6_fa5_y2;
  wire h_s_wallace_pg_rca4_u_pg_rca6_or5_y0;
  wire h_s_wallace_pg_rca4_xor0_y0;

  assign a_0 = a[0];
  assign a_1 = a[1];
  assign a_2 = a[2];
  assign a_3 = a[3];
  assign b_0 = b[0];
  assign b_1 = b[1];
  assign b_2 = b[2];
  assign b_3 = b[3];
  constant_wire_value_1 constant_wire_value_1_constant_wire_1(a_0, b_0, constant_wire_1);
  and_gate and_gate_h_s_wallace_pg_rca4_and_2_0_y0(a_2, b_0, h_s_wallace_pg_rca4_and_2_0_y0);
  and_gate and_gate_h_s_wallace_pg_rca4_and_1_1_y0(a_1, b_1, h_s_wallace_pg_rca4_and_1_1_y0);
  ha ha_h_s_wallace_pg_rca4_ha0_y0(h_s_wallace_pg_rca4_and_2_0_y0, h_s_wallace_pg_rca4_and_1_1_y0, h_s_wallace_pg_rca4_ha0_y0, h_s_wallace_pg_rca4_ha0_y1);
  nand_gate nand_gate_h_s_wallace_pg_rca4_nand_3_0_y0(a_3, b_0, h_s_wallace_pg_rca4_nand_3_0_y0);
  and_gate and_gate_h_s_wallace_pg_rca4_and_2_1_y0(a_2, b_1, h_s_wallace_pg_rca4_and_2_1_y0);
  fa fa_h_s_wallace_pg_rca4_fa0_y2(h_s_wallace_pg_rca4_ha0_y1, h_s_wallace_pg_rca4_nand_3_0_y0, h_s_wallace_pg_rca4_and_2_1_y0, h_s_wallace_pg_rca4_fa0_y2, h_s_wallace_pg_rca4_fa0_y4);
  nand_gate nand_gate_h_s_wallace_pg_rca4_nand_3_1_y0(a_3, b_1, h_s_wallace_pg_rca4_nand_3_1_y0);
  fa fa_h_s_wallace_pg_rca4_fa1_y2(h_s_wallace_pg_rca4_fa0_y4, constant_wire_1, h_s_wallace_pg_rca4_nand_3_1_y0, h_s_wallace_pg_rca4_fa1_y2, h_s_wallace_pg_rca4_fa1_y4);
  and_gate and_gate_h_s_wallace_pg_rca4_and_1_2_y0(a_1, b_2, h_s_wallace_pg_rca4_and_1_2_y0);
  nand_gate nand_gate_h_s_wallace_pg_rca4_nand_0_3_y0(a_0, b_3, h_s_wallace_pg_rca4_nand_0_3_y0);
  ha ha_h_s_wallace_pg_rca4_ha1_y0(h_s_wallace_pg_rca4_and_1_2_y0, h_s_wallace_pg_rca4_nand_0_3_y0, h_s_wallace_pg_rca4_ha1_y0, h_s_wallace_pg_rca4_ha1_y1);
  and_gate and_gate_h_s_wallace_pg_rca4_and_2_2_y0(a_2, b_2, h_s_wallace_pg_rca4_and_2_2_y0);
  nand_gate nand_gate_h_s_wallace_pg_rca4_nand_1_3_y0(a_1, b_3, h_s_wallace_pg_rca4_nand_1_3_y0);
  fa fa_h_s_wallace_pg_rca4_fa2_y2(h_s_wallace_pg_rca4_ha1_y1, h_s_wallace_pg_rca4_and_2_2_y0, h_s_wallace_pg_rca4_nand_1_3_y0, h_s_wallace_pg_rca4_fa2_y2, h_s_wallace_pg_rca4_fa2_y4);
  nand_gate nand_gate_h_s_wallace_pg_rca4_nand_3_2_y0(a_3, b_2, h_s_wallace_pg_rca4_nand_3_2_y0);
  fa fa_h_s_wallace_pg_rca4_fa3_y2(h_s_wallace_pg_rca4_fa2_y4, h_s_wallace_pg_rca4_fa1_y4, h_s_wallace_pg_rca4_nand_3_2_y0, h_s_wallace_pg_rca4_fa3_y2, h_s_wallace_pg_rca4_fa3_y4);
  and_gate and_gate_h_s_wallace_pg_rca4_and_0_0_y0(a_0, b_0, h_s_wallace_pg_rca4_and_0_0_y0);
  and_gate and_gate_h_s_wallace_pg_rca4_and_1_0_y0(a_1, b_0, h_s_wallace_pg_rca4_and_1_0_y0);
  and_gate and_gate_h_s_wallace_pg_rca4_and_0_2_y0(a_0, b_2, h_s_wallace_pg_rca4_and_0_2_y0);
  nand_gate nand_gate_h_s_wallace_pg_rca4_nand_2_3_y0(a_2, b_3, h_s_wallace_pg_rca4_nand_2_3_y0);
  and_gate and_gate_h_s_wallace_pg_rca4_and_0_1_y0(a_0, b_1, h_s_wallace_pg_rca4_and_0_1_y0);
  and_gate and_gate_h_s_wallace_pg_rca4_and_3_3_y0(a_3, b_3, h_s_wallace_pg_rca4_and_3_3_y0);
  assign h_s_wallace_pg_rca4_u_pg_rca6_u_pg_rca6_a[0] = h_s_wallace_pg_rca4_and_1_0_y0;
  assign h_s_wallace_pg_rca4_u_pg_rca6_u_pg_rca6_a[1] = h_s_wallace_pg_rca4_and_0_2_y0;
  assign h_s_wallace_pg_rca4_u_pg_rca6_u_pg_rca6_a[2] = h_s_wallace_pg_rca4_fa0_y2;
  assign h_s_wallace_pg_rca4_u_pg_rca6_u_pg_rca6_a[3] = h_s_wallace_pg_rca4_fa1_y2;
  assign h_s_wallace_pg_rca4_u_pg_rca6_u_pg_rca6_a[4] = h_s_wallace_pg_rca4_nand_2_3_y0;
  assign h_s_wallace_pg_rca4_u_pg_rca6_u_pg_rca6_a[5] = h_s_wallace_pg_rca4_fa3_y4;
  assign h_s_wallace_pg_rca4_u_pg_rca6_u_pg_rca6_b[0] = h_s_wallace_pg_rca4_and_0_1_y0;
  assign h_s_wallace_pg_rca4_u_pg_rca6_u_pg_rca6_b[1] = h_s_wallace_pg_rca4_ha0_y0;
  assign h_s_wallace_pg_rca4_u_pg_rca6_u_pg_rca6_b[2] = h_s_wallace_pg_rca4_ha1_y0;
  assign h_s_wallace_pg_rca4_u_pg_rca6_u_pg_rca6_b[3] = h_s_wallace_pg_rca4_fa2_y2;
  assign h_s_wallace_pg_rca4_u_pg_rca6_u_pg_rca6_b[4] = h_s_wallace_pg_rca4_fa3_y2;
  assign h_s_wallace_pg_rca4_u_pg_rca6_u_pg_rca6_b[5] = h_s_wallace_pg_rca4_and_3_3_y0;
  u_pg_rca6 u_pg_rca6_out(h_s_wallace_pg_rca4_u_pg_rca6_u_pg_rca6_a, h_s_wallace_pg_rca4_u_pg_rca6_u_pg_rca6_b, h_s_wallace_pg_rca4_u_pg_rca6_out);
  assign h_s_wallace_pg_rca4_u_pg_rca6_fa0_y2 = h_s_wallace_pg_rca4_u_pg_rca6_out[0];
  assign h_s_wallace_pg_rca4_u_pg_rca6_fa1_y2 = h_s_wallace_pg_rca4_u_pg_rca6_out[1];
  assign h_s_wallace_pg_rca4_u_pg_rca6_fa2_y2 = h_s_wallace_pg_rca4_u_pg_rca6_out[2];
  assign h_s_wallace_pg_rca4_u_pg_rca6_fa3_y2 = h_s_wallace_pg_rca4_u_pg_rca6_out[3];
  assign h_s_wallace_pg_rca4_u_pg_rca6_fa4_y2 = h_s_wallace_pg_rca4_u_pg_rca6_out[4];
  assign h_s_wallace_pg_rca4_u_pg_rca6_fa5_y2 = h_s_wallace_pg_rca4_u_pg_rca6_out[5];
  assign h_s_wallace_pg_rca4_u_pg_rca6_or5_y0 = h_s_wallace_pg_rca4_u_pg_rca6_out[6];
  xor_gate xor_gate_h_s_wallace_pg_rca4_xor0_y0(constant_wire_1, h_s_wallace_pg_rca4_u_pg_rca6_or5_y0, h_s_wallace_pg_rca4_xor0_y0);

  assign out[0] = h_s_wallace_pg_rca4_and_0_0_y0;
  assign out[1] = h_s_wallace_pg_rca4_u_pg_rca6_fa0_y2;
  assign out[2] = h_s_wallace_pg_rca4_u_pg_rca6_fa1_y2;
  assign out[3] = h_s_wallace_pg_rca4_u_pg_rca6_fa2_y2;
  assign out[4] = h_s_wallace_pg_rca4_u_pg_rca6_fa3_y2;
  assign out[5] = h_s_wallace_pg_rca4_u_pg_rca6_fa4_y2;
  assign out[6] = h_s_wallace_pg_rca4_u_pg_rca6_fa5_y2;
  assign out[7] = h_s_wallace_pg_rca4_xor0_y0;
endmodule
module xor_gate(input _a, input _b, output _y0);
  assign _y0 = _a ^ _b;
endmodule

module and_gate(input _a, input _b, output _y0);
  assign _y0 = _a & _b;
endmodule

module or_gate(input _a, input _b, output _y0);
  assign _y0 = _a | _b;
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

module h_u_rca32(input [31:0] a, input [31:0] b, output [32:0] out);
  wire a_0;
  wire a_1;
  wire a_2;
  wire a_3;
  wire a_4;
  wire a_5;
  wire a_6;
  wire a_7;
  wire a_8;
  wire a_9;
  wire a_10;
  wire a_11;
  wire a_12;
  wire a_13;
  wire a_14;
  wire a_15;
  wire a_16;
  wire a_17;
  wire a_18;
  wire a_19;
  wire a_20;
  wire a_21;
  wire a_22;
  wire a_23;
  wire a_24;
  wire a_25;
  wire a_26;
  wire a_27;
  wire a_28;
  wire a_29;
  wire a_30;
  wire a_31;
  wire b_0;
  wire b_1;
  wire b_2;
  wire b_3;
  wire b_4;
  wire b_5;
  wire b_6;
  wire b_7;
  wire b_8;
  wire b_9;
  wire b_10;
  wire b_11;
  wire b_12;
  wire b_13;
  wire b_14;
  wire b_15;
  wire b_16;
  wire b_17;
  wire b_18;
  wire b_19;
  wire b_20;
  wire b_21;
  wire b_22;
  wire b_23;
  wire b_24;
  wire b_25;
  wire b_26;
  wire b_27;
  wire b_28;
  wire b_29;
  wire b_30;
  wire b_31;
  wire h_u_rca32_ha_y0;
  wire h_u_rca32_ha_y1;
  wire h_u_rca32_fa1_y2;
  wire h_u_rca32_fa1_y4;
  wire h_u_rca32_fa2_y2;
  wire h_u_rca32_fa2_y4;
  wire h_u_rca32_fa3_y2;
  wire h_u_rca32_fa3_y4;
  wire h_u_rca32_fa4_y2;
  wire h_u_rca32_fa4_y4;
  wire h_u_rca32_fa5_y2;
  wire h_u_rca32_fa5_y4;
  wire h_u_rca32_fa6_y2;
  wire h_u_rca32_fa6_y4;
  wire h_u_rca32_fa7_y2;
  wire h_u_rca32_fa7_y4;
  wire h_u_rca32_fa8_y2;
  wire h_u_rca32_fa8_y4;
  wire h_u_rca32_fa9_y2;
  wire h_u_rca32_fa9_y4;
  wire h_u_rca32_fa10_y2;
  wire h_u_rca32_fa10_y4;
  wire h_u_rca32_fa11_y2;
  wire h_u_rca32_fa11_y4;
  wire h_u_rca32_fa12_y2;
  wire h_u_rca32_fa12_y4;
  wire h_u_rca32_fa13_y2;
  wire h_u_rca32_fa13_y4;
  wire h_u_rca32_fa14_y2;
  wire h_u_rca32_fa14_y4;
  wire h_u_rca32_fa15_y2;
  wire h_u_rca32_fa15_y4;
  wire h_u_rca32_fa16_y2;
  wire h_u_rca32_fa16_y4;
  wire h_u_rca32_fa17_y2;
  wire h_u_rca32_fa17_y4;
  wire h_u_rca32_fa18_y2;
  wire h_u_rca32_fa18_y4;
  wire h_u_rca32_fa19_y2;
  wire h_u_rca32_fa19_y4;
  wire h_u_rca32_fa20_y2;
  wire h_u_rca32_fa20_y4;
  wire h_u_rca32_fa21_y2;
  wire h_u_rca32_fa21_y4;
  wire h_u_rca32_fa22_y2;
  wire h_u_rca32_fa22_y4;
  wire h_u_rca32_fa23_y2;
  wire h_u_rca32_fa23_y4;
  wire h_u_rca32_fa24_y2;
  wire h_u_rca32_fa24_y4;
  wire h_u_rca32_fa25_y2;
  wire h_u_rca32_fa25_y4;
  wire h_u_rca32_fa26_y2;
  wire h_u_rca32_fa26_y4;
  wire h_u_rca32_fa27_y2;
  wire h_u_rca32_fa27_y4;
  wire h_u_rca32_fa28_y2;
  wire h_u_rca32_fa28_y4;
  wire h_u_rca32_fa29_y2;
  wire h_u_rca32_fa29_y4;
  wire h_u_rca32_fa30_y2;
  wire h_u_rca32_fa30_y4;
  wire h_u_rca32_fa31_y2;
  wire h_u_rca32_fa31_y4;

  assign a_0 = a[0];
  assign a_1 = a[1];
  assign a_2 = a[2];
  assign a_3 = a[3];
  assign a_4 = a[4];
  assign a_5 = a[5];
  assign a_6 = a[6];
  assign a_7 = a[7];
  assign a_8 = a[8];
  assign a_9 = a[9];
  assign a_10 = a[10];
  assign a_11 = a[11];
  assign a_12 = a[12];
  assign a_13 = a[13];
  assign a_14 = a[14];
  assign a_15 = a[15];
  assign a_16 = a[16];
  assign a_17 = a[17];
  assign a_18 = a[18];
  assign a_19 = a[19];
  assign a_20 = a[20];
  assign a_21 = a[21];
  assign a_22 = a[22];
  assign a_23 = a[23];
  assign a_24 = a[24];
  assign a_25 = a[25];
  assign a_26 = a[26];
  assign a_27 = a[27];
  assign a_28 = a[28];
  assign a_29 = a[29];
  assign a_30 = a[30];
  assign a_31 = a[31];
  assign b_0 = b[0];
  assign b_1 = b[1];
  assign b_2 = b[2];
  assign b_3 = b[3];
  assign b_4 = b[4];
  assign b_5 = b[5];
  assign b_6 = b[6];
  assign b_7 = b[7];
  assign b_8 = b[8];
  assign b_9 = b[9];
  assign b_10 = b[10];
  assign b_11 = b[11];
  assign b_12 = b[12];
  assign b_13 = b[13];
  assign b_14 = b[14];
  assign b_15 = b[15];
  assign b_16 = b[16];
  assign b_17 = b[17];
  assign b_18 = b[18];
  assign b_19 = b[19];
  assign b_20 = b[20];
  assign b_21 = b[21];
  assign b_22 = b[22];
  assign b_23 = b[23];
  assign b_24 = b[24];
  assign b_25 = b[25];
  assign b_26 = b[26];
  assign b_27 = b[27];
  assign b_28 = b[28];
  assign b_29 = b[29];
  assign b_30 = b[30];
  assign b_31 = b[31];
  ha ha_h_u_rca32_ha_y0(a_0, b_0, h_u_rca32_ha_y0, h_u_rca32_ha_y1);
  fa fa_h_u_rca32_fa1_y2(a_1, b_1, h_u_rca32_ha_y1, h_u_rca32_fa1_y2, h_u_rca32_fa1_y4);
  fa fa_h_u_rca32_fa2_y2(a_2, b_2, h_u_rca32_fa1_y4, h_u_rca32_fa2_y2, h_u_rca32_fa2_y4);
  fa fa_h_u_rca32_fa3_y2(a_3, b_3, h_u_rca32_fa2_y4, h_u_rca32_fa3_y2, h_u_rca32_fa3_y4);
  fa fa_h_u_rca32_fa4_y2(a_4, b_4, h_u_rca32_fa3_y4, h_u_rca32_fa4_y2, h_u_rca32_fa4_y4);
  fa fa_h_u_rca32_fa5_y2(a_5, b_5, h_u_rca32_fa4_y4, h_u_rca32_fa5_y2, h_u_rca32_fa5_y4);
  fa fa_h_u_rca32_fa6_y2(a_6, b_6, h_u_rca32_fa5_y4, h_u_rca32_fa6_y2, h_u_rca32_fa6_y4);
  fa fa_h_u_rca32_fa7_y2(a_7, b_7, h_u_rca32_fa6_y4, h_u_rca32_fa7_y2, h_u_rca32_fa7_y4);
  fa fa_h_u_rca32_fa8_y2(a_8, b_8, h_u_rca32_fa7_y4, h_u_rca32_fa8_y2, h_u_rca32_fa8_y4);
  fa fa_h_u_rca32_fa9_y2(a_9, b_9, h_u_rca32_fa8_y4, h_u_rca32_fa9_y2, h_u_rca32_fa9_y4);
  fa fa_h_u_rca32_fa10_y2(a_10, b_10, h_u_rca32_fa9_y4, h_u_rca32_fa10_y2, h_u_rca32_fa10_y4);
  fa fa_h_u_rca32_fa11_y2(a_11, b_11, h_u_rca32_fa10_y4, h_u_rca32_fa11_y2, h_u_rca32_fa11_y4);
  fa fa_h_u_rca32_fa12_y2(a_12, b_12, h_u_rca32_fa11_y4, h_u_rca32_fa12_y2, h_u_rca32_fa12_y4);
  fa fa_h_u_rca32_fa13_y2(a_13, b_13, h_u_rca32_fa12_y4, h_u_rca32_fa13_y2, h_u_rca32_fa13_y4);
  fa fa_h_u_rca32_fa14_y2(a_14, b_14, h_u_rca32_fa13_y4, h_u_rca32_fa14_y2, h_u_rca32_fa14_y4);
  fa fa_h_u_rca32_fa15_y2(a_15, b_15, h_u_rca32_fa14_y4, h_u_rca32_fa15_y2, h_u_rca32_fa15_y4);
  fa fa_h_u_rca32_fa16_y2(a_16, b_16, h_u_rca32_fa15_y4, h_u_rca32_fa16_y2, h_u_rca32_fa16_y4);
  fa fa_h_u_rca32_fa17_y2(a_17, b_17, h_u_rca32_fa16_y4, h_u_rca32_fa17_y2, h_u_rca32_fa17_y4);
  fa fa_h_u_rca32_fa18_y2(a_18, b_18, h_u_rca32_fa17_y4, h_u_rca32_fa18_y2, h_u_rca32_fa18_y4);
  fa fa_h_u_rca32_fa19_y2(a_19, b_19, h_u_rca32_fa18_y4, h_u_rca32_fa19_y2, h_u_rca32_fa19_y4);
  fa fa_h_u_rca32_fa20_y2(a_20, b_20, h_u_rca32_fa19_y4, h_u_rca32_fa20_y2, h_u_rca32_fa20_y4);
  fa fa_h_u_rca32_fa21_y2(a_21, b_21, h_u_rca32_fa20_y4, h_u_rca32_fa21_y2, h_u_rca32_fa21_y4);
  fa fa_h_u_rca32_fa22_y2(a_22, b_22, h_u_rca32_fa21_y4, h_u_rca32_fa22_y2, h_u_rca32_fa22_y4);
  fa fa_h_u_rca32_fa23_y2(a_23, b_23, h_u_rca32_fa22_y4, h_u_rca32_fa23_y2, h_u_rca32_fa23_y4);
  fa fa_h_u_rca32_fa24_y2(a_24, b_24, h_u_rca32_fa23_y4, h_u_rca32_fa24_y2, h_u_rca32_fa24_y4);
  fa fa_h_u_rca32_fa25_y2(a_25, b_25, h_u_rca32_fa24_y4, h_u_rca32_fa25_y2, h_u_rca32_fa25_y4);
  fa fa_h_u_rca32_fa26_y2(a_26, b_26, h_u_rca32_fa25_y4, h_u_rca32_fa26_y2, h_u_rca32_fa26_y4);
  fa fa_h_u_rca32_fa27_y2(a_27, b_27, h_u_rca32_fa26_y4, h_u_rca32_fa27_y2, h_u_rca32_fa27_y4);
  fa fa_h_u_rca32_fa28_y2(a_28, b_28, h_u_rca32_fa27_y4, h_u_rca32_fa28_y2, h_u_rca32_fa28_y4);
  fa fa_h_u_rca32_fa29_y2(a_29, b_29, h_u_rca32_fa28_y4, h_u_rca32_fa29_y2, h_u_rca32_fa29_y4);
  fa fa_h_u_rca32_fa30_y2(a_30, b_30, h_u_rca32_fa29_y4, h_u_rca32_fa30_y2, h_u_rca32_fa30_y4);
  fa fa_h_u_rca32_fa31_y2(a_31, b_31, h_u_rca32_fa30_y4, h_u_rca32_fa31_y2, h_u_rca32_fa31_y4);

  assign out[0] = h_u_rca32_ha_y0;
  assign out[1] = h_u_rca32_fa1_y2;
  assign out[2] = h_u_rca32_fa2_y2;
  assign out[3] = h_u_rca32_fa3_y2;
  assign out[4] = h_u_rca32_fa4_y2;
  assign out[5] = h_u_rca32_fa5_y2;
  assign out[6] = h_u_rca32_fa6_y2;
  assign out[7] = h_u_rca32_fa7_y2;
  assign out[8] = h_u_rca32_fa8_y2;
  assign out[9] = h_u_rca32_fa9_y2;
  assign out[10] = h_u_rca32_fa10_y2;
  assign out[11] = h_u_rca32_fa11_y2;
  assign out[12] = h_u_rca32_fa12_y2;
  assign out[13] = h_u_rca32_fa13_y2;
  assign out[14] = h_u_rca32_fa14_y2;
  assign out[15] = h_u_rca32_fa15_y2;
  assign out[16] = h_u_rca32_fa16_y2;
  assign out[17] = h_u_rca32_fa17_y2;
  assign out[18] = h_u_rca32_fa18_y2;
  assign out[19] = h_u_rca32_fa19_y2;
  assign out[20] = h_u_rca32_fa20_y2;
  assign out[21] = h_u_rca32_fa21_y2;
  assign out[22] = h_u_rca32_fa22_y2;
  assign out[23] = h_u_rca32_fa23_y2;
  assign out[24] = h_u_rca32_fa24_y2;
  assign out[25] = h_u_rca32_fa25_y2;
  assign out[26] = h_u_rca32_fa26_y2;
  assign out[27] = h_u_rca32_fa27_y2;
  assign out[28] = h_u_rca32_fa28_y2;
  assign out[29] = h_u_rca32_fa29_y2;
  assign out[30] = h_u_rca32_fa30_y2;
  assign out[31] = h_u_rca32_fa31_y2;
  assign out[32] = h_u_rca32_fa31_y4;
endmodule
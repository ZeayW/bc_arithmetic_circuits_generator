module f_u_rca24(input [23:0] a, input [23:0] b, output [24:0] f_u_rca24_out);
  wire f_u_rca24_ha_xor0;
  wire f_u_rca24_ha_and0;
  wire f_u_rca24_fa1_xor0;
  wire f_u_rca24_fa1_and0;
  wire f_u_rca24_fa1_xor1;
  wire f_u_rca24_fa1_and1;
  wire f_u_rca24_fa1_or0;
  wire f_u_rca24_fa2_xor0;
  wire f_u_rca24_fa2_and0;
  wire f_u_rca24_fa2_xor1;
  wire f_u_rca24_fa2_and1;
  wire f_u_rca24_fa2_or0;
  wire f_u_rca24_fa3_xor0;
  wire f_u_rca24_fa3_and0;
  wire f_u_rca24_fa3_xor1;
  wire f_u_rca24_fa3_and1;
  wire f_u_rca24_fa3_or0;
  wire f_u_rca24_fa4_xor0;
  wire f_u_rca24_fa4_and0;
  wire f_u_rca24_fa4_xor1;
  wire f_u_rca24_fa4_and1;
  wire f_u_rca24_fa4_or0;
  wire f_u_rca24_fa5_xor0;
  wire f_u_rca24_fa5_and0;
  wire f_u_rca24_fa5_xor1;
  wire f_u_rca24_fa5_and1;
  wire f_u_rca24_fa5_or0;
  wire f_u_rca24_fa6_xor0;
  wire f_u_rca24_fa6_and0;
  wire f_u_rca24_fa6_xor1;
  wire f_u_rca24_fa6_and1;
  wire f_u_rca24_fa6_or0;
  wire f_u_rca24_fa7_xor0;
  wire f_u_rca24_fa7_and0;
  wire f_u_rca24_fa7_xor1;
  wire f_u_rca24_fa7_and1;
  wire f_u_rca24_fa7_or0;
  wire f_u_rca24_fa8_xor0;
  wire f_u_rca24_fa8_and0;
  wire f_u_rca24_fa8_xor1;
  wire f_u_rca24_fa8_and1;
  wire f_u_rca24_fa8_or0;
  wire f_u_rca24_fa9_xor0;
  wire f_u_rca24_fa9_and0;
  wire f_u_rca24_fa9_xor1;
  wire f_u_rca24_fa9_and1;
  wire f_u_rca24_fa9_or0;
  wire f_u_rca24_fa10_xor0;
  wire f_u_rca24_fa10_and0;
  wire f_u_rca24_fa10_xor1;
  wire f_u_rca24_fa10_and1;
  wire f_u_rca24_fa10_or0;
  wire f_u_rca24_fa11_xor0;
  wire f_u_rca24_fa11_and0;
  wire f_u_rca24_fa11_xor1;
  wire f_u_rca24_fa11_and1;
  wire f_u_rca24_fa11_or0;
  wire f_u_rca24_fa12_xor0;
  wire f_u_rca24_fa12_and0;
  wire f_u_rca24_fa12_xor1;
  wire f_u_rca24_fa12_and1;
  wire f_u_rca24_fa12_or0;
  wire f_u_rca24_fa13_xor0;
  wire f_u_rca24_fa13_and0;
  wire f_u_rca24_fa13_xor1;
  wire f_u_rca24_fa13_and1;
  wire f_u_rca24_fa13_or0;
  wire f_u_rca24_fa14_xor0;
  wire f_u_rca24_fa14_and0;
  wire f_u_rca24_fa14_xor1;
  wire f_u_rca24_fa14_and1;
  wire f_u_rca24_fa14_or0;
  wire f_u_rca24_fa15_xor0;
  wire f_u_rca24_fa15_and0;
  wire f_u_rca24_fa15_xor1;
  wire f_u_rca24_fa15_and1;
  wire f_u_rca24_fa15_or0;
  wire f_u_rca24_fa16_xor0;
  wire f_u_rca24_fa16_and0;
  wire f_u_rca24_fa16_xor1;
  wire f_u_rca24_fa16_and1;
  wire f_u_rca24_fa16_or0;
  wire f_u_rca24_fa17_xor0;
  wire f_u_rca24_fa17_and0;
  wire f_u_rca24_fa17_xor1;
  wire f_u_rca24_fa17_and1;
  wire f_u_rca24_fa17_or0;
  wire f_u_rca24_fa18_xor0;
  wire f_u_rca24_fa18_and0;
  wire f_u_rca24_fa18_xor1;
  wire f_u_rca24_fa18_and1;
  wire f_u_rca24_fa18_or0;
  wire f_u_rca24_fa19_xor0;
  wire f_u_rca24_fa19_and0;
  wire f_u_rca24_fa19_xor1;
  wire f_u_rca24_fa19_and1;
  wire f_u_rca24_fa19_or0;
  wire f_u_rca24_fa20_xor0;
  wire f_u_rca24_fa20_and0;
  wire f_u_rca24_fa20_xor1;
  wire f_u_rca24_fa20_and1;
  wire f_u_rca24_fa20_or0;
  wire f_u_rca24_fa21_xor0;
  wire f_u_rca24_fa21_and0;
  wire f_u_rca24_fa21_xor1;
  wire f_u_rca24_fa21_and1;
  wire f_u_rca24_fa21_or0;
  wire f_u_rca24_fa22_xor0;
  wire f_u_rca24_fa22_and0;
  wire f_u_rca24_fa22_xor1;
  wire f_u_rca24_fa22_and1;
  wire f_u_rca24_fa22_or0;
  wire f_u_rca24_fa23_xor0;
  wire f_u_rca24_fa23_and0;
  wire f_u_rca24_fa23_xor1;
  wire f_u_rca24_fa23_and1;
  wire f_u_rca24_fa23_or0;

  assign f_u_rca24_ha_xor0 = a[0] ^ b[0];
  assign f_u_rca24_ha_and0 = a[0] & b[0];
  assign f_u_rca24_fa1_xor0 = a[1] ^ b[1];
  assign f_u_rca24_fa1_and0 = a[1] & b[1];
  assign f_u_rca24_fa1_xor1 = f_u_rca24_fa1_xor0 ^ f_u_rca24_ha_and0;
  assign f_u_rca24_fa1_and1 = f_u_rca24_fa1_xor0 & f_u_rca24_ha_and0;
  assign f_u_rca24_fa1_or0 = f_u_rca24_fa1_and0 | f_u_rca24_fa1_and1;
  assign f_u_rca24_fa2_xor0 = a[2] ^ b[2];
  assign f_u_rca24_fa2_and0 = a[2] & b[2];
  assign f_u_rca24_fa2_xor1 = f_u_rca24_fa2_xor0 ^ f_u_rca24_fa1_or0;
  assign f_u_rca24_fa2_and1 = f_u_rca24_fa2_xor0 & f_u_rca24_fa1_or0;
  assign f_u_rca24_fa2_or0 = f_u_rca24_fa2_and0 | f_u_rca24_fa2_and1;
  assign f_u_rca24_fa3_xor0 = a[3] ^ b[3];
  assign f_u_rca24_fa3_and0 = a[3] & b[3];
  assign f_u_rca24_fa3_xor1 = f_u_rca24_fa3_xor0 ^ f_u_rca24_fa2_or0;
  assign f_u_rca24_fa3_and1 = f_u_rca24_fa3_xor0 & f_u_rca24_fa2_or0;
  assign f_u_rca24_fa3_or0 = f_u_rca24_fa3_and0 | f_u_rca24_fa3_and1;
  assign f_u_rca24_fa4_xor0 = a[4] ^ b[4];
  assign f_u_rca24_fa4_and0 = a[4] & b[4];
  assign f_u_rca24_fa4_xor1 = f_u_rca24_fa4_xor0 ^ f_u_rca24_fa3_or0;
  assign f_u_rca24_fa4_and1 = f_u_rca24_fa4_xor0 & f_u_rca24_fa3_or0;
  assign f_u_rca24_fa4_or0 = f_u_rca24_fa4_and0 | f_u_rca24_fa4_and1;
  assign f_u_rca24_fa5_xor0 = a[5] ^ b[5];
  assign f_u_rca24_fa5_and0 = a[5] & b[5];
  assign f_u_rca24_fa5_xor1 = f_u_rca24_fa5_xor0 ^ f_u_rca24_fa4_or0;
  assign f_u_rca24_fa5_and1 = f_u_rca24_fa5_xor0 & f_u_rca24_fa4_or0;
  assign f_u_rca24_fa5_or0 = f_u_rca24_fa5_and0 | f_u_rca24_fa5_and1;
  assign f_u_rca24_fa6_xor0 = a[6] ^ b[6];
  assign f_u_rca24_fa6_and0 = a[6] & b[6];
  assign f_u_rca24_fa6_xor1 = f_u_rca24_fa6_xor0 ^ f_u_rca24_fa5_or0;
  assign f_u_rca24_fa6_and1 = f_u_rca24_fa6_xor0 & f_u_rca24_fa5_or0;
  assign f_u_rca24_fa6_or0 = f_u_rca24_fa6_and0 | f_u_rca24_fa6_and1;
  assign f_u_rca24_fa7_xor0 = a[7] ^ b[7];
  assign f_u_rca24_fa7_and0 = a[7] & b[7];
  assign f_u_rca24_fa7_xor1 = f_u_rca24_fa7_xor0 ^ f_u_rca24_fa6_or0;
  assign f_u_rca24_fa7_and1 = f_u_rca24_fa7_xor0 & f_u_rca24_fa6_or0;
  assign f_u_rca24_fa7_or0 = f_u_rca24_fa7_and0 | f_u_rca24_fa7_and1;
  assign f_u_rca24_fa8_xor0 = a[8] ^ b[8];
  assign f_u_rca24_fa8_and0 = a[8] & b[8];
  assign f_u_rca24_fa8_xor1 = f_u_rca24_fa8_xor0 ^ f_u_rca24_fa7_or0;
  assign f_u_rca24_fa8_and1 = f_u_rca24_fa8_xor0 & f_u_rca24_fa7_or0;
  assign f_u_rca24_fa8_or0 = f_u_rca24_fa8_and0 | f_u_rca24_fa8_and1;
  assign f_u_rca24_fa9_xor0 = a[9] ^ b[9];
  assign f_u_rca24_fa9_and0 = a[9] & b[9];
  assign f_u_rca24_fa9_xor1 = f_u_rca24_fa9_xor0 ^ f_u_rca24_fa8_or0;
  assign f_u_rca24_fa9_and1 = f_u_rca24_fa9_xor0 & f_u_rca24_fa8_or0;
  assign f_u_rca24_fa9_or0 = f_u_rca24_fa9_and0 | f_u_rca24_fa9_and1;
  assign f_u_rca24_fa10_xor0 = a[10] ^ b[10];
  assign f_u_rca24_fa10_and0 = a[10] & b[10];
  assign f_u_rca24_fa10_xor1 = f_u_rca24_fa10_xor0 ^ f_u_rca24_fa9_or0;
  assign f_u_rca24_fa10_and1 = f_u_rca24_fa10_xor0 & f_u_rca24_fa9_or0;
  assign f_u_rca24_fa10_or0 = f_u_rca24_fa10_and0 | f_u_rca24_fa10_and1;
  assign f_u_rca24_fa11_xor0 = a[11] ^ b[11];
  assign f_u_rca24_fa11_and0 = a[11] & b[11];
  assign f_u_rca24_fa11_xor1 = f_u_rca24_fa11_xor0 ^ f_u_rca24_fa10_or0;
  assign f_u_rca24_fa11_and1 = f_u_rca24_fa11_xor0 & f_u_rca24_fa10_or0;
  assign f_u_rca24_fa11_or0 = f_u_rca24_fa11_and0 | f_u_rca24_fa11_and1;
  assign f_u_rca24_fa12_xor0 = a[12] ^ b[12];
  assign f_u_rca24_fa12_and0 = a[12] & b[12];
  assign f_u_rca24_fa12_xor1 = f_u_rca24_fa12_xor0 ^ f_u_rca24_fa11_or0;
  assign f_u_rca24_fa12_and1 = f_u_rca24_fa12_xor0 & f_u_rca24_fa11_or0;
  assign f_u_rca24_fa12_or0 = f_u_rca24_fa12_and0 | f_u_rca24_fa12_and1;
  assign f_u_rca24_fa13_xor0 = a[13] ^ b[13];
  assign f_u_rca24_fa13_and0 = a[13] & b[13];
  assign f_u_rca24_fa13_xor1 = f_u_rca24_fa13_xor0 ^ f_u_rca24_fa12_or0;
  assign f_u_rca24_fa13_and1 = f_u_rca24_fa13_xor0 & f_u_rca24_fa12_or0;
  assign f_u_rca24_fa13_or0 = f_u_rca24_fa13_and0 | f_u_rca24_fa13_and1;
  assign f_u_rca24_fa14_xor0 = a[14] ^ b[14];
  assign f_u_rca24_fa14_and0 = a[14] & b[14];
  assign f_u_rca24_fa14_xor1 = f_u_rca24_fa14_xor0 ^ f_u_rca24_fa13_or0;
  assign f_u_rca24_fa14_and1 = f_u_rca24_fa14_xor0 & f_u_rca24_fa13_or0;
  assign f_u_rca24_fa14_or0 = f_u_rca24_fa14_and0 | f_u_rca24_fa14_and1;
  assign f_u_rca24_fa15_xor0 = a[15] ^ b[15];
  assign f_u_rca24_fa15_and0 = a[15] & b[15];
  assign f_u_rca24_fa15_xor1 = f_u_rca24_fa15_xor0 ^ f_u_rca24_fa14_or0;
  assign f_u_rca24_fa15_and1 = f_u_rca24_fa15_xor0 & f_u_rca24_fa14_or0;
  assign f_u_rca24_fa15_or0 = f_u_rca24_fa15_and0 | f_u_rca24_fa15_and1;
  assign f_u_rca24_fa16_xor0 = a[16] ^ b[16];
  assign f_u_rca24_fa16_and0 = a[16] & b[16];
  assign f_u_rca24_fa16_xor1 = f_u_rca24_fa16_xor0 ^ f_u_rca24_fa15_or0;
  assign f_u_rca24_fa16_and1 = f_u_rca24_fa16_xor0 & f_u_rca24_fa15_or0;
  assign f_u_rca24_fa16_or0 = f_u_rca24_fa16_and0 | f_u_rca24_fa16_and1;
  assign f_u_rca24_fa17_xor0 = a[17] ^ b[17];
  assign f_u_rca24_fa17_and0 = a[17] & b[17];
  assign f_u_rca24_fa17_xor1 = f_u_rca24_fa17_xor0 ^ f_u_rca24_fa16_or0;
  assign f_u_rca24_fa17_and1 = f_u_rca24_fa17_xor0 & f_u_rca24_fa16_or0;
  assign f_u_rca24_fa17_or0 = f_u_rca24_fa17_and0 | f_u_rca24_fa17_and1;
  assign f_u_rca24_fa18_xor0 = a[18] ^ b[18];
  assign f_u_rca24_fa18_and0 = a[18] & b[18];
  assign f_u_rca24_fa18_xor1 = f_u_rca24_fa18_xor0 ^ f_u_rca24_fa17_or0;
  assign f_u_rca24_fa18_and1 = f_u_rca24_fa18_xor0 & f_u_rca24_fa17_or0;
  assign f_u_rca24_fa18_or0 = f_u_rca24_fa18_and0 | f_u_rca24_fa18_and1;
  assign f_u_rca24_fa19_xor0 = a[19] ^ b[19];
  assign f_u_rca24_fa19_and0 = a[19] & b[19];
  assign f_u_rca24_fa19_xor1 = f_u_rca24_fa19_xor0 ^ f_u_rca24_fa18_or0;
  assign f_u_rca24_fa19_and1 = f_u_rca24_fa19_xor0 & f_u_rca24_fa18_or0;
  assign f_u_rca24_fa19_or0 = f_u_rca24_fa19_and0 | f_u_rca24_fa19_and1;
  assign f_u_rca24_fa20_xor0 = a[20] ^ b[20];
  assign f_u_rca24_fa20_and0 = a[20] & b[20];
  assign f_u_rca24_fa20_xor1 = f_u_rca24_fa20_xor0 ^ f_u_rca24_fa19_or0;
  assign f_u_rca24_fa20_and1 = f_u_rca24_fa20_xor0 & f_u_rca24_fa19_or0;
  assign f_u_rca24_fa20_or0 = f_u_rca24_fa20_and0 | f_u_rca24_fa20_and1;
  assign f_u_rca24_fa21_xor0 = a[21] ^ b[21];
  assign f_u_rca24_fa21_and0 = a[21] & b[21];
  assign f_u_rca24_fa21_xor1 = f_u_rca24_fa21_xor0 ^ f_u_rca24_fa20_or0;
  assign f_u_rca24_fa21_and1 = f_u_rca24_fa21_xor0 & f_u_rca24_fa20_or0;
  assign f_u_rca24_fa21_or0 = f_u_rca24_fa21_and0 | f_u_rca24_fa21_and1;
  assign f_u_rca24_fa22_xor0 = a[22] ^ b[22];
  assign f_u_rca24_fa22_and0 = a[22] & b[22];
  assign f_u_rca24_fa22_xor1 = f_u_rca24_fa22_xor0 ^ f_u_rca24_fa21_or0;
  assign f_u_rca24_fa22_and1 = f_u_rca24_fa22_xor0 & f_u_rca24_fa21_or0;
  assign f_u_rca24_fa22_or0 = f_u_rca24_fa22_and0 | f_u_rca24_fa22_and1;
  assign f_u_rca24_fa23_xor0 = a[23] ^ b[23];
  assign f_u_rca24_fa23_and0 = a[23] & b[23];
  assign f_u_rca24_fa23_xor1 = f_u_rca24_fa23_xor0 ^ f_u_rca24_fa22_or0;
  assign f_u_rca24_fa23_and1 = f_u_rca24_fa23_xor0 & f_u_rca24_fa22_or0;
  assign f_u_rca24_fa23_or0 = f_u_rca24_fa23_and0 | f_u_rca24_fa23_and1;

  assign f_u_rca24_out[0] = f_u_rca24_ha_xor0;
  assign f_u_rca24_out[1] = f_u_rca24_fa1_xor1;
  assign f_u_rca24_out[2] = f_u_rca24_fa2_xor1;
  assign f_u_rca24_out[3] = f_u_rca24_fa3_xor1;
  assign f_u_rca24_out[4] = f_u_rca24_fa4_xor1;
  assign f_u_rca24_out[5] = f_u_rca24_fa5_xor1;
  assign f_u_rca24_out[6] = f_u_rca24_fa6_xor1;
  assign f_u_rca24_out[7] = f_u_rca24_fa7_xor1;
  assign f_u_rca24_out[8] = f_u_rca24_fa8_xor1;
  assign f_u_rca24_out[9] = f_u_rca24_fa9_xor1;
  assign f_u_rca24_out[10] = f_u_rca24_fa10_xor1;
  assign f_u_rca24_out[11] = f_u_rca24_fa11_xor1;
  assign f_u_rca24_out[12] = f_u_rca24_fa12_xor1;
  assign f_u_rca24_out[13] = f_u_rca24_fa13_xor1;
  assign f_u_rca24_out[14] = f_u_rca24_fa14_xor1;
  assign f_u_rca24_out[15] = f_u_rca24_fa15_xor1;
  assign f_u_rca24_out[16] = f_u_rca24_fa16_xor1;
  assign f_u_rca24_out[17] = f_u_rca24_fa17_xor1;
  assign f_u_rca24_out[18] = f_u_rca24_fa18_xor1;
  assign f_u_rca24_out[19] = f_u_rca24_fa19_xor1;
  assign f_u_rca24_out[20] = f_u_rca24_fa20_xor1;
  assign f_u_rca24_out[21] = f_u_rca24_fa21_xor1;
  assign f_u_rca24_out[22] = f_u_rca24_fa22_xor1;
  assign f_u_rca24_out[23] = f_u_rca24_fa23_xor1;
  assign f_u_rca24_out[24] = f_u_rca24_fa23_or0;
endmodule
module f_u_rca12(input [11:0] a, input [11:0] b, output [12:0] f_u_rca12_out);
  wire f_u_rca12_ha_xor0;
  wire f_u_rca12_ha_and0;
  wire f_u_rca12_fa1_xor0;
  wire f_u_rca12_fa1_and0;
  wire f_u_rca12_fa1_xor1;
  wire f_u_rca12_fa1_and1;
  wire f_u_rca12_fa1_or0;
  wire f_u_rca12_fa2_xor0;
  wire f_u_rca12_fa2_and0;
  wire f_u_rca12_fa2_xor1;
  wire f_u_rca12_fa2_and1;
  wire f_u_rca12_fa2_or0;
  wire f_u_rca12_fa3_xor0;
  wire f_u_rca12_fa3_and0;
  wire f_u_rca12_fa3_xor1;
  wire f_u_rca12_fa3_and1;
  wire f_u_rca12_fa3_or0;
  wire f_u_rca12_fa4_xor0;
  wire f_u_rca12_fa4_and0;
  wire f_u_rca12_fa4_xor1;
  wire f_u_rca12_fa4_and1;
  wire f_u_rca12_fa4_or0;
  wire f_u_rca12_fa5_xor0;
  wire f_u_rca12_fa5_and0;
  wire f_u_rca12_fa5_xor1;
  wire f_u_rca12_fa5_and1;
  wire f_u_rca12_fa5_or0;
  wire f_u_rca12_fa6_xor0;
  wire f_u_rca12_fa6_and0;
  wire f_u_rca12_fa6_xor1;
  wire f_u_rca12_fa6_and1;
  wire f_u_rca12_fa6_or0;
  wire f_u_rca12_fa7_xor0;
  wire f_u_rca12_fa7_and0;
  wire f_u_rca12_fa7_xor1;
  wire f_u_rca12_fa7_and1;
  wire f_u_rca12_fa7_or0;
  wire f_u_rca12_fa8_xor0;
  wire f_u_rca12_fa8_and0;
  wire f_u_rca12_fa8_xor1;
  wire f_u_rca12_fa8_and1;
  wire f_u_rca12_fa8_or0;
  wire f_u_rca12_fa9_xor0;
  wire f_u_rca12_fa9_and0;
  wire f_u_rca12_fa9_xor1;
  wire f_u_rca12_fa9_and1;
  wire f_u_rca12_fa9_or0;
  wire f_u_rca12_fa10_xor0;
  wire f_u_rca12_fa10_and0;
  wire f_u_rca12_fa10_xor1;
  wire f_u_rca12_fa10_and1;
  wire f_u_rca12_fa10_or0;
  wire f_u_rca12_fa11_xor0;
  wire f_u_rca12_fa11_and0;
  wire f_u_rca12_fa11_xor1;
  wire f_u_rca12_fa11_and1;
  wire f_u_rca12_fa11_or0;

  assign f_u_rca12_ha_xor0 = a[0] ^ b[0];
  assign f_u_rca12_ha_and0 = a[0] & b[0];
  assign f_u_rca12_fa1_xor0 = a[1] ^ b[1];
  assign f_u_rca12_fa1_and0 = a[1] & b[1];
  assign f_u_rca12_fa1_xor1 = f_u_rca12_fa1_xor0 ^ f_u_rca12_ha_and0;
  assign f_u_rca12_fa1_and1 = f_u_rca12_fa1_xor0 & f_u_rca12_ha_and0;
  assign f_u_rca12_fa1_or0 = f_u_rca12_fa1_and0 | f_u_rca12_fa1_and1;
  assign f_u_rca12_fa2_xor0 = a[2] ^ b[2];
  assign f_u_rca12_fa2_and0 = a[2] & b[2];
  assign f_u_rca12_fa2_xor1 = f_u_rca12_fa2_xor0 ^ f_u_rca12_fa1_or0;
  assign f_u_rca12_fa2_and1 = f_u_rca12_fa2_xor0 & f_u_rca12_fa1_or0;
  assign f_u_rca12_fa2_or0 = f_u_rca12_fa2_and0 | f_u_rca12_fa2_and1;
  assign f_u_rca12_fa3_xor0 = a[3] ^ b[3];
  assign f_u_rca12_fa3_and0 = a[3] & b[3];
  assign f_u_rca12_fa3_xor1 = f_u_rca12_fa3_xor0 ^ f_u_rca12_fa2_or0;
  assign f_u_rca12_fa3_and1 = f_u_rca12_fa3_xor0 & f_u_rca12_fa2_or0;
  assign f_u_rca12_fa3_or0 = f_u_rca12_fa3_and0 | f_u_rca12_fa3_and1;
  assign f_u_rca12_fa4_xor0 = a[4] ^ b[4];
  assign f_u_rca12_fa4_and0 = a[4] & b[4];
  assign f_u_rca12_fa4_xor1 = f_u_rca12_fa4_xor0 ^ f_u_rca12_fa3_or0;
  assign f_u_rca12_fa4_and1 = f_u_rca12_fa4_xor0 & f_u_rca12_fa3_or0;
  assign f_u_rca12_fa4_or0 = f_u_rca12_fa4_and0 | f_u_rca12_fa4_and1;
  assign f_u_rca12_fa5_xor0 = a[5] ^ b[5];
  assign f_u_rca12_fa5_and0 = a[5] & b[5];
  assign f_u_rca12_fa5_xor1 = f_u_rca12_fa5_xor0 ^ f_u_rca12_fa4_or0;
  assign f_u_rca12_fa5_and1 = f_u_rca12_fa5_xor0 & f_u_rca12_fa4_or0;
  assign f_u_rca12_fa5_or0 = f_u_rca12_fa5_and0 | f_u_rca12_fa5_and1;
  assign f_u_rca12_fa6_xor0 = a[6] ^ b[6];
  assign f_u_rca12_fa6_and0 = a[6] & b[6];
  assign f_u_rca12_fa6_xor1 = f_u_rca12_fa6_xor0 ^ f_u_rca12_fa5_or0;
  assign f_u_rca12_fa6_and1 = f_u_rca12_fa6_xor0 & f_u_rca12_fa5_or0;
  assign f_u_rca12_fa6_or0 = f_u_rca12_fa6_and0 | f_u_rca12_fa6_and1;
  assign f_u_rca12_fa7_xor0 = a[7] ^ b[7];
  assign f_u_rca12_fa7_and0 = a[7] & b[7];
  assign f_u_rca12_fa7_xor1 = f_u_rca12_fa7_xor0 ^ f_u_rca12_fa6_or0;
  assign f_u_rca12_fa7_and1 = f_u_rca12_fa7_xor0 & f_u_rca12_fa6_or0;
  assign f_u_rca12_fa7_or0 = f_u_rca12_fa7_and0 | f_u_rca12_fa7_and1;
  assign f_u_rca12_fa8_xor0 = a[8] ^ b[8];
  assign f_u_rca12_fa8_and0 = a[8] & b[8];
  assign f_u_rca12_fa8_xor1 = f_u_rca12_fa8_xor0 ^ f_u_rca12_fa7_or0;
  assign f_u_rca12_fa8_and1 = f_u_rca12_fa8_xor0 & f_u_rca12_fa7_or0;
  assign f_u_rca12_fa8_or0 = f_u_rca12_fa8_and0 | f_u_rca12_fa8_and1;
  assign f_u_rca12_fa9_xor0 = a[9] ^ b[9];
  assign f_u_rca12_fa9_and0 = a[9] & b[9];
  assign f_u_rca12_fa9_xor1 = f_u_rca12_fa9_xor0 ^ f_u_rca12_fa8_or0;
  assign f_u_rca12_fa9_and1 = f_u_rca12_fa9_xor0 & f_u_rca12_fa8_or0;
  assign f_u_rca12_fa9_or0 = f_u_rca12_fa9_and0 | f_u_rca12_fa9_and1;
  assign f_u_rca12_fa10_xor0 = a[10] ^ b[10];
  assign f_u_rca12_fa10_and0 = a[10] & b[10];
  assign f_u_rca12_fa10_xor1 = f_u_rca12_fa10_xor0 ^ f_u_rca12_fa9_or0;
  assign f_u_rca12_fa10_and1 = f_u_rca12_fa10_xor0 & f_u_rca12_fa9_or0;
  assign f_u_rca12_fa10_or0 = f_u_rca12_fa10_and0 | f_u_rca12_fa10_and1;
  assign f_u_rca12_fa11_xor0 = a[11] ^ b[11];
  assign f_u_rca12_fa11_and0 = a[11] & b[11];
  assign f_u_rca12_fa11_xor1 = f_u_rca12_fa11_xor0 ^ f_u_rca12_fa10_or0;
  assign f_u_rca12_fa11_and1 = f_u_rca12_fa11_xor0 & f_u_rca12_fa10_or0;
  assign f_u_rca12_fa11_or0 = f_u_rca12_fa11_and0 | f_u_rca12_fa11_and1;

  assign f_u_rca12_out[0] = f_u_rca12_ha_xor0;
  assign f_u_rca12_out[1] = f_u_rca12_fa1_xor1;
  assign f_u_rca12_out[2] = f_u_rca12_fa2_xor1;
  assign f_u_rca12_out[3] = f_u_rca12_fa3_xor1;
  assign f_u_rca12_out[4] = f_u_rca12_fa4_xor1;
  assign f_u_rca12_out[5] = f_u_rca12_fa5_xor1;
  assign f_u_rca12_out[6] = f_u_rca12_fa6_xor1;
  assign f_u_rca12_out[7] = f_u_rca12_fa7_xor1;
  assign f_u_rca12_out[8] = f_u_rca12_fa8_xor1;
  assign f_u_rca12_out[9] = f_u_rca12_fa9_xor1;
  assign f_u_rca12_out[10] = f_u_rca12_fa10_xor1;
  assign f_u_rca12_out[11] = f_u_rca12_fa11_xor1;
  assign f_u_rca12_out[12] = f_u_rca12_fa11_or0;
endmodule
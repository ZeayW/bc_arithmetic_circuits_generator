#include <stdio.h>
#include <stdint.h>

uint8_t xor_gate(uint8_t _a, uint8_t _b){
  return ((_a >> 0) & 0x01) ^ ((_b >> 0) & 0x01);
}

uint8_t xnor_gate(uint8_t _a, uint8_t _b){
  return ~(((_a >> 0) & 0x01) ^ ((_b >> 0) & 0x01)) & 0x01 << 0;
}

uint8_t or_gate(uint8_t _a, uint8_t _b){
  return ((_a >> 0) & 0x01) | ((_b >> 0) & 0x01);
}

uint8_t and_gate(uint8_t _a, uint8_t _b){
  return ((_a >> 0) & 0x01) & ((_b >> 0) & 0x01);
}

uint8_t nand_gate(uint8_t _a, uint8_t _b){
  return ~(((_a >> 0) & 0x01) & ((_b >> 0) & 0x01)) & 0x01 << 0;
}

uint8_t constant_wire_value_1(uint8_t a, uint8_t b){
  uint8_t out = 0;
  uint8_t constant_wire_value_1_a = 0;
  uint8_t constant_wire_value_1_b = 0;
  uint8_t constant_wire_value_1_y0 = 0;
  uint8_t constant_wire_value_1_y1 = 0;
  uint8_t constant_wire_1 = 0;

  constant_wire_value_1_a = ((a >> 0) & 0x01);
  constant_wire_value_1_b = ((b >> 0) & 0x01);
  constant_wire_value_1_y0 = xor_gate(constant_wire_value_1_a, constant_wire_value_1_b);
  constant_wire_value_1_y1 = xnor_gate(constant_wire_value_1_a, constant_wire_value_1_b);
  constant_wire_1 = or_gate(constant_wire_value_1_y0, constant_wire_value_1_y1);

  out |= (constant_wire_1 & 0x01) << 0;
  return out;
}

uint8_t ha(uint8_t a, uint8_t b){
  uint8_t out = 0;
  uint8_t ha_a = 0;
  uint8_t ha_b = 0;
  uint8_t ha_y0 = 0;
  uint8_t ha_y1 = 0;

  ha_a = ((a >> 0) & 0x01);
  ha_b = ((b >> 0) & 0x01);
  ha_y0 = xor_gate(ha_a, ha_b);
  ha_y1 = and_gate(ha_a, ha_b);

  out |= (ha_y0 & 0x01) << 0;
  out |= (ha_y1 & 0x01) << 1;
  return out;
}

uint8_t fa(uint8_t a, uint8_t b, uint8_t cin){
  uint8_t out = 0;
  uint8_t fa_a = 0;
  uint8_t fa_b = 0;
  uint8_t fa_y0 = 0;
  uint8_t fa_y1 = 0;
  uint8_t fa_cin = 0;
  uint8_t fa_y2 = 0;
  uint8_t fa_y3 = 0;
  uint8_t fa_y4 = 0;

  fa_a = ((a >> 0) & 0x01);
  fa_b = ((b >> 0) & 0x01);
  fa_cin = ((cin >> 0) & 0x01);
  fa_y0 = xor_gate(fa_a, fa_b);
  fa_y1 = and_gate(fa_a, fa_b);
  fa_y2 = xor_gate(fa_y0, fa_cin);
  fa_y3 = and_gate(fa_y0, fa_cin);
  fa_y4 = or_gate(fa_y1, fa_y3);

  out |= (fa_y2 & 0x01) << 0;
  out |= (fa_y4 & 0x01) << 1;
  return out;
}

uint64_t u_rca14(uint64_t a, uint64_t b){
  uint64_t out = 0;
  uint8_t a_0 = 0;
  uint8_t a_1 = 0;
  uint8_t a_2 = 0;
  uint8_t a_3 = 0;
  uint8_t a_4 = 0;
  uint8_t a_5 = 0;
  uint8_t a_6 = 0;
  uint8_t a_7 = 0;
  uint8_t a_8 = 0;
  uint8_t a_9 = 0;
  uint8_t a_10 = 0;
  uint8_t a_11 = 0;
  uint8_t a_12 = 0;
  uint8_t a_13 = 0;
  uint8_t b_0 = 0;
  uint8_t b_1 = 0;
  uint8_t b_2 = 0;
  uint8_t b_3 = 0;
  uint8_t b_4 = 0;
  uint8_t b_5 = 0;
  uint8_t b_6 = 0;
  uint8_t b_7 = 0;
  uint8_t b_8 = 0;
  uint8_t b_9 = 0;
  uint8_t b_10 = 0;
  uint8_t b_11 = 0;
  uint8_t b_12 = 0;
  uint8_t b_13 = 0;
  uint8_t u_rca14_ha_y0 = 0;
  uint8_t u_rca14_ha_y1 = 0;
  uint8_t u_rca14_fa1_y2 = 0;
  uint8_t u_rca14_fa1_y4 = 0;
  uint8_t u_rca14_fa2_y2 = 0;
  uint8_t u_rca14_fa2_y4 = 0;
  uint8_t u_rca14_fa3_y2 = 0;
  uint8_t u_rca14_fa3_y4 = 0;
  uint8_t u_rca14_fa4_y2 = 0;
  uint8_t u_rca14_fa4_y4 = 0;
  uint8_t u_rca14_fa5_y2 = 0;
  uint8_t u_rca14_fa5_y4 = 0;
  uint8_t u_rca14_fa6_y2 = 0;
  uint8_t u_rca14_fa6_y4 = 0;
  uint8_t u_rca14_fa7_y2 = 0;
  uint8_t u_rca14_fa7_y4 = 0;
  uint8_t u_rca14_fa8_y2 = 0;
  uint8_t u_rca14_fa8_y4 = 0;
  uint8_t u_rca14_fa9_y2 = 0;
  uint8_t u_rca14_fa9_y4 = 0;
  uint8_t u_rca14_fa10_y2 = 0;
  uint8_t u_rca14_fa10_y4 = 0;
  uint8_t u_rca14_fa11_y2 = 0;
  uint8_t u_rca14_fa11_y4 = 0;
  uint8_t u_rca14_fa12_y2 = 0;
  uint8_t u_rca14_fa12_y4 = 0;
  uint8_t u_rca14_fa13_y2 = 0;
  uint8_t u_rca14_fa13_y4 = 0;

  a_0 = ((a >> 0) & 0x01);
  a_1 = ((a >> 1) & 0x01);
  a_2 = ((a >> 2) & 0x01);
  a_3 = ((a >> 3) & 0x01);
  a_4 = ((a >> 4) & 0x01);
  a_5 = ((a >> 5) & 0x01);
  a_6 = ((a >> 6) & 0x01);
  a_7 = ((a >> 7) & 0x01);
  a_8 = ((a >> 8) & 0x01);
  a_9 = ((a >> 9) & 0x01);
  a_10 = ((a >> 10) & 0x01);
  a_11 = ((a >> 11) & 0x01);
  a_12 = ((a >> 12) & 0x01);
  a_13 = ((a >> 13) & 0x01);
  b_0 = ((b >> 0) & 0x01);
  b_1 = ((b >> 1) & 0x01);
  b_2 = ((b >> 2) & 0x01);
  b_3 = ((b >> 3) & 0x01);
  b_4 = ((b >> 4) & 0x01);
  b_5 = ((b >> 5) & 0x01);
  b_6 = ((b >> 6) & 0x01);
  b_7 = ((b >> 7) & 0x01);
  b_8 = ((b >> 8) & 0x01);
  b_9 = ((b >> 9) & 0x01);
  b_10 = ((b >> 10) & 0x01);
  b_11 = ((b >> 11) & 0x01);
  b_12 = ((b >> 12) & 0x01);
  b_13 = ((b >> 13) & 0x01);
  u_rca14_ha_y0 = (ha(a_0, b_0) >> 0) & 0x01;
  u_rca14_ha_y1 = (ha(a_0, b_0) >> 1) & 0x01;
  u_rca14_fa1_y2 = (fa(a_1, b_1, u_rca14_ha_y1) >> 0) & 0x01;
  u_rca14_fa1_y4 = (fa(a_1, b_1, u_rca14_ha_y1) >> 1) & 0x01;
  u_rca14_fa2_y2 = (fa(a_2, b_2, u_rca14_fa1_y4) >> 0) & 0x01;
  u_rca14_fa2_y4 = (fa(a_2, b_2, u_rca14_fa1_y4) >> 1) & 0x01;
  u_rca14_fa3_y2 = (fa(a_3, b_3, u_rca14_fa2_y4) >> 0) & 0x01;
  u_rca14_fa3_y4 = (fa(a_3, b_3, u_rca14_fa2_y4) >> 1) & 0x01;
  u_rca14_fa4_y2 = (fa(a_4, b_4, u_rca14_fa3_y4) >> 0) & 0x01;
  u_rca14_fa4_y4 = (fa(a_4, b_4, u_rca14_fa3_y4) >> 1) & 0x01;
  u_rca14_fa5_y2 = (fa(a_5, b_5, u_rca14_fa4_y4) >> 0) & 0x01;
  u_rca14_fa5_y4 = (fa(a_5, b_5, u_rca14_fa4_y4) >> 1) & 0x01;
  u_rca14_fa6_y2 = (fa(a_6, b_6, u_rca14_fa5_y4) >> 0) & 0x01;
  u_rca14_fa6_y4 = (fa(a_6, b_6, u_rca14_fa5_y4) >> 1) & 0x01;
  u_rca14_fa7_y2 = (fa(a_7, b_7, u_rca14_fa6_y4) >> 0) & 0x01;
  u_rca14_fa7_y4 = (fa(a_7, b_7, u_rca14_fa6_y4) >> 1) & 0x01;
  u_rca14_fa8_y2 = (fa(a_8, b_8, u_rca14_fa7_y4) >> 0) & 0x01;
  u_rca14_fa8_y4 = (fa(a_8, b_8, u_rca14_fa7_y4) >> 1) & 0x01;
  u_rca14_fa9_y2 = (fa(a_9, b_9, u_rca14_fa8_y4) >> 0) & 0x01;
  u_rca14_fa9_y4 = (fa(a_9, b_9, u_rca14_fa8_y4) >> 1) & 0x01;
  u_rca14_fa10_y2 = (fa(a_10, b_10, u_rca14_fa9_y4) >> 0) & 0x01;
  u_rca14_fa10_y4 = (fa(a_10, b_10, u_rca14_fa9_y4) >> 1) & 0x01;
  u_rca14_fa11_y2 = (fa(a_11, b_11, u_rca14_fa10_y4) >> 0) & 0x01;
  u_rca14_fa11_y4 = (fa(a_11, b_11, u_rca14_fa10_y4) >> 1) & 0x01;
  u_rca14_fa12_y2 = (fa(a_12, b_12, u_rca14_fa11_y4) >> 0) & 0x01;
  u_rca14_fa12_y4 = (fa(a_12, b_12, u_rca14_fa11_y4) >> 1) & 0x01;
  u_rca14_fa13_y2 = (fa(a_13, b_13, u_rca14_fa12_y4) >> 0) & 0x01;
  u_rca14_fa13_y4 = (fa(a_13, b_13, u_rca14_fa12_y4) >> 1) & 0x01;

  out |= (u_rca14_ha_y0 & 0x01) << 0;
  out |= (u_rca14_fa1_y2 & 0x01) << 1;
  out |= (u_rca14_fa2_y2 & 0x01) << 2;
  out |= (u_rca14_fa3_y2 & 0x01) << 3;
  out |= (u_rca14_fa4_y2 & 0x01) << 4;
  out |= (u_rca14_fa5_y2 & 0x01) << 5;
  out |= (u_rca14_fa6_y2 & 0x01) << 6;
  out |= (u_rca14_fa7_y2 & 0x01) << 7;
  out |= (u_rca14_fa8_y2 & 0x01) << 8;
  out |= (u_rca14_fa9_y2 & 0x01) << 9;
  out |= (u_rca14_fa10_y2 & 0x01) << 10;
  out |= (u_rca14_fa11_y2 & 0x01) << 11;
  out |= (u_rca14_fa12_y2 & 0x01) << 12;
  out |= (u_rca14_fa13_y2 & 0x01) << 13;
  out |= (u_rca14_fa13_y4 & 0x01) << 14;
  return out;
}

uint64_t h_s_wallace_rca8(uint64_t a, uint64_t b){
  uint64_t out = 0;
  uint8_t a_0 = 0;
  uint8_t a_1 = 0;
  uint8_t a_2 = 0;
  uint8_t a_3 = 0;
  uint8_t a_4 = 0;
  uint8_t a_5 = 0;
  uint8_t a_6 = 0;
  uint8_t a_7 = 0;
  uint8_t b_0 = 0;
  uint8_t b_1 = 0;
  uint8_t b_2 = 0;
  uint8_t b_3 = 0;
  uint8_t b_4 = 0;
  uint8_t b_5 = 0;
  uint8_t b_6 = 0;
  uint8_t b_7 = 0;
  uint8_t constant_wire_1 = 0;
  uint8_t h_s_wallace_rca8_and_2_0_y0 = 0;
  uint8_t h_s_wallace_rca8_and_1_1_y0 = 0;
  uint8_t h_s_wallace_rca8_ha0_y0 = 0;
  uint8_t h_s_wallace_rca8_ha0_y1 = 0;
  uint8_t h_s_wallace_rca8_and_3_0_y0 = 0;
  uint8_t h_s_wallace_rca8_and_2_1_y0 = 0;
  uint8_t h_s_wallace_rca8_fa0_y2 = 0;
  uint8_t h_s_wallace_rca8_fa0_y4 = 0;
  uint8_t h_s_wallace_rca8_and_4_0_y0 = 0;
  uint8_t h_s_wallace_rca8_and_3_1_y0 = 0;
  uint8_t h_s_wallace_rca8_fa1_y2 = 0;
  uint8_t h_s_wallace_rca8_fa1_y4 = 0;
  uint8_t h_s_wallace_rca8_and_5_0_y0 = 0;
  uint8_t h_s_wallace_rca8_and_4_1_y0 = 0;
  uint8_t h_s_wallace_rca8_fa2_y2 = 0;
  uint8_t h_s_wallace_rca8_fa2_y4 = 0;
  uint8_t h_s_wallace_rca8_and_6_0_y0 = 0;
  uint8_t h_s_wallace_rca8_and_5_1_y0 = 0;
  uint8_t h_s_wallace_rca8_fa3_y2 = 0;
  uint8_t h_s_wallace_rca8_fa3_y4 = 0;
  uint8_t h_s_wallace_rca8_nand_7_0_y0 = 0;
  uint8_t h_s_wallace_rca8_and_6_1_y0 = 0;
  uint8_t h_s_wallace_rca8_fa4_y2 = 0;
  uint8_t h_s_wallace_rca8_fa4_y4 = 0;
  uint8_t h_s_wallace_rca8_nand_7_1_y0 = 0;
  uint8_t h_s_wallace_rca8_fa5_y2 = 0;
  uint8_t h_s_wallace_rca8_fa5_y4 = 0;
  uint8_t h_s_wallace_rca8_nand_7_2_y0 = 0;
  uint8_t h_s_wallace_rca8_and_6_3_y0 = 0;
  uint8_t h_s_wallace_rca8_fa6_y2 = 0;
  uint8_t h_s_wallace_rca8_fa6_y4 = 0;
  uint8_t h_s_wallace_rca8_nand_7_3_y0 = 0;
  uint8_t h_s_wallace_rca8_and_6_4_y0 = 0;
  uint8_t h_s_wallace_rca8_fa7_y2 = 0;
  uint8_t h_s_wallace_rca8_fa7_y4 = 0;
  uint8_t h_s_wallace_rca8_nand_7_4_y0 = 0;
  uint8_t h_s_wallace_rca8_and_6_5_y0 = 0;
  uint8_t h_s_wallace_rca8_fa8_y2 = 0;
  uint8_t h_s_wallace_rca8_fa8_y4 = 0;
  uint8_t h_s_wallace_rca8_nand_7_5_y0 = 0;
  uint8_t h_s_wallace_rca8_and_6_6_y0 = 0;
  uint8_t h_s_wallace_rca8_fa9_y2 = 0;
  uint8_t h_s_wallace_rca8_fa9_y4 = 0;
  uint8_t h_s_wallace_rca8_and_1_2_y0 = 0;
  uint8_t h_s_wallace_rca8_and_0_3_y0 = 0;
  uint8_t h_s_wallace_rca8_ha1_y0 = 0;
  uint8_t h_s_wallace_rca8_ha1_y1 = 0;
  uint8_t h_s_wallace_rca8_and_2_2_y0 = 0;
  uint8_t h_s_wallace_rca8_and_1_3_y0 = 0;
  uint8_t h_s_wallace_rca8_fa10_y2 = 0;
  uint8_t h_s_wallace_rca8_fa10_y4 = 0;
  uint8_t h_s_wallace_rca8_and_3_2_y0 = 0;
  uint8_t h_s_wallace_rca8_and_2_3_y0 = 0;
  uint8_t h_s_wallace_rca8_fa11_y2 = 0;
  uint8_t h_s_wallace_rca8_fa11_y4 = 0;
  uint8_t h_s_wallace_rca8_and_4_2_y0 = 0;
  uint8_t h_s_wallace_rca8_and_3_3_y0 = 0;
  uint8_t h_s_wallace_rca8_fa12_y2 = 0;
  uint8_t h_s_wallace_rca8_fa12_y4 = 0;
  uint8_t h_s_wallace_rca8_and_5_2_y0 = 0;
  uint8_t h_s_wallace_rca8_and_4_3_y0 = 0;
  uint8_t h_s_wallace_rca8_fa13_y2 = 0;
  uint8_t h_s_wallace_rca8_fa13_y4 = 0;
  uint8_t h_s_wallace_rca8_and_6_2_y0 = 0;
  uint8_t h_s_wallace_rca8_and_5_3_y0 = 0;
  uint8_t h_s_wallace_rca8_fa14_y2 = 0;
  uint8_t h_s_wallace_rca8_fa14_y4 = 0;
  uint8_t h_s_wallace_rca8_and_5_4_y0 = 0;
  uint8_t h_s_wallace_rca8_and_4_5_y0 = 0;
  uint8_t h_s_wallace_rca8_fa15_y2 = 0;
  uint8_t h_s_wallace_rca8_fa15_y4 = 0;
  uint8_t h_s_wallace_rca8_and_5_5_y0 = 0;
  uint8_t h_s_wallace_rca8_and_4_6_y0 = 0;
  uint8_t h_s_wallace_rca8_fa16_y2 = 0;
  uint8_t h_s_wallace_rca8_fa16_y4 = 0;
  uint8_t h_s_wallace_rca8_and_5_6_y0 = 0;
  uint8_t h_s_wallace_rca8_nand_4_7_y0 = 0;
  uint8_t h_s_wallace_rca8_fa17_y2 = 0;
  uint8_t h_s_wallace_rca8_fa17_y4 = 0;
  uint8_t h_s_wallace_rca8_and_0_4_y0 = 0;
  uint8_t h_s_wallace_rca8_ha2_y0 = 0;
  uint8_t h_s_wallace_rca8_ha2_y1 = 0;
  uint8_t h_s_wallace_rca8_and_1_4_y0 = 0;
  uint8_t h_s_wallace_rca8_and_0_5_y0 = 0;
  uint8_t h_s_wallace_rca8_fa18_y2 = 0;
  uint8_t h_s_wallace_rca8_fa18_y4 = 0;
  uint8_t h_s_wallace_rca8_and_2_4_y0 = 0;
  uint8_t h_s_wallace_rca8_and_1_5_y0 = 0;
  uint8_t h_s_wallace_rca8_fa19_y2 = 0;
  uint8_t h_s_wallace_rca8_fa19_y4 = 0;
  uint8_t h_s_wallace_rca8_and_3_4_y0 = 0;
  uint8_t h_s_wallace_rca8_and_2_5_y0 = 0;
  uint8_t h_s_wallace_rca8_fa20_y2 = 0;
  uint8_t h_s_wallace_rca8_fa20_y4 = 0;
  uint8_t h_s_wallace_rca8_and_4_4_y0 = 0;
  uint8_t h_s_wallace_rca8_and_3_5_y0 = 0;
  uint8_t h_s_wallace_rca8_fa21_y2 = 0;
  uint8_t h_s_wallace_rca8_fa21_y4 = 0;
  uint8_t h_s_wallace_rca8_and_3_6_y0 = 0;
  uint8_t h_s_wallace_rca8_nand_2_7_y0 = 0;
  uint8_t h_s_wallace_rca8_fa22_y2 = 0;
  uint8_t h_s_wallace_rca8_fa22_y4 = 0;
  uint8_t h_s_wallace_rca8_nand_3_7_y0 = 0;
  uint8_t h_s_wallace_rca8_fa23_y2 = 0;
  uint8_t h_s_wallace_rca8_fa23_y4 = 0;
  uint8_t h_s_wallace_rca8_ha3_y0 = 0;
  uint8_t h_s_wallace_rca8_ha3_y1 = 0;
  uint8_t h_s_wallace_rca8_and_0_6_y0 = 0;
  uint8_t h_s_wallace_rca8_fa24_y2 = 0;
  uint8_t h_s_wallace_rca8_fa24_y4 = 0;
  uint8_t h_s_wallace_rca8_and_1_6_y0 = 0;
  uint8_t h_s_wallace_rca8_nand_0_7_y0 = 0;
  uint8_t h_s_wallace_rca8_fa25_y2 = 0;
  uint8_t h_s_wallace_rca8_fa25_y4 = 0;
  uint8_t h_s_wallace_rca8_and_2_6_y0 = 0;
  uint8_t h_s_wallace_rca8_nand_1_7_y0 = 0;
  uint8_t h_s_wallace_rca8_fa26_y2 = 0;
  uint8_t h_s_wallace_rca8_fa26_y4 = 0;
  uint8_t h_s_wallace_rca8_fa27_y2 = 0;
  uint8_t h_s_wallace_rca8_fa27_y4 = 0;
  uint8_t h_s_wallace_rca8_ha4_y0 = 0;
  uint8_t h_s_wallace_rca8_ha4_y1 = 0;
  uint8_t h_s_wallace_rca8_fa28_y2 = 0;
  uint8_t h_s_wallace_rca8_fa28_y4 = 0;
  uint8_t h_s_wallace_rca8_fa29_y2 = 0;
  uint8_t h_s_wallace_rca8_fa29_y4 = 0;
  uint8_t h_s_wallace_rca8_ha5_y0 = 0;
  uint8_t h_s_wallace_rca8_ha5_y1 = 0;
  uint8_t h_s_wallace_rca8_fa30_y2 = 0;
  uint8_t h_s_wallace_rca8_fa30_y4 = 0;
  uint8_t h_s_wallace_rca8_fa31_y2 = 0;
  uint8_t h_s_wallace_rca8_fa31_y4 = 0;
  uint8_t h_s_wallace_rca8_fa32_y2 = 0;
  uint8_t h_s_wallace_rca8_fa32_y4 = 0;
  uint8_t h_s_wallace_rca8_fa33_y2 = 0;
  uint8_t h_s_wallace_rca8_fa33_y4 = 0;
  uint8_t h_s_wallace_rca8_nand_5_7_y0 = 0;
  uint8_t h_s_wallace_rca8_fa34_y2 = 0;
  uint8_t h_s_wallace_rca8_fa34_y4 = 0;
  uint8_t h_s_wallace_rca8_nand_7_6_y0 = 0;
  uint8_t h_s_wallace_rca8_fa35_y2 = 0;
  uint8_t h_s_wallace_rca8_fa35_y4 = 0;
  uint8_t h_s_wallace_rca8_and_0_0_y0 = 0;
  uint8_t h_s_wallace_rca8_and_1_0_y0 = 0;
  uint8_t h_s_wallace_rca8_and_0_2_y0 = 0;
  uint8_t h_s_wallace_rca8_nand_6_7_y0 = 0;
  uint8_t h_s_wallace_rca8_and_0_1_y0 = 0;
  uint8_t h_s_wallace_rca8_and_7_7_y0 = 0;
  uint64_t h_s_wallace_rca8_u_rca14_u_rca14_a = 0;
  uint64_t h_s_wallace_rca8_u_rca14_u_rca14_b = 0;
  uint64_t h_s_wallace_rca8_u_rca14_out = 0;
  uint8_t h_s_wallace_rca8_u_rca14_ha_y0 = 0;
  uint8_t h_s_wallace_rca8_u_rca14_fa1_y2 = 0;
  uint8_t h_s_wallace_rca8_u_rca14_fa2_y2 = 0;
  uint8_t h_s_wallace_rca8_u_rca14_fa3_y2 = 0;
  uint8_t h_s_wallace_rca8_u_rca14_fa4_y2 = 0;
  uint8_t h_s_wallace_rca8_u_rca14_fa5_y2 = 0;
  uint8_t h_s_wallace_rca8_u_rca14_fa6_y2 = 0;
  uint8_t h_s_wallace_rca8_u_rca14_fa7_y2 = 0;
  uint8_t h_s_wallace_rca8_u_rca14_fa8_y2 = 0;
  uint8_t h_s_wallace_rca8_u_rca14_fa9_y2 = 0;
  uint8_t h_s_wallace_rca8_u_rca14_fa10_y2 = 0;
  uint8_t h_s_wallace_rca8_u_rca14_fa11_y2 = 0;
  uint8_t h_s_wallace_rca8_u_rca14_fa12_y2 = 0;
  uint8_t h_s_wallace_rca8_u_rca14_fa13_y2 = 0;
  uint8_t h_s_wallace_rca8_u_rca14_fa13_y4 = 0;
  uint8_t h_s_wallace_rca8_xor0_y0 = 0;

  a_0 = ((a >> 0) & 0x01);
  a_1 = ((a >> 1) & 0x01);
  a_2 = ((a >> 2) & 0x01);
  a_3 = ((a >> 3) & 0x01);
  a_4 = ((a >> 4) & 0x01);
  a_5 = ((a >> 5) & 0x01);
  a_6 = ((a >> 6) & 0x01);
  a_7 = ((a >> 7) & 0x01);
  b_0 = ((b >> 0) & 0x01);
  b_1 = ((b >> 1) & 0x01);
  b_2 = ((b >> 2) & 0x01);
  b_3 = ((b >> 3) & 0x01);
  b_4 = ((b >> 4) & 0x01);
  b_5 = ((b >> 5) & 0x01);
  b_6 = ((b >> 6) & 0x01);
  b_7 = ((b >> 7) & 0x01);
  constant_wire_1 = (constant_wire_value_1(a_0, b_0) >> 0) & 0x01;
  h_s_wallace_rca8_and_2_0_y0 = and_gate(a_2, b_0);
  h_s_wallace_rca8_and_1_1_y0 = and_gate(a_1, b_1);
  h_s_wallace_rca8_ha0_y0 = (ha(h_s_wallace_rca8_and_2_0_y0, h_s_wallace_rca8_and_1_1_y0) >> 0) & 0x01;
  h_s_wallace_rca8_ha0_y1 = (ha(h_s_wallace_rca8_and_2_0_y0, h_s_wallace_rca8_and_1_1_y0) >> 1) & 0x01;
  h_s_wallace_rca8_and_3_0_y0 = and_gate(a_3, b_0);
  h_s_wallace_rca8_and_2_1_y0 = and_gate(a_2, b_1);
  h_s_wallace_rca8_fa0_y2 = (fa(h_s_wallace_rca8_ha0_y1, h_s_wallace_rca8_and_3_0_y0, h_s_wallace_rca8_and_2_1_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa0_y4 = (fa(h_s_wallace_rca8_ha0_y1, h_s_wallace_rca8_and_3_0_y0, h_s_wallace_rca8_and_2_1_y0) >> 1) & 0x01;
  h_s_wallace_rca8_and_4_0_y0 = and_gate(a_4, b_0);
  h_s_wallace_rca8_and_3_1_y0 = and_gate(a_3, b_1);
  h_s_wallace_rca8_fa1_y2 = (fa(h_s_wallace_rca8_fa0_y4, h_s_wallace_rca8_and_4_0_y0, h_s_wallace_rca8_and_3_1_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa1_y4 = (fa(h_s_wallace_rca8_fa0_y4, h_s_wallace_rca8_and_4_0_y0, h_s_wallace_rca8_and_3_1_y0) >> 1) & 0x01;
  h_s_wallace_rca8_and_5_0_y0 = and_gate(a_5, b_0);
  h_s_wallace_rca8_and_4_1_y0 = and_gate(a_4, b_1);
  h_s_wallace_rca8_fa2_y2 = (fa(h_s_wallace_rca8_fa1_y4, h_s_wallace_rca8_and_5_0_y0, h_s_wallace_rca8_and_4_1_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa2_y4 = (fa(h_s_wallace_rca8_fa1_y4, h_s_wallace_rca8_and_5_0_y0, h_s_wallace_rca8_and_4_1_y0) >> 1) & 0x01;
  h_s_wallace_rca8_and_6_0_y0 = and_gate(a_6, b_0);
  h_s_wallace_rca8_and_5_1_y0 = and_gate(a_5, b_1);
  h_s_wallace_rca8_fa3_y2 = (fa(h_s_wallace_rca8_fa2_y4, h_s_wallace_rca8_and_6_0_y0, h_s_wallace_rca8_and_5_1_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa3_y4 = (fa(h_s_wallace_rca8_fa2_y4, h_s_wallace_rca8_and_6_0_y0, h_s_wallace_rca8_and_5_1_y0) >> 1) & 0x01;
  h_s_wallace_rca8_nand_7_0_y0 = nand_gate(a_7, b_0);
  h_s_wallace_rca8_and_6_1_y0 = and_gate(a_6, b_1);
  h_s_wallace_rca8_fa4_y2 = (fa(h_s_wallace_rca8_fa3_y4, h_s_wallace_rca8_nand_7_0_y0, h_s_wallace_rca8_and_6_1_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa4_y4 = (fa(h_s_wallace_rca8_fa3_y4, h_s_wallace_rca8_nand_7_0_y0, h_s_wallace_rca8_and_6_1_y0) >> 1) & 0x01;
  h_s_wallace_rca8_nand_7_1_y0 = nand_gate(a_7, b_1);
  h_s_wallace_rca8_fa5_y2 = (fa(h_s_wallace_rca8_fa4_y4, constant_wire_1, h_s_wallace_rca8_nand_7_1_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa5_y4 = (fa(h_s_wallace_rca8_fa4_y4, constant_wire_1, h_s_wallace_rca8_nand_7_1_y0) >> 1) & 0x01;
  h_s_wallace_rca8_nand_7_2_y0 = nand_gate(a_7, b_2);
  h_s_wallace_rca8_and_6_3_y0 = and_gate(a_6, b_3);
  h_s_wallace_rca8_fa6_y2 = (fa(h_s_wallace_rca8_fa5_y4, h_s_wallace_rca8_nand_7_2_y0, h_s_wallace_rca8_and_6_3_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa6_y4 = (fa(h_s_wallace_rca8_fa5_y4, h_s_wallace_rca8_nand_7_2_y0, h_s_wallace_rca8_and_6_3_y0) >> 1) & 0x01;
  h_s_wallace_rca8_nand_7_3_y0 = nand_gate(a_7, b_3);
  h_s_wallace_rca8_and_6_4_y0 = and_gate(a_6, b_4);
  h_s_wallace_rca8_fa7_y2 = (fa(h_s_wallace_rca8_fa6_y4, h_s_wallace_rca8_nand_7_3_y0, h_s_wallace_rca8_and_6_4_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa7_y4 = (fa(h_s_wallace_rca8_fa6_y4, h_s_wallace_rca8_nand_7_3_y0, h_s_wallace_rca8_and_6_4_y0) >> 1) & 0x01;
  h_s_wallace_rca8_nand_7_4_y0 = nand_gate(a_7, b_4);
  h_s_wallace_rca8_and_6_5_y0 = and_gate(a_6, b_5);
  h_s_wallace_rca8_fa8_y2 = (fa(h_s_wallace_rca8_fa7_y4, h_s_wallace_rca8_nand_7_4_y0, h_s_wallace_rca8_and_6_5_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa8_y4 = (fa(h_s_wallace_rca8_fa7_y4, h_s_wallace_rca8_nand_7_4_y0, h_s_wallace_rca8_and_6_5_y0) >> 1) & 0x01;
  h_s_wallace_rca8_nand_7_5_y0 = nand_gate(a_7, b_5);
  h_s_wallace_rca8_and_6_6_y0 = and_gate(a_6, b_6);
  h_s_wallace_rca8_fa9_y2 = (fa(h_s_wallace_rca8_fa8_y4, h_s_wallace_rca8_nand_7_5_y0, h_s_wallace_rca8_and_6_6_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa9_y4 = (fa(h_s_wallace_rca8_fa8_y4, h_s_wallace_rca8_nand_7_5_y0, h_s_wallace_rca8_and_6_6_y0) >> 1) & 0x01;
  h_s_wallace_rca8_and_1_2_y0 = and_gate(a_1, b_2);
  h_s_wallace_rca8_and_0_3_y0 = and_gate(a_0, b_3);
  h_s_wallace_rca8_ha1_y0 = (ha(h_s_wallace_rca8_and_1_2_y0, h_s_wallace_rca8_and_0_3_y0) >> 0) & 0x01;
  h_s_wallace_rca8_ha1_y1 = (ha(h_s_wallace_rca8_and_1_2_y0, h_s_wallace_rca8_and_0_3_y0) >> 1) & 0x01;
  h_s_wallace_rca8_and_2_2_y0 = and_gate(a_2, b_2);
  h_s_wallace_rca8_and_1_3_y0 = and_gate(a_1, b_3);
  h_s_wallace_rca8_fa10_y2 = (fa(h_s_wallace_rca8_ha1_y1, h_s_wallace_rca8_and_2_2_y0, h_s_wallace_rca8_and_1_3_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa10_y4 = (fa(h_s_wallace_rca8_ha1_y1, h_s_wallace_rca8_and_2_2_y0, h_s_wallace_rca8_and_1_3_y0) >> 1) & 0x01;
  h_s_wallace_rca8_and_3_2_y0 = and_gate(a_3, b_2);
  h_s_wallace_rca8_and_2_3_y0 = and_gate(a_2, b_3);
  h_s_wallace_rca8_fa11_y2 = (fa(h_s_wallace_rca8_fa10_y4, h_s_wallace_rca8_and_3_2_y0, h_s_wallace_rca8_and_2_3_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa11_y4 = (fa(h_s_wallace_rca8_fa10_y4, h_s_wallace_rca8_and_3_2_y0, h_s_wallace_rca8_and_2_3_y0) >> 1) & 0x01;
  h_s_wallace_rca8_and_4_2_y0 = and_gate(a_4, b_2);
  h_s_wallace_rca8_and_3_3_y0 = and_gate(a_3, b_3);
  h_s_wallace_rca8_fa12_y2 = (fa(h_s_wallace_rca8_fa11_y4, h_s_wallace_rca8_and_4_2_y0, h_s_wallace_rca8_and_3_3_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa12_y4 = (fa(h_s_wallace_rca8_fa11_y4, h_s_wallace_rca8_and_4_2_y0, h_s_wallace_rca8_and_3_3_y0) >> 1) & 0x01;
  h_s_wallace_rca8_and_5_2_y0 = and_gate(a_5, b_2);
  h_s_wallace_rca8_and_4_3_y0 = and_gate(a_4, b_3);
  h_s_wallace_rca8_fa13_y2 = (fa(h_s_wallace_rca8_fa12_y4, h_s_wallace_rca8_and_5_2_y0, h_s_wallace_rca8_and_4_3_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa13_y4 = (fa(h_s_wallace_rca8_fa12_y4, h_s_wallace_rca8_and_5_2_y0, h_s_wallace_rca8_and_4_3_y0) >> 1) & 0x01;
  h_s_wallace_rca8_and_6_2_y0 = and_gate(a_6, b_2);
  h_s_wallace_rca8_and_5_3_y0 = and_gate(a_5, b_3);
  h_s_wallace_rca8_fa14_y2 = (fa(h_s_wallace_rca8_fa13_y4, h_s_wallace_rca8_and_6_2_y0, h_s_wallace_rca8_and_5_3_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa14_y4 = (fa(h_s_wallace_rca8_fa13_y4, h_s_wallace_rca8_and_6_2_y0, h_s_wallace_rca8_and_5_3_y0) >> 1) & 0x01;
  h_s_wallace_rca8_and_5_4_y0 = and_gate(a_5, b_4);
  h_s_wallace_rca8_and_4_5_y0 = and_gate(a_4, b_5);
  h_s_wallace_rca8_fa15_y2 = (fa(h_s_wallace_rca8_fa14_y4, h_s_wallace_rca8_and_5_4_y0, h_s_wallace_rca8_and_4_5_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa15_y4 = (fa(h_s_wallace_rca8_fa14_y4, h_s_wallace_rca8_and_5_4_y0, h_s_wallace_rca8_and_4_5_y0) >> 1) & 0x01;
  h_s_wallace_rca8_and_5_5_y0 = and_gate(a_5, b_5);
  h_s_wallace_rca8_and_4_6_y0 = and_gate(a_4, b_6);
  h_s_wallace_rca8_fa16_y2 = (fa(h_s_wallace_rca8_fa15_y4, h_s_wallace_rca8_and_5_5_y0, h_s_wallace_rca8_and_4_6_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa16_y4 = (fa(h_s_wallace_rca8_fa15_y4, h_s_wallace_rca8_and_5_5_y0, h_s_wallace_rca8_and_4_6_y0) >> 1) & 0x01;
  h_s_wallace_rca8_and_5_6_y0 = and_gate(a_5, b_6);
  h_s_wallace_rca8_nand_4_7_y0 = nand_gate(a_4, b_7);
  h_s_wallace_rca8_fa17_y2 = (fa(h_s_wallace_rca8_fa16_y4, h_s_wallace_rca8_and_5_6_y0, h_s_wallace_rca8_nand_4_7_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa17_y4 = (fa(h_s_wallace_rca8_fa16_y4, h_s_wallace_rca8_and_5_6_y0, h_s_wallace_rca8_nand_4_7_y0) >> 1) & 0x01;
  h_s_wallace_rca8_and_0_4_y0 = and_gate(a_0, b_4);
  h_s_wallace_rca8_ha2_y0 = (ha(h_s_wallace_rca8_and_0_4_y0, h_s_wallace_rca8_fa1_y2) >> 0) & 0x01;
  h_s_wallace_rca8_ha2_y1 = (ha(h_s_wallace_rca8_and_0_4_y0, h_s_wallace_rca8_fa1_y2) >> 1) & 0x01;
  h_s_wallace_rca8_and_1_4_y0 = and_gate(a_1, b_4);
  h_s_wallace_rca8_and_0_5_y0 = and_gate(a_0, b_5);
  h_s_wallace_rca8_fa18_y2 = (fa(h_s_wallace_rca8_ha2_y1, h_s_wallace_rca8_and_1_4_y0, h_s_wallace_rca8_and_0_5_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa18_y4 = (fa(h_s_wallace_rca8_ha2_y1, h_s_wallace_rca8_and_1_4_y0, h_s_wallace_rca8_and_0_5_y0) >> 1) & 0x01;
  h_s_wallace_rca8_and_2_4_y0 = and_gate(a_2, b_4);
  h_s_wallace_rca8_and_1_5_y0 = and_gate(a_1, b_5);
  h_s_wallace_rca8_fa19_y2 = (fa(h_s_wallace_rca8_fa18_y4, h_s_wallace_rca8_and_2_4_y0, h_s_wallace_rca8_and_1_5_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa19_y4 = (fa(h_s_wallace_rca8_fa18_y4, h_s_wallace_rca8_and_2_4_y0, h_s_wallace_rca8_and_1_5_y0) >> 1) & 0x01;
  h_s_wallace_rca8_and_3_4_y0 = and_gate(a_3, b_4);
  h_s_wallace_rca8_and_2_5_y0 = and_gate(a_2, b_5);
  h_s_wallace_rca8_fa20_y2 = (fa(h_s_wallace_rca8_fa19_y4, h_s_wallace_rca8_and_3_4_y0, h_s_wallace_rca8_and_2_5_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa20_y4 = (fa(h_s_wallace_rca8_fa19_y4, h_s_wallace_rca8_and_3_4_y0, h_s_wallace_rca8_and_2_5_y0) >> 1) & 0x01;
  h_s_wallace_rca8_and_4_4_y0 = and_gate(a_4, b_4);
  h_s_wallace_rca8_and_3_5_y0 = and_gate(a_3, b_5);
  h_s_wallace_rca8_fa21_y2 = (fa(h_s_wallace_rca8_fa20_y4, h_s_wallace_rca8_and_4_4_y0, h_s_wallace_rca8_and_3_5_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa21_y4 = (fa(h_s_wallace_rca8_fa20_y4, h_s_wallace_rca8_and_4_4_y0, h_s_wallace_rca8_and_3_5_y0) >> 1) & 0x01;
  h_s_wallace_rca8_and_3_6_y0 = and_gate(a_3, b_6);
  h_s_wallace_rca8_nand_2_7_y0 = nand_gate(a_2, b_7);
  h_s_wallace_rca8_fa22_y2 = (fa(h_s_wallace_rca8_fa21_y4, h_s_wallace_rca8_and_3_6_y0, h_s_wallace_rca8_nand_2_7_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa22_y4 = (fa(h_s_wallace_rca8_fa21_y4, h_s_wallace_rca8_and_3_6_y0, h_s_wallace_rca8_nand_2_7_y0) >> 1) & 0x01;
  h_s_wallace_rca8_nand_3_7_y0 = nand_gate(a_3, b_7);
  h_s_wallace_rca8_fa23_y2 = (fa(h_s_wallace_rca8_fa22_y4, h_s_wallace_rca8_nand_3_7_y0, h_s_wallace_rca8_fa7_y2) >> 0) & 0x01;
  h_s_wallace_rca8_fa23_y4 = (fa(h_s_wallace_rca8_fa22_y4, h_s_wallace_rca8_nand_3_7_y0, h_s_wallace_rca8_fa7_y2) >> 1) & 0x01;
  h_s_wallace_rca8_ha3_y0 = (ha(h_s_wallace_rca8_fa2_y2, h_s_wallace_rca8_fa11_y2) >> 0) & 0x01;
  h_s_wallace_rca8_ha3_y1 = (ha(h_s_wallace_rca8_fa2_y2, h_s_wallace_rca8_fa11_y2) >> 1) & 0x01;
  h_s_wallace_rca8_and_0_6_y0 = and_gate(a_0, b_6);
  h_s_wallace_rca8_fa24_y2 = (fa(h_s_wallace_rca8_ha3_y1, h_s_wallace_rca8_and_0_6_y0, h_s_wallace_rca8_fa3_y2) >> 0) & 0x01;
  h_s_wallace_rca8_fa24_y4 = (fa(h_s_wallace_rca8_ha3_y1, h_s_wallace_rca8_and_0_6_y0, h_s_wallace_rca8_fa3_y2) >> 1) & 0x01;
  h_s_wallace_rca8_and_1_6_y0 = and_gate(a_1, b_6);
  h_s_wallace_rca8_nand_0_7_y0 = nand_gate(a_0, b_7);
  h_s_wallace_rca8_fa25_y2 = (fa(h_s_wallace_rca8_fa24_y4, h_s_wallace_rca8_and_1_6_y0, h_s_wallace_rca8_nand_0_7_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa25_y4 = (fa(h_s_wallace_rca8_fa24_y4, h_s_wallace_rca8_and_1_6_y0, h_s_wallace_rca8_nand_0_7_y0) >> 1) & 0x01;
  h_s_wallace_rca8_and_2_6_y0 = and_gate(a_2, b_6);
  h_s_wallace_rca8_nand_1_7_y0 = nand_gate(a_1, b_7);
  h_s_wallace_rca8_fa26_y2 = (fa(h_s_wallace_rca8_fa25_y4, h_s_wallace_rca8_and_2_6_y0, h_s_wallace_rca8_nand_1_7_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa26_y4 = (fa(h_s_wallace_rca8_fa25_y4, h_s_wallace_rca8_and_2_6_y0, h_s_wallace_rca8_nand_1_7_y0) >> 1) & 0x01;
  h_s_wallace_rca8_fa27_y2 = (fa(h_s_wallace_rca8_fa26_y4, h_s_wallace_rca8_fa6_y2, h_s_wallace_rca8_fa15_y2) >> 0) & 0x01;
  h_s_wallace_rca8_fa27_y4 = (fa(h_s_wallace_rca8_fa26_y4, h_s_wallace_rca8_fa6_y2, h_s_wallace_rca8_fa15_y2) >> 1) & 0x01;
  h_s_wallace_rca8_ha4_y0 = (ha(h_s_wallace_rca8_fa12_y2, h_s_wallace_rca8_fa19_y2) >> 0) & 0x01;
  h_s_wallace_rca8_ha4_y1 = (ha(h_s_wallace_rca8_fa12_y2, h_s_wallace_rca8_fa19_y2) >> 1) & 0x01;
  h_s_wallace_rca8_fa28_y2 = (fa(h_s_wallace_rca8_ha4_y1, h_s_wallace_rca8_fa4_y2, h_s_wallace_rca8_fa13_y2) >> 0) & 0x01;
  h_s_wallace_rca8_fa28_y4 = (fa(h_s_wallace_rca8_ha4_y1, h_s_wallace_rca8_fa4_y2, h_s_wallace_rca8_fa13_y2) >> 1) & 0x01;
  h_s_wallace_rca8_fa29_y2 = (fa(h_s_wallace_rca8_fa28_y4, h_s_wallace_rca8_fa5_y2, h_s_wallace_rca8_fa14_y2) >> 0) & 0x01;
  h_s_wallace_rca8_fa29_y4 = (fa(h_s_wallace_rca8_fa28_y4, h_s_wallace_rca8_fa5_y2, h_s_wallace_rca8_fa14_y2) >> 1) & 0x01;
  h_s_wallace_rca8_ha5_y0 = (ha(h_s_wallace_rca8_fa20_y2, h_s_wallace_rca8_fa25_y2) >> 0) & 0x01;
  h_s_wallace_rca8_ha5_y1 = (ha(h_s_wallace_rca8_fa20_y2, h_s_wallace_rca8_fa25_y2) >> 1) & 0x01;
  h_s_wallace_rca8_fa30_y2 = (fa(h_s_wallace_rca8_ha5_y1, h_s_wallace_rca8_fa21_y2, h_s_wallace_rca8_fa26_y2) >> 0) & 0x01;
  h_s_wallace_rca8_fa30_y4 = (fa(h_s_wallace_rca8_ha5_y1, h_s_wallace_rca8_fa21_y2, h_s_wallace_rca8_fa26_y2) >> 1) & 0x01;
  h_s_wallace_rca8_fa31_y2 = (fa(h_s_wallace_rca8_fa30_y4, h_s_wallace_rca8_fa29_y4, h_s_wallace_rca8_fa22_y2) >> 0) & 0x01;
  h_s_wallace_rca8_fa31_y4 = (fa(h_s_wallace_rca8_fa30_y4, h_s_wallace_rca8_fa29_y4, h_s_wallace_rca8_fa22_y2) >> 1) & 0x01;
  h_s_wallace_rca8_fa32_y2 = (fa(h_s_wallace_rca8_fa31_y4, h_s_wallace_rca8_fa27_y4, h_s_wallace_rca8_fa16_y2) >> 0) & 0x01;
  h_s_wallace_rca8_fa32_y4 = (fa(h_s_wallace_rca8_fa31_y4, h_s_wallace_rca8_fa27_y4, h_s_wallace_rca8_fa16_y2) >> 1) & 0x01;
  h_s_wallace_rca8_fa33_y2 = (fa(h_s_wallace_rca8_fa32_y4, h_s_wallace_rca8_fa23_y4, h_s_wallace_rca8_fa8_y2) >> 0) & 0x01;
  h_s_wallace_rca8_fa33_y4 = (fa(h_s_wallace_rca8_fa32_y4, h_s_wallace_rca8_fa23_y4, h_s_wallace_rca8_fa8_y2) >> 1) & 0x01;
  h_s_wallace_rca8_nand_5_7_y0 = nand_gate(a_5, b_7);
  h_s_wallace_rca8_fa34_y2 = (fa(h_s_wallace_rca8_fa33_y4, h_s_wallace_rca8_fa17_y4, h_s_wallace_rca8_nand_5_7_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa34_y4 = (fa(h_s_wallace_rca8_fa33_y4, h_s_wallace_rca8_fa17_y4, h_s_wallace_rca8_nand_5_7_y0) >> 1) & 0x01;
  h_s_wallace_rca8_nand_7_6_y0 = nand_gate(a_7, b_6);
  h_s_wallace_rca8_fa35_y2 = (fa(h_s_wallace_rca8_fa34_y4, h_s_wallace_rca8_fa9_y4, h_s_wallace_rca8_nand_7_6_y0) >> 0) & 0x01;
  h_s_wallace_rca8_fa35_y4 = (fa(h_s_wallace_rca8_fa34_y4, h_s_wallace_rca8_fa9_y4, h_s_wallace_rca8_nand_7_6_y0) >> 1) & 0x01;
  h_s_wallace_rca8_and_0_0_y0 = and_gate(a_0, b_0);
  h_s_wallace_rca8_and_1_0_y0 = and_gate(a_1, b_0);
  h_s_wallace_rca8_and_0_2_y0 = and_gate(a_0, b_2);
  h_s_wallace_rca8_nand_6_7_y0 = nand_gate(a_6, b_7);
  h_s_wallace_rca8_and_0_1_y0 = and_gate(a_0, b_1);
  h_s_wallace_rca8_and_7_7_y0 = and_gate(a_7, b_7);
  h_s_wallace_rca8_u_rca14_u_rca14_a |= (h_s_wallace_rca8_and_1_0_y0 & 0x01) << 0;
  h_s_wallace_rca8_u_rca14_u_rca14_a |= (h_s_wallace_rca8_and_0_2_y0 & 0x01) << 1;
  h_s_wallace_rca8_u_rca14_u_rca14_a |= (h_s_wallace_rca8_fa0_y2 & 0x01) << 2;
  h_s_wallace_rca8_u_rca14_u_rca14_a |= (h_s_wallace_rca8_fa10_y2 & 0x01) << 3;
  h_s_wallace_rca8_u_rca14_u_rca14_a |= (h_s_wallace_rca8_fa18_y2 & 0x01) << 4;
  h_s_wallace_rca8_u_rca14_u_rca14_a |= (h_s_wallace_rca8_fa24_y2 & 0x01) << 5;
  h_s_wallace_rca8_u_rca14_u_rca14_a |= (h_s_wallace_rca8_fa28_y2 & 0x01) << 6;
  h_s_wallace_rca8_u_rca14_u_rca14_a |= (h_s_wallace_rca8_fa29_y2 & 0x01) << 7;
  h_s_wallace_rca8_u_rca14_u_rca14_a |= (h_s_wallace_rca8_fa27_y2 & 0x01) << 8;
  h_s_wallace_rca8_u_rca14_u_rca14_a |= (h_s_wallace_rca8_fa23_y2 & 0x01) << 9;
  h_s_wallace_rca8_u_rca14_u_rca14_a |= (h_s_wallace_rca8_fa17_y2 & 0x01) << 10;
  h_s_wallace_rca8_u_rca14_u_rca14_a |= (h_s_wallace_rca8_fa9_y2 & 0x01) << 11;
  h_s_wallace_rca8_u_rca14_u_rca14_a |= (h_s_wallace_rca8_nand_6_7_y0 & 0x01) << 12;
  h_s_wallace_rca8_u_rca14_u_rca14_a |= (h_s_wallace_rca8_fa35_y4 & 0x01) << 13;
  h_s_wallace_rca8_u_rca14_u_rca14_b |= (h_s_wallace_rca8_and_0_1_y0 & 0x01) << 0;
  h_s_wallace_rca8_u_rca14_u_rca14_b |= (h_s_wallace_rca8_ha0_y0 & 0x01) << 1;
  h_s_wallace_rca8_u_rca14_u_rca14_b |= (h_s_wallace_rca8_ha1_y0 & 0x01) << 2;
  h_s_wallace_rca8_u_rca14_u_rca14_b |= (h_s_wallace_rca8_ha2_y0 & 0x01) << 3;
  h_s_wallace_rca8_u_rca14_u_rca14_b |= (h_s_wallace_rca8_ha3_y0 & 0x01) << 4;
  h_s_wallace_rca8_u_rca14_u_rca14_b |= (h_s_wallace_rca8_ha4_y0 & 0x01) << 5;
  h_s_wallace_rca8_u_rca14_u_rca14_b |= (h_s_wallace_rca8_ha5_y0 & 0x01) << 6;
  h_s_wallace_rca8_u_rca14_u_rca14_b |= (h_s_wallace_rca8_fa30_y2 & 0x01) << 7;
  h_s_wallace_rca8_u_rca14_u_rca14_b |= (h_s_wallace_rca8_fa31_y2 & 0x01) << 8;
  h_s_wallace_rca8_u_rca14_u_rca14_b |= (h_s_wallace_rca8_fa32_y2 & 0x01) << 9;
  h_s_wallace_rca8_u_rca14_u_rca14_b |= (h_s_wallace_rca8_fa33_y2 & 0x01) << 10;
  h_s_wallace_rca8_u_rca14_u_rca14_b |= (h_s_wallace_rca8_fa34_y2 & 0x01) << 11;
  h_s_wallace_rca8_u_rca14_u_rca14_b |= (h_s_wallace_rca8_fa35_y2 & 0x01) << 12;
  h_s_wallace_rca8_u_rca14_u_rca14_b |= (h_s_wallace_rca8_and_7_7_y0 & 0x01) << 13;
  h_s_wallace_rca8_u_rca14_out = u_rca14(h_s_wallace_rca8_u_rca14_u_rca14_a, h_s_wallace_rca8_u_rca14_u_rca14_b);
  h_s_wallace_rca8_u_rca14_ha_y0 = ((h_s_wallace_rca8_u_rca14_out >> 0) & 0x01);
  h_s_wallace_rca8_u_rca14_fa1_y2 = ((h_s_wallace_rca8_u_rca14_out >> 1) & 0x01);
  h_s_wallace_rca8_u_rca14_fa2_y2 = ((h_s_wallace_rca8_u_rca14_out >> 2) & 0x01);
  h_s_wallace_rca8_u_rca14_fa3_y2 = ((h_s_wallace_rca8_u_rca14_out >> 3) & 0x01);
  h_s_wallace_rca8_u_rca14_fa4_y2 = ((h_s_wallace_rca8_u_rca14_out >> 4) & 0x01);
  h_s_wallace_rca8_u_rca14_fa5_y2 = ((h_s_wallace_rca8_u_rca14_out >> 5) & 0x01);
  h_s_wallace_rca8_u_rca14_fa6_y2 = ((h_s_wallace_rca8_u_rca14_out >> 6) & 0x01);
  h_s_wallace_rca8_u_rca14_fa7_y2 = ((h_s_wallace_rca8_u_rca14_out >> 7) & 0x01);
  h_s_wallace_rca8_u_rca14_fa8_y2 = ((h_s_wallace_rca8_u_rca14_out >> 8) & 0x01);
  h_s_wallace_rca8_u_rca14_fa9_y2 = ((h_s_wallace_rca8_u_rca14_out >> 9) & 0x01);
  h_s_wallace_rca8_u_rca14_fa10_y2 = ((h_s_wallace_rca8_u_rca14_out >> 10) & 0x01);
  h_s_wallace_rca8_u_rca14_fa11_y2 = ((h_s_wallace_rca8_u_rca14_out >> 11) & 0x01);
  h_s_wallace_rca8_u_rca14_fa12_y2 = ((h_s_wallace_rca8_u_rca14_out >> 12) & 0x01);
  h_s_wallace_rca8_u_rca14_fa13_y2 = ((h_s_wallace_rca8_u_rca14_out >> 13) & 0x01);
  h_s_wallace_rca8_u_rca14_fa13_y4 = ((h_s_wallace_rca8_u_rca14_out >> 14) & 0x01);
  h_s_wallace_rca8_xor0_y0 = xor_gate(constant_wire_1, h_s_wallace_rca8_u_rca14_fa13_y4);

  out |= (h_s_wallace_rca8_and_0_0_y0 & 0x01) << 0;
  out |= (h_s_wallace_rca8_u_rca14_ha_y0 & 0x01) << 1;
  out |= (h_s_wallace_rca8_u_rca14_fa1_y2 & 0x01) << 2;
  out |= (h_s_wallace_rca8_u_rca14_fa2_y2 & 0x01) << 3;
  out |= (h_s_wallace_rca8_u_rca14_fa3_y2 & 0x01) << 4;
  out |= (h_s_wallace_rca8_u_rca14_fa4_y2 & 0x01) << 5;
  out |= (h_s_wallace_rca8_u_rca14_fa5_y2 & 0x01) << 6;
  out |= (h_s_wallace_rca8_u_rca14_fa6_y2 & 0x01) << 7;
  out |= (h_s_wallace_rca8_u_rca14_fa7_y2 & 0x01) << 8;
  out |= (h_s_wallace_rca8_u_rca14_fa8_y2 & 0x01) << 9;
  out |= (h_s_wallace_rca8_u_rca14_fa9_y2 & 0x01) << 10;
  out |= (h_s_wallace_rca8_u_rca14_fa10_y2 & 0x01) << 11;
  out |= (h_s_wallace_rca8_u_rca14_fa11_y2 & 0x01) << 12;
  out |= (h_s_wallace_rca8_u_rca14_fa12_y2 & 0x01) << 13;
  out |= (h_s_wallace_rca8_u_rca14_fa13_y2 & 0x01) << 14;
  out |= (h_s_wallace_rca8_xor0_y0 & 0x01) << 15;
  return out;
}
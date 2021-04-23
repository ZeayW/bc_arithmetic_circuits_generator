#include <stdio.h>
#include <stdint.h>

uint8_t and_gate(uint8_t a, uint8_t b){
  return ((a >> 0) & 0x01) & ((b >> 0) & 0x01);
}

uint8_t xor_gate(uint8_t a, uint8_t b){
  return ((a >> 0) & 0x01) ^ ((b >> 0) & 0x01);
}

uint8_t or_gate(uint8_t a, uint8_t b){
  return ((a >> 0) & 0x01) | ((b >> 0) & 0x01);
}

uint8_t nand_gate(uint8_t a, uint8_t b){
  return ~(((a >> 0) & 0x01) & ((b >> 0) & 0x01)) & 0x01;
}

uint8_t not_gate(uint8_t a){
  return ~(((a >> 0) & 0x01)) & 0x01;
}

uint8_t ha(uint8_t a, uint8_t b){
  uint8_t ha_out = 0;
  uint8_t ha_xor0 = 0;
  uint8_t ha_and0 = 0;

  ha_xor0 = xor_gate(((a >> 0) & 0x01), ((b >> 0) & 0x01));
  ha_and0 = and_gate(((a >> 0) & 0x01), ((b >> 0) & 0x01));

  ha_out |= ((ha_xor0 >> 0) & 0x01) << 0;
  ha_out |= ((ha_and0 >> 0) & 0x01) << 1;
  return ha_out;
}

uint8_t fa(uint8_t a, uint8_t b, uint8_t cin){
  uint8_t fa_out = 0;
  uint8_t fa_xor0 = 0;
  uint8_t fa_and0 = 0;
  uint8_t fa_xor1 = 0;
  uint8_t fa_and1 = 0;
  uint8_t fa_or0 = 0;

  fa_xor0 = xor_gate(((a >> 0) & 0x01), ((b >> 0) & 0x01));
  fa_and0 = and_gate(((a >> 0) & 0x01), ((b >> 0) & 0x01));
  fa_xor1 = xor_gate(((fa_xor0 >> 0) & 0x01), ((cin >> 0) & 0x01));
  fa_and1 = and_gate(((fa_xor0 >> 0) & 0x01), ((cin >> 0) & 0x01));
  fa_or0 = or_gate(((fa_and0 >> 0) & 0x01), ((fa_and1 >> 0) & 0x01));

  fa_out |= ((fa_xor1 >> 0) & 0x01) << 0;
  fa_out |= ((fa_or0 >> 0) & 0x01) << 1;
  return fa_out;
}

uint64_t u_rca14(uint64_t a, uint64_t b){
  uint64_t u_rca14_out = 0;
  uint8_t u_rca14_ha_xor0 = 0;
  uint8_t u_rca14_ha_and0 = 0;
  uint8_t u_rca14_fa1_xor1 = 0;
  uint8_t u_rca14_fa1_or0 = 0;
  uint8_t u_rca14_fa2_xor1 = 0;
  uint8_t u_rca14_fa2_or0 = 0;
  uint8_t u_rca14_fa3_xor1 = 0;
  uint8_t u_rca14_fa3_or0 = 0;
  uint8_t u_rca14_fa4_xor1 = 0;
  uint8_t u_rca14_fa4_or0 = 0;
  uint8_t u_rca14_fa5_xor1 = 0;
  uint8_t u_rca14_fa5_or0 = 0;
  uint8_t u_rca14_fa6_xor1 = 0;
  uint8_t u_rca14_fa6_or0 = 0;
  uint8_t u_rca14_fa7_xor1 = 0;
  uint8_t u_rca14_fa7_or0 = 0;
  uint8_t u_rca14_fa8_xor1 = 0;
  uint8_t u_rca14_fa8_or0 = 0;
  uint8_t u_rca14_fa9_xor1 = 0;
  uint8_t u_rca14_fa9_or0 = 0;
  uint8_t u_rca14_fa10_xor1 = 0;
  uint8_t u_rca14_fa10_or0 = 0;
  uint8_t u_rca14_fa11_xor1 = 0;
  uint8_t u_rca14_fa11_or0 = 0;
  uint8_t u_rca14_fa12_xor1 = 0;
  uint8_t u_rca14_fa12_or0 = 0;
  uint8_t u_rca14_fa13_xor1 = 0;
  uint8_t u_rca14_fa13_or0 = 0;

  u_rca14_ha_xor0 = (ha(((a >> 0) & 0x01), ((b >> 0) & 0x01)) >> 0) & 0x01;
  u_rca14_ha_and0 = (ha(((a >> 0) & 0x01), ((b >> 0) & 0x01)) >> 1) & 0x01;
  u_rca14_fa1_xor1 = (fa(((a >> 1) & 0x01), ((b >> 1) & 0x01), ((u_rca14_ha_and0 >> 0) & 0x01)) >> 0) & 0x01;
  u_rca14_fa1_or0 = (fa(((a >> 1) & 0x01), ((b >> 1) & 0x01), ((u_rca14_ha_and0 >> 0) & 0x01)) >> 1) & 0x01;
  u_rca14_fa2_xor1 = (fa(((a >> 2) & 0x01), ((b >> 2) & 0x01), ((u_rca14_fa1_or0 >> 0) & 0x01)) >> 0) & 0x01;
  u_rca14_fa2_or0 = (fa(((a >> 2) & 0x01), ((b >> 2) & 0x01), ((u_rca14_fa1_or0 >> 0) & 0x01)) >> 1) & 0x01;
  u_rca14_fa3_xor1 = (fa(((a >> 3) & 0x01), ((b >> 3) & 0x01), ((u_rca14_fa2_or0 >> 0) & 0x01)) >> 0) & 0x01;
  u_rca14_fa3_or0 = (fa(((a >> 3) & 0x01), ((b >> 3) & 0x01), ((u_rca14_fa2_or0 >> 0) & 0x01)) >> 1) & 0x01;
  u_rca14_fa4_xor1 = (fa(((a >> 4) & 0x01), ((b >> 4) & 0x01), ((u_rca14_fa3_or0 >> 0) & 0x01)) >> 0) & 0x01;
  u_rca14_fa4_or0 = (fa(((a >> 4) & 0x01), ((b >> 4) & 0x01), ((u_rca14_fa3_or0 >> 0) & 0x01)) >> 1) & 0x01;
  u_rca14_fa5_xor1 = (fa(((a >> 5) & 0x01), ((b >> 5) & 0x01), ((u_rca14_fa4_or0 >> 0) & 0x01)) >> 0) & 0x01;
  u_rca14_fa5_or0 = (fa(((a >> 5) & 0x01), ((b >> 5) & 0x01), ((u_rca14_fa4_or0 >> 0) & 0x01)) >> 1) & 0x01;
  u_rca14_fa6_xor1 = (fa(((a >> 6) & 0x01), ((b >> 6) & 0x01), ((u_rca14_fa5_or0 >> 0) & 0x01)) >> 0) & 0x01;
  u_rca14_fa6_or0 = (fa(((a >> 6) & 0x01), ((b >> 6) & 0x01), ((u_rca14_fa5_or0 >> 0) & 0x01)) >> 1) & 0x01;
  u_rca14_fa7_xor1 = (fa(((a >> 7) & 0x01), ((b >> 7) & 0x01), ((u_rca14_fa6_or0 >> 0) & 0x01)) >> 0) & 0x01;
  u_rca14_fa7_or0 = (fa(((a >> 7) & 0x01), ((b >> 7) & 0x01), ((u_rca14_fa6_or0 >> 0) & 0x01)) >> 1) & 0x01;
  u_rca14_fa8_xor1 = (fa(((a >> 8) & 0x01), ((b >> 8) & 0x01), ((u_rca14_fa7_or0 >> 0) & 0x01)) >> 0) & 0x01;
  u_rca14_fa8_or0 = (fa(((a >> 8) & 0x01), ((b >> 8) & 0x01), ((u_rca14_fa7_or0 >> 0) & 0x01)) >> 1) & 0x01;
  u_rca14_fa9_xor1 = (fa(((a >> 9) & 0x01), ((b >> 9) & 0x01), ((u_rca14_fa8_or0 >> 0) & 0x01)) >> 0) & 0x01;
  u_rca14_fa9_or0 = (fa(((a >> 9) & 0x01), ((b >> 9) & 0x01), ((u_rca14_fa8_or0 >> 0) & 0x01)) >> 1) & 0x01;
  u_rca14_fa10_xor1 = (fa(((a >> 10) & 0x01), ((b >> 10) & 0x01), ((u_rca14_fa9_or0 >> 0) & 0x01)) >> 0) & 0x01;
  u_rca14_fa10_or0 = (fa(((a >> 10) & 0x01), ((b >> 10) & 0x01), ((u_rca14_fa9_or0 >> 0) & 0x01)) >> 1) & 0x01;
  u_rca14_fa11_xor1 = (fa(((a >> 11) & 0x01), ((b >> 11) & 0x01), ((u_rca14_fa10_or0 >> 0) & 0x01)) >> 0) & 0x01;
  u_rca14_fa11_or0 = (fa(((a >> 11) & 0x01), ((b >> 11) & 0x01), ((u_rca14_fa10_or0 >> 0) & 0x01)) >> 1) & 0x01;
  u_rca14_fa12_xor1 = (fa(((a >> 12) & 0x01), ((b >> 12) & 0x01), ((u_rca14_fa11_or0 >> 0) & 0x01)) >> 0) & 0x01;
  u_rca14_fa12_or0 = (fa(((a >> 12) & 0x01), ((b >> 12) & 0x01), ((u_rca14_fa11_or0 >> 0) & 0x01)) >> 1) & 0x01;
  u_rca14_fa13_xor1 = (fa(((a >> 13) & 0x01), ((b >> 13) & 0x01), ((u_rca14_fa12_or0 >> 0) & 0x01)) >> 0) & 0x01;
  u_rca14_fa13_or0 = (fa(((a >> 13) & 0x01), ((b >> 13) & 0x01), ((u_rca14_fa12_or0 >> 0) & 0x01)) >> 1) & 0x01;

  u_rca14_out |= ((u_rca14_ha_xor0 >> 0) & 0x01) << 0;
  u_rca14_out |= ((u_rca14_fa1_xor1 >> 0) & 0x01) << 1;
  u_rca14_out |= ((u_rca14_fa2_xor1 >> 0) & 0x01) << 2;
  u_rca14_out |= ((u_rca14_fa3_xor1 >> 0) & 0x01) << 3;
  u_rca14_out |= ((u_rca14_fa4_xor1 >> 0) & 0x01) << 4;
  u_rca14_out |= ((u_rca14_fa5_xor1 >> 0) & 0x01) << 5;
  u_rca14_out |= ((u_rca14_fa6_xor1 >> 0) & 0x01) << 6;
  u_rca14_out |= ((u_rca14_fa7_xor1 >> 0) & 0x01) << 7;
  u_rca14_out |= ((u_rca14_fa8_xor1 >> 0) & 0x01) << 8;
  u_rca14_out |= ((u_rca14_fa9_xor1 >> 0) & 0x01) << 9;
  u_rca14_out |= ((u_rca14_fa10_xor1 >> 0) & 0x01) << 10;
  u_rca14_out |= ((u_rca14_fa11_xor1 >> 0) & 0x01) << 11;
  u_rca14_out |= ((u_rca14_fa12_xor1 >> 0) & 0x01) << 12;
  u_rca14_out |= ((u_rca14_fa13_xor1 >> 0) & 0x01) << 13;
  u_rca14_out |= ((u_rca14_fa13_or0 >> 0) & 0x01) << 14;
  return u_rca14_out;
}

uint64_t h_s_wallace_rca8(uint64_t a, uint64_t b){
  uint64_t h_s_wallace_rca8_out = 0;
  uint8_t h_s_wallace_rca8_and_2_0 = 0;
  uint8_t h_s_wallace_rca8_and_1_1 = 0;
  uint8_t h_s_wallace_rca8_ha0_xor0 = 0;
  uint8_t h_s_wallace_rca8_ha0_and0 = 0;
  uint8_t h_s_wallace_rca8_and_3_0 = 0;
  uint8_t h_s_wallace_rca8_and_2_1 = 0;
  uint8_t h_s_wallace_rca8_fa0_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa0_or0 = 0;
  uint8_t h_s_wallace_rca8_and_4_0 = 0;
  uint8_t h_s_wallace_rca8_and_3_1 = 0;
  uint8_t h_s_wallace_rca8_fa1_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa1_or0 = 0;
  uint8_t h_s_wallace_rca8_and_5_0 = 0;
  uint8_t h_s_wallace_rca8_and_4_1 = 0;
  uint8_t h_s_wallace_rca8_fa2_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa2_or0 = 0;
  uint8_t h_s_wallace_rca8_and_6_0 = 0;
  uint8_t h_s_wallace_rca8_and_5_1 = 0;
  uint8_t h_s_wallace_rca8_fa3_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa3_or0 = 0;
  uint8_t h_s_wallace_rca8_nand_7_0 = 0;
  uint8_t h_s_wallace_rca8_and_6_1 = 0;
  uint8_t h_s_wallace_rca8_fa4_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa4_or0 = 0;
  uint8_t h_s_wallace_rca8_nand_7_1 = 0;
  uint8_t h_s_wallace_rca8_fa5_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa5_or0 = 0;
  uint8_t h_s_wallace_rca8_nand_7_2 = 0;
  uint8_t h_s_wallace_rca8_and_6_3 = 0;
  uint8_t h_s_wallace_rca8_fa6_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa6_or0 = 0;
  uint8_t h_s_wallace_rca8_nand_7_3 = 0;
  uint8_t h_s_wallace_rca8_and_6_4 = 0;
  uint8_t h_s_wallace_rca8_fa7_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa7_or0 = 0;
  uint8_t h_s_wallace_rca8_nand_7_4 = 0;
  uint8_t h_s_wallace_rca8_and_6_5 = 0;
  uint8_t h_s_wallace_rca8_fa8_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa8_or0 = 0;
  uint8_t h_s_wallace_rca8_nand_7_5 = 0;
  uint8_t h_s_wallace_rca8_and_6_6 = 0;
  uint8_t h_s_wallace_rca8_fa9_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa9_or0 = 0;
  uint8_t h_s_wallace_rca8_and_1_2 = 0;
  uint8_t h_s_wallace_rca8_and_0_3 = 0;
  uint8_t h_s_wallace_rca8_ha1_xor0 = 0;
  uint8_t h_s_wallace_rca8_ha1_and0 = 0;
  uint8_t h_s_wallace_rca8_and_2_2 = 0;
  uint8_t h_s_wallace_rca8_and_1_3 = 0;
  uint8_t h_s_wallace_rca8_fa10_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa10_or0 = 0;
  uint8_t h_s_wallace_rca8_and_3_2 = 0;
  uint8_t h_s_wallace_rca8_and_2_3 = 0;
  uint8_t h_s_wallace_rca8_fa11_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa11_or0 = 0;
  uint8_t h_s_wallace_rca8_and_4_2 = 0;
  uint8_t h_s_wallace_rca8_and_3_3 = 0;
  uint8_t h_s_wallace_rca8_fa12_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa12_or0 = 0;
  uint8_t h_s_wallace_rca8_and_5_2 = 0;
  uint8_t h_s_wallace_rca8_and_4_3 = 0;
  uint8_t h_s_wallace_rca8_fa13_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa13_or0 = 0;
  uint8_t h_s_wallace_rca8_and_6_2 = 0;
  uint8_t h_s_wallace_rca8_and_5_3 = 0;
  uint8_t h_s_wallace_rca8_fa14_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa14_or0 = 0;
  uint8_t h_s_wallace_rca8_and_5_4 = 0;
  uint8_t h_s_wallace_rca8_and_4_5 = 0;
  uint8_t h_s_wallace_rca8_fa15_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa15_or0 = 0;
  uint8_t h_s_wallace_rca8_and_5_5 = 0;
  uint8_t h_s_wallace_rca8_and_4_6 = 0;
  uint8_t h_s_wallace_rca8_fa16_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa16_or0 = 0;
  uint8_t h_s_wallace_rca8_and_5_6 = 0;
  uint8_t h_s_wallace_rca8_nand_4_7 = 0;
  uint8_t h_s_wallace_rca8_fa17_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa17_or0 = 0;
  uint8_t h_s_wallace_rca8_and_0_4 = 0;
  uint8_t h_s_wallace_rca8_ha2_xor0 = 0;
  uint8_t h_s_wallace_rca8_ha2_and0 = 0;
  uint8_t h_s_wallace_rca8_and_1_4 = 0;
  uint8_t h_s_wallace_rca8_and_0_5 = 0;
  uint8_t h_s_wallace_rca8_fa18_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa18_or0 = 0;
  uint8_t h_s_wallace_rca8_and_2_4 = 0;
  uint8_t h_s_wallace_rca8_and_1_5 = 0;
  uint8_t h_s_wallace_rca8_fa19_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa19_or0 = 0;
  uint8_t h_s_wallace_rca8_and_3_4 = 0;
  uint8_t h_s_wallace_rca8_and_2_5 = 0;
  uint8_t h_s_wallace_rca8_fa20_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa20_or0 = 0;
  uint8_t h_s_wallace_rca8_and_4_4 = 0;
  uint8_t h_s_wallace_rca8_and_3_5 = 0;
  uint8_t h_s_wallace_rca8_fa21_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa21_or0 = 0;
  uint8_t h_s_wallace_rca8_and_3_6 = 0;
  uint8_t h_s_wallace_rca8_nand_2_7 = 0;
  uint8_t h_s_wallace_rca8_fa22_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa22_or0 = 0;
  uint8_t h_s_wallace_rca8_nand_3_7 = 0;
  uint8_t h_s_wallace_rca8_fa23_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa23_or0 = 0;
  uint8_t h_s_wallace_rca8_ha3_xor0 = 0;
  uint8_t h_s_wallace_rca8_ha3_and0 = 0;
  uint8_t h_s_wallace_rca8_and_0_6 = 0;
  uint8_t h_s_wallace_rca8_fa24_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa24_or0 = 0;
  uint8_t h_s_wallace_rca8_and_1_6 = 0;
  uint8_t h_s_wallace_rca8_nand_0_7 = 0;
  uint8_t h_s_wallace_rca8_fa25_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa25_or0 = 0;
  uint8_t h_s_wallace_rca8_and_2_6 = 0;
  uint8_t h_s_wallace_rca8_nand_1_7 = 0;
  uint8_t h_s_wallace_rca8_fa26_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa26_or0 = 0;
  uint8_t h_s_wallace_rca8_fa27_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa27_or0 = 0;
  uint8_t h_s_wallace_rca8_ha4_xor0 = 0;
  uint8_t h_s_wallace_rca8_ha4_and0 = 0;
  uint8_t h_s_wallace_rca8_fa28_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa28_or0 = 0;
  uint8_t h_s_wallace_rca8_fa29_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa29_or0 = 0;
  uint8_t h_s_wallace_rca8_ha5_xor0 = 0;
  uint8_t h_s_wallace_rca8_ha5_and0 = 0;
  uint8_t h_s_wallace_rca8_fa30_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa30_or0 = 0;
  uint8_t h_s_wallace_rca8_fa31_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa31_or0 = 0;
  uint8_t h_s_wallace_rca8_fa32_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa32_or0 = 0;
  uint8_t h_s_wallace_rca8_fa33_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa33_or0 = 0;
  uint8_t h_s_wallace_rca8_nand_5_7 = 0;
  uint8_t h_s_wallace_rca8_fa34_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa34_or0 = 0;
  uint8_t h_s_wallace_rca8_nand_7_6 = 0;
  uint8_t h_s_wallace_rca8_fa35_xor1 = 0;
  uint8_t h_s_wallace_rca8_fa35_or0 = 0;
  uint8_t h_s_wallace_rca8_and_0_0 = 0;
  uint8_t h_s_wallace_rca8_and_1_0 = 0;
  uint8_t h_s_wallace_rca8_and_0_2 = 0;
  uint8_t h_s_wallace_rca8_nand_6_7 = 0;
  uint8_t h_s_wallace_rca8_and_0_1 = 0;
  uint8_t h_s_wallace_rca8_and_7_7 = 0;
  uint64_t h_s_wallace_rca8_u_rca14_a = 0;
  uint64_t h_s_wallace_rca8_u_rca14_b = 0;
  uint64_t h_s_wallace_rca8_u_rca14_out = 0;
  uint8_t h_s_wallace_rca8_xor0 = 0;

  h_s_wallace_rca8_and_2_0 = and_gate(((a >> 2) & 0x01), ((b >> 0) & 0x01));
  h_s_wallace_rca8_and_1_1 = and_gate(((a >> 1) & 0x01), ((b >> 1) & 0x01));
  h_s_wallace_rca8_ha0_xor0 = (ha(((h_s_wallace_rca8_and_2_0 >> 0) & 0x01), ((h_s_wallace_rca8_and_1_1 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_ha0_and0 = (ha(((h_s_wallace_rca8_and_2_0 >> 0) & 0x01), ((h_s_wallace_rca8_and_1_1 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_and_3_0 = and_gate(((a >> 3) & 0x01), ((b >> 0) & 0x01));
  h_s_wallace_rca8_and_2_1 = and_gate(((a >> 2) & 0x01), ((b >> 1) & 0x01));
  h_s_wallace_rca8_fa0_xor1 = (fa(((h_s_wallace_rca8_ha0_and0 >> 0) & 0x01), ((h_s_wallace_rca8_and_3_0 >> 0) & 0x01), ((h_s_wallace_rca8_and_2_1 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa0_or0 = (fa(((h_s_wallace_rca8_ha0_and0 >> 0) & 0x01), ((h_s_wallace_rca8_and_3_0 >> 0) & 0x01), ((h_s_wallace_rca8_and_2_1 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_and_4_0 = and_gate(((a >> 4) & 0x01), ((b >> 0) & 0x01));
  h_s_wallace_rca8_and_3_1 = and_gate(((a >> 3) & 0x01), ((b >> 1) & 0x01));
  h_s_wallace_rca8_fa1_xor1 = (fa(((h_s_wallace_rca8_fa0_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_4_0 >> 0) & 0x01), ((h_s_wallace_rca8_and_3_1 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa1_or0 = (fa(((h_s_wallace_rca8_fa0_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_4_0 >> 0) & 0x01), ((h_s_wallace_rca8_and_3_1 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_and_5_0 = and_gate(((a >> 5) & 0x01), ((b >> 0) & 0x01));
  h_s_wallace_rca8_and_4_1 = and_gate(((a >> 4) & 0x01), ((b >> 1) & 0x01));
  h_s_wallace_rca8_fa2_xor1 = (fa(((h_s_wallace_rca8_fa1_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_5_0 >> 0) & 0x01), ((h_s_wallace_rca8_and_4_1 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa2_or0 = (fa(((h_s_wallace_rca8_fa1_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_5_0 >> 0) & 0x01), ((h_s_wallace_rca8_and_4_1 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_and_6_0 = and_gate(((a >> 6) & 0x01), ((b >> 0) & 0x01));
  h_s_wallace_rca8_and_5_1 = and_gate(((a >> 5) & 0x01), ((b >> 1) & 0x01));
  h_s_wallace_rca8_fa3_xor1 = (fa(((h_s_wallace_rca8_fa2_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_6_0 >> 0) & 0x01), ((h_s_wallace_rca8_and_5_1 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa3_or0 = (fa(((h_s_wallace_rca8_fa2_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_6_0 >> 0) & 0x01), ((h_s_wallace_rca8_and_5_1 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_nand_7_0 = nand_gate(((a >> 7) & 0x01), ((b >> 0) & 0x01));
  h_s_wallace_rca8_and_6_1 = and_gate(((a >> 6) & 0x01), ((b >> 1) & 0x01));
  h_s_wallace_rca8_fa4_xor1 = (fa(((h_s_wallace_rca8_fa3_or0 >> 0) & 0x01), ((h_s_wallace_rca8_nand_7_0 >> 0) & 0x01), ((h_s_wallace_rca8_and_6_1 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa4_or0 = (fa(((h_s_wallace_rca8_fa3_or0 >> 0) & 0x01), ((h_s_wallace_rca8_nand_7_0 >> 0) & 0x01), ((h_s_wallace_rca8_and_6_1 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_nand_7_1 = nand_gate(((a >> 7) & 0x01), ((b >> 1) & 0x01));
  h_s_wallace_rca8_fa5_xor1 = (fa(((h_s_wallace_rca8_fa4_or0 >> 0) & 0x01), (0x01), ((h_s_wallace_rca8_nand_7_1 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa5_or0 = (fa(((h_s_wallace_rca8_fa4_or0 >> 0) & 0x01), (0x01), ((h_s_wallace_rca8_nand_7_1 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_nand_7_2 = nand_gate(((a >> 7) & 0x01), ((b >> 2) & 0x01));
  h_s_wallace_rca8_and_6_3 = and_gate(((a >> 6) & 0x01), ((b >> 3) & 0x01));
  h_s_wallace_rca8_fa6_xor1 = (fa(((h_s_wallace_rca8_fa5_or0 >> 0) & 0x01), ((h_s_wallace_rca8_nand_7_2 >> 0) & 0x01), ((h_s_wallace_rca8_and_6_3 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa6_or0 = (fa(((h_s_wallace_rca8_fa5_or0 >> 0) & 0x01), ((h_s_wallace_rca8_nand_7_2 >> 0) & 0x01), ((h_s_wallace_rca8_and_6_3 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_nand_7_3 = nand_gate(((a >> 7) & 0x01), ((b >> 3) & 0x01));
  h_s_wallace_rca8_and_6_4 = and_gate(((a >> 6) & 0x01), ((b >> 4) & 0x01));
  h_s_wallace_rca8_fa7_xor1 = (fa(((h_s_wallace_rca8_fa6_or0 >> 0) & 0x01), ((h_s_wallace_rca8_nand_7_3 >> 0) & 0x01), ((h_s_wallace_rca8_and_6_4 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa7_or0 = (fa(((h_s_wallace_rca8_fa6_or0 >> 0) & 0x01), ((h_s_wallace_rca8_nand_7_3 >> 0) & 0x01), ((h_s_wallace_rca8_and_6_4 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_nand_7_4 = nand_gate(((a >> 7) & 0x01), ((b >> 4) & 0x01));
  h_s_wallace_rca8_and_6_5 = and_gate(((a >> 6) & 0x01), ((b >> 5) & 0x01));
  h_s_wallace_rca8_fa8_xor1 = (fa(((h_s_wallace_rca8_fa7_or0 >> 0) & 0x01), ((h_s_wallace_rca8_nand_7_4 >> 0) & 0x01), ((h_s_wallace_rca8_and_6_5 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa8_or0 = (fa(((h_s_wallace_rca8_fa7_or0 >> 0) & 0x01), ((h_s_wallace_rca8_nand_7_4 >> 0) & 0x01), ((h_s_wallace_rca8_and_6_5 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_nand_7_5 = nand_gate(((a >> 7) & 0x01), ((b >> 5) & 0x01));
  h_s_wallace_rca8_and_6_6 = and_gate(((a >> 6) & 0x01), ((b >> 6) & 0x01));
  h_s_wallace_rca8_fa9_xor1 = (fa(((h_s_wallace_rca8_fa8_or0 >> 0) & 0x01), ((h_s_wallace_rca8_nand_7_5 >> 0) & 0x01), ((h_s_wallace_rca8_and_6_6 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa9_or0 = (fa(((h_s_wallace_rca8_fa8_or0 >> 0) & 0x01), ((h_s_wallace_rca8_nand_7_5 >> 0) & 0x01), ((h_s_wallace_rca8_and_6_6 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_and_1_2 = and_gate(((a >> 1) & 0x01), ((b >> 2) & 0x01));
  h_s_wallace_rca8_and_0_3 = and_gate(((a >> 0) & 0x01), ((b >> 3) & 0x01));
  h_s_wallace_rca8_ha1_xor0 = (ha(((h_s_wallace_rca8_and_1_2 >> 0) & 0x01), ((h_s_wallace_rca8_and_0_3 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_ha1_and0 = (ha(((h_s_wallace_rca8_and_1_2 >> 0) & 0x01), ((h_s_wallace_rca8_and_0_3 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_and_2_2 = and_gate(((a >> 2) & 0x01), ((b >> 2) & 0x01));
  h_s_wallace_rca8_and_1_3 = and_gate(((a >> 1) & 0x01), ((b >> 3) & 0x01));
  h_s_wallace_rca8_fa10_xor1 = (fa(((h_s_wallace_rca8_ha1_and0 >> 0) & 0x01), ((h_s_wallace_rca8_and_2_2 >> 0) & 0x01), ((h_s_wallace_rca8_and_1_3 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa10_or0 = (fa(((h_s_wallace_rca8_ha1_and0 >> 0) & 0x01), ((h_s_wallace_rca8_and_2_2 >> 0) & 0x01), ((h_s_wallace_rca8_and_1_3 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_and_3_2 = and_gate(((a >> 3) & 0x01), ((b >> 2) & 0x01));
  h_s_wallace_rca8_and_2_3 = and_gate(((a >> 2) & 0x01), ((b >> 3) & 0x01));
  h_s_wallace_rca8_fa11_xor1 = (fa(((h_s_wallace_rca8_fa10_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_3_2 >> 0) & 0x01), ((h_s_wallace_rca8_and_2_3 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa11_or0 = (fa(((h_s_wallace_rca8_fa10_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_3_2 >> 0) & 0x01), ((h_s_wallace_rca8_and_2_3 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_and_4_2 = and_gate(((a >> 4) & 0x01), ((b >> 2) & 0x01));
  h_s_wallace_rca8_and_3_3 = and_gate(((a >> 3) & 0x01), ((b >> 3) & 0x01));
  h_s_wallace_rca8_fa12_xor1 = (fa(((h_s_wallace_rca8_fa11_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_4_2 >> 0) & 0x01), ((h_s_wallace_rca8_and_3_3 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa12_or0 = (fa(((h_s_wallace_rca8_fa11_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_4_2 >> 0) & 0x01), ((h_s_wallace_rca8_and_3_3 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_and_5_2 = and_gate(((a >> 5) & 0x01), ((b >> 2) & 0x01));
  h_s_wallace_rca8_and_4_3 = and_gate(((a >> 4) & 0x01), ((b >> 3) & 0x01));
  h_s_wallace_rca8_fa13_xor1 = (fa(((h_s_wallace_rca8_fa12_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_5_2 >> 0) & 0x01), ((h_s_wallace_rca8_and_4_3 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa13_or0 = (fa(((h_s_wallace_rca8_fa12_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_5_2 >> 0) & 0x01), ((h_s_wallace_rca8_and_4_3 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_and_6_2 = and_gate(((a >> 6) & 0x01), ((b >> 2) & 0x01));
  h_s_wallace_rca8_and_5_3 = and_gate(((a >> 5) & 0x01), ((b >> 3) & 0x01));
  h_s_wallace_rca8_fa14_xor1 = (fa(((h_s_wallace_rca8_fa13_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_6_2 >> 0) & 0x01), ((h_s_wallace_rca8_and_5_3 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa14_or0 = (fa(((h_s_wallace_rca8_fa13_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_6_2 >> 0) & 0x01), ((h_s_wallace_rca8_and_5_3 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_and_5_4 = and_gate(((a >> 5) & 0x01), ((b >> 4) & 0x01));
  h_s_wallace_rca8_and_4_5 = and_gate(((a >> 4) & 0x01), ((b >> 5) & 0x01));
  h_s_wallace_rca8_fa15_xor1 = (fa(((h_s_wallace_rca8_fa14_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_5_4 >> 0) & 0x01), ((h_s_wallace_rca8_and_4_5 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa15_or0 = (fa(((h_s_wallace_rca8_fa14_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_5_4 >> 0) & 0x01), ((h_s_wallace_rca8_and_4_5 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_and_5_5 = and_gate(((a >> 5) & 0x01), ((b >> 5) & 0x01));
  h_s_wallace_rca8_and_4_6 = and_gate(((a >> 4) & 0x01), ((b >> 6) & 0x01));
  h_s_wallace_rca8_fa16_xor1 = (fa(((h_s_wallace_rca8_fa15_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_5_5 >> 0) & 0x01), ((h_s_wallace_rca8_and_4_6 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa16_or0 = (fa(((h_s_wallace_rca8_fa15_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_5_5 >> 0) & 0x01), ((h_s_wallace_rca8_and_4_6 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_and_5_6 = and_gate(((a >> 5) & 0x01), ((b >> 6) & 0x01));
  h_s_wallace_rca8_nand_4_7 = nand_gate(((a >> 4) & 0x01), ((b >> 7) & 0x01));
  h_s_wallace_rca8_fa17_xor1 = (fa(((h_s_wallace_rca8_fa16_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_5_6 >> 0) & 0x01), ((h_s_wallace_rca8_nand_4_7 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa17_or0 = (fa(((h_s_wallace_rca8_fa16_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_5_6 >> 0) & 0x01), ((h_s_wallace_rca8_nand_4_7 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_and_0_4 = and_gate(((a >> 0) & 0x01), ((b >> 4) & 0x01));
  h_s_wallace_rca8_ha2_xor0 = (ha(((h_s_wallace_rca8_and_0_4 >> 0) & 0x01), ((h_s_wallace_rca8_fa1_xor1 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_ha2_and0 = (ha(((h_s_wallace_rca8_and_0_4 >> 0) & 0x01), ((h_s_wallace_rca8_fa1_xor1 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_and_1_4 = and_gate(((a >> 1) & 0x01), ((b >> 4) & 0x01));
  h_s_wallace_rca8_and_0_5 = and_gate(((a >> 0) & 0x01), ((b >> 5) & 0x01));
  h_s_wallace_rca8_fa18_xor1 = (fa(((h_s_wallace_rca8_ha2_and0 >> 0) & 0x01), ((h_s_wallace_rca8_and_1_4 >> 0) & 0x01), ((h_s_wallace_rca8_and_0_5 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa18_or0 = (fa(((h_s_wallace_rca8_ha2_and0 >> 0) & 0x01), ((h_s_wallace_rca8_and_1_4 >> 0) & 0x01), ((h_s_wallace_rca8_and_0_5 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_and_2_4 = and_gate(((a >> 2) & 0x01), ((b >> 4) & 0x01));
  h_s_wallace_rca8_and_1_5 = and_gate(((a >> 1) & 0x01), ((b >> 5) & 0x01));
  h_s_wallace_rca8_fa19_xor1 = (fa(((h_s_wallace_rca8_fa18_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_2_4 >> 0) & 0x01), ((h_s_wallace_rca8_and_1_5 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa19_or0 = (fa(((h_s_wallace_rca8_fa18_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_2_4 >> 0) & 0x01), ((h_s_wallace_rca8_and_1_5 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_and_3_4 = and_gate(((a >> 3) & 0x01), ((b >> 4) & 0x01));
  h_s_wallace_rca8_and_2_5 = and_gate(((a >> 2) & 0x01), ((b >> 5) & 0x01));
  h_s_wallace_rca8_fa20_xor1 = (fa(((h_s_wallace_rca8_fa19_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_3_4 >> 0) & 0x01), ((h_s_wallace_rca8_and_2_5 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa20_or0 = (fa(((h_s_wallace_rca8_fa19_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_3_4 >> 0) & 0x01), ((h_s_wallace_rca8_and_2_5 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_and_4_4 = and_gate(((a >> 4) & 0x01), ((b >> 4) & 0x01));
  h_s_wallace_rca8_and_3_5 = and_gate(((a >> 3) & 0x01), ((b >> 5) & 0x01));
  h_s_wallace_rca8_fa21_xor1 = (fa(((h_s_wallace_rca8_fa20_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_4_4 >> 0) & 0x01), ((h_s_wallace_rca8_and_3_5 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa21_or0 = (fa(((h_s_wallace_rca8_fa20_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_4_4 >> 0) & 0x01), ((h_s_wallace_rca8_and_3_5 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_and_3_6 = and_gate(((a >> 3) & 0x01), ((b >> 6) & 0x01));
  h_s_wallace_rca8_nand_2_7 = nand_gate(((a >> 2) & 0x01), ((b >> 7) & 0x01));
  h_s_wallace_rca8_fa22_xor1 = (fa(((h_s_wallace_rca8_fa21_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_3_6 >> 0) & 0x01), ((h_s_wallace_rca8_nand_2_7 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa22_or0 = (fa(((h_s_wallace_rca8_fa21_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_3_6 >> 0) & 0x01), ((h_s_wallace_rca8_nand_2_7 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_nand_3_7 = nand_gate(((a >> 3) & 0x01), ((b >> 7) & 0x01));
  h_s_wallace_rca8_fa23_xor1 = (fa(((h_s_wallace_rca8_fa22_or0 >> 0) & 0x01), ((h_s_wallace_rca8_nand_3_7 >> 0) & 0x01), ((h_s_wallace_rca8_fa7_xor1 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa23_or0 = (fa(((h_s_wallace_rca8_fa22_or0 >> 0) & 0x01), ((h_s_wallace_rca8_nand_3_7 >> 0) & 0x01), ((h_s_wallace_rca8_fa7_xor1 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_ha3_xor0 = (ha(((h_s_wallace_rca8_fa2_xor1 >> 0) & 0x01), ((h_s_wallace_rca8_fa11_xor1 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_ha3_and0 = (ha(((h_s_wallace_rca8_fa2_xor1 >> 0) & 0x01), ((h_s_wallace_rca8_fa11_xor1 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_and_0_6 = and_gate(((a >> 0) & 0x01), ((b >> 6) & 0x01));
  h_s_wallace_rca8_fa24_xor1 = (fa(((h_s_wallace_rca8_ha3_and0 >> 0) & 0x01), ((h_s_wallace_rca8_and_0_6 >> 0) & 0x01), ((h_s_wallace_rca8_fa3_xor1 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa24_or0 = (fa(((h_s_wallace_rca8_ha3_and0 >> 0) & 0x01), ((h_s_wallace_rca8_and_0_6 >> 0) & 0x01), ((h_s_wallace_rca8_fa3_xor1 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_and_1_6 = and_gate(((a >> 1) & 0x01), ((b >> 6) & 0x01));
  h_s_wallace_rca8_nand_0_7 = nand_gate(((a >> 0) & 0x01), ((b >> 7) & 0x01));
  h_s_wallace_rca8_fa25_xor1 = (fa(((h_s_wallace_rca8_fa24_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_1_6 >> 0) & 0x01), ((h_s_wallace_rca8_nand_0_7 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa25_or0 = (fa(((h_s_wallace_rca8_fa24_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_1_6 >> 0) & 0x01), ((h_s_wallace_rca8_nand_0_7 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_and_2_6 = and_gate(((a >> 2) & 0x01), ((b >> 6) & 0x01));
  h_s_wallace_rca8_nand_1_7 = nand_gate(((a >> 1) & 0x01), ((b >> 7) & 0x01));
  h_s_wallace_rca8_fa26_xor1 = (fa(((h_s_wallace_rca8_fa25_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_2_6 >> 0) & 0x01), ((h_s_wallace_rca8_nand_1_7 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa26_or0 = (fa(((h_s_wallace_rca8_fa25_or0 >> 0) & 0x01), ((h_s_wallace_rca8_and_2_6 >> 0) & 0x01), ((h_s_wallace_rca8_nand_1_7 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_fa27_xor1 = (fa(((h_s_wallace_rca8_fa26_or0 >> 0) & 0x01), ((h_s_wallace_rca8_fa6_xor1 >> 0) & 0x01), ((h_s_wallace_rca8_fa15_xor1 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa27_or0 = (fa(((h_s_wallace_rca8_fa26_or0 >> 0) & 0x01), ((h_s_wallace_rca8_fa6_xor1 >> 0) & 0x01), ((h_s_wallace_rca8_fa15_xor1 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_ha4_xor0 = (ha(((h_s_wallace_rca8_fa12_xor1 >> 0) & 0x01), ((h_s_wallace_rca8_fa19_xor1 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_ha4_and0 = (ha(((h_s_wallace_rca8_fa12_xor1 >> 0) & 0x01), ((h_s_wallace_rca8_fa19_xor1 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_fa28_xor1 = (fa(((h_s_wallace_rca8_ha4_and0 >> 0) & 0x01), ((h_s_wallace_rca8_fa4_xor1 >> 0) & 0x01), ((h_s_wallace_rca8_fa13_xor1 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa28_or0 = (fa(((h_s_wallace_rca8_ha4_and0 >> 0) & 0x01), ((h_s_wallace_rca8_fa4_xor1 >> 0) & 0x01), ((h_s_wallace_rca8_fa13_xor1 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_fa29_xor1 = (fa(((h_s_wallace_rca8_fa28_or0 >> 0) & 0x01), ((h_s_wallace_rca8_fa5_xor1 >> 0) & 0x01), ((h_s_wallace_rca8_fa14_xor1 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa29_or0 = (fa(((h_s_wallace_rca8_fa28_or0 >> 0) & 0x01), ((h_s_wallace_rca8_fa5_xor1 >> 0) & 0x01), ((h_s_wallace_rca8_fa14_xor1 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_ha5_xor0 = (ha(((h_s_wallace_rca8_fa20_xor1 >> 0) & 0x01), ((h_s_wallace_rca8_fa25_xor1 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_ha5_and0 = (ha(((h_s_wallace_rca8_fa20_xor1 >> 0) & 0x01), ((h_s_wallace_rca8_fa25_xor1 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_fa30_xor1 = (fa(((h_s_wallace_rca8_ha5_and0 >> 0) & 0x01), ((h_s_wallace_rca8_fa21_xor1 >> 0) & 0x01), ((h_s_wallace_rca8_fa26_xor1 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa30_or0 = (fa(((h_s_wallace_rca8_ha5_and0 >> 0) & 0x01), ((h_s_wallace_rca8_fa21_xor1 >> 0) & 0x01), ((h_s_wallace_rca8_fa26_xor1 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_fa31_xor1 = (fa(((h_s_wallace_rca8_fa30_or0 >> 0) & 0x01), ((h_s_wallace_rca8_fa29_or0 >> 0) & 0x01), ((h_s_wallace_rca8_fa22_xor1 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa31_or0 = (fa(((h_s_wallace_rca8_fa30_or0 >> 0) & 0x01), ((h_s_wallace_rca8_fa29_or0 >> 0) & 0x01), ((h_s_wallace_rca8_fa22_xor1 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_fa32_xor1 = (fa(((h_s_wallace_rca8_fa31_or0 >> 0) & 0x01), ((h_s_wallace_rca8_fa27_or0 >> 0) & 0x01), ((h_s_wallace_rca8_fa16_xor1 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa32_or0 = (fa(((h_s_wallace_rca8_fa31_or0 >> 0) & 0x01), ((h_s_wallace_rca8_fa27_or0 >> 0) & 0x01), ((h_s_wallace_rca8_fa16_xor1 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_fa33_xor1 = (fa(((h_s_wallace_rca8_fa32_or0 >> 0) & 0x01), ((h_s_wallace_rca8_fa23_or0 >> 0) & 0x01), ((h_s_wallace_rca8_fa8_xor1 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa33_or0 = (fa(((h_s_wallace_rca8_fa32_or0 >> 0) & 0x01), ((h_s_wallace_rca8_fa23_or0 >> 0) & 0x01), ((h_s_wallace_rca8_fa8_xor1 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_nand_5_7 = nand_gate(((a >> 5) & 0x01), ((b >> 7) & 0x01));
  h_s_wallace_rca8_fa34_xor1 = (fa(((h_s_wallace_rca8_fa33_or0 >> 0) & 0x01), ((h_s_wallace_rca8_fa17_or0 >> 0) & 0x01), ((h_s_wallace_rca8_nand_5_7 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa34_or0 = (fa(((h_s_wallace_rca8_fa33_or0 >> 0) & 0x01), ((h_s_wallace_rca8_fa17_or0 >> 0) & 0x01), ((h_s_wallace_rca8_nand_5_7 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_nand_7_6 = nand_gate(((a >> 7) & 0x01), ((b >> 6) & 0x01));
  h_s_wallace_rca8_fa35_xor1 = (fa(((h_s_wallace_rca8_fa34_or0 >> 0) & 0x01), ((h_s_wallace_rca8_fa9_or0 >> 0) & 0x01), ((h_s_wallace_rca8_nand_7_6 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_wallace_rca8_fa35_or0 = (fa(((h_s_wallace_rca8_fa34_or0 >> 0) & 0x01), ((h_s_wallace_rca8_fa9_or0 >> 0) & 0x01), ((h_s_wallace_rca8_nand_7_6 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_wallace_rca8_and_0_0 = and_gate(((a >> 0) & 0x01), ((b >> 0) & 0x01));
  h_s_wallace_rca8_and_1_0 = and_gate(((a >> 1) & 0x01), ((b >> 0) & 0x01));
  h_s_wallace_rca8_and_0_2 = and_gate(((a >> 0) & 0x01), ((b >> 2) & 0x01));
  h_s_wallace_rca8_nand_6_7 = nand_gate(((a >> 6) & 0x01), ((b >> 7) & 0x01));
  h_s_wallace_rca8_and_0_1 = and_gate(((a >> 0) & 0x01), ((b >> 1) & 0x01));
  h_s_wallace_rca8_and_7_7 = and_gate(((a >> 7) & 0x01), ((b >> 7) & 0x01));
  h_s_wallace_rca8_u_rca14_a |= ((h_s_wallace_rca8_and_1_0 >> 0) & 0x01) << 0;
  h_s_wallace_rca8_u_rca14_a |= ((h_s_wallace_rca8_and_0_2 >> 0) & 0x01) << 1;
  h_s_wallace_rca8_u_rca14_a |= ((h_s_wallace_rca8_fa0_xor1 >> 0) & 0x01) << 2;
  h_s_wallace_rca8_u_rca14_a |= ((h_s_wallace_rca8_fa10_xor1 >> 0) & 0x01) << 3;
  h_s_wallace_rca8_u_rca14_a |= ((h_s_wallace_rca8_fa18_xor1 >> 0) & 0x01) << 4;
  h_s_wallace_rca8_u_rca14_a |= ((h_s_wallace_rca8_fa24_xor1 >> 0) & 0x01) << 5;
  h_s_wallace_rca8_u_rca14_a |= ((h_s_wallace_rca8_fa28_xor1 >> 0) & 0x01) << 6;
  h_s_wallace_rca8_u_rca14_a |= ((h_s_wallace_rca8_fa29_xor1 >> 0) & 0x01) << 7;
  h_s_wallace_rca8_u_rca14_a |= ((h_s_wallace_rca8_fa27_xor1 >> 0) & 0x01) << 8;
  h_s_wallace_rca8_u_rca14_a |= ((h_s_wallace_rca8_fa23_xor1 >> 0) & 0x01) << 9;
  h_s_wallace_rca8_u_rca14_a |= ((h_s_wallace_rca8_fa17_xor1 >> 0) & 0x01) << 10;
  h_s_wallace_rca8_u_rca14_a |= ((h_s_wallace_rca8_fa9_xor1 >> 0) & 0x01) << 11;
  h_s_wallace_rca8_u_rca14_a |= ((h_s_wallace_rca8_nand_6_7 >> 0) & 0x01) << 12;
  h_s_wallace_rca8_u_rca14_a |= ((h_s_wallace_rca8_fa35_or0 >> 0) & 0x01) << 13;
  h_s_wallace_rca8_u_rca14_b |= ((h_s_wallace_rca8_and_0_1 >> 0) & 0x01) << 0;
  h_s_wallace_rca8_u_rca14_b |= ((h_s_wallace_rca8_ha0_xor0 >> 0) & 0x01) << 1;
  h_s_wallace_rca8_u_rca14_b |= ((h_s_wallace_rca8_ha1_xor0 >> 0) & 0x01) << 2;
  h_s_wallace_rca8_u_rca14_b |= ((h_s_wallace_rca8_ha2_xor0 >> 0) & 0x01) << 3;
  h_s_wallace_rca8_u_rca14_b |= ((h_s_wallace_rca8_ha3_xor0 >> 0) & 0x01) << 4;
  h_s_wallace_rca8_u_rca14_b |= ((h_s_wallace_rca8_ha4_xor0 >> 0) & 0x01) << 5;
  h_s_wallace_rca8_u_rca14_b |= ((h_s_wallace_rca8_ha5_xor0 >> 0) & 0x01) << 6;
  h_s_wallace_rca8_u_rca14_b |= ((h_s_wallace_rca8_fa30_xor1 >> 0) & 0x01) << 7;
  h_s_wallace_rca8_u_rca14_b |= ((h_s_wallace_rca8_fa31_xor1 >> 0) & 0x01) << 8;
  h_s_wallace_rca8_u_rca14_b |= ((h_s_wallace_rca8_fa32_xor1 >> 0) & 0x01) << 9;
  h_s_wallace_rca8_u_rca14_b |= ((h_s_wallace_rca8_fa33_xor1 >> 0) & 0x01) << 10;
  h_s_wallace_rca8_u_rca14_b |= ((h_s_wallace_rca8_fa34_xor1 >> 0) & 0x01) << 11;
  h_s_wallace_rca8_u_rca14_b |= ((h_s_wallace_rca8_fa35_xor1 >> 0) & 0x01) << 12;
  h_s_wallace_rca8_u_rca14_b |= ((h_s_wallace_rca8_and_7_7 >> 0) & 0x01) << 13;
  h_s_wallace_rca8_u_rca14_out = u_rca14(h_s_wallace_rca8_u_rca14_a, h_s_wallace_rca8_u_rca14_b);
  h_s_wallace_rca8_xor0 = not_gate(((h_s_wallace_rca8_u_rca14_out >> 14) & 0x01));

  h_s_wallace_rca8_out |= ((h_s_wallace_rca8_and_0_0 >> 0) & 0x01) << 0;
  h_s_wallace_rca8_out |= ((h_s_wallace_rca8_u_rca14_out >> 0) & 0x01) << 1;
  h_s_wallace_rca8_out |= ((h_s_wallace_rca8_u_rca14_out >> 1) & 0x01) << 2;
  h_s_wallace_rca8_out |= ((h_s_wallace_rca8_u_rca14_out >> 2) & 0x01) << 3;
  h_s_wallace_rca8_out |= ((h_s_wallace_rca8_u_rca14_out >> 3) & 0x01) << 4;
  h_s_wallace_rca8_out |= ((h_s_wallace_rca8_u_rca14_out >> 4) & 0x01) << 5;
  h_s_wallace_rca8_out |= ((h_s_wallace_rca8_u_rca14_out >> 5) & 0x01) << 6;
  h_s_wallace_rca8_out |= ((h_s_wallace_rca8_u_rca14_out >> 6) & 0x01) << 7;
  h_s_wallace_rca8_out |= ((h_s_wallace_rca8_u_rca14_out >> 7) & 0x01) << 8;
  h_s_wallace_rca8_out |= ((h_s_wallace_rca8_u_rca14_out >> 8) & 0x01) << 9;
  h_s_wallace_rca8_out |= ((h_s_wallace_rca8_u_rca14_out >> 9) & 0x01) << 10;
  h_s_wallace_rca8_out |= ((h_s_wallace_rca8_u_rca14_out >> 10) & 0x01) << 11;
  h_s_wallace_rca8_out |= ((h_s_wallace_rca8_u_rca14_out >> 11) & 0x01) << 12;
  h_s_wallace_rca8_out |= ((h_s_wallace_rca8_u_rca14_out >> 12) & 0x01) << 13;
  h_s_wallace_rca8_out |= ((h_s_wallace_rca8_u_rca14_out >> 13) & 0x01) << 14;
  h_s_wallace_rca8_out |= ((h_s_wallace_rca8_xor0 >> 0) & 0x01) << 15;
  return h_s_wallace_rca8_out;
}

#include <assert.h>
int main(){
  int result = 0;
  for (int i = -128; i < 128; i++){
    for (int j = -128; j < 128; j++){
      result = i * j;
      
      // Calculating 2's complement in case of negative sum
      if (result < 0) {
        result = 65536 + result;  
      }
      
      assert(result == (int)h_s_wallace_rca8(i,j));
    }
  }
  return 0;
}
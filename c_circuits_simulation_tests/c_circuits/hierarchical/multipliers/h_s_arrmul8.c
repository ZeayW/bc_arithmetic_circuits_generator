#include <stdio.h>
#include <stdint.h>

uint8_t and_gate(uint8_t a, uint8_t b){
  return ((a >> 0) & 0x01) & ((b >> 0) & 0x01);
}

uint8_t nand_gate(uint8_t a, uint8_t b){
  return ~(((a >> 0) & 0x01) & ((b >> 0) & 0x01)) & 0x01;
}

uint8_t xor_gate(uint8_t a, uint8_t b){
  return ((a >> 0) & 0x01) ^ ((b >> 0) & 0x01);
}

uint8_t or_gate(uint8_t a, uint8_t b){
  return ((a >> 0) & 0x01) | ((b >> 0) & 0x01);
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

int64_t h_s_arrmul8(int64_t a, int64_t b){
  uint64_t h_s_arrmul8_out = 0;
  uint8_t h_s_arrmul8_and0_0 = 0;
  uint8_t h_s_arrmul8_and1_0 = 0;
  uint8_t h_s_arrmul8_and2_0 = 0;
  uint8_t h_s_arrmul8_and3_0 = 0;
  uint8_t h_s_arrmul8_and4_0 = 0;
  uint8_t h_s_arrmul8_and5_0 = 0;
  uint8_t h_s_arrmul8_and6_0 = 0;
  uint8_t h_s_arrmul8_nand7_0 = 0;
  uint8_t h_s_arrmul8_and0_1 = 0;
  uint8_t h_s_arrmul8_ha0_1_xor0 = 0;
  uint8_t h_s_arrmul8_ha0_1_and0 = 0;
  uint8_t h_s_arrmul8_and1_1 = 0;
  uint8_t h_s_arrmul8_fa1_1_xor1 = 0;
  uint8_t h_s_arrmul8_fa1_1_or0 = 0;
  uint8_t h_s_arrmul8_and2_1 = 0;
  uint8_t h_s_arrmul8_fa2_1_xor1 = 0;
  uint8_t h_s_arrmul8_fa2_1_or0 = 0;
  uint8_t h_s_arrmul8_and3_1 = 0;
  uint8_t h_s_arrmul8_fa3_1_xor1 = 0;
  uint8_t h_s_arrmul8_fa3_1_or0 = 0;
  uint8_t h_s_arrmul8_and4_1 = 0;
  uint8_t h_s_arrmul8_fa4_1_xor1 = 0;
  uint8_t h_s_arrmul8_fa4_1_or0 = 0;
  uint8_t h_s_arrmul8_and5_1 = 0;
  uint8_t h_s_arrmul8_fa5_1_xor1 = 0;
  uint8_t h_s_arrmul8_fa5_1_or0 = 0;
  uint8_t h_s_arrmul8_and6_1 = 0;
  uint8_t h_s_arrmul8_fa6_1_xor1 = 0;
  uint8_t h_s_arrmul8_fa6_1_or0 = 0;
  uint8_t h_s_arrmul8_nand7_1 = 0;
  uint8_t h_s_arrmul8_fa7_1_xor1 = 0;
  uint8_t h_s_arrmul8_fa7_1_or0 = 0;
  uint8_t h_s_arrmul8_and0_2 = 0;
  uint8_t h_s_arrmul8_ha0_2_xor0 = 0;
  uint8_t h_s_arrmul8_ha0_2_and0 = 0;
  uint8_t h_s_arrmul8_and1_2 = 0;
  uint8_t h_s_arrmul8_fa1_2_xor1 = 0;
  uint8_t h_s_arrmul8_fa1_2_or0 = 0;
  uint8_t h_s_arrmul8_and2_2 = 0;
  uint8_t h_s_arrmul8_fa2_2_xor1 = 0;
  uint8_t h_s_arrmul8_fa2_2_or0 = 0;
  uint8_t h_s_arrmul8_and3_2 = 0;
  uint8_t h_s_arrmul8_fa3_2_xor1 = 0;
  uint8_t h_s_arrmul8_fa3_2_or0 = 0;
  uint8_t h_s_arrmul8_and4_2 = 0;
  uint8_t h_s_arrmul8_fa4_2_xor1 = 0;
  uint8_t h_s_arrmul8_fa4_2_or0 = 0;
  uint8_t h_s_arrmul8_and5_2 = 0;
  uint8_t h_s_arrmul8_fa5_2_xor1 = 0;
  uint8_t h_s_arrmul8_fa5_2_or0 = 0;
  uint8_t h_s_arrmul8_and6_2 = 0;
  uint8_t h_s_arrmul8_fa6_2_xor1 = 0;
  uint8_t h_s_arrmul8_fa6_2_or0 = 0;
  uint8_t h_s_arrmul8_nand7_2 = 0;
  uint8_t h_s_arrmul8_fa7_2_xor1 = 0;
  uint8_t h_s_arrmul8_fa7_2_or0 = 0;
  uint8_t h_s_arrmul8_and0_3 = 0;
  uint8_t h_s_arrmul8_ha0_3_xor0 = 0;
  uint8_t h_s_arrmul8_ha0_3_and0 = 0;
  uint8_t h_s_arrmul8_and1_3 = 0;
  uint8_t h_s_arrmul8_fa1_3_xor1 = 0;
  uint8_t h_s_arrmul8_fa1_3_or0 = 0;
  uint8_t h_s_arrmul8_and2_3 = 0;
  uint8_t h_s_arrmul8_fa2_3_xor1 = 0;
  uint8_t h_s_arrmul8_fa2_3_or0 = 0;
  uint8_t h_s_arrmul8_and3_3 = 0;
  uint8_t h_s_arrmul8_fa3_3_xor1 = 0;
  uint8_t h_s_arrmul8_fa3_3_or0 = 0;
  uint8_t h_s_arrmul8_and4_3 = 0;
  uint8_t h_s_arrmul8_fa4_3_xor1 = 0;
  uint8_t h_s_arrmul8_fa4_3_or0 = 0;
  uint8_t h_s_arrmul8_and5_3 = 0;
  uint8_t h_s_arrmul8_fa5_3_xor1 = 0;
  uint8_t h_s_arrmul8_fa5_3_or0 = 0;
  uint8_t h_s_arrmul8_and6_3 = 0;
  uint8_t h_s_arrmul8_fa6_3_xor1 = 0;
  uint8_t h_s_arrmul8_fa6_3_or0 = 0;
  uint8_t h_s_arrmul8_nand7_3 = 0;
  uint8_t h_s_arrmul8_fa7_3_xor1 = 0;
  uint8_t h_s_arrmul8_fa7_3_or0 = 0;
  uint8_t h_s_arrmul8_and0_4 = 0;
  uint8_t h_s_arrmul8_ha0_4_xor0 = 0;
  uint8_t h_s_arrmul8_ha0_4_and0 = 0;
  uint8_t h_s_arrmul8_and1_4 = 0;
  uint8_t h_s_arrmul8_fa1_4_xor1 = 0;
  uint8_t h_s_arrmul8_fa1_4_or0 = 0;
  uint8_t h_s_arrmul8_and2_4 = 0;
  uint8_t h_s_arrmul8_fa2_4_xor1 = 0;
  uint8_t h_s_arrmul8_fa2_4_or0 = 0;
  uint8_t h_s_arrmul8_and3_4 = 0;
  uint8_t h_s_arrmul8_fa3_4_xor1 = 0;
  uint8_t h_s_arrmul8_fa3_4_or0 = 0;
  uint8_t h_s_arrmul8_and4_4 = 0;
  uint8_t h_s_arrmul8_fa4_4_xor1 = 0;
  uint8_t h_s_arrmul8_fa4_4_or0 = 0;
  uint8_t h_s_arrmul8_and5_4 = 0;
  uint8_t h_s_arrmul8_fa5_4_xor1 = 0;
  uint8_t h_s_arrmul8_fa5_4_or0 = 0;
  uint8_t h_s_arrmul8_and6_4 = 0;
  uint8_t h_s_arrmul8_fa6_4_xor1 = 0;
  uint8_t h_s_arrmul8_fa6_4_or0 = 0;
  uint8_t h_s_arrmul8_nand7_4 = 0;
  uint8_t h_s_arrmul8_fa7_4_xor1 = 0;
  uint8_t h_s_arrmul8_fa7_4_or0 = 0;
  uint8_t h_s_arrmul8_and0_5 = 0;
  uint8_t h_s_arrmul8_ha0_5_xor0 = 0;
  uint8_t h_s_arrmul8_ha0_5_and0 = 0;
  uint8_t h_s_arrmul8_and1_5 = 0;
  uint8_t h_s_arrmul8_fa1_5_xor1 = 0;
  uint8_t h_s_arrmul8_fa1_5_or0 = 0;
  uint8_t h_s_arrmul8_and2_5 = 0;
  uint8_t h_s_arrmul8_fa2_5_xor1 = 0;
  uint8_t h_s_arrmul8_fa2_5_or0 = 0;
  uint8_t h_s_arrmul8_and3_5 = 0;
  uint8_t h_s_arrmul8_fa3_5_xor1 = 0;
  uint8_t h_s_arrmul8_fa3_5_or0 = 0;
  uint8_t h_s_arrmul8_and4_5 = 0;
  uint8_t h_s_arrmul8_fa4_5_xor1 = 0;
  uint8_t h_s_arrmul8_fa4_5_or0 = 0;
  uint8_t h_s_arrmul8_and5_5 = 0;
  uint8_t h_s_arrmul8_fa5_5_xor1 = 0;
  uint8_t h_s_arrmul8_fa5_5_or0 = 0;
  uint8_t h_s_arrmul8_and6_5 = 0;
  uint8_t h_s_arrmul8_fa6_5_xor1 = 0;
  uint8_t h_s_arrmul8_fa6_5_or0 = 0;
  uint8_t h_s_arrmul8_nand7_5 = 0;
  uint8_t h_s_arrmul8_fa7_5_xor1 = 0;
  uint8_t h_s_arrmul8_fa7_5_or0 = 0;
  uint8_t h_s_arrmul8_and0_6 = 0;
  uint8_t h_s_arrmul8_ha0_6_xor0 = 0;
  uint8_t h_s_arrmul8_ha0_6_and0 = 0;
  uint8_t h_s_arrmul8_and1_6 = 0;
  uint8_t h_s_arrmul8_fa1_6_xor1 = 0;
  uint8_t h_s_arrmul8_fa1_6_or0 = 0;
  uint8_t h_s_arrmul8_and2_6 = 0;
  uint8_t h_s_arrmul8_fa2_6_xor1 = 0;
  uint8_t h_s_arrmul8_fa2_6_or0 = 0;
  uint8_t h_s_arrmul8_and3_6 = 0;
  uint8_t h_s_arrmul8_fa3_6_xor1 = 0;
  uint8_t h_s_arrmul8_fa3_6_or0 = 0;
  uint8_t h_s_arrmul8_and4_6 = 0;
  uint8_t h_s_arrmul8_fa4_6_xor1 = 0;
  uint8_t h_s_arrmul8_fa4_6_or0 = 0;
  uint8_t h_s_arrmul8_and5_6 = 0;
  uint8_t h_s_arrmul8_fa5_6_xor1 = 0;
  uint8_t h_s_arrmul8_fa5_6_or0 = 0;
  uint8_t h_s_arrmul8_and6_6 = 0;
  uint8_t h_s_arrmul8_fa6_6_xor1 = 0;
  uint8_t h_s_arrmul8_fa6_6_or0 = 0;
  uint8_t h_s_arrmul8_nand7_6 = 0;
  uint8_t h_s_arrmul8_fa7_6_xor1 = 0;
  uint8_t h_s_arrmul8_fa7_6_or0 = 0;
  uint8_t h_s_arrmul8_nand0_7 = 0;
  uint8_t h_s_arrmul8_ha0_7_xor0 = 0;
  uint8_t h_s_arrmul8_ha0_7_and0 = 0;
  uint8_t h_s_arrmul8_nand1_7 = 0;
  uint8_t h_s_arrmul8_fa1_7_xor1 = 0;
  uint8_t h_s_arrmul8_fa1_7_or0 = 0;
  uint8_t h_s_arrmul8_nand2_7 = 0;
  uint8_t h_s_arrmul8_fa2_7_xor1 = 0;
  uint8_t h_s_arrmul8_fa2_7_or0 = 0;
  uint8_t h_s_arrmul8_nand3_7 = 0;
  uint8_t h_s_arrmul8_fa3_7_xor1 = 0;
  uint8_t h_s_arrmul8_fa3_7_or0 = 0;
  uint8_t h_s_arrmul8_nand4_7 = 0;
  uint8_t h_s_arrmul8_fa4_7_xor1 = 0;
  uint8_t h_s_arrmul8_fa4_7_or0 = 0;
  uint8_t h_s_arrmul8_nand5_7 = 0;
  uint8_t h_s_arrmul8_fa5_7_xor1 = 0;
  uint8_t h_s_arrmul8_fa5_7_or0 = 0;
  uint8_t h_s_arrmul8_nand6_7 = 0;
  uint8_t h_s_arrmul8_fa6_7_xor1 = 0;
  uint8_t h_s_arrmul8_fa6_7_or0 = 0;
  uint8_t h_s_arrmul8_and7_7 = 0;
  uint8_t h_s_arrmul8_fa7_7_xor1 = 0;
  uint8_t h_s_arrmul8_fa7_7_or0 = 0;
  uint8_t h_s_arrmul8_xor8_7 = 0;

  h_s_arrmul8_and0_0 = and_gate(((a >> 0) & 0x01), ((b >> 0) & 0x01));
  h_s_arrmul8_and1_0 = and_gate(((a >> 1) & 0x01), ((b >> 0) & 0x01));
  h_s_arrmul8_and2_0 = and_gate(((a >> 2) & 0x01), ((b >> 0) & 0x01));
  h_s_arrmul8_and3_0 = and_gate(((a >> 3) & 0x01), ((b >> 0) & 0x01));
  h_s_arrmul8_and4_0 = and_gate(((a >> 4) & 0x01), ((b >> 0) & 0x01));
  h_s_arrmul8_and5_0 = and_gate(((a >> 5) & 0x01), ((b >> 0) & 0x01));
  h_s_arrmul8_and6_0 = and_gate(((a >> 6) & 0x01), ((b >> 0) & 0x01));
  h_s_arrmul8_nand7_0 = nand_gate(((a >> 7) & 0x01), ((b >> 0) & 0x01));
  h_s_arrmul8_and0_1 = and_gate(((a >> 0) & 0x01), ((b >> 1) & 0x01));
  h_s_arrmul8_ha0_1_xor0 = (ha(((h_s_arrmul8_and0_1 >> 0) & 0x01), ((h_s_arrmul8_and1_0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_ha0_1_and0 = (ha(((h_s_arrmul8_and0_1 >> 0) & 0x01), ((h_s_arrmul8_and1_0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and1_1 = and_gate(((a >> 1) & 0x01), ((b >> 1) & 0x01));
  h_s_arrmul8_fa1_1_xor1 = (fa(((h_s_arrmul8_and1_1 >> 0) & 0x01), ((h_s_arrmul8_and2_0 >> 0) & 0x01), ((h_s_arrmul8_ha0_1_and0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa1_1_or0 = (fa(((h_s_arrmul8_and1_1 >> 0) & 0x01), ((h_s_arrmul8_and2_0 >> 0) & 0x01), ((h_s_arrmul8_ha0_1_and0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and2_1 = and_gate(((a >> 2) & 0x01), ((b >> 1) & 0x01));
  h_s_arrmul8_fa2_1_xor1 = (fa(((h_s_arrmul8_and2_1 >> 0) & 0x01), ((h_s_arrmul8_and3_0 >> 0) & 0x01), ((h_s_arrmul8_fa1_1_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa2_1_or0 = (fa(((h_s_arrmul8_and2_1 >> 0) & 0x01), ((h_s_arrmul8_and3_0 >> 0) & 0x01), ((h_s_arrmul8_fa1_1_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and3_1 = and_gate(((a >> 3) & 0x01), ((b >> 1) & 0x01));
  h_s_arrmul8_fa3_1_xor1 = (fa(((h_s_arrmul8_and3_1 >> 0) & 0x01), ((h_s_arrmul8_and4_0 >> 0) & 0x01), ((h_s_arrmul8_fa2_1_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa3_1_or0 = (fa(((h_s_arrmul8_and3_1 >> 0) & 0x01), ((h_s_arrmul8_and4_0 >> 0) & 0x01), ((h_s_arrmul8_fa2_1_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and4_1 = and_gate(((a >> 4) & 0x01), ((b >> 1) & 0x01));
  h_s_arrmul8_fa4_1_xor1 = (fa(((h_s_arrmul8_and4_1 >> 0) & 0x01), ((h_s_arrmul8_and5_0 >> 0) & 0x01), ((h_s_arrmul8_fa3_1_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa4_1_or0 = (fa(((h_s_arrmul8_and4_1 >> 0) & 0x01), ((h_s_arrmul8_and5_0 >> 0) & 0x01), ((h_s_arrmul8_fa3_1_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and5_1 = and_gate(((a >> 5) & 0x01), ((b >> 1) & 0x01));
  h_s_arrmul8_fa5_1_xor1 = (fa(((h_s_arrmul8_and5_1 >> 0) & 0x01), ((h_s_arrmul8_and6_0 >> 0) & 0x01), ((h_s_arrmul8_fa4_1_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa5_1_or0 = (fa(((h_s_arrmul8_and5_1 >> 0) & 0x01), ((h_s_arrmul8_and6_0 >> 0) & 0x01), ((h_s_arrmul8_fa4_1_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and6_1 = and_gate(((a >> 6) & 0x01), ((b >> 1) & 0x01));
  h_s_arrmul8_fa6_1_xor1 = (fa(((h_s_arrmul8_and6_1 >> 0) & 0x01), ((h_s_arrmul8_nand7_0 >> 0) & 0x01), ((h_s_arrmul8_fa5_1_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa6_1_or0 = (fa(((h_s_arrmul8_and6_1 >> 0) & 0x01), ((h_s_arrmul8_nand7_0 >> 0) & 0x01), ((h_s_arrmul8_fa5_1_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_nand7_1 = nand_gate(((a >> 7) & 0x01), ((b >> 1) & 0x01));
  h_s_arrmul8_fa7_1_xor1 = (fa(((h_s_arrmul8_nand7_1 >> 0) & 0x01), (0x01), ((h_s_arrmul8_fa6_1_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa7_1_or0 = (fa(((h_s_arrmul8_nand7_1 >> 0) & 0x01), (0x01), ((h_s_arrmul8_fa6_1_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and0_2 = and_gate(((a >> 0) & 0x01), ((b >> 2) & 0x01));
  h_s_arrmul8_ha0_2_xor0 = (ha(((h_s_arrmul8_and0_2 >> 0) & 0x01), ((h_s_arrmul8_fa1_1_xor1 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_ha0_2_and0 = (ha(((h_s_arrmul8_and0_2 >> 0) & 0x01), ((h_s_arrmul8_fa1_1_xor1 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and1_2 = and_gate(((a >> 1) & 0x01), ((b >> 2) & 0x01));
  h_s_arrmul8_fa1_2_xor1 = (fa(((h_s_arrmul8_and1_2 >> 0) & 0x01), ((h_s_arrmul8_fa2_1_xor1 >> 0) & 0x01), ((h_s_arrmul8_ha0_2_and0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa1_2_or0 = (fa(((h_s_arrmul8_and1_2 >> 0) & 0x01), ((h_s_arrmul8_fa2_1_xor1 >> 0) & 0x01), ((h_s_arrmul8_ha0_2_and0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and2_2 = and_gate(((a >> 2) & 0x01), ((b >> 2) & 0x01));
  h_s_arrmul8_fa2_2_xor1 = (fa(((h_s_arrmul8_and2_2 >> 0) & 0x01), ((h_s_arrmul8_fa3_1_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa1_2_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa2_2_or0 = (fa(((h_s_arrmul8_and2_2 >> 0) & 0x01), ((h_s_arrmul8_fa3_1_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa1_2_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and3_2 = and_gate(((a >> 3) & 0x01), ((b >> 2) & 0x01));
  h_s_arrmul8_fa3_2_xor1 = (fa(((h_s_arrmul8_and3_2 >> 0) & 0x01), ((h_s_arrmul8_fa4_1_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa2_2_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa3_2_or0 = (fa(((h_s_arrmul8_and3_2 >> 0) & 0x01), ((h_s_arrmul8_fa4_1_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa2_2_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and4_2 = and_gate(((a >> 4) & 0x01), ((b >> 2) & 0x01));
  h_s_arrmul8_fa4_2_xor1 = (fa(((h_s_arrmul8_and4_2 >> 0) & 0x01), ((h_s_arrmul8_fa5_1_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa3_2_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa4_2_or0 = (fa(((h_s_arrmul8_and4_2 >> 0) & 0x01), ((h_s_arrmul8_fa5_1_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa3_2_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and5_2 = and_gate(((a >> 5) & 0x01), ((b >> 2) & 0x01));
  h_s_arrmul8_fa5_2_xor1 = (fa(((h_s_arrmul8_and5_2 >> 0) & 0x01), ((h_s_arrmul8_fa6_1_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa4_2_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa5_2_or0 = (fa(((h_s_arrmul8_and5_2 >> 0) & 0x01), ((h_s_arrmul8_fa6_1_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa4_2_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and6_2 = and_gate(((a >> 6) & 0x01), ((b >> 2) & 0x01));
  h_s_arrmul8_fa6_2_xor1 = (fa(((h_s_arrmul8_and6_2 >> 0) & 0x01), ((h_s_arrmul8_fa7_1_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa5_2_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa6_2_or0 = (fa(((h_s_arrmul8_and6_2 >> 0) & 0x01), ((h_s_arrmul8_fa7_1_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa5_2_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_nand7_2 = nand_gate(((a >> 7) & 0x01), ((b >> 2) & 0x01));
  h_s_arrmul8_fa7_2_xor1 = (fa(((h_s_arrmul8_nand7_2 >> 0) & 0x01), ((h_s_arrmul8_fa7_1_or0 >> 0) & 0x01), ((h_s_arrmul8_fa6_2_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa7_2_or0 = (fa(((h_s_arrmul8_nand7_2 >> 0) & 0x01), ((h_s_arrmul8_fa7_1_or0 >> 0) & 0x01), ((h_s_arrmul8_fa6_2_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and0_3 = and_gate(((a >> 0) & 0x01), ((b >> 3) & 0x01));
  h_s_arrmul8_ha0_3_xor0 = (ha(((h_s_arrmul8_and0_3 >> 0) & 0x01), ((h_s_arrmul8_fa1_2_xor1 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_ha0_3_and0 = (ha(((h_s_arrmul8_and0_3 >> 0) & 0x01), ((h_s_arrmul8_fa1_2_xor1 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and1_3 = and_gate(((a >> 1) & 0x01), ((b >> 3) & 0x01));
  h_s_arrmul8_fa1_3_xor1 = (fa(((h_s_arrmul8_and1_3 >> 0) & 0x01), ((h_s_arrmul8_fa2_2_xor1 >> 0) & 0x01), ((h_s_arrmul8_ha0_3_and0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa1_3_or0 = (fa(((h_s_arrmul8_and1_3 >> 0) & 0x01), ((h_s_arrmul8_fa2_2_xor1 >> 0) & 0x01), ((h_s_arrmul8_ha0_3_and0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and2_3 = and_gate(((a >> 2) & 0x01), ((b >> 3) & 0x01));
  h_s_arrmul8_fa2_3_xor1 = (fa(((h_s_arrmul8_and2_3 >> 0) & 0x01), ((h_s_arrmul8_fa3_2_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa1_3_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa2_3_or0 = (fa(((h_s_arrmul8_and2_3 >> 0) & 0x01), ((h_s_arrmul8_fa3_2_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa1_3_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and3_3 = and_gate(((a >> 3) & 0x01), ((b >> 3) & 0x01));
  h_s_arrmul8_fa3_3_xor1 = (fa(((h_s_arrmul8_and3_3 >> 0) & 0x01), ((h_s_arrmul8_fa4_2_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa2_3_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa3_3_or0 = (fa(((h_s_arrmul8_and3_3 >> 0) & 0x01), ((h_s_arrmul8_fa4_2_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa2_3_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and4_3 = and_gate(((a >> 4) & 0x01), ((b >> 3) & 0x01));
  h_s_arrmul8_fa4_3_xor1 = (fa(((h_s_arrmul8_and4_3 >> 0) & 0x01), ((h_s_arrmul8_fa5_2_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa3_3_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa4_3_or0 = (fa(((h_s_arrmul8_and4_3 >> 0) & 0x01), ((h_s_arrmul8_fa5_2_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa3_3_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and5_3 = and_gate(((a >> 5) & 0x01), ((b >> 3) & 0x01));
  h_s_arrmul8_fa5_3_xor1 = (fa(((h_s_arrmul8_and5_3 >> 0) & 0x01), ((h_s_arrmul8_fa6_2_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa4_3_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa5_3_or0 = (fa(((h_s_arrmul8_and5_3 >> 0) & 0x01), ((h_s_arrmul8_fa6_2_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa4_3_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and6_3 = and_gate(((a >> 6) & 0x01), ((b >> 3) & 0x01));
  h_s_arrmul8_fa6_3_xor1 = (fa(((h_s_arrmul8_and6_3 >> 0) & 0x01), ((h_s_arrmul8_fa7_2_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa5_3_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa6_3_or0 = (fa(((h_s_arrmul8_and6_3 >> 0) & 0x01), ((h_s_arrmul8_fa7_2_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa5_3_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_nand7_3 = nand_gate(((a >> 7) & 0x01), ((b >> 3) & 0x01));
  h_s_arrmul8_fa7_3_xor1 = (fa(((h_s_arrmul8_nand7_3 >> 0) & 0x01), ((h_s_arrmul8_fa7_2_or0 >> 0) & 0x01), ((h_s_arrmul8_fa6_3_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa7_3_or0 = (fa(((h_s_arrmul8_nand7_3 >> 0) & 0x01), ((h_s_arrmul8_fa7_2_or0 >> 0) & 0x01), ((h_s_arrmul8_fa6_3_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and0_4 = and_gate(((a >> 0) & 0x01), ((b >> 4) & 0x01));
  h_s_arrmul8_ha0_4_xor0 = (ha(((h_s_arrmul8_and0_4 >> 0) & 0x01), ((h_s_arrmul8_fa1_3_xor1 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_ha0_4_and0 = (ha(((h_s_arrmul8_and0_4 >> 0) & 0x01), ((h_s_arrmul8_fa1_3_xor1 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and1_4 = and_gate(((a >> 1) & 0x01), ((b >> 4) & 0x01));
  h_s_arrmul8_fa1_4_xor1 = (fa(((h_s_arrmul8_and1_4 >> 0) & 0x01), ((h_s_arrmul8_fa2_3_xor1 >> 0) & 0x01), ((h_s_arrmul8_ha0_4_and0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa1_4_or0 = (fa(((h_s_arrmul8_and1_4 >> 0) & 0x01), ((h_s_arrmul8_fa2_3_xor1 >> 0) & 0x01), ((h_s_arrmul8_ha0_4_and0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and2_4 = and_gate(((a >> 2) & 0x01), ((b >> 4) & 0x01));
  h_s_arrmul8_fa2_4_xor1 = (fa(((h_s_arrmul8_and2_4 >> 0) & 0x01), ((h_s_arrmul8_fa3_3_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa1_4_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa2_4_or0 = (fa(((h_s_arrmul8_and2_4 >> 0) & 0x01), ((h_s_arrmul8_fa3_3_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa1_4_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and3_4 = and_gate(((a >> 3) & 0x01), ((b >> 4) & 0x01));
  h_s_arrmul8_fa3_4_xor1 = (fa(((h_s_arrmul8_and3_4 >> 0) & 0x01), ((h_s_arrmul8_fa4_3_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa2_4_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa3_4_or0 = (fa(((h_s_arrmul8_and3_4 >> 0) & 0x01), ((h_s_arrmul8_fa4_3_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa2_4_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and4_4 = and_gate(((a >> 4) & 0x01), ((b >> 4) & 0x01));
  h_s_arrmul8_fa4_4_xor1 = (fa(((h_s_arrmul8_and4_4 >> 0) & 0x01), ((h_s_arrmul8_fa5_3_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa3_4_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa4_4_or0 = (fa(((h_s_arrmul8_and4_4 >> 0) & 0x01), ((h_s_arrmul8_fa5_3_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa3_4_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and5_4 = and_gate(((a >> 5) & 0x01), ((b >> 4) & 0x01));
  h_s_arrmul8_fa5_4_xor1 = (fa(((h_s_arrmul8_and5_4 >> 0) & 0x01), ((h_s_arrmul8_fa6_3_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa4_4_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa5_4_or0 = (fa(((h_s_arrmul8_and5_4 >> 0) & 0x01), ((h_s_arrmul8_fa6_3_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa4_4_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and6_4 = and_gate(((a >> 6) & 0x01), ((b >> 4) & 0x01));
  h_s_arrmul8_fa6_4_xor1 = (fa(((h_s_arrmul8_and6_4 >> 0) & 0x01), ((h_s_arrmul8_fa7_3_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa5_4_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa6_4_or0 = (fa(((h_s_arrmul8_and6_4 >> 0) & 0x01), ((h_s_arrmul8_fa7_3_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa5_4_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_nand7_4 = nand_gate(((a >> 7) & 0x01), ((b >> 4) & 0x01));
  h_s_arrmul8_fa7_4_xor1 = (fa(((h_s_arrmul8_nand7_4 >> 0) & 0x01), ((h_s_arrmul8_fa7_3_or0 >> 0) & 0x01), ((h_s_arrmul8_fa6_4_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa7_4_or0 = (fa(((h_s_arrmul8_nand7_4 >> 0) & 0x01), ((h_s_arrmul8_fa7_3_or0 >> 0) & 0x01), ((h_s_arrmul8_fa6_4_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and0_5 = and_gate(((a >> 0) & 0x01), ((b >> 5) & 0x01));
  h_s_arrmul8_ha0_5_xor0 = (ha(((h_s_arrmul8_and0_5 >> 0) & 0x01), ((h_s_arrmul8_fa1_4_xor1 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_ha0_5_and0 = (ha(((h_s_arrmul8_and0_5 >> 0) & 0x01), ((h_s_arrmul8_fa1_4_xor1 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and1_5 = and_gate(((a >> 1) & 0x01), ((b >> 5) & 0x01));
  h_s_arrmul8_fa1_5_xor1 = (fa(((h_s_arrmul8_and1_5 >> 0) & 0x01), ((h_s_arrmul8_fa2_4_xor1 >> 0) & 0x01), ((h_s_arrmul8_ha0_5_and0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa1_5_or0 = (fa(((h_s_arrmul8_and1_5 >> 0) & 0x01), ((h_s_arrmul8_fa2_4_xor1 >> 0) & 0x01), ((h_s_arrmul8_ha0_5_and0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and2_5 = and_gate(((a >> 2) & 0x01), ((b >> 5) & 0x01));
  h_s_arrmul8_fa2_5_xor1 = (fa(((h_s_arrmul8_and2_5 >> 0) & 0x01), ((h_s_arrmul8_fa3_4_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa1_5_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa2_5_or0 = (fa(((h_s_arrmul8_and2_5 >> 0) & 0x01), ((h_s_arrmul8_fa3_4_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa1_5_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and3_5 = and_gate(((a >> 3) & 0x01), ((b >> 5) & 0x01));
  h_s_arrmul8_fa3_5_xor1 = (fa(((h_s_arrmul8_and3_5 >> 0) & 0x01), ((h_s_arrmul8_fa4_4_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa2_5_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa3_5_or0 = (fa(((h_s_arrmul8_and3_5 >> 0) & 0x01), ((h_s_arrmul8_fa4_4_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa2_5_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and4_5 = and_gate(((a >> 4) & 0x01), ((b >> 5) & 0x01));
  h_s_arrmul8_fa4_5_xor1 = (fa(((h_s_arrmul8_and4_5 >> 0) & 0x01), ((h_s_arrmul8_fa5_4_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa3_5_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa4_5_or0 = (fa(((h_s_arrmul8_and4_5 >> 0) & 0x01), ((h_s_arrmul8_fa5_4_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa3_5_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and5_5 = and_gate(((a >> 5) & 0x01), ((b >> 5) & 0x01));
  h_s_arrmul8_fa5_5_xor1 = (fa(((h_s_arrmul8_and5_5 >> 0) & 0x01), ((h_s_arrmul8_fa6_4_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa4_5_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa5_5_or0 = (fa(((h_s_arrmul8_and5_5 >> 0) & 0x01), ((h_s_arrmul8_fa6_4_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa4_5_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and6_5 = and_gate(((a >> 6) & 0x01), ((b >> 5) & 0x01));
  h_s_arrmul8_fa6_5_xor1 = (fa(((h_s_arrmul8_and6_5 >> 0) & 0x01), ((h_s_arrmul8_fa7_4_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa5_5_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa6_5_or0 = (fa(((h_s_arrmul8_and6_5 >> 0) & 0x01), ((h_s_arrmul8_fa7_4_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa5_5_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_nand7_5 = nand_gate(((a >> 7) & 0x01), ((b >> 5) & 0x01));
  h_s_arrmul8_fa7_5_xor1 = (fa(((h_s_arrmul8_nand7_5 >> 0) & 0x01), ((h_s_arrmul8_fa7_4_or0 >> 0) & 0x01), ((h_s_arrmul8_fa6_5_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa7_5_or0 = (fa(((h_s_arrmul8_nand7_5 >> 0) & 0x01), ((h_s_arrmul8_fa7_4_or0 >> 0) & 0x01), ((h_s_arrmul8_fa6_5_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and0_6 = and_gate(((a >> 0) & 0x01), ((b >> 6) & 0x01));
  h_s_arrmul8_ha0_6_xor0 = (ha(((h_s_arrmul8_and0_6 >> 0) & 0x01), ((h_s_arrmul8_fa1_5_xor1 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_ha0_6_and0 = (ha(((h_s_arrmul8_and0_6 >> 0) & 0x01), ((h_s_arrmul8_fa1_5_xor1 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and1_6 = and_gate(((a >> 1) & 0x01), ((b >> 6) & 0x01));
  h_s_arrmul8_fa1_6_xor1 = (fa(((h_s_arrmul8_and1_6 >> 0) & 0x01), ((h_s_arrmul8_fa2_5_xor1 >> 0) & 0x01), ((h_s_arrmul8_ha0_6_and0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa1_6_or0 = (fa(((h_s_arrmul8_and1_6 >> 0) & 0x01), ((h_s_arrmul8_fa2_5_xor1 >> 0) & 0x01), ((h_s_arrmul8_ha0_6_and0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and2_6 = and_gate(((a >> 2) & 0x01), ((b >> 6) & 0x01));
  h_s_arrmul8_fa2_6_xor1 = (fa(((h_s_arrmul8_and2_6 >> 0) & 0x01), ((h_s_arrmul8_fa3_5_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa1_6_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa2_6_or0 = (fa(((h_s_arrmul8_and2_6 >> 0) & 0x01), ((h_s_arrmul8_fa3_5_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa1_6_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and3_6 = and_gate(((a >> 3) & 0x01), ((b >> 6) & 0x01));
  h_s_arrmul8_fa3_6_xor1 = (fa(((h_s_arrmul8_and3_6 >> 0) & 0x01), ((h_s_arrmul8_fa4_5_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa2_6_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa3_6_or0 = (fa(((h_s_arrmul8_and3_6 >> 0) & 0x01), ((h_s_arrmul8_fa4_5_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa2_6_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and4_6 = and_gate(((a >> 4) & 0x01), ((b >> 6) & 0x01));
  h_s_arrmul8_fa4_6_xor1 = (fa(((h_s_arrmul8_and4_6 >> 0) & 0x01), ((h_s_arrmul8_fa5_5_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa3_6_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa4_6_or0 = (fa(((h_s_arrmul8_and4_6 >> 0) & 0x01), ((h_s_arrmul8_fa5_5_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa3_6_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and5_6 = and_gate(((a >> 5) & 0x01), ((b >> 6) & 0x01));
  h_s_arrmul8_fa5_6_xor1 = (fa(((h_s_arrmul8_and5_6 >> 0) & 0x01), ((h_s_arrmul8_fa6_5_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa4_6_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa5_6_or0 = (fa(((h_s_arrmul8_and5_6 >> 0) & 0x01), ((h_s_arrmul8_fa6_5_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa4_6_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and6_6 = and_gate(((a >> 6) & 0x01), ((b >> 6) & 0x01));
  h_s_arrmul8_fa6_6_xor1 = (fa(((h_s_arrmul8_and6_6 >> 0) & 0x01), ((h_s_arrmul8_fa7_5_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa5_6_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa6_6_or0 = (fa(((h_s_arrmul8_and6_6 >> 0) & 0x01), ((h_s_arrmul8_fa7_5_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa5_6_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_nand7_6 = nand_gate(((a >> 7) & 0x01), ((b >> 6) & 0x01));
  h_s_arrmul8_fa7_6_xor1 = (fa(((h_s_arrmul8_nand7_6 >> 0) & 0x01), ((h_s_arrmul8_fa7_5_or0 >> 0) & 0x01), ((h_s_arrmul8_fa6_6_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa7_6_or0 = (fa(((h_s_arrmul8_nand7_6 >> 0) & 0x01), ((h_s_arrmul8_fa7_5_or0 >> 0) & 0x01), ((h_s_arrmul8_fa6_6_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_nand0_7 = nand_gate(((a >> 0) & 0x01), ((b >> 7) & 0x01));
  h_s_arrmul8_ha0_7_xor0 = (ha(((h_s_arrmul8_nand0_7 >> 0) & 0x01), ((h_s_arrmul8_fa1_6_xor1 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_ha0_7_and0 = (ha(((h_s_arrmul8_nand0_7 >> 0) & 0x01), ((h_s_arrmul8_fa1_6_xor1 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_nand1_7 = nand_gate(((a >> 1) & 0x01), ((b >> 7) & 0x01));
  h_s_arrmul8_fa1_7_xor1 = (fa(((h_s_arrmul8_nand1_7 >> 0) & 0x01), ((h_s_arrmul8_fa2_6_xor1 >> 0) & 0x01), ((h_s_arrmul8_ha0_7_and0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa1_7_or0 = (fa(((h_s_arrmul8_nand1_7 >> 0) & 0x01), ((h_s_arrmul8_fa2_6_xor1 >> 0) & 0x01), ((h_s_arrmul8_ha0_7_and0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_nand2_7 = nand_gate(((a >> 2) & 0x01), ((b >> 7) & 0x01));
  h_s_arrmul8_fa2_7_xor1 = (fa(((h_s_arrmul8_nand2_7 >> 0) & 0x01), ((h_s_arrmul8_fa3_6_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa1_7_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa2_7_or0 = (fa(((h_s_arrmul8_nand2_7 >> 0) & 0x01), ((h_s_arrmul8_fa3_6_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa1_7_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_nand3_7 = nand_gate(((a >> 3) & 0x01), ((b >> 7) & 0x01));
  h_s_arrmul8_fa3_7_xor1 = (fa(((h_s_arrmul8_nand3_7 >> 0) & 0x01), ((h_s_arrmul8_fa4_6_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa2_7_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa3_7_or0 = (fa(((h_s_arrmul8_nand3_7 >> 0) & 0x01), ((h_s_arrmul8_fa4_6_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa2_7_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_nand4_7 = nand_gate(((a >> 4) & 0x01), ((b >> 7) & 0x01));
  h_s_arrmul8_fa4_7_xor1 = (fa(((h_s_arrmul8_nand4_7 >> 0) & 0x01), ((h_s_arrmul8_fa5_6_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa3_7_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa4_7_or0 = (fa(((h_s_arrmul8_nand4_7 >> 0) & 0x01), ((h_s_arrmul8_fa5_6_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa3_7_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_nand5_7 = nand_gate(((a >> 5) & 0x01), ((b >> 7) & 0x01));
  h_s_arrmul8_fa5_7_xor1 = (fa(((h_s_arrmul8_nand5_7 >> 0) & 0x01), ((h_s_arrmul8_fa6_6_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa4_7_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa5_7_or0 = (fa(((h_s_arrmul8_nand5_7 >> 0) & 0x01), ((h_s_arrmul8_fa6_6_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa4_7_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_nand6_7 = nand_gate(((a >> 6) & 0x01), ((b >> 7) & 0x01));
  h_s_arrmul8_fa6_7_xor1 = (fa(((h_s_arrmul8_nand6_7 >> 0) & 0x01), ((h_s_arrmul8_fa7_6_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa5_7_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa6_7_or0 = (fa(((h_s_arrmul8_nand6_7 >> 0) & 0x01), ((h_s_arrmul8_fa7_6_xor1 >> 0) & 0x01), ((h_s_arrmul8_fa5_7_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_and7_7 = and_gate(((a >> 7) & 0x01), ((b >> 7) & 0x01));
  h_s_arrmul8_fa7_7_xor1 = (fa(((h_s_arrmul8_and7_7 >> 0) & 0x01), ((h_s_arrmul8_fa7_6_or0 >> 0) & 0x01), ((h_s_arrmul8_fa6_7_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_s_arrmul8_fa7_7_or0 = (fa(((h_s_arrmul8_and7_7 >> 0) & 0x01), ((h_s_arrmul8_fa7_6_or0 >> 0) & 0x01), ((h_s_arrmul8_fa6_7_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_s_arrmul8_xor8_7 = not_gate(((h_s_arrmul8_fa7_7_or0 >> 0) & 0x01));

  h_s_arrmul8_out |= ((h_s_arrmul8_and0_0 >> 0) & 0x01) << 0;
  h_s_arrmul8_out |= ((h_s_arrmul8_ha0_1_xor0 >> 0) & 0x01) << 1;
  h_s_arrmul8_out |= ((h_s_arrmul8_ha0_2_xor0 >> 0) & 0x01) << 2;
  h_s_arrmul8_out |= ((h_s_arrmul8_ha0_3_xor0 >> 0) & 0x01) << 3;
  h_s_arrmul8_out |= ((h_s_arrmul8_ha0_4_xor0 >> 0) & 0x01) << 4;
  h_s_arrmul8_out |= ((h_s_arrmul8_ha0_5_xor0 >> 0) & 0x01) << 5;
  h_s_arrmul8_out |= ((h_s_arrmul8_ha0_6_xor0 >> 0) & 0x01) << 6;
  h_s_arrmul8_out |= ((h_s_arrmul8_ha0_7_xor0 >> 0) & 0x01) << 7;
  h_s_arrmul8_out |= ((h_s_arrmul8_fa1_7_xor1 >> 0) & 0x01) << 8;
  h_s_arrmul8_out |= ((h_s_arrmul8_fa2_7_xor1 >> 0) & 0x01) << 9;
  h_s_arrmul8_out |= ((h_s_arrmul8_fa3_7_xor1 >> 0) & 0x01) << 10;
  h_s_arrmul8_out |= ((h_s_arrmul8_fa4_7_xor1 >> 0) & 0x01) << 11;
  h_s_arrmul8_out |= ((h_s_arrmul8_fa5_7_xor1 >> 0) & 0x01) << 12;
  h_s_arrmul8_out |= ((h_s_arrmul8_fa6_7_xor1 >> 0) & 0x01) << 13;
  h_s_arrmul8_out |= ((h_s_arrmul8_fa7_7_xor1 >> 0) & 0x01) << 14;
  h_s_arrmul8_out |= ((h_s_arrmul8_xor8_7 >> 0) & 0x01) << 15;
  return h_s_arrmul8_out;
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
      
      assert(result == (int)h_s_arrmul8(i,j));
    }
  }
  return 0;
}
#include <stdio.h>
#include <stdint.h>

uint8_t xor_gate(uint8_t a, uint8_t b){
  return ((a >> 0) & 0x01) ^ ((b >> 0) & 0x01);
}

uint8_t and_gate(uint8_t a, uint8_t b){
  return ((a >> 0) & 0x01) & ((b >> 0) & 0x01);
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

uint8_t mux2to1(uint8_t d0, uint8_t d1, uint8_t sel){
  uint8_t mux2to1_out = 0;
  uint8_t mux2to1_and0 = 0;
  uint8_t mux2to1_not0 = 0;
  uint8_t mux2to1_and1 = 0;
  uint8_t mux2to1_xor0 = 0;

  mux2to1_and0 = and_gate(((d1 >> 0) & 0x01), ((sel >> 0) & 0x01));
  mux2to1_not0 = not_gate(((sel >> 0) & 0x01));
  mux2to1_and1 = and_gate(((d0 >> 0) & 0x01), ((mux2to1_not0 >> 0) & 0x01));
  mux2to1_xor0 = xor_gate(((mux2to1_and0 >> 0) & 0x01), ((mux2to1_and1 >> 0) & 0x01));

  mux2to1_out |= ((mux2to1_xor0 >> 0) & 0x01) << 0;
  return mux2to1_out;
}

uint64_t h_u_cska32(uint64_t a, uint64_t b){
  uint64_t h_u_cska32_out = 0;
  uint8_t h_u_cska32_xor0 = 0;
  uint8_t h_u_cska32_ha0_xor0 = 0;
  uint8_t h_u_cska32_ha0_and0 = 0;
  uint8_t h_u_cska32_xor1 = 0;
  uint8_t h_u_cska32_fa0_xor1 = 0;
  uint8_t h_u_cska32_fa0_or0 = 0;
  uint8_t h_u_cska32_xor2 = 0;
  uint8_t h_u_cska32_fa1_xor1 = 0;
  uint8_t h_u_cska32_fa1_or0 = 0;
  uint8_t h_u_cska32_xor3 = 0;
  uint8_t h_u_cska32_fa2_xor1 = 0;
  uint8_t h_u_cska32_fa2_or0 = 0;
  uint8_t h_u_cska32_and_propagate00 = 0;
  uint8_t h_u_cska32_and_propagate01 = 0;
  uint8_t h_u_cska32_and_propagate02 = 0;
  uint8_t h_u_cska32_mux2to10_and1 = 0;
  uint8_t h_u_cska32_xor4 = 0;
  uint8_t h_u_cska32_fa3_xor1 = 0;
  uint8_t h_u_cska32_fa3_or0 = 0;
  uint8_t h_u_cska32_xor5 = 0;
  uint8_t h_u_cska32_fa4_xor1 = 0;
  uint8_t h_u_cska32_fa4_or0 = 0;
  uint8_t h_u_cska32_xor6 = 0;
  uint8_t h_u_cska32_fa5_xor1 = 0;
  uint8_t h_u_cska32_fa5_or0 = 0;
  uint8_t h_u_cska32_xor7 = 0;
  uint8_t h_u_cska32_fa6_xor1 = 0;
  uint8_t h_u_cska32_fa6_or0 = 0;
  uint8_t h_u_cska32_and_propagate13 = 0;
  uint8_t h_u_cska32_and_propagate14 = 0;
  uint8_t h_u_cska32_and_propagate15 = 0;
  uint8_t h_u_cska32_mux2to11_xor0 = 0;
  uint8_t h_u_cska32_xor8 = 0;
  uint8_t h_u_cska32_fa7_xor1 = 0;
  uint8_t h_u_cska32_fa7_or0 = 0;
  uint8_t h_u_cska32_xor9 = 0;
  uint8_t h_u_cska32_fa8_xor1 = 0;
  uint8_t h_u_cska32_fa8_or0 = 0;
  uint8_t h_u_cska32_xor10 = 0;
  uint8_t h_u_cska32_fa9_xor1 = 0;
  uint8_t h_u_cska32_fa9_or0 = 0;
  uint8_t h_u_cska32_xor11 = 0;
  uint8_t h_u_cska32_fa10_xor1 = 0;
  uint8_t h_u_cska32_fa10_or0 = 0;
  uint8_t h_u_cska32_and_propagate26 = 0;
  uint8_t h_u_cska32_and_propagate27 = 0;
  uint8_t h_u_cska32_and_propagate28 = 0;
  uint8_t h_u_cska32_mux2to12_xor0 = 0;
  uint8_t h_u_cska32_xor12 = 0;
  uint8_t h_u_cska32_fa11_xor1 = 0;
  uint8_t h_u_cska32_fa11_or0 = 0;
  uint8_t h_u_cska32_xor13 = 0;
  uint8_t h_u_cska32_fa12_xor1 = 0;
  uint8_t h_u_cska32_fa12_or0 = 0;
  uint8_t h_u_cska32_xor14 = 0;
  uint8_t h_u_cska32_fa13_xor1 = 0;
  uint8_t h_u_cska32_fa13_or0 = 0;
  uint8_t h_u_cska32_xor15 = 0;
  uint8_t h_u_cska32_fa14_xor1 = 0;
  uint8_t h_u_cska32_fa14_or0 = 0;
  uint8_t h_u_cska32_and_propagate39 = 0;
  uint8_t h_u_cska32_and_propagate310 = 0;
  uint8_t h_u_cska32_and_propagate311 = 0;
  uint8_t h_u_cska32_mux2to13_xor0 = 0;
  uint8_t h_u_cska32_xor16 = 0;
  uint8_t h_u_cska32_fa15_xor1 = 0;
  uint8_t h_u_cska32_fa15_or0 = 0;
  uint8_t h_u_cska32_xor17 = 0;
  uint8_t h_u_cska32_fa16_xor1 = 0;
  uint8_t h_u_cska32_fa16_or0 = 0;
  uint8_t h_u_cska32_xor18 = 0;
  uint8_t h_u_cska32_fa17_xor1 = 0;
  uint8_t h_u_cska32_fa17_or0 = 0;
  uint8_t h_u_cska32_xor19 = 0;
  uint8_t h_u_cska32_fa18_xor1 = 0;
  uint8_t h_u_cska32_fa18_or0 = 0;
  uint8_t h_u_cska32_and_propagate412 = 0;
  uint8_t h_u_cska32_and_propagate413 = 0;
  uint8_t h_u_cska32_and_propagate414 = 0;
  uint8_t h_u_cska32_mux2to14_xor0 = 0;
  uint8_t h_u_cska32_xor20 = 0;
  uint8_t h_u_cska32_fa19_xor1 = 0;
  uint8_t h_u_cska32_fa19_or0 = 0;
  uint8_t h_u_cska32_xor21 = 0;
  uint8_t h_u_cska32_fa20_xor1 = 0;
  uint8_t h_u_cska32_fa20_or0 = 0;
  uint8_t h_u_cska32_xor22 = 0;
  uint8_t h_u_cska32_fa21_xor1 = 0;
  uint8_t h_u_cska32_fa21_or0 = 0;
  uint8_t h_u_cska32_xor23 = 0;
  uint8_t h_u_cska32_fa22_xor1 = 0;
  uint8_t h_u_cska32_fa22_or0 = 0;
  uint8_t h_u_cska32_and_propagate515 = 0;
  uint8_t h_u_cska32_and_propagate516 = 0;
  uint8_t h_u_cska32_and_propagate517 = 0;
  uint8_t h_u_cska32_mux2to15_xor0 = 0;
  uint8_t h_u_cska32_xor24 = 0;
  uint8_t h_u_cska32_fa23_xor1 = 0;
  uint8_t h_u_cska32_fa23_or0 = 0;
  uint8_t h_u_cska32_xor25 = 0;
  uint8_t h_u_cska32_fa24_xor1 = 0;
  uint8_t h_u_cska32_fa24_or0 = 0;
  uint8_t h_u_cska32_xor26 = 0;
  uint8_t h_u_cska32_fa25_xor1 = 0;
  uint8_t h_u_cska32_fa25_or0 = 0;
  uint8_t h_u_cska32_xor27 = 0;
  uint8_t h_u_cska32_fa26_xor1 = 0;
  uint8_t h_u_cska32_fa26_or0 = 0;
  uint8_t h_u_cska32_and_propagate618 = 0;
  uint8_t h_u_cska32_and_propagate619 = 0;
  uint8_t h_u_cska32_and_propagate620 = 0;
  uint8_t h_u_cska32_mux2to16_xor0 = 0;
  uint8_t h_u_cska32_xor28 = 0;
  uint8_t h_u_cska32_fa27_xor1 = 0;
  uint8_t h_u_cska32_fa27_or0 = 0;
  uint8_t h_u_cska32_xor29 = 0;
  uint8_t h_u_cska32_fa28_xor1 = 0;
  uint8_t h_u_cska32_fa28_or0 = 0;
  uint8_t h_u_cska32_xor30 = 0;
  uint8_t h_u_cska32_fa29_xor1 = 0;
  uint8_t h_u_cska32_fa29_or0 = 0;
  uint8_t h_u_cska32_xor31 = 0;
  uint8_t h_u_cska32_fa30_xor1 = 0;
  uint8_t h_u_cska32_fa30_or0 = 0;
  uint8_t h_u_cska32_and_propagate721 = 0;
  uint8_t h_u_cska32_and_propagate722 = 0;
  uint8_t h_u_cska32_and_propagate723 = 0;
  uint8_t h_u_cska32_mux2to17_xor0 = 0;

  h_u_cska32_xor0 = xor_gate(((a >> 0) & 0x01), ((b >> 0) & 0x01));
  h_u_cska32_ha0_xor0 = (ha(((a >> 0) & 0x01), ((b >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_ha0_and0 = (ha(((a >> 0) & 0x01), ((b >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_xor1 = xor_gate(((a >> 1) & 0x01), ((b >> 1) & 0x01));
  h_u_cska32_fa0_xor1 = (fa(((a >> 1) & 0x01), ((b >> 1) & 0x01), ((h_u_cska32_ha0_and0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa0_or0 = (fa(((a >> 1) & 0x01), ((b >> 1) & 0x01), ((h_u_cska32_ha0_and0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_xor2 = xor_gate(((a >> 2) & 0x01), ((b >> 2) & 0x01));
  h_u_cska32_fa1_xor1 = (fa(((a >> 2) & 0x01), ((b >> 2) & 0x01), ((h_u_cska32_fa0_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa1_or0 = (fa(((a >> 2) & 0x01), ((b >> 2) & 0x01), ((h_u_cska32_fa0_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_xor3 = xor_gate(((a >> 3) & 0x01), ((b >> 3) & 0x01));
  h_u_cska32_fa2_xor1 = (fa(((a >> 3) & 0x01), ((b >> 3) & 0x01), ((h_u_cska32_fa1_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa2_or0 = (fa(((a >> 3) & 0x01), ((b >> 3) & 0x01), ((h_u_cska32_fa1_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_and_propagate00 = and_gate(((h_u_cska32_xor0 >> 0) & 0x01), ((h_u_cska32_xor2 >> 0) & 0x01));
  h_u_cska32_and_propagate01 = and_gate(((h_u_cska32_xor1 >> 0) & 0x01), ((h_u_cska32_xor3 >> 0) & 0x01));
  h_u_cska32_and_propagate02 = and_gate(((h_u_cska32_and_propagate00 >> 0) & 0x01), ((h_u_cska32_and_propagate01 >> 0) & 0x01));
  h_u_cska32_mux2to10_and1 = (mux2to1(((h_u_cska32_fa2_or0 >> 0) & 0x01), (0x00), ((h_u_cska32_and_propagate02 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_xor4 = xor_gate(((a >> 4) & 0x01), ((b >> 4) & 0x01));
  h_u_cska32_fa3_xor1 = (fa(((a >> 4) & 0x01), ((b >> 4) & 0x01), ((h_u_cska32_mux2to10_and1 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa3_or0 = (fa(((a >> 4) & 0x01), ((b >> 4) & 0x01), ((h_u_cska32_mux2to10_and1 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_xor5 = xor_gate(((a >> 5) & 0x01), ((b >> 5) & 0x01));
  h_u_cska32_fa4_xor1 = (fa(((a >> 5) & 0x01), ((b >> 5) & 0x01), ((h_u_cska32_fa3_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa4_or0 = (fa(((a >> 5) & 0x01), ((b >> 5) & 0x01), ((h_u_cska32_fa3_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_xor6 = xor_gate(((a >> 6) & 0x01), ((b >> 6) & 0x01));
  h_u_cska32_fa5_xor1 = (fa(((a >> 6) & 0x01), ((b >> 6) & 0x01), ((h_u_cska32_fa4_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa5_or0 = (fa(((a >> 6) & 0x01), ((b >> 6) & 0x01), ((h_u_cska32_fa4_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_xor7 = xor_gate(((a >> 7) & 0x01), ((b >> 7) & 0x01));
  h_u_cska32_fa6_xor1 = (fa(((a >> 7) & 0x01), ((b >> 7) & 0x01), ((h_u_cska32_fa5_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa6_or0 = (fa(((a >> 7) & 0x01), ((b >> 7) & 0x01), ((h_u_cska32_fa5_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_and_propagate13 = and_gate(((h_u_cska32_xor4 >> 0) & 0x01), ((h_u_cska32_xor6 >> 0) & 0x01));
  h_u_cska32_and_propagate14 = and_gate(((h_u_cska32_xor5 >> 0) & 0x01), ((h_u_cska32_xor7 >> 0) & 0x01));
  h_u_cska32_and_propagate15 = and_gate(((h_u_cska32_and_propagate13 >> 0) & 0x01), ((h_u_cska32_and_propagate14 >> 0) & 0x01));
  h_u_cska32_mux2to11_xor0 = (mux2to1(((h_u_cska32_fa6_or0 >> 0) & 0x01), ((h_u_cska32_mux2to10_and1 >> 0) & 0x01), ((h_u_cska32_and_propagate15 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_xor8 = xor_gate(((a >> 8) & 0x01), ((b >> 8) & 0x01));
  h_u_cska32_fa7_xor1 = (fa(((a >> 8) & 0x01), ((b >> 8) & 0x01), ((h_u_cska32_mux2to11_xor0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa7_or0 = (fa(((a >> 8) & 0x01), ((b >> 8) & 0x01), ((h_u_cska32_mux2to11_xor0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_xor9 = xor_gate(((a >> 9) & 0x01), ((b >> 9) & 0x01));
  h_u_cska32_fa8_xor1 = (fa(((a >> 9) & 0x01), ((b >> 9) & 0x01), ((h_u_cska32_fa7_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa8_or0 = (fa(((a >> 9) & 0x01), ((b >> 9) & 0x01), ((h_u_cska32_fa7_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_xor10 = xor_gate(((a >> 10) & 0x01), ((b >> 10) & 0x01));
  h_u_cska32_fa9_xor1 = (fa(((a >> 10) & 0x01), ((b >> 10) & 0x01), ((h_u_cska32_fa8_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa9_or0 = (fa(((a >> 10) & 0x01), ((b >> 10) & 0x01), ((h_u_cska32_fa8_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_xor11 = xor_gate(((a >> 11) & 0x01), ((b >> 11) & 0x01));
  h_u_cska32_fa10_xor1 = (fa(((a >> 11) & 0x01), ((b >> 11) & 0x01), ((h_u_cska32_fa9_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa10_or0 = (fa(((a >> 11) & 0x01), ((b >> 11) & 0x01), ((h_u_cska32_fa9_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_and_propagate26 = and_gate(((h_u_cska32_xor8 >> 0) & 0x01), ((h_u_cska32_xor10 >> 0) & 0x01));
  h_u_cska32_and_propagate27 = and_gate(((h_u_cska32_xor9 >> 0) & 0x01), ((h_u_cska32_xor11 >> 0) & 0x01));
  h_u_cska32_and_propagate28 = and_gate(((h_u_cska32_and_propagate26 >> 0) & 0x01), ((h_u_cska32_and_propagate27 >> 0) & 0x01));
  h_u_cska32_mux2to12_xor0 = (mux2to1(((h_u_cska32_fa10_or0 >> 0) & 0x01), ((h_u_cska32_mux2to11_xor0 >> 0) & 0x01), ((h_u_cska32_and_propagate28 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_xor12 = xor_gate(((a >> 12) & 0x01), ((b >> 12) & 0x01));
  h_u_cska32_fa11_xor1 = (fa(((a >> 12) & 0x01), ((b >> 12) & 0x01), ((h_u_cska32_mux2to12_xor0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa11_or0 = (fa(((a >> 12) & 0x01), ((b >> 12) & 0x01), ((h_u_cska32_mux2to12_xor0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_xor13 = xor_gate(((a >> 13) & 0x01), ((b >> 13) & 0x01));
  h_u_cska32_fa12_xor1 = (fa(((a >> 13) & 0x01), ((b >> 13) & 0x01), ((h_u_cska32_fa11_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa12_or0 = (fa(((a >> 13) & 0x01), ((b >> 13) & 0x01), ((h_u_cska32_fa11_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_xor14 = xor_gate(((a >> 14) & 0x01), ((b >> 14) & 0x01));
  h_u_cska32_fa13_xor1 = (fa(((a >> 14) & 0x01), ((b >> 14) & 0x01), ((h_u_cska32_fa12_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa13_or0 = (fa(((a >> 14) & 0x01), ((b >> 14) & 0x01), ((h_u_cska32_fa12_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_xor15 = xor_gate(((a >> 15) & 0x01), ((b >> 15) & 0x01));
  h_u_cska32_fa14_xor1 = (fa(((a >> 15) & 0x01), ((b >> 15) & 0x01), ((h_u_cska32_fa13_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa14_or0 = (fa(((a >> 15) & 0x01), ((b >> 15) & 0x01), ((h_u_cska32_fa13_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_and_propagate39 = and_gate(((h_u_cska32_xor12 >> 0) & 0x01), ((h_u_cska32_xor14 >> 0) & 0x01));
  h_u_cska32_and_propagate310 = and_gate(((h_u_cska32_xor13 >> 0) & 0x01), ((h_u_cska32_xor15 >> 0) & 0x01));
  h_u_cska32_and_propagate311 = and_gate(((h_u_cska32_and_propagate39 >> 0) & 0x01), ((h_u_cska32_and_propagate310 >> 0) & 0x01));
  h_u_cska32_mux2to13_xor0 = (mux2to1(((h_u_cska32_fa14_or0 >> 0) & 0x01), ((h_u_cska32_mux2to12_xor0 >> 0) & 0x01), ((h_u_cska32_and_propagate311 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_xor16 = xor_gate(((a >> 16) & 0x01), ((b >> 16) & 0x01));
  h_u_cska32_fa15_xor1 = (fa(((a >> 16) & 0x01), ((b >> 16) & 0x01), ((h_u_cska32_mux2to13_xor0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa15_or0 = (fa(((a >> 16) & 0x01), ((b >> 16) & 0x01), ((h_u_cska32_mux2to13_xor0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_xor17 = xor_gate(((a >> 17) & 0x01), ((b >> 17) & 0x01));
  h_u_cska32_fa16_xor1 = (fa(((a >> 17) & 0x01), ((b >> 17) & 0x01), ((h_u_cska32_fa15_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa16_or0 = (fa(((a >> 17) & 0x01), ((b >> 17) & 0x01), ((h_u_cska32_fa15_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_xor18 = xor_gate(((a >> 18) & 0x01), ((b >> 18) & 0x01));
  h_u_cska32_fa17_xor1 = (fa(((a >> 18) & 0x01), ((b >> 18) & 0x01), ((h_u_cska32_fa16_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa17_or0 = (fa(((a >> 18) & 0x01), ((b >> 18) & 0x01), ((h_u_cska32_fa16_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_xor19 = xor_gate(((a >> 19) & 0x01), ((b >> 19) & 0x01));
  h_u_cska32_fa18_xor1 = (fa(((a >> 19) & 0x01), ((b >> 19) & 0x01), ((h_u_cska32_fa17_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa18_or0 = (fa(((a >> 19) & 0x01), ((b >> 19) & 0x01), ((h_u_cska32_fa17_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_and_propagate412 = and_gate(((h_u_cska32_xor16 >> 0) & 0x01), ((h_u_cska32_xor18 >> 0) & 0x01));
  h_u_cska32_and_propagate413 = and_gate(((h_u_cska32_xor17 >> 0) & 0x01), ((h_u_cska32_xor19 >> 0) & 0x01));
  h_u_cska32_and_propagate414 = and_gate(((h_u_cska32_and_propagate412 >> 0) & 0x01), ((h_u_cska32_and_propagate413 >> 0) & 0x01));
  h_u_cska32_mux2to14_xor0 = (mux2to1(((h_u_cska32_fa18_or0 >> 0) & 0x01), ((h_u_cska32_mux2to13_xor0 >> 0) & 0x01), ((h_u_cska32_and_propagate414 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_xor20 = xor_gate(((a >> 20) & 0x01), ((b >> 20) & 0x01));
  h_u_cska32_fa19_xor1 = (fa(((a >> 20) & 0x01), ((b >> 20) & 0x01), ((h_u_cska32_mux2to14_xor0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa19_or0 = (fa(((a >> 20) & 0x01), ((b >> 20) & 0x01), ((h_u_cska32_mux2to14_xor0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_xor21 = xor_gate(((a >> 21) & 0x01), ((b >> 21) & 0x01));
  h_u_cska32_fa20_xor1 = (fa(((a >> 21) & 0x01), ((b >> 21) & 0x01), ((h_u_cska32_fa19_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa20_or0 = (fa(((a >> 21) & 0x01), ((b >> 21) & 0x01), ((h_u_cska32_fa19_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_xor22 = xor_gate(((a >> 22) & 0x01), ((b >> 22) & 0x01));
  h_u_cska32_fa21_xor1 = (fa(((a >> 22) & 0x01), ((b >> 22) & 0x01), ((h_u_cska32_fa20_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa21_or0 = (fa(((a >> 22) & 0x01), ((b >> 22) & 0x01), ((h_u_cska32_fa20_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_xor23 = xor_gate(((a >> 23) & 0x01), ((b >> 23) & 0x01));
  h_u_cska32_fa22_xor1 = (fa(((a >> 23) & 0x01), ((b >> 23) & 0x01), ((h_u_cska32_fa21_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa22_or0 = (fa(((a >> 23) & 0x01), ((b >> 23) & 0x01), ((h_u_cska32_fa21_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_and_propagate515 = and_gate(((h_u_cska32_xor20 >> 0) & 0x01), ((h_u_cska32_xor22 >> 0) & 0x01));
  h_u_cska32_and_propagate516 = and_gate(((h_u_cska32_xor21 >> 0) & 0x01), ((h_u_cska32_xor23 >> 0) & 0x01));
  h_u_cska32_and_propagate517 = and_gate(((h_u_cska32_and_propagate515 >> 0) & 0x01), ((h_u_cska32_and_propagate516 >> 0) & 0x01));
  h_u_cska32_mux2to15_xor0 = (mux2to1(((h_u_cska32_fa22_or0 >> 0) & 0x01), ((h_u_cska32_mux2to14_xor0 >> 0) & 0x01), ((h_u_cska32_and_propagate517 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_xor24 = xor_gate(((a >> 24) & 0x01), ((b >> 24) & 0x01));
  h_u_cska32_fa23_xor1 = (fa(((a >> 24) & 0x01), ((b >> 24) & 0x01), ((h_u_cska32_mux2to15_xor0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa23_or0 = (fa(((a >> 24) & 0x01), ((b >> 24) & 0x01), ((h_u_cska32_mux2to15_xor0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_xor25 = xor_gate(((a >> 25) & 0x01), ((b >> 25) & 0x01));
  h_u_cska32_fa24_xor1 = (fa(((a >> 25) & 0x01), ((b >> 25) & 0x01), ((h_u_cska32_fa23_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa24_or0 = (fa(((a >> 25) & 0x01), ((b >> 25) & 0x01), ((h_u_cska32_fa23_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_xor26 = xor_gate(((a >> 26) & 0x01), ((b >> 26) & 0x01));
  h_u_cska32_fa25_xor1 = (fa(((a >> 26) & 0x01), ((b >> 26) & 0x01), ((h_u_cska32_fa24_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa25_or0 = (fa(((a >> 26) & 0x01), ((b >> 26) & 0x01), ((h_u_cska32_fa24_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_xor27 = xor_gate(((a >> 27) & 0x01), ((b >> 27) & 0x01));
  h_u_cska32_fa26_xor1 = (fa(((a >> 27) & 0x01), ((b >> 27) & 0x01), ((h_u_cska32_fa25_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa26_or0 = (fa(((a >> 27) & 0x01), ((b >> 27) & 0x01), ((h_u_cska32_fa25_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_and_propagate618 = and_gate(((h_u_cska32_xor24 >> 0) & 0x01), ((h_u_cska32_xor26 >> 0) & 0x01));
  h_u_cska32_and_propagate619 = and_gate(((h_u_cska32_xor25 >> 0) & 0x01), ((h_u_cska32_xor27 >> 0) & 0x01));
  h_u_cska32_and_propagate620 = and_gate(((h_u_cska32_and_propagate618 >> 0) & 0x01), ((h_u_cska32_and_propagate619 >> 0) & 0x01));
  h_u_cska32_mux2to16_xor0 = (mux2to1(((h_u_cska32_fa26_or0 >> 0) & 0x01), ((h_u_cska32_mux2to15_xor0 >> 0) & 0x01), ((h_u_cska32_and_propagate620 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_xor28 = xor_gate(((a >> 28) & 0x01), ((b >> 28) & 0x01));
  h_u_cska32_fa27_xor1 = (fa(((a >> 28) & 0x01), ((b >> 28) & 0x01), ((h_u_cska32_mux2to16_xor0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa27_or0 = (fa(((a >> 28) & 0x01), ((b >> 28) & 0x01), ((h_u_cska32_mux2to16_xor0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_xor29 = xor_gate(((a >> 29) & 0x01), ((b >> 29) & 0x01));
  h_u_cska32_fa28_xor1 = (fa(((a >> 29) & 0x01), ((b >> 29) & 0x01), ((h_u_cska32_fa27_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa28_or0 = (fa(((a >> 29) & 0x01), ((b >> 29) & 0x01), ((h_u_cska32_fa27_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_xor30 = xor_gate(((a >> 30) & 0x01), ((b >> 30) & 0x01));
  h_u_cska32_fa29_xor1 = (fa(((a >> 30) & 0x01), ((b >> 30) & 0x01), ((h_u_cska32_fa28_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa29_or0 = (fa(((a >> 30) & 0x01), ((b >> 30) & 0x01), ((h_u_cska32_fa28_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_xor31 = xor_gate(((a >> 31) & 0x01), ((b >> 31) & 0x01));
  h_u_cska32_fa30_xor1 = (fa(((a >> 31) & 0x01), ((b >> 31) & 0x01), ((h_u_cska32_fa29_or0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_cska32_fa30_or0 = (fa(((a >> 31) & 0x01), ((b >> 31) & 0x01), ((h_u_cska32_fa29_or0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_cska32_and_propagate721 = and_gate(((h_u_cska32_xor28 >> 0) & 0x01), ((h_u_cska32_xor30 >> 0) & 0x01));
  h_u_cska32_and_propagate722 = and_gate(((h_u_cska32_xor29 >> 0) & 0x01), ((h_u_cska32_xor31 >> 0) & 0x01));
  h_u_cska32_and_propagate723 = and_gate(((h_u_cska32_and_propagate721 >> 0) & 0x01), ((h_u_cska32_and_propagate722 >> 0) & 0x01));
  h_u_cska32_mux2to17_xor0 = (mux2to1(((h_u_cska32_fa30_or0 >> 0) & 0x01), ((h_u_cska32_mux2to16_xor0 >> 0) & 0x01), ((h_u_cska32_and_propagate723 >> 0) & 0x01)) >> 0) & 0x01;

  h_u_cska32_out |= ((h_u_cska32_ha0_xor0 >> 0) & 0x01) << 0;
  h_u_cska32_out |= ((h_u_cska32_fa0_xor1 >> 0) & 0x01) << 1;
  h_u_cska32_out |= ((h_u_cska32_fa1_xor1 >> 0) & 0x01) << 2;
  h_u_cska32_out |= ((h_u_cska32_fa2_xor1 >> 0) & 0x01) << 3;
  h_u_cska32_out |= ((h_u_cska32_fa3_xor1 >> 0) & 0x01) << 4;
  h_u_cska32_out |= ((h_u_cska32_fa4_xor1 >> 0) & 0x01) << 5;
  h_u_cska32_out |= ((h_u_cska32_fa5_xor1 >> 0) & 0x01) << 6;
  h_u_cska32_out |= ((h_u_cska32_fa6_xor1 >> 0) & 0x01) << 7;
  h_u_cska32_out |= ((h_u_cska32_fa7_xor1 >> 0) & 0x01) << 8;
  h_u_cska32_out |= ((h_u_cska32_fa8_xor1 >> 0) & 0x01) << 9;
  h_u_cska32_out |= ((h_u_cska32_fa9_xor1 >> 0) & 0x01) << 10;
  h_u_cska32_out |= ((h_u_cska32_fa10_xor1 >> 0) & 0x01) << 11;
  h_u_cska32_out |= ((h_u_cska32_fa11_xor1 >> 0) & 0x01) << 12;
  h_u_cska32_out |= ((h_u_cska32_fa12_xor1 >> 0) & 0x01) << 13;
  h_u_cska32_out |= ((h_u_cska32_fa13_xor1 >> 0) & 0x01) << 14;
  h_u_cska32_out |= ((h_u_cska32_fa14_xor1 >> 0) & 0x01) << 15;
  h_u_cska32_out |= ((h_u_cska32_fa15_xor1 >> 0) & 0x01) << 16;
  h_u_cska32_out |= ((h_u_cska32_fa16_xor1 >> 0) & 0x01) << 17;
  h_u_cska32_out |= ((h_u_cska32_fa17_xor1 >> 0) & 0x01) << 18;
  h_u_cska32_out |= ((h_u_cska32_fa18_xor1 >> 0) & 0x01) << 19;
  h_u_cska32_out |= ((h_u_cska32_fa19_xor1 >> 0) & 0x01) << 20;
  h_u_cska32_out |= ((h_u_cska32_fa20_xor1 >> 0) & 0x01) << 21;
  h_u_cska32_out |= ((h_u_cska32_fa21_xor1 >> 0) & 0x01) << 22;
  h_u_cska32_out |= ((h_u_cska32_fa22_xor1 >> 0) & 0x01) << 23;
  h_u_cska32_out |= ((h_u_cska32_fa23_xor1 >> 0) & 0x01) << 24;
  h_u_cska32_out |= ((h_u_cska32_fa24_xor1 >> 0) & 0x01) << 25;
  h_u_cska32_out |= ((h_u_cska32_fa25_xor1 >> 0) & 0x01) << 26;
  h_u_cska32_out |= ((h_u_cska32_fa26_xor1 >> 0) & 0x01) << 27;
  h_u_cska32_out |= ((h_u_cska32_fa27_xor1 >> 0) & 0x01) << 28;
  h_u_cska32_out |= ((h_u_cska32_fa28_xor1 >> 0) & 0x01) << 29;
  h_u_cska32_out |= ((h_u_cska32_fa29_xor1 >> 0) & 0x01) << 30;
  h_u_cska32_out |= ((h_u_cska32_fa30_xor1 >> 0) & 0x01) << 31;
  h_u_cska32_out |= ((h_u_cska32_mux2to17_xor0 >> 0) & 0x01) << 32;
  return h_u_cska32_out;
}
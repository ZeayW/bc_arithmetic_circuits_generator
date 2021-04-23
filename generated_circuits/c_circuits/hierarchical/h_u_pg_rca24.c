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

uint8_t pg_fa(uint8_t a, uint8_t b, uint8_t cin){
  uint8_t pg_fa_out = 0;
  uint8_t pg_fa_xor0 = 0;
  uint8_t pg_fa_and0 = 0;
  uint8_t pg_fa_xor1 = 0;

  pg_fa_xor0 = xor_gate(((a >> 0) & 0x01), ((b >> 0) & 0x01));
  pg_fa_and0 = and_gate(((a >> 0) & 0x01), ((b >> 0) & 0x01));
  pg_fa_xor1 = xor_gate(((pg_fa_xor0 >> 0) & 0x01), ((cin >> 0) & 0x01));

  pg_fa_out |= ((pg_fa_xor0 >> 0) & 0x01) << 0;
  pg_fa_out |= ((pg_fa_and0 >> 0) & 0x01) << 1;
  pg_fa_out |= ((pg_fa_xor1 >> 0) & 0x01) << 2;
  return pg_fa_out;
}

uint64_t h_u_pg_rca24(uint64_t a, uint64_t b){
  uint64_t h_u_pg_rca24_out = 0;
  uint8_t h_u_pg_rca24_pg_fa0_xor0 = 0;
  uint8_t h_u_pg_rca24_pg_fa0_and0 = 0;
  uint8_t h_u_pg_rca24_pg_fa1_xor0 = 0;
  uint8_t h_u_pg_rca24_pg_fa1_and0 = 0;
  uint8_t h_u_pg_rca24_pg_fa1_xor1 = 0;
  uint8_t h_u_pg_rca24_and1 = 0;
  uint8_t h_u_pg_rca24_or1 = 0;
  uint8_t h_u_pg_rca24_pg_fa2_xor0 = 0;
  uint8_t h_u_pg_rca24_pg_fa2_and0 = 0;
  uint8_t h_u_pg_rca24_pg_fa2_xor1 = 0;
  uint8_t h_u_pg_rca24_and2 = 0;
  uint8_t h_u_pg_rca24_or2 = 0;
  uint8_t h_u_pg_rca24_pg_fa3_xor0 = 0;
  uint8_t h_u_pg_rca24_pg_fa3_and0 = 0;
  uint8_t h_u_pg_rca24_pg_fa3_xor1 = 0;
  uint8_t h_u_pg_rca24_and3 = 0;
  uint8_t h_u_pg_rca24_or3 = 0;
  uint8_t h_u_pg_rca24_pg_fa4_xor0 = 0;
  uint8_t h_u_pg_rca24_pg_fa4_and0 = 0;
  uint8_t h_u_pg_rca24_pg_fa4_xor1 = 0;
  uint8_t h_u_pg_rca24_and4 = 0;
  uint8_t h_u_pg_rca24_or4 = 0;
  uint8_t h_u_pg_rca24_pg_fa5_xor0 = 0;
  uint8_t h_u_pg_rca24_pg_fa5_and0 = 0;
  uint8_t h_u_pg_rca24_pg_fa5_xor1 = 0;
  uint8_t h_u_pg_rca24_and5 = 0;
  uint8_t h_u_pg_rca24_or5 = 0;
  uint8_t h_u_pg_rca24_pg_fa6_xor0 = 0;
  uint8_t h_u_pg_rca24_pg_fa6_and0 = 0;
  uint8_t h_u_pg_rca24_pg_fa6_xor1 = 0;
  uint8_t h_u_pg_rca24_and6 = 0;
  uint8_t h_u_pg_rca24_or6 = 0;
  uint8_t h_u_pg_rca24_pg_fa7_xor0 = 0;
  uint8_t h_u_pg_rca24_pg_fa7_and0 = 0;
  uint8_t h_u_pg_rca24_pg_fa7_xor1 = 0;
  uint8_t h_u_pg_rca24_and7 = 0;
  uint8_t h_u_pg_rca24_or7 = 0;
  uint8_t h_u_pg_rca24_pg_fa8_xor0 = 0;
  uint8_t h_u_pg_rca24_pg_fa8_and0 = 0;
  uint8_t h_u_pg_rca24_pg_fa8_xor1 = 0;
  uint8_t h_u_pg_rca24_and8 = 0;
  uint8_t h_u_pg_rca24_or8 = 0;
  uint8_t h_u_pg_rca24_pg_fa9_xor0 = 0;
  uint8_t h_u_pg_rca24_pg_fa9_and0 = 0;
  uint8_t h_u_pg_rca24_pg_fa9_xor1 = 0;
  uint8_t h_u_pg_rca24_and9 = 0;
  uint8_t h_u_pg_rca24_or9 = 0;
  uint8_t h_u_pg_rca24_pg_fa10_xor0 = 0;
  uint8_t h_u_pg_rca24_pg_fa10_and0 = 0;
  uint8_t h_u_pg_rca24_pg_fa10_xor1 = 0;
  uint8_t h_u_pg_rca24_and10 = 0;
  uint8_t h_u_pg_rca24_or10 = 0;
  uint8_t h_u_pg_rca24_pg_fa11_xor0 = 0;
  uint8_t h_u_pg_rca24_pg_fa11_and0 = 0;
  uint8_t h_u_pg_rca24_pg_fa11_xor1 = 0;
  uint8_t h_u_pg_rca24_and11 = 0;
  uint8_t h_u_pg_rca24_or11 = 0;
  uint8_t h_u_pg_rca24_pg_fa12_xor0 = 0;
  uint8_t h_u_pg_rca24_pg_fa12_and0 = 0;
  uint8_t h_u_pg_rca24_pg_fa12_xor1 = 0;
  uint8_t h_u_pg_rca24_and12 = 0;
  uint8_t h_u_pg_rca24_or12 = 0;
  uint8_t h_u_pg_rca24_pg_fa13_xor0 = 0;
  uint8_t h_u_pg_rca24_pg_fa13_and0 = 0;
  uint8_t h_u_pg_rca24_pg_fa13_xor1 = 0;
  uint8_t h_u_pg_rca24_and13 = 0;
  uint8_t h_u_pg_rca24_or13 = 0;
  uint8_t h_u_pg_rca24_pg_fa14_xor0 = 0;
  uint8_t h_u_pg_rca24_pg_fa14_and0 = 0;
  uint8_t h_u_pg_rca24_pg_fa14_xor1 = 0;
  uint8_t h_u_pg_rca24_and14 = 0;
  uint8_t h_u_pg_rca24_or14 = 0;
  uint8_t h_u_pg_rca24_pg_fa15_xor0 = 0;
  uint8_t h_u_pg_rca24_pg_fa15_and0 = 0;
  uint8_t h_u_pg_rca24_pg_fa15_xor1 = 0;
  uint8_t h_u_pg_rca24_and15 = 0;
  uint8_t h_u_pg_rca24_or15 = 0;
  uint8_t h_u_pg_rca24_pg_fa16_xor0 = 0;
  uint8_t h_u_pg_rca24_pg_fa16_and0 = 0;
  uint8_t h_u_pg_rca24_pg_fa16_xor1 = 0;
  uint8_t h_u_pg_rca24_and16 = 0;
  uint8_t h_u_pg_rca24_or16 = 0;
  uint8_t h_u_pg_rca24_pg_fa17_xor0 = 0;
  uint8_t h_u_pg_rca24_pg_fa17_and0 = 0;
  uint8_t h_u_pg_rca24_pg_fa17_xor1 = 0;
  uint8_t h_u_pg_rca24_and17 = 0;
  uint8_t h_u_pg_rca24_or17 = 0;
  uint8_t h_u_pg_rca24_pg_fa18_xor0 = 0;
  uint8_t h_u_pg_rca24_pg_fa18_and0 = 0;
  uint8_t h_u_pg_rca24_pg_fa18_xor1 = 0;
  uint8_t h_u_pg_rca24_and18 = 0;
  uint8_t h_u_pg_rca24_or18 = 0;
  uint8_t h_u_pg_rca24_pg_fa19_xor0 = 0;
  uint8_t h_u_pg_rca24_pg_fa19_and0 = 0;
  uint8_t h_u_pg_rca24_pg_fa19_xor1 = 0;
  uint8_t h_u_pg_rca24_and19 = 0;
  uint8_t h_u_pg_rca24_or19 = 0;
  uint8_t h_u_pg_rca24_pg_fa20_xor0 = 0;
  uint8_t h_u_pg_rca24_pg_fa20_and0 = 0;
  uint8_t h_u_pg_rca24_pg_fa20_xor1 = 0;
  uint8_t h_u_pg_rca24_and20 = 0;
  uint8_t h_u_pg_rca24_or20 = 0;
  uint8_t h_u_pg_rca24_pg_fa21_xor0 = 0;
  uint8_t h_u_pg_rca24_pg_fa21_and0 = 0;
  uint8_t h_u_pg_rca24_pg_fa21_xor1 = 0;
  uint8_t h_u_pg_rca24_and21 = 0;
  uint8_t h_u_pg_rca24_or21 = 0;
  uint8_t h_u_pg_rca24_pg_fa22_xor0 = 0;
  uint8_t h_u_pg_rca24_pg_fa22_and0 = 0;
  uint8_t h_u_pg_rca24_pg_fa22_xor1 = 0;
  uint8_t h_u_pg_rca24_and22 = 0;
  uint8_t h_u_pg_rca24_or22 = 0;
  uint8_t h_u_pg_rca24_pg_fa23_xor0 = 0;
  uint8_t h_u_pg_rca24_pg_fa23_and0 = 0;
  uint8_t h_u_pg_rca24_pg_fa23_xor1 = 0;
  uint8_t h_u_pg_rca24_and23 = 0;
  uint8_t h_u_pg_rca24_or23 = 0;

  h_u_pg_rca24_pg_fa0_xor0 = (pg_fa(((a >> 0) & 0x01), ((b >> 0) & 0x01), (0x00)) >> 0) & 0x01;
  h_u_pg_rca24_pg_fa0_and0 = (pg_fa(((a >> 0) & 0x01), ((b >> 0) & 0x01), (0x00)) >> 1) & 0x01;
  h_u_pg_rca24_pg_fa1_xor0 = (pg_fa(((a >> 1) & 0x01), ((b >> 1) & 0x01), ((h_u_pg_rca24_pg_fa0_and0 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_pg_rca24_pg_fa1_and0 = (pg_fa(((a >> 1) & 0x01), ((b >> 1) & 0x01), ((h_u_pg_rca24_pg_fa0_and0 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_pg_rca24_pg_fa1_xor1 = (pg_fa(((a >> 1) & 0x01), ((b >> 1) & 0x01), ((h_u_pg_rca24_pg_fa0_and0 >> 0) & 0x01)) >> 2) & 0x01;
  h_u_pg_rca24_and1 = and_gate(((h_u_pg_rca24_pg_fa0_and0 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa1_xor0 >> 0) & 0x01));
  h_u_pg_rca24_or1 = or_gate(((h_u_pg_rca24_and1 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa1_and0 >> 0) & 0x01));
  h_u_pg_rca24_pg_fa2_xor0 = (pg_fa(((a >> 2) & 0x01), ((b >> 2) & 0x01), ((h_u_pg_rca24_or1 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_pg_rca24_pg_fa2_and0 = (pg_fa(((a >> 2) & 0x01), ((b >> 2) & 0x01), ((h_u_pg_rca24_or1 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_pg_rca24_pg_fa2_xor1 = (pg_fa(((a >> 2) & 0x01), ((b >> 2) & 0x01), ((h_u_pg_rca24_or1 >> 0) & 0x01)) >> 2) & 0x01;
  h_u_pg_rca24_and2 = and_gate(((h_u_pg_rca24_or1 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa2_xor0 >> 0) & 0x01));
  h_u_pg_rca24_or2 = or_gate(((h_u_pg_rca24_and2 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa2_and0 >> 0) & 0x01));
  h_u_pg_rca24_pg_fa3_xor0 = (pg_fa(((a >> 3) & 0x01), ((b >> 3) & 0x01), ((h_u_pg_rca24_or2 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_pg_rca24_pg_fa3_and0 = (pg_fa(((a >> 3) & 0x01), ((b >> 3) & 0x01), ((h_u_pg_rca24_or2 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_pg_rca24_pg_fa3_xor1 = (pg_fa(((a >> 3) & 0x01), ((b >> 3) & 0x01), ((h_u_pg_rca24_or2 >> 0) & 0x01)) >> 2) & 0x01;
  h_u_pg_rca24_and3 = and_gate(((h_u_pg_rca24_or2 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa3_xor0 >> 0) & 0x01));
  h_u_pg_rca24_or3 = or_gate(((h_u_pg_rca24_and3 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa3_and0 >> 0) & 0x01));
  h_u_pg_rca24_pg_fa4_xor0 = (pg_fa(((a >> 4) & 0x01), ((b >> 4) & 0x01), ((h_u_pg_rca24_or3 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_pg_rca24_pg_fa4_and0 = (pg_fa(((a >> 4) & 0x01), ((b >> 4) & 0x01), ((h_u_pg_rca24_or3 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_pg_rca24_pg_fa4_xor1 = (pg_fa(((a >> 4) & 0x01), ((b >> 4) & 0x01), ((h_u_pg_rca24_or3 >> 0) & 0x01)) >> 2) & 0x01;
  h_u_pg_rca24_and4 = and_gate(((h_u_pg_rca24_or3 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa4_xor0 >> 0) & 0x01));
  h_u_pg_rca24_or4 = or_gate(((h_u_pg_rca24_and4 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa4_and0 >> 0) & 0x01));
  h_u_pg_rca24_pg_fa5_xor0 = (pg_fa(((a >> 5) & 0x01), ((b >> 5) & 0x01), ((h_u_pg_rca24_or4 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_pg_rca24_pg_fa5_and0 = (pg_fa(((a >> 5) & 0x01), ((b >> 5) & 0x01), ((h_u_pg_rca24_or4 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_pg_rca24_pg_fa5_xor1 = (pg_fa(((a >> 5) & 0x01), ((b >> 5) & 0x01), ((h_u_pg_rca24_or4 >> 0) & 0x01)) >> 2) & 0x01;
  h_u_pg_rca24_and5 = and_gate(((h_u_pg_rca24_or4 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa5_xor0 >> 0) & 0x01));
  h_u_pg_rca24_or5 = or_gate(((h_u_pg_rca24_and5 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa5_and0 >> 0) & 0x01));
  h_u_pg_rca24_pg_fa6_xor0 = (pg_fa(((a >> 6) & 0x01), ((b >> 6) & 0x01), ((h_u_pg_rca24_or5 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_pg_rca24_pg_fa6_and0 = (pg_fa(((a >> 6) & 0x01), ((b >> 6) & 0x01), ((h_u_pg_rca24_or5 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_pg_rca24_pg_fa6_xor1 = (pg_fa(((a >> 6) & 0x01), ((b >> 6) & 0x01), ((h_u_pg_rca24_or5 >> 0) & 0x01)) >> 2) & 0x01;
  h_u_pg_rca24_and6 = and_gate(((h_u_pg_rca24_or5 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa6_xor0 >> 0) & 0x01));
  h_u_pg_rca24_or6 = or_gate(((h_u_pg_rca24_and6 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa6_and0 >> 0) & 0x01));
  h_u_pg_rca24_pg_fa7_xor0 = (pg_fa(((a >> 7) & 0x01), ((b >> 7) & 0x01), ((h_u_pg_rca24_or6 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_pg_rca24_pg_fa7_and0 = (pg_fa(((a >> 7) & 0x01), ((b >> 7) & 0x01), ((h_u_pg_rca24_or6 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_pg_rca24_pg_fa7_xor1 = (pg_fa(((a >> 7) & 0x01), ((b >> 7) & 0x01), ((h_u_pg_rca24_or6 >> 0) & 0x01)) >> 2) & 0x01;
  h_u_pg_rca24_and7 = and_gate(((h_u_pg_rca24_or6 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa7_xor0 >> 0) & 0x01));
  h_u_pg_rca24_or7 = or_gate(((h_u_pg_rca24_and7 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa7_and0 >> 0) & 0x01));
  h_u_pg_rca24_pg_fa8_xor0 = (pg_fa(((a >> 8) & 0x01), ((b >> 8) & 0x01), ((h_u_pg_rca24_or7 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_pg_rca24_pg_fa8_and0 = (pg_fa(((a >> 8) & 0x01), ((b >> 8) & 0x01), ((h_u_pg_rca24_or7 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_pg_rca24_pg_fa8_xor1 = (pg_fa(((a >> 8) & 0x01), ((b >> 8) & 0x01), ((h_u_pg_rca24_or7 >> 0) & 0x01)) >> 2) & 0x01;
  h_u_pg_rca24_and8 = and_gate(((h_u_pg_rca24_or7 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa8_xor0 >> 0) & 0x01));
  h_u_pg_rca24_or8 = or_gate(((h_u_pg_rca24_and8 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa8_and0 >> 0) & 0x01));
  h_u_pg_rca24_pg_fa9_xor0 = (pg_fa(((a >> 9) & 0x01), ((b >> 9) & 0x01), ((h_u_pg_rca24_or8 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_pg_rca24_pg_fa9_and0 = (pg_fa(((a >> 9) & 0x01), ((b >> 9) & 0x01), ((h_u_pg_rca24_or8 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_pg_rca24_pg_fa9_xor1 = (pg_fa(((a >> 9) & 0x01), ((b >> 9) & 0x01), ((h_u_pg_rca24_or8 >> 0) & 0x01)) >> 2) & 0x01;
  h_u_pg_rca24_and9 = and_gate(((h_u_pg_rca24_or8 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa9_xor0 >> 0) & 0x01));
  h_u_pg_rca24_or9 = or_gate(((h_u_pg_rca24_and9 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa9_and0 >> 0) & 0x01));
  h_u_pg_rca24_pg_fa10_xor0 = (pg_fa(((a >> 10) & 0x01), ((b >> 10) & 0x01), ((h_u_pg_rca24_or9 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_pg_rca24_pg_fa10_and0 = (pg_fa(((a >> 10) & 0x01), ((b >> 10) & 0x01), ((h_u_pg_rca24_or9 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_pg_rca24_pg_fa10_xor1 = (pg_fa(((a >> 10) & 0x01), ((b >> 10) & 0x01), ((h_u_pg_rca24_or9 >> 0) & 0x01)) >> 2) & 0x01;
  h_u_pg_rca24_and10 = and_gate(((h_u_pg_rca24_or9 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa10_xor0 >> 0) & 0x01));
  h_u_pg_rca24_or10 = or_gate(((h_u_pg_rca24_and10 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa10_and0 >> 0) & 0x01));
  h_u_pg_rca24_pg_fa11_xor0 = (pg_fa(((a >> 11) & 0x01), ((b >> 11) & 0x01), ((h_u_pg_rca24_or10 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_pg_rca24_pg_fa11_and0 = (pg_fa(((a >> 11) & 0x01), ((b >> 11) & 0x01), ((h_u_pg_rca24_or10 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_pg_rca24_pg_fa11_xor1 = (pg_fa(((a >> 11) & 0x01), ((b >> 11) & 0x01), ((h_u_pg_rca24_or10 >> 0) & 0x01)) >> 2) & 0x01;
  h_u_pg_rca24_and11 = and_gate(((h_u_pg_rca24_or10 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa11_xor0 >> 0) & 0x01));
  h_u_pg_rca24_or11 = or_gate(((h_u_pg_rca24_and11 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa11_and0 >> 0) & 0x01));
  h_u_pg_rca24_pg_fa12_xor0 = (pg_fa(((a >> 12) & 0x01), ((b >> 12) & 0x01), ((h_u_pg_rca24_or11 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_pg_rca24_pg_fa12_and0 = (pg_fa(((a >> 12) & 0x01), ((b >> 12) & 0x01), ((h_u_pg_rca24_or11 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_pg_rca24_pg_fa12_xor1 = (pg_fa(((a >> 12) & 0x01), ((b >> 12) & 0x01), ((h_u_pg_rca24_or11 >> 0) & 0x01)) >> 2) & 0x01;
  h_u_pg_rca24_and12 = and_gate(((h_u_pg_rca24_or11 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa12_xor0 >> 0) & 0x01));
  h_u_pg_rca24_or12 = or_gate(((h_u_pg_rca24_and12 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa12_and0 >> 0) & 0x01));
  h_u_pg_rca24_pg_fa13_xor0 = (pg_fa(((a >> 13) & 0x01), ((b >> 13) & 0x01), ((h_u_pg_rca24_or12 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_pg_rca24_pg_fa13_and0 = (pg_fa(((a >> 13) & 0x01), ((b >> 13) & 0x01), ((h_u_pg_rca24_or12 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_pg_rca24_pg_fa13_xor1 = (pg_fa(((a >> 13) & 0x01), ((b >> 13) & 0x01), ((h_u_pg_rca24_or12 >> 0) & 0x01)) >> 2) & 0x01;
  h_u_pg_rca24_and13 = and_gate(((h_u_pg_rca24_or12 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa13_xor0 >> 0) & 0x01));
  h_u_pg_rca24_or13 = or_gate(((h_u_pg_rca24_and13 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa13_and0 >> 0) & 0x01));
  h_u_pg_rca24_pg_fa14_xor0 = (pg_fa(((a >> 14) & 0x01), ((b >> 14) & 0x01), ((h_u_pg_rca24_or13 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_pg_rca24_pg_fa14_and0 = (pg_fa(((a >> 14) & 0x01), ((b >> 14) & 0x01), ((h_u_pg_rca24_or13 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_pg_rca24_pg_fa14_xor1 = (pg_fa(((a >> 14) & 0x01), ((b >> 14) & 0x01), ((h_u_pg_rca24_or13 >> 0) & 0x01)) >> 2) & 0x01;
  h_u_pg_rca24_and14 = and_gate(((h_u_pg_rca24_or13 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa14_xor0 >> 0) & 0x01));
  h_u_pg_rca24_or14 = or_gate(((h_u_pg_rca24_and14 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa14_and0 >> 0) & 0x01));
  h_u_pg_rca24_pg_fa15_xor0 = (pg_fa(((a >> 15) & 0x01), ((b >> 15) & 0x01), ((h_u_pg_rca24_or14 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_pg_rca24_pg_fa15_and0 = (pg_fa(((a >> 15) & 0x01), ((b >> 15) & 0x01), ((h_u_pg_rca24_or14 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_pg_rca24_pg_fa15_xor1 = (pg_fa(((a >> 15) & 0x01), ((b >> 15) & 0x01), ((h_u_pg_rca24_or14 >> 0) & 0x01)) >> 2) & 0x01;
  h_u_pg_rca24_and15 = and_gate(((h_u_pg_rca24_or14 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa15_xor0 >> 0) & 0x01));
  h_u_pg_rca24_or15 = or_gate(((h_u_pg_rca24_and15 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa15_and0 >> 0) & 0x01));
  h_u_pg_rca24_pg_fa16_xor0 = (pg_fa(((a >> 16) & 0x01), ((b >> 16) & 0x01), ((h_u_pg_rca24_or15 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_pg_rca24_pg_fa16_and0 = (pg_fa(((a >> 16) & 0x01), ((b >> 16) & 0x01), ((h_u_pg_rca24_or15 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_pg_rca24_pg_fa16_xor1 = (pg_fa(((a >> 16) & 0x01), ((b >> 16) & 0x01), ((h_u_pg_rca24_or15 >> 0) & 0x01)) >> 2) & 0x01;
  h_u_pg_rca24_and16 = and_gate(((h_u_pg_rca24_or15 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa16_xor0 >> 0) & 0x01));
  h_u_pg_rca24_or16 = or_gate(((h_u_pg_rca24_and16 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa16_and0 >> 0) & 0x01));
  h_u_pg_rca24_pg_fa17_xor0 = (pg_fa(((a >> 17) & 0x01), ((b >> 17) & 0x01), ((h_u_pg_rca24_or16 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_pg_rca24_pg_fa17_and0 = (pg_fa(((a >> 17) & 0x01), ((b >> 17) & 0x01), ((h_u_pg_rca24_or16 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_pg_rca24_pg_fa17_xor1 = (pg_fa(((a >> 17) & 0x01), ((b >> 17) & 0x01), ((h_u_pg_rca24_or16 >> 0) & 0x01)) >> 2) & 0x01;
  h_u_pg_rca24_and17 = and_gate(((h_u_pg_rca24_or16 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa17_xor0 >> 0) & 0x01));
  h_u_pg_rca24_or17 = or_gate(((h_u_pg_rca24_and17 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa17_and0 >> 0) & 0x01));
  h_u_pg_rca24_pg_fa18_xor0 = (pg_fa(((a >> 18) & 0x01), ((b >> 18) & 0x01), ((h_u_pg_rca24_or17 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_pg_rca24_pg_fa18_and0 = (pg_fa(((a >> 18) & 0x01), ((b >> 18) & 0x01), ((h_u_pg_rca24_or17 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_pg_rca24_pg_fa18_xor1 = (pg_fa(((a >> 18) & 0x01), ((b >> 18) & 0x01), ((h_u_pg_rca24_or17 >> 0) & 0x01)) >> 2) & 0x01;
  h_u_pg_rca24_and18 = and_gate(((h_u_pg_rca24_or17 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa18_xor0 >> 0) & 0x01));
  h_u_pg_rca24_or18 = or_gate(((h_u_pg_rca24_and18 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa18_and0 >> 0) & 0x01));
  h_u_pg_rca24_pg_fa19_xor0 = (pg_fa(((a >> 19) & 0x01), ((b >> 19) & 0x01), ((h_u_pg_rca24_or18 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_pg_rca24_pg_fa19_and0 = (pg_fa(((a >> 19) & 0x01), ((b >> 19) & 0x01), ((h_u_pg_rca24_or18 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_pg_rca24_pg_fa19_xor1 = (pg_fa(((a >> 19) & 0x01), ((b >> 19) & 0x01), ((h_u_pg_rca24_or18 >> 0) & 0x01)) >> 2) & 0x01;
  h_u_pg_rca24_and19 = and_gate(((h_u_pg_rca24_or18 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa19_xor0 >> 0) & 0x01));
  h_u_pg_rca24_or19 = or_gate(((h_u_pg_rca24_and19 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa19_and0 >> 0) & 0x01));
  h_u_pg_rca24_pg_fa20_xor0 = (pg_fa(((a >> 20) & 0x01), ((b >> 20) & 0x01), ((h_u_pg_rca24_or19 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_pg_rca24_pg_fa20_and0 = (pg_fa(((a >> 20) & 0x01), ((b >> 20) & 0x01), ((h_u_pg_rca24_or19 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_pg_rca24_pg_fa20_xor1 = (pg_fa(((a >> 20) & 0x01), ((b >> 20) & 0x01), ((h_u_pg_rca24_or19 >> 0) & 0x01)) >> 2) & 0x01;
  h_u_pg_rca24_and20 = and_gate(((h_u_pg_rca24_or19 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa20_xor0 >> 0) & 0x01));
  h_u_pg_rca24_or20 = or_gate(((h_u_pg_rca24_and20 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa20_and0 >> 0) & 0x01));
  h_u_pg_rca24_pg_fa21_xor0 = (pg_fa(((a >> 21) & 0x01), ((b >> 21) & 0x01), ((h_u_pg_rca24_or20 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_pg_rca24_pg_fa21_and0 = (pg_fa(((a >> 21) & 0x01), ((b >> 21) & 0x01), ((h_u_pg_rca24_or20 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_pg_rca24_pg_fa21_xor1 = (pg_fa(((a >> 21) & 0x01), ((b >> 21) & 0x01), ((h_u_pg_rca24_or20 >> 0) & 0x01)) >> 2) & 0x01;
  h_u_pg_rca24_and21 = and_gate(((h_u_pg_rca24_or20 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa21_xor0 >> 0) & 0x01));
  h_u_pg_rca24_or21 = or_gate(((h_u_pg_rca24_and21 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa21_and0 >> 0) & 0x01));
  h_u_pg_rca24_pg_fa22_xor0 = (pg_fa(((a >> 22) & 0x01), ((b >> 22) & 0x01), ((h_u_pg_rca24_or21 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_pg_rca24_pg_fa22_and0 = (pg_fa(((a >> 22) & 0x01), ((b >> 22) & 0x01), ((h_u_pg_rca24_or21 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_pg_rca24_pg_fa22_xor1 = (pg_fa(((a >> 22) & 0x01), ((b >> 22) & 0x01), ((h_u_pg_rca24_or21 >> 0) & 0x01)) >> 2) & 0x01;
  h_u_pg_rca24_and22 = and_gate(((h_u_pg_rca24_or21 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa22_xor0 >> 0) & 0x01));
  h_u_pg_rca24_or22 = or_gate(((h_u_pg_rca24_and22 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa22_and0 >> 0) & 0x01));
  h_u_pg_rca24_pg_fa23_xor0 = (pg_fa(((a >> 23) & 0x01), ((b >> 23) & 0x01), ((h_u_pg_rca24_or22 >> 0) & 0x01)) >> 0) & 0x01;
  h_u_pg_rca24_pg_fa23_and0 = (pg_fa(((a >> 23) & 0x01), ((b >> 23) & 0x01), ((h_u_pg_rca24_or22 >> 0) & 0x01)) >> 1) & 0x01;
  h_u_pg_rca24_pg_fa23_xor1 = (pg_fa(((a >> 23) & 0x01), ((b >> 23) & 0x01), ((h_u_pg_rca24_or22 >> 0) & 0x01)) >> 2) & 0x01;
  h_u_pg_rca24_and23 = and_gate(((h_u_pg_rca24_or22 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa23_xor0 >> 0) & 0x01));
  h_u_pg_rca24_or23 = or_gate(((h_u_pg_rca24_and23 >> 0) & 0x01), ((h_u_pg_rca24_pg_fa23_and0 >> 0) & 0x01));

  h_u_pg_rca24_out |= ((h_u_pg_rca24_pg_fa0_xor0 >> 0) & 0x01) << 0;
  h_u_pg_rca24_out |= ((h_u_pg_rca24_pg_fa1_xor1 >> 0) & 0x01) << 1;
  h_u_pg_rca24_out |= ((h_u_pg_rca24_pg_fa2_xor1 >> 0) & 0x01) << 2;
  h_u_pg_rca24_out |= ((h_u_pg_rca24_pg_fa3_xor1 >> 0) & 0x01) << 3;
  h_u_pg_rca24_out |= ((h_u_pg_rca24_pg_fa4_xor1 >> 0) & 0x01) << 4;
  h_u_pg_rca24_out |= ((h_u_pg_rca24_pg_fa5_xor1 >> 0) & 0x01) << 5;
  h_u_pg_rca24_out |= ((h_u_pg_rca24_pg_fa6_xor1 >> 0) & 0x01) << 6;
  h_u_pg_rca24_out |= ((h_u_pg_rca24_pg_fa7_xor1 >> 0) & 0x01) << 7;
  h_u_pg_rca24_out |= ((h_u_pg_rca24_pg_fa8_xor1 >> 0) & 0x01) << 8;
  h_u_pg_rca24_out |= ((h_u_pg_rca24_pg_fa9_xor1 >> 0) & 0x01) << 9;
  h_u_pg_rca24_out |= ((h_u_pg_rca24_pg_fa10_xor1 >> 0) & 0x01) << 10;
  h_u_pg_rca24_out |= ((h_u_pg_rca24_pg_fa11_xor1 >> 0) & 0x01) << 11;
  h_u_pg_rca24_out |= ((h_u_pg_rca24_pg_fa12_xor1 >> 0) & 0x01) << 12;
  h_u_pg_rca24_out |= ((h_u_pg_rca24_pg_fa13_xor1 >> 0) & 0x01) << 13;
  h_u_pg_rca24_out |= ((h_u_pg_rca24_pg_fa14_xor1 >> 0) & 0x01) << 14;
  h_u_pg_rca24_out |= ((h_u_pg_rca24_pg_fa15_xor1 >> 0) & 0x01) << 15;
  h_u_pg_rca24_out |= ((h_u_pg_rca24_pg_fa16_xor1 >> 0) & 0x01) << 16;
  h_u_pg_rca24_out |= ((h_u_pg_rca24_pg_fa17_xor1 >> 0) & 0x01) << 17;
  h_u_pg_rca24_out |= ((h_u_pg_rca24_pg_fa18_xor1 >> 0) & 0x01) << 18;
  h_u_pg_rca24_out |= ((h_u_pg_rca24_pg_fa19_xor1 >> 0) & 0x01) << 19;
  h_u_pg_rca24_out |= ((h_u_pg_rca24_pg_fa20_xor1 >> 0) & 0x01) << 20;
  h_u_pg_rca24_out |= ((h_u_pg_rca24_pg_fa21_xor1 >> 0) & 0x01) << 21;
  h_u_pg_rca24_out |= ((h_u_pg_rca24_pg_fa22_xor1 >> 0) & 0x01) << 22;
  h_u_pg_rca24_out |= ((h_u_pg_rca24_pg_fa23_xor1 >> 0) & 0x01) << 23;
  h_u_pg_rca24_out |= ((h_u_pg_rca24_or23 >> 0) & 0x01) << 24;
  return h_u_pg_rca24_out;
}
#include <stdio.h>
#include <stdint.h>

int64_t f_s_pg_rca32(int64_t a, int64_t b){
  uint64_t f_s_pg_rca32_out = 0;
  uint8_t f_s_pg_rca32_pg_fa0_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa0_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa1_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa1_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa1_xor1 = 0;
  uint8_t f_s_pg_rca32_and1 = 0;
  uint8_t f_s_pg_rca32_or1 = 0;
  uint8_t f_s_pg_rca32_pg_fa2_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa2_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa2_xor1 = 0;
  uint8_t f_s_pg_rca32_and2 = 0;
  uint8_t f_s_pg_rca32_or2 = 0;
  uint8_t f_s_pg_rca32_pg_fa3_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa3_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa3_xor1 = 0;
  uint8_t f_s_pg_rca32_and3 = 0;
  uint8_t f_s_pg_rca32_or3 = 0;
  uint8_t f_s_pg_rca32_pg_fa4_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa4_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa4_xor1 = 0;
  uint8_t f_s_pg_rca32_and4 = 0;
  uint8_t f_s_pg_rca32_or4 = 0;
  uint8_t f_s_pg_rca32_pg_fa5_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa5_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa5_xor1 = 0;
  uint8_t f_s_pg_rca32_and5 = 0;
  uint8_t f_s_pg_rca32_or5 = 0;
  uint8_t f_s_pg_rca32_pg_fa6_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa6_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa6_xor1 = 0;
  uint8_t f_s_pg_rca32_and6 = 0;
  uint8_t f_s_pg_rca32_or6 = 0;
  uint8_t f_s_pg_rca32_pg_fa7_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa7_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa7_xor1 = 0;
  uint8_t f_s_pg_rca32_and7 = 0;
  uint8_t f_s_pg_rca32_or7 = 0;
  uint8_t f_s_pg_rca32_pg_fa8_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa8_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa8_xor1 = 0;
  uint8_t f_s_pg_rca32_and8 = 0;
  uint8_t f_s_pg_rca32_or8 = 0;
  uint8_t f_s_pg_rca32_pg_fa9_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa9_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa9_xor1 = 0;
  uint8_t f_s_pg_rca32_and9 = 0;
  uint8_t f_s_pg_rca32_or9 = 0;
  uint8_t f_s_pg_rca32_pg_fa10_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa10_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa10_xor1 = 0;
  uint8_t f_s_pg_rca32_and10 = 0;
  uint8_t f_s_pg_rca32_or10 = 0;
  uint8_t f_s_pg_rca32_pg_fa11_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa11_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa11_xor1 = 0;
  uint8_t f_s_pg_rca32_and11 = 0;
  uint8_t f_s_pg_rca32_or11 = 0;
  uint8_t f_s_pg_rca32_pg_fa12_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa12_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa12_xor1 = 0;
  uint8_t f_s_pg_rca32_and12 = 0;
  uint8_t f_s_pg_rca32_or12 = 0;
  uint8_t f_s_pg_rca32_pg_fa13_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa13_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa13_xor1 = 0;
  uint8_t f_s_pg_rca32_and13 = 0;
  uint8_t f_s_pg_rca32_or13 = 0;
  uint8_t f_s_pg_rca32_pg_fa14_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa14_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa14_xor1 = 0;
  uint8_t f_s_pg_rca32_and14 = 0;
  uint8_t f_s_pg_rca32_or14 = 0;
  uint8_t f_s_pg_rca32_pg_fa15_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa15_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa15_xor1 = 0;
  uint8_t f_s_pg_rca32_and15 = 0;
  uint8_t f_s_pg_rca32_or15 = 0;
  uint8_t f_s_pg_rca32_pg_fa16_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa16_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa16_xor1 = 0;
  uint8_t f_s_pg_rca32_and16 = 0;
  uint8_t f_s_pg_rca32_or16 = 0;
  uint8_t f_s_pg_rca32_pg_fa17_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa17_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa17_xor1 = 0;
  uint8_t f_s_pg_rca32_and17 = 0;
  uint8_t f_s_pg_rca32_or17 = 0;
  uint8_t f_s_pg_rca32_pg_fa18_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa18_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa18_xor1 = 0;
  uint8_t f_s_pg_rca32_and18 = 0;
  uint8_t f_s_pg_rca32_or18 = 0;
  uint8_t f_s_pg_rca32_pg_fa19_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa19_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa19_xor1 = 0;
  uint8_t f_s_pg_rca32_and19 = 0;
  uint8_t f_s_pg_rca32_or19 = 0;
  uint8_t f_s_pg_rca32_pg_fa20_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa20_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa20_xor1 = 0;
  uint8_t f_s_pg_rca32_and20 = 0;
  uint8_t f_s_pg_rca32_or20 = 0;
  uint8_t f_s_pg_rca32_pg_fa21_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa21_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa21_xor1 = 0;
  uint8_t f_s_pg_rca32_and21 = 0;
  uint8_t f_s_pg_rca32_or21 = 0;
  uint8_t f_s_pg_rca32_pg_fa22_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa22_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa22_xor1 = 0;
  uint8_t f_s_pg_rca32_and22 = 0;
  uint8_t f_s_pg_rca32_or22 = 0;
  uint8_t f_s_pg_rca32_pg_fa23_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa23_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa23_xor1 = 0;
  uint8_t f_s_pg_rca32_and23 = 0;
  uint8_t f_s_pg_rca32_or23 = 0;
  uint8_t f_s_pg_rca32_pg_fa24_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa24_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa24_xor1 = 0;
  uint8_t f_s_pg_rca32_and24 = 0;
  uint8_t f_s_pg_rca32_or24 = 0;
  uint8_t f_s_pg_rca32_pg_fa25_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa25_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa25_xor1 = 0;
  uint8_t f_s_pg_rca32_and25 = 0;
  uint8_t f_s_pg_rca32_or25 = 0;
  uint8_t f_s_pg_rca32_pg_fa26_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa26_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa26_xor1 = 0;
  uint8_t f_s_pg_rca32_and26 = 0;
  uint8_t f_s_pg_rca32_or26 = 0;
  uint8_t f_s_pg_rca32_pg_fa27_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa27_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa27_xor1 = 0;
  uint8_t f_s_pg_rca32_and27 = 0;
  uint8_t f_s_pg_rca32_or27 = 0;
  uint8_t f_s_pg_rca32_pg_fa28_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa28_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa28_xor1 = 0;
  uint8_t f_s_pg_rca32_and28 = 0;
  uint8_t f_s_pg_rca32_or28 = 0;
  uint8_t f_s_pg_rca32_pg_fa29_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa29_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa29_xor1 = 0;
  uint8_t f_s_pg_rca32_and29 = 0;
  uint8_t f_s_pg_rca32_or29 = 0;
  uint8_t f_s_pg_rca32_pg_fa30_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa30_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa30_xor1 = 0;
  uint8_t f_s_pg_rca32_and30 = 0;
  uint8_t f_s_pg_rca32_or30 = 0;
  uint8_t f_s_pg_rca32_pg_fa31_xor0 = 0;
  uint8_t f_s_pg_rca32_pg_fa31_and0 = 0;
  uint8_t f_s_pg_rca32_pg_fa31_xor1 = 0;
  uint8_t f_s_pg_rca32_and31 = 0;
  uint8_t f_s_pg_rca32_or31 = 0;
  uint8_t f_s_pg_rca32_xor0 = 0;
  uint8_t f_s_pg_rca32_xor1 = 0;

  f_s_pg_rca32_pg_fa0_xor0 = ((a >> 0) & 0x01) ^ ((b >> 0) & 0x01);
  f_s_pg_rca32_pg_fa0_and0 = ((a >> 0) & 0x01) & ((b >> 0) & 0x01);
  f_s_pg_rca32_pg_fa1_xor0 = ((a >> 1) & 0x01) ^ ((b >> 1) & 0x01);
  f_s_pg_rca32_pg_fa1_and0 = ((a >> 1) & 0x01) & ((b >> 1) & 0x01);
  f_s_pg_rca32_pg_fa1_xor1 = ((f_s_pg_rca32_pg_fa1_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_pg_fa0_and0 >> 0) & 0x01);
  f_s_pg_rca32_and1 = ((f_s_pg_rca32_pg_fa0_and0 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa1_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or1 = ((f_s_pg_rca32_and1 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa1_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa2_xor0 = ((a >> 2) & 0x01) ^ ((b >> 2) & 0x01);
  f_s_pg_rca32_pg_fa2_and0 = ((a >> 2) & 0x01) & ((b >> 2) & 0x01);
  f_s_pg_rca32_pg_fa2_xor1 = ((f_s_pg_rca32_pg_fa2_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or1 >> 0) & 0x01);
  f_s_pg_rca32_and2 = ((f_s_pg_rca32_or1 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa2_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or2 = ((f_s_pg_rca32_and2 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa2_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa3_xor0 = ((a >> 3) & 0x01) ^ ((b >> 3) & 0x01);
  f_s_pg_rca32_pg_fa3_and0 = ((a >> 3) & 0x01) & ((b >> 3) & 0x01);
  f_s_pg_rca32_pg_fa3_xor1 = ((f_s_pg_rca32_pg_fa3_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or2 >> 0) & 0x01);
  f_s_pg_rca32_and3 = ((f_s_pg_rca32_or2 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa3_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or3 = ((f_s_pg_rca32_and3 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa3_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa4_xor0 = ((a >> 4) & 0x01) ^ ((b >> 4) & 0x01);
  f_s_pg_rca32_pg_fa4_and0 = ((a >> 4) & 0x01) & ((b >> 4) & 0x01);
  f_s_pg_rca32_pg_fa4_xor1 = ((f_s_pg_rca32_pg_fa4_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or3 >> 0) & 0x01);
  f_s_pg_rca32_and4 = ((f_s_pg_rca32_or3 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa4_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or4 = ((f_s_pg_rca32_and4 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa4_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa5_xor0 = ((a >> 5) & 0x01) ^ ((b >> 5) & 0x01);
  f_s_pg_rca32_pg_fa5_and0 = ((a >> 5) & 0x01) & ((b >> 5) & 0x01);
  f_s_pg_rca32_pg_fa5_xor1 = ((f_s_pg_rca32_pg_fa5_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or4 >> 0) & 0x01);
  f_s_pg_rca32_and5 = ((f_s_pg_rca32_or4 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa5_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or5 = ((f_s_pg_rca32_and5 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa5_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa6_xor0 = ((a >> 6) & 0x01) ^ ((b >> 6) & 0x01);
  f_s_pg_rca32_pg_fa6_and0 = ((a >> 6) & 0x01) & ((b >> 6) & 0x01);
  f_s_pg_rca32_pg_fa6_xor1 = ((f_s_pg_rca32_pg_fa6_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or5 >> 0) & 0x01);
  f_s_pg_rca32_and6 = ((f_s_pg_rca32_or5 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa6_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or6 = ((f_s_pg_rca32_and6 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa6_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa7_xor0 = ((a >> 7) & 0x01) ^ ((b >> 7) & 0x01);
  f_s_pg_rca32_pg_fa7_and0 = ((a >> 7) & 0x01) & ((b >> 7) & 0x01);
  f_s_pg_rca32_pg_fa7_xor1 = ((f_s_pg_rca32_pg_fa7_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or6 >> 0) & 0x01);
  f_s_pg_rca32_and7 = ((f_s_pg_rca32_or6 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa7_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or7 = ((f_s_pg_rca32_and7 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa7_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa8_xor0 = ((a >> 8) & 0x01) ^ ((b >> 8) & 0x01);
  f_s_pg_rca32_pg_fa8_and0 = ((a >> 8) & 0x01) & ((b >> 8) & 0x01);
  f_s_pg_rca32_pg_fa8_xor1 = ((f_s_pg_rca32_pg_fa8_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or7 >> 0) & 0x01);
  f_s_pg_rca32_and8 = ((f_s_pg_rca32_or7 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa8_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or8 = ((f_s_pg_rca32_and8 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa8_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa9_xor0 = ((a >> 9) & 0x01) ^ ((b >> 9) & 0x01);
  f_s_pg_rca32_pg_fa9_and0 = ((a >> 9) & 0x01) & ((b >> 9) & 0x01);
  f_s_pg_rca32_pg_fa9_xor1 = ((f_s_pg_rca32_pg_fa9_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or8 >> 0) & 0x01);
  f_s_pg_rca32_and9 = ((f_s_pg_rca32_or8 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa9_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or9 = ((f_s_pg_rca32_and9 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa9_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa10_xor0 = ((a >> 10) & 0x01) ^ ((b >> 10) & 0x01);
  f_s_pg_rca32_pg_fa10_and0 = ((a >> 10) & 0x01) & ((b >> 10) & 0x01);
  f_s_pg_rca32_pg_fa10_xor1 = ((f_s_pg_rca32_pg_fa10_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or9 >> 0) & 0x01);
  f_s_pg_rca32_and10 = ((f_s_pg_rca32_or9 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa10_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or10 = ((f_s_pg_rca32_and10 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa10_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa11_xor0 = ((a >> 11) & 0x01) ^ ((b >> 11) & 0x01);
  f_s_pg_rca32_pg_fa11_and0 = ((a >> 11) & 0x01) & ((b >> 11) & 0x01);
  f_s_pg_rca32_pg_fa11_xor1 = ((f_s_pg_rca32_pg_fa11_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or10 >> 0) & 0x01);
  f_s_pg_rca32_and11 = ((f_s_pg_rca32_or10 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa11_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or11 = ((f_s_pg_rca32_and11 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa11_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa12_xor0 = ((a >> 12) & 0x01) ^ ((b >> 12) & 0x01);
  f_s_pg_rca32_pg_fa12_and0 = ((a >> 12) & 0x01) & ((b >> 12) & 0x01);
  f_s_pg_rca32_pg_fa12_xor1 = ((f_s_pg_rca32_pg_fa12_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or11 >> 0) & 0x01);
  f_s_pg_rca32_and12 = ((f_s_pg_rca32_or11 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa12_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or12 = ((f_s_pg_rca32_and12 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa12_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa13_xor0 = ((a >> 13) & 0x01) ^ ((b >> 13) & 0x01);
  f_s_pg_rca32_pg_fa13_and0 = ((a >> 13) & 0x01) & ((b >> 13) & 0x01);
  f_s_pg_rca32_pg_fa13_xor1 = ((f_s_pg_rca32_pg_fa13_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or12 >> 0) & 0x01);
  f_s_pg_rca32_and13 = ((f_s_pg_rca32_or12 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa13_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or13 = ((f_s_pg_rca32_and13 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa13_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa14_xor0 = ((a >> 14) & 0x01) ^ ((b >> 14) & 0x01);
  f_s_pg_rca32_pg_fa14_and0 = ((a >> 14) & 0x01) & ((b >> 14) & 0x01);
  f_s_pg_rca32_pg_fa14_xor1 = ((f_s_pg_rca32_pg_fa14_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or13 >> 0) & 0x01);
  f_s_pg_rca32_and14 = ((f_s_pg_rca32_or13 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa14_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or14 = ((f_s_pg_rca32_and14 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa14_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa15_xor0 = ((a >> 15) & 0x01) ^ ((b >> 15) & 0x01);
  f_s_pg_rca32_pg_fa15_and0 = ((a >> 15) & 0x01) & ((b >> 15) & 0x01);
  f_s_pg_rca32_pg_fa15_xor1 = ((f_s_pg_rca32_pg_fa15_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or14 >> 0) & 0x01);
  f_s_pg_rca32_and15 = ((f_s_pg_rca32_or14 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa15_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or15 = ((f_s_pg_rca32_and15 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa15_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa16_xor0 = ((a >> 16) & 0x01) ^ ((b >> 16) & 0x01);
  f_s_pg_rca32_pg_fa16_and0 = ((a >> 16) & 0x01) & ((b >> 16) & 0x01);
  f_s_pg_rca32_pg_fa16_xor1 = ((f_s_pg_rca32_pg_fa16_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or15 >> 0) & 0x01);
  f_s_pg_rca32_and16 = ((f_s_pg_rca32_or15 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa16_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or16 = ((f_s_pg_rca32_and16 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa16_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa17_xor0 = ((a >> 17) & 0x01) ^ ((b >> 17) & 0x01);
  f_s_pg_rca32_pg_fa17_and0 = ((a >> 17) & 0x01) & ((b >> 17) & 0x01);
  f_s_pg_rca32_pg_fa17_xor1 = ((f_s_pg_rca32_pg_fa17_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or16 >> 0) & 0x01);
  f_s_pg_rca32_and17 = ((f_s_pg_rca32_or16 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa17_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or17 = ((f_s_pg_rca32_and17 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa17_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa18_xor0 = ((a >> 18) & 0x01) ^ ((b >> 18) & 0x01);
  f_s_pg_rca32_pg_fa18_and0 = ((a >> 18) & 0x01) & ((b >> 18) & 0x01);
  f_s_pg_rca32_pg_fa18_xor1 = ((f_s_pg_rca32_pg_fa18_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or17 >> 0) & 0x01);
  f_s_pg_rca32_and18 = ((f_s_pg_rca32_or17 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa18_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or18 = ((f_s_pg_rca32_and18 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa18_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa19_xor0 = ((a >> 19) & 0x01) ^ ((b >> 19) & 0x01);
  f_s_pg_rca32_pg_fa19_and0 = ((a >> 19) & 0x01) & ((b >> 19) & 0x01);
  f_s_pg_rca32_pg_fa19_xor1 = ((f_s_pg_rca32_pg_fa19_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or18 >> 0) & 0x01);
  f_s_pg_rca32_and19 = ((f_s_pg_rca32_or18 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa19_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or19 = ((f_s_pg_rca32_and19 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa19_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa20_xor0 = ((a >> 20) & 0x01) ^ ((b >> 20) & 0x01);
  f_s_pg_rca32_pg_fa20_and0 = ((a >> 20) & 0x01) & ((b >> 20) & 0x01);
  f_s_pg_rca32_pg_fa20_xor1 = ((f_s_pg_rca32_pg_fa20_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or19 >> 0) & 0x01);
  f_s_pg_rca32_and20 = ((f_s_pg_rca32_or19 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa20_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or20 = ((f_s_pg_rca32_and20 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa20_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa21_xor0 = ((a >> 21) & 0x01) ^ ((b >> 21) & 0x01);
  f_s_pg_rca32_pg_fa21_and0 = ((a >> 21) & 0x01) & ((b >> 21) & 0x01);
  f_s_pg_rca32_pg_fa21_xor1 = ((f_s_pg_rca32_pg_fa21_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or20 >> 0) & 0x01);
  f_s_pg_rca32_and21 = ((f_s_pg_rca32_or20 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa21_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or21 = ((f_s_pg_rca32_and21 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa21_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa22_xor0 = ((a >> 22) & 0x01) ^ ((b >> 22) & 0x01);
  f_s_pg_rca32_pg_fa22_and0 = ((a >> 22) & 0x01) & ((b >> 22) & 0x01);
  f_s_pg_rca32_pg_fa22_xor1 = ((f_s_pg_rca32_pg_fa22_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or21 >> 0) & 0x01);
  f_s_pg_rca32_and22 = ((f_s_pg_rca32_or21 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa22_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or22 = ((f_s_pg_rca32_and22 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa22_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa23_xor0 = ((a >> 23) & 0x01) ^ ((b >> 23) & 0x01);
  f_s_pg_rca32_pg_fa23_and0 = ((a >> 23) & 0x01) & ((b >> 23) & 0x01);
  f_s_pg_rca32_pg_fa23_xor1 = ((f_s_pg_rca32_pg_fa23_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or22 >> 0) & 0x01);
  f_s_pg_rca32_and23 = ((f_s_pg_rca32_or22 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa23_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or23 = ((f_s_pg_rca32_and23 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa23_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa24_xor0 = ((a >> 24) & 0x01) ^ ((b >> 24) & 0x01);
  f_s_pg_rca32_pg_fa24_and0 = ((a >> 24) & 0x01) & ((b >> 24) & 0x01);
  f_s_pg_rca32_pg_fa24_xor1 = ((f_s_pg_rca32_pg_fa24_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or23 >> 0) & 0x01);
  f_s_pg_rca32_and24 = ((f_s_pg_rca32_or23 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa24_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or24 = ((f_s_pg_rca32_and24 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa24_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa25_xor0 = ((a >> 25) & 0x01) ^ ((b >> 25) & 0x01);
  f_s_pg_rca32_pg_fa25_and0 = ((a >> 25) & 0x01) & ((b >> 25) & 0x01);
  f_s_pg_rca32_pg_fa25_xor1 = ((f_s_pg_rca32_pg_fa25_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or24 >> 0) & 0x01);
  f_s_pg_rca32_and25 = ((f_s_pg_rca32_or24 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa25_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or25 = ((f_s_pg_rca32_and25 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa25_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa26_xor0 = ((a >> 26) & 0x01) ^ ((b >> 26) & 0x01);
  f_s_pg_rca32_pg_fa26_and0 = ((a >> 26) & 0x01) & ((b >> 26) & 0x01);
  f_s_pg_rca32_pg_fa26_xor1 = ((f_s_pg_rca32_pg_fa26_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or25 >> 0) & 0x01);
  f_s_pg_rca32_and26 = ((f_s_pg_rca32_or25 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa26_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or26 = ((f_s_pg_rca32_and26 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa26_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa27_xor0 = ((a >> 27) & 0x01) ^ ((b >> 27) & 0x01);
  f_s_pg_rca32_pg_fa27_and0 = ((a >> 27) & 0x01) & ((b >> 27) & 0x01);
  f_s_pg_rca32_pg_fa27_xor1 = ((f_s_pg_rca32_pg_fa27_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or26 >> 0) & 0x01);
  f_s_pg_rca32_and27 = ((f_s_pg_rca32_or26 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa27_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or27 = ((f_s_pg_rca32_and27 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa27_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa28_xor0 = ((a >> 28) & 0x01) ^ ((b >> 28) & 0x01);
  f_s_pg_rca32_pg_fa28_and0 = ((a >> 28) & 0x01) & ((b >> 28) & 0x01);
  f_s_pg_rca32_pg_fa28_xor1 = ((f_s_pg_rca32_pg_fa28_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or27 >> 0) & 0x01);
  f_s_pg_rca32_and28 = ((f_s_pg_rca32_or27 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa28_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or28 = ((f_s_pg_rca32_and28 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa28_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa29_xor0 = ((a >> 29) & 0x01) ^ ((b >> 29) & 0x01);
  f_s_pg_rca32_pg_fa29_and0 = ((a >> 29) & 0x01) & ((b >> 29) & 0x01);
  f_s_pg_rca32_pg_fa29_xor1 = ((f_s_pg_rca32_pg_fa29_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or28 >> 0) & 0x01);
  f_s_pg_rca32_and29 = ((f_s_pg_rca32_or28 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa29_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or29 = ((f_s_pg_rca32_and29 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa29_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa30_xor0 = ((a >> 30) & 0x01) ^ ((b >> 30) & 0x01);
  f_s_pg_rca32_pg_fa30_and0 = ((a >> 30) & 0x01) & ((b >> 30) & 0x01);
  f_s_pg_rca32_pg_fa30_xor1 = ((f_s_pg_rca32_pg_fa30_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or29 >> 0) & 0x01);
  f_s_pg_rca32_and30 = ((f_s_pg_rca32_or29 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa30_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or30 = ((f_s_pg_rca32_and30 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa30_and0 >> 0) & 0x01);
  f_s_pg_rca32_pg_fa31_xor0 = ((a >> 31) & 0x01) ^ ((b >> 31) & 0x01);
  f_s_pg_rca32_pg_fa31_and0 = ((a >> 31) & 0x01) & ((b >> 31) & 0x01);
  f_s_pg_rca32_pg_fa31_xor1 = ((f_s_pg_rca32_pg_fa31_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or30 >> 0) & 0x01);
  f_s_pg_rca32_and31 = ((f_s_pg_rca32_or30 >> 0) & 0x01) & ((f_s_pg_rca32_pg_fa31_xor0 >> 0) & 0x01);
  f_s_pg_rca32_or31 = ((f_s_pg_rca32_and31 >> 0) & 0x01) | ((f_s_pg_rca32_pg_fa31_and0 >> 0) & 0x01);
  f_s_pg_rca32_xor0 = ((a >> 31) & 0x01) ^ ((b >> 31) & 0x01);
  f_s_pg_rca32_xor1 = ((f_s_pg_rca32_xor0 >> 0) & 0x01) ^ ((f_s_pg_rca32_or31 >> 0) & 0x01);

  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa0_xor0 >> 0) & 0x01) << 0;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa1_xor1 >> 0) & 0x01) << 1;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa2_xor1 >> 0) & 0x01) << 2;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa3_xor1 >> 0) & 0x01) << 3;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa4_xor1 >> 0) & 0x01) << 4;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa5_xor1 >> 0) & 0x01) << 5;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa6_xor1 >> 0) & 0x01) << 6;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa7_xor1 >> 0) & 0x01) << 7;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa8_xor1 >> 0) & 0x01) << 8;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa9_xor1 >> 0) & 0x01) << 9;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa10_xor1 >> 0) & 0x01) << 10;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa11_xor1 >> 0) & 0x01) << 11;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa12_xor1 >> 0) & 0x01) << 12;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa13_xor1 >> 0) & 0x01) << 13;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa14_xor1 >> 0) & 0x01) << 14;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa15_xor1 >> 0) & 0x01) << 15;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa16_xor1 >> 0) & 0x01) << 16;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa17_xor1 >> 0) & 0x01) << 17;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa18_xor1 >> 0) & 0x01) << 18;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa19_xor1 >> 0) & 0x01) << 19;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa20_xor1 >> 0) & 0x01) << 20;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa21_xor1 >> 0) & 0x01) << 21;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa22_xor1 >> 0) & 0x01) << 22;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa23_xor1 >> 0) & 0x01) << 23;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa24_xor1 >> 0) & 0x01) << 24;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa25_xor1 >> 0) & 0x01) << 25;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa26_xor1 >> 0) & 0x01) << 26;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa27_xor1 >> 0) & 0x01) << 27;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa28_xor1 >> 0) & 0x01) << 28;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa29_xor1 >> 0) & 0x01) << 29;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa30_xor1 >> 0) & 0x01) << 30;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_pg_fa31_xor1 >> 0) & 0x01) << 31;
  f_s_pg_rca32_out |= ((f_s_pg_rca32_xor1 >> 0) & 0x01) << 32;
  return f_s_pg_rca32_out;
}
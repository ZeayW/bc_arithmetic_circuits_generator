#include <stdio.h>
#include <stdint.h>

uint64_t f_u_wallace_rca4(uint64_t a, uint64_t b){
  uint8_t out = 0;
  uint8_t a_0 = 0;
  uint8_t a_1 = 0;
  uint8_t a_2 = 0;
  uint8_t a_3 = 0;
  uint8_t b_0 = 0;
  uint8_t b_1 = 0;
  uint8_t b_2 = 0;
  uint8_t b_3 = 0;
  uint8_t f_u_wallace_rca4_and_2_0_a_2 = 0;
  uint8_t f_u_wallace_rca4_and_2_0_b_0 = 0;
  uint8_t f_u_wallace_rca4_and_2_0_y0 = 0;
  uint8_t f_u_wallace_rca4_and_1_1_a_1 = 0;
  uint8_t f_u_wallace_rca4_and_1_1_b_1 = 0;
  uint8_t f_u_wallace_rca4_and_1_1_y0 = 0;
  uint8_t f_u_wallace_rca4_ha0_f_u_wallace_rca4_and_2_0_y0 = 0;
  uint8_t f_u_wallace_rca4_ha0_f_u_wallace_rca4_and_1_1_y0 = 0;
  uint8_t f_u_wallace_rca4_ha0_y0 = 0;
  uint8_t f_u_wallace_rca4_ha0_y1 = 0;
  uint8_t f_u_wallace_rca4_and_3_0_a_3 = 0;
  uint8_t f_u_wallace_rca4_and_3_0_b_0 = 0;
  uint8_t f_u_wallace_rca4_and_3_0_y0 = 0;
  uint8_t f_u_wallace_rca4_and_2_1_a_2 = 0;
  uint8_t f_u_wallace_rca4_and_2_1_b_1 = 0;
  uint8_t f_u_wallace_rca4_and_2_1_y0 = 0;
  uint8_t f_u_wallace_rca4_fa0_f_u_wallace_rca4_ha0_y1 = 0;
  uint8_t f_u_wallace_rca4_fa0_f_u_wallace_rca4_and_3_0_y0 = 0;
  uint8_t f_u_wallace_rca4_fa0_y0 = 0;
  uint8_t f_u_wallace_rca4_fa0_y1 = 0;
  uint8_t f_u_wallace_rca4_fa0_f_u_wallace_rca4_and_2_1_y0 = 0;
  uint8_t f_u_wallace_rca4_fa0_y2 = 0;
  uint8_t f_u_wallace_rca4_fa0_y3 = 0;
  uint8_t f_u_wallace_rca4_fa0_y4 = 0;
  uint8_t f_u_wallace_rca4_and_3_1_a_3 = 0;
  uint8_t f_u_wallace_rca4_and_3_1_b_1 = 0;
  uint8_t f_u_wallace_rca4_and_3_1_y0 = 0;
  uint8_t f_u_wallace_rca4_and_2_2_a_2 = 0;
  uint8_t f_u_wallace_rca4_and_2_2_b_2 = 0;
  uint8_t f_u_wallace_rca4_and_2_2_y0 = 0;
  uint8_t f_u_wallace_rca4_fa1_f_u_wallace_rca4_fa0_y4 = 0;
  uint8_t f_u_wallace_rca4_fa1_f_u_wallace_rca4_and_3_1_y0 = 0;
  uint8_t f_u_wallace_rca4_fa1_y0 = 0;
  uint8_t f_u_wallace_rca4_fa1_y1 = 0;
  uint8_t f_u_wallace_rca4_fa1_f_u_wallace_rca4_and_2_2_y0 = 0;
  uint8_t f_u_wallace_rca4_fa1_y2 = 0;
  uint8_t f_u_wallace_rca4_fa1_y3 = 0;
  uint8_t f_u_wallace_rca4_fa1_y4 = 0;
  uint8_t f_u_wallace_rca4_and_1_2_a_1 = 0;
  uint8_t f_u_wallace_rca4_and_1_2_b_2 = 0;
  uint8_t f_u_wallace_rca4_and_1_2_y0 = 0;
  uint8_t f_u_wallace_rca4_and_0_3_a_0 = 0;
  uint8_t f_u_wallace_rca4_and_0_3_b_3 = 0;
  uint8_t f_u_wallace_rca4_and_0_3_y0 = 0;
  uint8_t f_u_wallace_rca4_ha1_f_u_wallace_rca4_and_1_2_y0 = 0;
  uint8_t f_u_wallace_rca4_ha1_f_u_wallace_rca4_and_0_3_y0 = 0;
  uint8_t f_u_wallace_rca4_ha1_y0 = 0;
  uint8_t f_u_wallace_rca4_ha1_y1 = 0;
  uint8_t f_u_wallace_rca4_and_1_3_a_1 = 0;
  uint8_t f_u_wallace_rca4_and_1_3_b_3 = 0;
  uint8_t f_u_wallace_rca4_and_1_3_y0 = 0;
  uint8_t f_u_wallace_rca4_ha2_f_u_wallace_rca4_ha1_y1 = 0;
  uint8_t f_u_wallace_rca4_ha2_f_u_wallace_rca4_and_1_3_y0 = 0;
  uint8_t f_u_wallace_rca4_ha2_y0 = 0;
  uint8_t f_u_wallace_rca4_ha2_y1 = 0;
  uint8_t f_u_wallace_rca4_and_3_2_a_3 = 0;
  uint8_t f_u_wallace_rca4_and_3_2_b_2 = 0;
  uint8_t f_u_wallace_rca4_and_3_2_y0 = 0;
  uint8_t f_u_wallace_rca4_fa2_f_u_wallace_rca4_ha2_y1 = 0;
  uint8_t f_u_wallace_rca4_fa2_f_u_wallace_rca4_fa1_y4 = 0;
  uint8_t f_u_wallace_rca4_fa2_y0 = 0;
  uint8_t f_u_wallace_rca4_fa2_y1 = 0;
  uint8_t f_u_wallace_rca4_fa2_f_u_wallace_rca4_and_3_2_y0 = 0;
  uint8_t f_u_wallace_rca4_fa2_y2 = 0;
  uint8_t f_u_wallace_rca4_fa2_y3 = 0;
  uint8_t f_u_wallace_rca4_fa2_y4 = 0;
  uint8_t f_u_wallace_rca4_and_0_0_a_0 = 0;
  uint8_t f_u_wallace_rca4_and_0_0_b_0 = 0;
  uint8_t f_u_wallace_rca4_and_0_0_y0 = 0;
  uint8_t f_u_wallace_rca4_and_1_0_a_1 = 0;
  uint8_t f_u_wallace_rca4_and_1_0_b_0 = 0;
  uint8_t f_u_wallace_rca4_and_1_0_y0 = 0;
  uint8_t f_u_wallace_rca4_and_0_2_a_0 = 0;
  uint8_t f_u_wallace_rca4_and_0_2_b_2 = 0;
  uint8_t f_u_wallace_rca4_and_0_2_y0 = 0;
  uint8_t f_u_wallace_rca4_and_2_3_a_2 = 0;
  uint8_t f_u_wallace_rca4_and_2_3_b_3 = 0;
  uint8_t f_u_wallace_rca4_and_2_3_y0 = 0;
  uint8_t f_u_wallace_rca4_and_0_1_a_0 = 0;
  uint8_t f_u_wallace_rca4_and_0_1_b_1 = 0;
  uint8_t f_u_wallace_rca4_and_0_1_y0 = 0;
  uint8_t f_u_wallace_rca4_and_3_3_a_3 = 0;
  uint8_t f_u_wallace_rca4_and_3_3_b_3 = 0;
  uint8_t f_u_wallace_rca4_and_3_3_y0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_ha_f_u_wallace_rca4_and_1_0_y0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_ha_f_u_wallace_rca4_and_0_1_y0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_ha_y0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_ha_y1 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa1_f_u_wallace_rca4_and_0_2_y0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa1_f_u_wallace_rca4_ha0_y0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa1_y0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa1_y1 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa1_f_u_wallace_rca4_u_rca6_ha_y1 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa1_y2 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa1_y3 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa1_y4 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa2_f_u_wallace_rca4_fa0_y2 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa2_f_u_wallace_rca4_ha1_y0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa2_y0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa2_y1 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa2_f_u_wallace_rca4_u_rca6_fa1_y4 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa2_y2 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa2_y3 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa2_y4 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa3_f_u_wallace_rca4_fa1_y2 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa3_f_u_wallace_rca4_ha2_y0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa3_y0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa3_y1 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa3_f_u_wallace_rca4_u_rca6_fa2_y4 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa3_y2 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa3_y3 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa3_y4 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa4_f_u_wallace_rca4_and_2_3_y0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa4_f_u_wallace_rca4_fa2_y2 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa4_y0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa4_y1 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa4_f_u_wallace_rca4_u_rca6_fa3_y4 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa4_y2 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa4_y3 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa4_y4 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa5_f_u_wallace_rca4_fa2_y4 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa5_f_u_wallace_rca4_and_3_3_y0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa5_y0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa5_y1 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa5_f_u_wallace_rca4_u_rca6_fa4_y4 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa5_y2 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa5_y3 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa5_y4 = 0;

  a_0 = ((a >> 0) & 0x01);
  a_1 = ((a >> 1) & 0x01);
  a_2 = ((a >> 2) & 0x01);
  a_3 = ((a >> 3) & 0x01);
  b_0 = ((b >> 0) & 0x01);
  b_1 = ((b >> 1) & 0x01);
  b_2 = ((b >> 2) & 0x01);
  b_3 = ((b >> 3) & 0x01);
  f_u_wallace_rca4_and_2_0_a_2 = a_2;
  f_u_wallace_rca4_and_2_0_b_0 = b_0;
  f_u_wallace_rca4_and_2_0_y0 = f_u_wallace_rca4_and_2_0_a_2 & f_u_wallace_rca4_and_2_0_b_0;
  f_u_wallace_rca4_and_1_1_a_1 = a_1;
  f_u_wallace_rca4_and_1_1_b_1 = b_1;
  f_u_wallace_rca4_and_1_1_y0 = f_u_wallace_rca4_and_1_1_a_1 & f_u_wallace_rca4_and_1_1_b_1;
  f_u_wallace_rca4_ha0_f_u_wallace_rca4_and_2_0_y0 = ((f_u_wallace_rca4_and_2_0_y0 >> 0) & 0x01);
  f_u_wallace_rca4_ha0_f_u_wallace_rca4_and_1_1_y0 = ((f_u_wallace_rca4_and_1_1_y0 >> 0) & 0x01);
  f_u_wallace_rca4_ha0_y0 = f_u_wallace_rca4_ha0_f_u_wallace_rca4_and_2_0_y0 ^ f_u_wallace_rca4_ha0_f_u_wallace_rca4_and_1_1_y0;
  f_u_wallace_rca4_ha0_y1 = f_u_wallace_rca4_ha0_f_u_wallace_rca4_and_2_0_y0 & f_u_wallace_rca4_ha0_f_u_wallace_rca4_and_1_1_y0;
  f_u_wallace_rca4_and_3_0_a_3 = a_3;
  f_u_wallace_rca4_and_3_0_b_0 = b_0;
  f_u_wallace_rca4_and_3_0_y0 = f_u_wallace_rca4_and_3_0_a_3 & f_u_wallace_rca4_and_3_0_b_0;
  f_u_wallace_rca4_and_2_1_a_2 = a_2;
  f_u_wallace_rca4_and_2_1_b_1 = b_1;
  f_u_wallace_rca4_and_2_1_y0 = f_u_wallace_rca4_and_2_1_a_2 & f_u_wallace_rca4_and_2_1_b_1;
  f_u_wallace_rca4_fa0_f_u_wallace_rca4_ha0_y1 = ((f_u_wallace_rca4_ha0_y1 >> 0) & 0x01);
  f_u_wallace_rca4_fa0_f_u_wallace_rca4_and_3_0_y0 = ((f_u_wallace_rca4_and_3_0_y0 >> 0) & 0x01);
  f_u_wallace_rca4_fa0_f_u_wallace_rca4_and_2_1_y0 = ((f_u_wallace_rca4_and_2_1_y0 >> 0) & 0x01);
  f_u_wallace_rca4_fa0_y0 = f_u_wallace_rca4_fa0_f_u_wallace_rca4_ha0_y1 ^ f_u_wallace_rca4_fa0_f_u_wallace_rca4_and_3_0_y0;
  f_u_wallace_rca4_fa0_y1 = f_u_wallace_rca4_fa0_f_u_wallace_rca4_ha0_y1 & f_u_wallace_rca4_fa0_f_u_wallace_rca4_and_3_0_y0;
  f_u_wallace_rca4_fa0_y2 = f_u_wallace_rca4_fa0_y0 ^ f_u_wallace_rca4_fa0_f_u_wallace_rca4_and_2_1_y0;
  f_u_wallace_rca4_fa0_y3 = f_u_wallace_rca4_fa0_y0 & f_u_wallace_rca4_fa0_f_u_wallace_rca4_and_2_1_y0;
  f_u_wallace_rca4_fa0_y4 = f_u_wallace_rca4_fa0_y1 | f_u_wallace_rca4_fa0_y3;
  f_u_wallace_rca4_and_3_1_a_3 = a_3;
  f_u_wallace_rca4_and_3_1_b_1 = b_1;
  f_u_wallace_rca4_and_3_1_y0 = f_u_wallace_rca4_and_3_1_a_3 & f_u_wallace_rca4_and_3_1_b_1;
  f_u_wallace_rca4_and_2_2_a_2 = a_2;
  f_u_wallace_rca4_and_2_2_b_2 = b_2;
  f_u_wallace_rca4_and_2_2_y0 = f_u_wallace_rca4_and_2_2_a_2 & f_u_wallace_rca4_and_2_2_b_2;
  f_u_wallace_rca4_fa1_f_u_wallace_rca4_fa0_y4 = ((f_u_wallace_rca4_fa0_y4 >> 0) & 0x01);
  f_u_wallace_rca4_fa1_f_u_wallace_rca4_and_3_1_y0 = ((f_u_wallace_rca4_and_3_1_y0 >> 0) & 0x01);
  f_u_wallace_rca4_fa1_f_u_wallace_rca4_and_2_2_y0 = ((f_u_wallace_rca4_and_2_2_y0 >> 0) & 0x01);
  f_u_wallace_rca4_fa1_y0 = f_u_wallace_rca4_fa1_f_u_wallace_rca4_fa0_y4 ^ f_u_wallace_rca4_fa1_f_u_wallace_rca4_and_3_1_y0;
  f_u_wallace_rca4_fa1_y1 = f_u_wallace_rca4_fa1_f_u_wallace_rca4_fa0_y4 & f_u_wallace_rca4_fa1_f_u_wallace_rca4_and_3_1_y0;
  f_u_wallace_rca4_fa1_y2 = f_u_wallace_rca4_fa1_y0 ^ f_u_wallace_rca4_fa1_f_u_wallace_rca4_and_2_2_y0;
  f_u_wallace_rca4_fa1_y3 = f_u_wallace_rca4_fa1_y0 & f_u_wallace_rca4_fa1_f_u_wallace_rca4_and_2_2_y0;
  f_u_wallace_rca4_fa1_y4 = f_u_wallace_rca4_fa1_y1 | f_u_wallace_rca4_fa1_y3;
  f_u_wallace_rca4_and_1_2_a_1 = a_1;
  f_u_wallace_rca4_and_1_2_b_2 = b_2;
  f_u_wallace_rca4_and_1_2_y0 = f_u_wallace_rca4_and_1_2_a_1 & f_u_wallace_rca4_and_1_2_b_2;
  f_u_wallace_rca4_and_0_3_a_0 = a_0;
  f_u_wallace_rca4_and_0_3_b_3 = b_3;
  f_u_wallace_rca4_and_0_3_y0 = f_u_wallace_rca4_and_0_3_a_0 & f_u_wallace_rca4_and_0_3_b_3;
  f_u_wallace_rca4_ha1_f_u_wallace_rca4_and_1_2_y0 = ((f_u_wallace_rca4_and_1_2_y0 >> 0) & 0x01);
  f_u_wallace_rca4_ha1_f_u_wallace_rca4_and_0_3_y0 = ((f_u_wallace_rca4_and_0_3_y0 >> 0) & 0x01);
  f_u_wallace_rca4_ha1_y0 = f_u_wallace_rca4_ha1_f_u_wallace_rca4_and_1_2_y0 ^ f_u_wallace_rca4_ha1_f_u_wallace_rca4_and_0_3_y0;
  f_u_wallace_rca4_ha1_y1 = f_u_wallace_rca4_ha1_f_u_wallace_rca4_and_1_2_y0 & f_u_wallace_rca4_ha1_f_u_wallace_rca4_and_0_3_y0;
  f_u_wallace_rca4_and_1_3_a_1 = a_1;
  f_u_wallace_rca4_and_1_3_b_3 = b_3;
  f_u_wallace_rca4_and_1_3_y0 = f_u_wallace_rca4_and_1_3_a_1 & f_u_wallace_rca4_and_1_3_b_3;
  f_u_wallace_rca4_ha2_f_u_wallace_rca4_ha1_y1 = ((f_u_wallace_rca4_ha1_y1 >> 0) & 0x01);
  f_u_wallace_rca4_ha2_f_u_wallace_rca4_and_1_3_y0 = ((f_u_wallace_rca4_and_1_3_y0 >> 0) & 0x01);
  f_u_wallace_rca4_ha2_y0 = f_u_wallace_rca4_ha2_f_u_wallace_rca4_ha1_y1 ^ f_u_wallace_rca4_ha2_f_u_wallace_rca4_and_1_3_y0;
  f_u_wallace_rca4_ha2_y1 = f_u_wallace_rca4_ha2_f_u_wallace_rca4_ha1_y1 & f_u_wallace_rca4_ha2_f_u_wallace_rca4_and_1_3_y0;
  f_u_wallace_rca4_and_3_2_a_3 = a_3;
  f_u_wallace_rca4_and_3_2_b_2 = b_2;
  f_u_wallace_rca4_and_3_2_y0 = f_u_wallace_rca4_and_3_2_a_3 & f_u_wallace_rca4_and_3_2_b_2;
  f_u_wallace_rca4_fa2_f_u_wallace_rca4_ha2_y1 = ((f_u_wallace_rca4_ha2_y1 >> 0) & 0x01);
  f_u_wallace_rca4_fa2_f_u_wallace_rca4_fa1_y4 = ((f_u_wallace_rca4_fa1_y4 >> 0) & 0x01);
  f_u_wallace_rca4_fa2_f_u_wallace_rca4_and_3_2_y0 = ((f_u_wallace_rca4_and_3_2_y0 >> 0) & 0x01);
  f_u_wallace_rca4_fa2_y0 = f_u_wallace_rca4_fa2_f_u_wallace_rca4_ha2_y1 ^ f_u_wallace_rca4_fa2_f_u_wallace_rca4_fa1_y4;
  f_u_wallace_rca4_fa2_y1 = f_u_wallace_rca4_fa2_f_u_wallace_rca4_ha2_y1 & f_u_wallace_rca4_fa2_f_u_wallace_rca4_fa1_y4;
  f_u_wallace_rca4_fa2_y2 = f_u_wallace_rca4_fa2_y0 ^ f_u_wallace_rca4_fa2_f_u_wallace_rca4_and_3_2_y0;
  f_u_wallace_rca4_fa2_y3 = f_u_wallace_rca4_fa2_y0 & f_u_wallace_rca4_fa2_f_u_wallace_rca4_and_3_2_y0;
  f_u_wallace_rca4_fa2_y4 = f_u_wallace_rca4_fa2_y1 | f_u_wallace_rca4_fa2_y3;
  f_u_wallace_rca4_and_0_0_a_0 = a_0;
  f_u_wallace_rca4_and_0_0_b_0 = b_0;
  f_u_wallace_rca4_and_0_0_y0 = f_u_wallace_rca4_and_0_0_a_0 & f_u_wallace_rca4_and_0_0_b_0;
  f_u_wallace_rca4_and_1_0_a_1 = a_1;
  f_u_wallace_rca4_and_1_0_b_0 = b_0;
  f_u_wallace_rca4_and_1_0_y0 = f_u_wallace_rca4_and_1_0_a_1 & f_u_wallace_rca4_and_1_0_b_0;
  f_u_wallace_rca4_and_0_2_a_0 = a_0;
  f_u_wallace_rca4_and_0_2_b_2 = b_2;
  f_u_wallace_rca4_and_0_2_y0 = f_u_wallace_rca4_and_0_2_a_0 & f_u_wallace_rca4_and_0_2_b_2;
  f_u_wallace_rca4_and_2_3_a_2 = a_2;
  f_u_wallace_rca4_and_2_3_b_3 = b_3;
  f_u_wallace_rca4_and_2_3_y0 = f_u_wallace_rca4_and_2_3_a_2 & f_u_wallace_rca4_and_2_3_b_3;
  f_u_wallace_rca4_and_0_1_a_0 = a_0;
  f_u_wallace_rca4_and_0_1_b_1 = b_1;
  f_u_wallace_rca4_and_0_1_y0 = f_u_wallace_rca4_and_0_1_a_0 & f_u_wallace_rca4_and_0_1_b_1;
  f_u_wallace_rca4_and_3_3_a_3 = a_3;
  f_u_wallace_rca4_and_3_3_b_3 = b_3;
  f_u_wallace_rca4_and_3_3_y0 = f_u_wallace_rca4_and_3_3_a_3 & f_u_wallace_rca4_and_3_3_b_3;
  f_u_wallace_rca4_u_rca6_ha_f_u_wallace_rca4_and_1_0_y0 = ((f_u_wallace_rca4_and_1_0_y0 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_ha_f_u_wallace_rca4_and_0_1_y0 = ((f_u_wallace_rca4_and_0_1_y0 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_ha_y0 = f_u_wallace_rca4_u_rca6_ha_f_u_wallace_rca4_and_1_0_y0 ^ f_u_wallace_rca4_u_rca6_ha_f_u_wallace_rca4_and_0_1_y0;
  f_u_wallace_rca4_u_rca6_ha_y1 = f_u_wallace_rca4_u_rca6_ha_f_u_wallace_rca4_and_1_0_y0 & f_u_wallace_rca4_u_rca6_ha_f_u_wallace_rca4_and_0_1_y0;
  f_u_wallace_rca4_u_rca6_fa1_f_u_wallace_rca4_and_0_2_y0 = ((f_u_wallace_rca4_and_0_2_y0 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa1_f_u_wallace_rca4_ha0_y0 = ((f_u_wallace_rca4_ha0_y0 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa1_f_u_wallace_rca4_u_rca6_ha_y1 = ((f_u_wallace_rca4_u_rca6_ha_y1 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa1_y0 = f_u_wallace_rca4_u_rca6_fa1_f_u_wallace_rca4_and_0_2_y0 ^ f_u_wallace_rca4_u_rca6_fa1_f_u_wallace_rca4_ha0_y0;
  f_u_wallace_rca4_u_rca6_fa1_y1 = f_u_wallace_rca4_u_rca6_fa1_f_u_wallace_rca4_and_0_2_y0 & f_u_wallace_rca4_u_rca6_fa1_f_u_wallace_rca4_ha0_y0;
  f_u_wallace_rca4_u_rca6_fa1_y2 = f_u_wallace_rca4_u_rca6_fa1_y0 ^ f_u_wallace_rca4_u_rca6_fa1_f_u_wallace_rca4_u_rca6_ha_y1;
  f_u_wallace_rca4_u_rca6_fa1_y3 = f_u_wallace_rca4_u_rca6_fa1_y0 & f_u_wallace_rca4_u_rca6_fa1_f_u_wallace_rca4_u_rca6_ha_y1;
  f_u_wallace_rca4_u_rca6_fa1_y4 = f_u_wallace_rca4_u_rca6_fa1_y1 | f_u_wallace_rca4_u_rca6_fa1_y3;
  f_u_wallace_rca4_u_rca6_fa2_f_u_wallace_rca4_fa0_y2 = ((f_u_wallace_rca4_fa0_y2 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa2_f_u_wallace_rca4_ha1_y0 = ((f_u_wallace_rca4_ha1_y0 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa2_f_u_wallace_rca4_u_rca6_fa1_y4 = ((f_u_wallace_rca4_u_rca6_fa1_y4 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa2_y0 = f_u_wallace_rca4_u_rca6_fa2_f_u_wallace_rca4_fa0_y2 ^ f_u_wallace_rca4_u_rca6_fa2_f_u_wallace_rca4_ha1_y0;
  f_u_wallace_rca4_u_rca6_fa2_y1 = f_u_wallace_rca4_u_rca6_fa2_f_u_wallace_rca4_fa0_y2 & f_u_wallace_rca4_u_rca6_fa2_f_u_wallace_rca4_ha1_y0;
  f_u_wallace_rca4_u_rca6_fa2_y2 = f_u_wallace_rca4_u_rca6_fa2_y0 ^ f_u_wallace_rca4_u_rca6_fa2_f_u_wallace_rca4_u_rca6_fa1_y4;
  f_u_wallace_rca4_u_rca6_fa2_y3 = f_u_wallace_rca4_u_rca6_fa2_y0 & f_u_wallace_rca4_u_rca6_fa2_f_u_wallace_rca4_u_rca6_fa1_y4;
  f_u_wallace_rca4_u_rca6_fa2_y4 = f_u_wallace_rca4_u_rca6_fa2_y1 | f_u_wallace_rca4_u_rca6_fa2_y3;
  f_u_wallace_rca4_u_rca6_fa3_f_u_wallace_rca4_fa1_y2 = ((f_u_wallace_rca4_fa1_y2 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa3_f_u_wallace_rca4_ha2_y0 = ((f_u_wallace_rca4_ha2_y0 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa3_f_u_wallace_rca4_u_rca6_fa2_y4 = ((f_u_wallace_rca4_u_rca6_fa2_y4 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa3_y0 = f_u_wallace_rca4_u_rca6_fa3_f_u_wallace_rca4_fa1_y2 ^ f_u_wallace_rca4_u_rca6_fa3_f_u_wallace_rca4_ha2_y0;
  f_u_wallace_rca4_u_rca6_fa3_y1 = f_u_wallace_rca4_u_rca6_fa3_f_u_wallace_rca4_fa1_y2 & f_u_wallace_rca4_u_rca6_fa3_f_u_wallace_rca4_ha2_y0;
  f_u_wallace_rca4_u_rca6_fa3_y2 = f_u_wallace_rca4_u_rca6_fa3_y0 ^ f_u_wallace_rca4_u_rca6_fa3_f_u_wallace_rca4_u_rca6_fa2_y4;
  f_u_wallace_rca4_u_rca6_fa3_y3 = f_u_wallace_rca4_u_rca6_fa3_y0 & f_u_wallace_rca4_u_rca6_fa3_f_u_wallace_rca4_u_rca6_fa2_y4;
  f_u_wallace_rca4_u_rca6_fa3_y4 = f_u_wallace_rca4_u_rca6_fa3_y1 | f_u_wallace_rca4_u_rca6_fa3_y3;
  f_u_wallace_rca4_u_rca6_fa4_f_u_wallace_rca4_and_2_3_y0 = ((f_u_wallace_rca4_and_2_3_y0 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa4_f_u_wallace_rca4_fa2_y2 = ((f_u_wallace_rca4_fa2_y2 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa4_f_u_wallace_rca4_u_rca6_fa3_y4 = ((f_u_wallace_rca4_u_rca6_fa3_y4 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa4_y0 = f_u_wallace_rca4_u_rca6_fa4_f_u_wallace_rca4_and_2_3_y0 ^ f_u_wallace_rca4_u_rca6_fa4_f_u_wallace_rca4_fa2_y2;
  f_u_wallace_rca4_u_rca6_fa4_y1 = f_u_wallace_rca4_u_rca6_fa4_f_u_wallace_rca4_and_2_3_y0 & f_u_wallace_rca4_u_rca6_fa4_f_u_wallace_rca4_fa2_y2;
  f_u_wallace_rca4_u_rca6_fa4_y2 = f_u_wallace_rca4_u_rca6_fa4_y0 ^ f_u_wallace_rca4_u_rca6_fa4_f_u_wallace_rca4_u_rca6_fa3_y4;
  f_u_wallace_rca4_u_rca6_fa4_y3 = f_u_wallace_rca4_u_rca6_fa4_y0 & f_u_wallace_rca4_u_rca6_fa4_f_u_wallace_rca4_u_rca6_fa3_y4;
  f_u_wallace_rca4_u_rca6_fa4_y4 = f_u_wallace_rca4_u_rca6_fa4_y1 | f_u_wallace_rca4_u_rca6_fa4_y3;
  f_u_wallace_rca4_u_rca6_fa5_f_u_wallace_rca4_fa2_y4 = ((f_u_wallace_rca4_fa2_y4 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa5_f_u_wallace_rca4_and_3_3_y0 = ((f_u_wallace_rca4_and_3_3_y0 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa5_f_u_wallace_rca4_u_rca6_fa4_y4 = ((f_u_wallace_rca4_u_rca6_fa4_y4 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa5_y0 = f_u_wallace_rca4_u_rca6_fa5_f_u_wallace_rca4_fa2_y4 ^ f_u_wallace_rca4_u_rca6_fa5_f_u_wallace_rca4_and_3_3_y0;
  f_u_wallace_rca4_u_rca6_fa5_y1 = f_u_wallace_rca4_u_rca6_fa5_f_u_wallace_rca4_fa2_y4 & f_u_wallace_rca4_u_rca6_fa5_f_u_wallace_rca4_and_3_3_y0;
  f_u_wallace_rca4_u_rca6_fa5_y2 = f_u_wallace_rca4_u_rca6_fa5_y0 ^ f_u_wallace_rca4_u_rca6_fa5_f_u_wallace_rca4_u_rca6_fa4_y4;
  f_u_wallace_rca4_u_rca6_fa5_y3 = f_u_wallace_rca4_u_rca6_fa5_y0 & f_u_wallace_rca4_u_rca6_fa5_f_u_wallace_rca4_u_rca6_fa4_y4;
  f_u_wallace_rca4_u_rca6_fa5_y4 = f_u_wallace_rca4_u_rca6_fa5_y1 | f_u_wallace_rca4_u_rca6_fa5_y3;

  out |= (f_u_wallace_rca4_and_0_0_y0 & 0x01) << 0;
  out |= (f_u_wallace_rca4_u_rca6_ha_y0 & 0x01) << 1;
  out |= (f_u_wallace_rca4_u_rca6_fa1_y2 & 0x01) << 2;
  out |= (f_u_wallace_rca4_u_rca6_fa2_y2 & 0x01) << 3;
  out |= (f_u_wallace_rca4_u_rca6_fa3_y2 & 0x01) << 4;
  out |= (f_u_wallace_rca4_u_rca6_fa4_y2 & 0x01) << 5;
  out |= (f_u_wallace_rca4_u_rca6_fa5_y2 & 0x01) << 6;
  out |= (f_u_wallace_rca4_u_rca6_fa5_y4 & 0x01) << 7;
  return out;
}

#include <assert.h>
int main(){
  for (int i = 0; i < 16; i++){
    for (int j = 0; j < 16; j++){
      assert((i * j) == f_u_wallace_rca4(i,j));
    }
  }
  return 0;
}
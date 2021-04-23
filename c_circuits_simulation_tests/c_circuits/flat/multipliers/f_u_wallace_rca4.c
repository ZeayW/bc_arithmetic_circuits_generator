#include <stdio.h>
#include <stdint.h>

uint64_t f_u_wallace_rca4(uint64_t a, uint64_t b){
  uint8_t f_u_wallace_rca4_out = 0;
  uint8_t f_u_wallace_rca4_and_2_0 = 0;
  uint8_t f_u_wallace_rca4_and_1_1 = 0;
  uint8_t f_u_wallace_rca4_ha0_xor0 = 0;
  uint8_t f_u_wallace_rca4_ha0_and0 = 0;
  uint8_t f_u_wallace_rca4_and_3_0 = 0;
  uint8_t f_u_wallace_rca4_and_2_1 = 0;
  uint8_t f_u_wallace_rca4_fa0_xor0 = 0;
  uint8_t f_u_wallace_rca4_fa0_and0 = 0;
  uint8_t f_u_wallace_rca4_fa0_xor1 = 0;
  uint8_t f_u_wallace_rca4_fa0_and1 = 0;
  uint8_t f_u_wallace_rca4_fa0_or0 = 0;
  uint8_t f_u_wallace_rca4_and_3_1 = 0;
  uint8_t f_u_wallace_rca4_and_2_2 = 0;
  uint8_t f_u_wallace_rca4_fa1_xor0 = 0;
  uint8_t f_u_wallace_rca4_fa1_and0 = 0;
  uint8_t f_u_wallace_rca4_fa1_xor1 = 0;
  uint8_t f_u_wallace_rca4_fa1_and1 = 0;
  uint8_t f_u_wallace_rca4_fa1_or0 = 0;
  uint8_t f_u_wallace_rca4_and_1_2 = 0;
  uint8_t f_u_wallace_rca4_and_0_3 = 0;
  uint8_t f_u_wallace_rca4_ha1_xor0 = 0;
  uint8_t f_u_wallace_rca4_ha1_and0 = 0;
  uint8_t f_u_wallace_rca4_and_1_3 = 0;
  uint8_t f_u_wallace_rca4_ha2_xor0 = 0;
  uint8_t f_u_wallace_rca4_ha2_and0 = 0;
  uint8_t f_u_wallace_rca4_and_3_2 = 0;
  uint8_t f_u_wallace_rca4_fa2_xor0 = 0;
  uint8_t f_u_wallace_rca4_fa2_and0 = 0;
  uint8_t f_u_wallace_rca4_fa2_xor1 = 0;
  uint8_t f_u_wallace_rca4_fa2_and1 = 0;
  uint8_t f_u_wallace_rca4_fa2_or0 = 0;
  uint8_t f_u_wallace_rca4_and_0_0 = 0;
  uint8_t f_u_wallace_rca4_and_1_0 = 0;
  uint8_t f_u_wallace_rca4_and_0_2 = 0;
  uint8_t f_u_wallace_rca4_and_2_3 = 0;
  uint8_t f_u_wallace_rca4_and_0_1 = 0;
  uint8_t f_u_wallace_rca4_and_3_3 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_ha_xor0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_ha_and0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa1_xor0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa1_and0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa1_xor1 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa1_and1 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa1_or0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa2_xor0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa2_and0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa2_xor1 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa2_and1 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa2_or0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa3_xor0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa3_and0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa3_xor1 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa3_and1 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa3_or0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa4_xor0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa4_and0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa4_xor1 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa4_and1 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa4_or0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa5_xor0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa5_and0 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa5_xor1 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa5_and1 = 0;
  uint8_t f_u_wallace_rca4_u_rca6_fa5_or0 = 0;

  f_u_wallace_rca4_and_2_0 = ((a >> 2) & 0x01) & ((b >> 0) & 0x01);
  f_u_wallace_rca4_and_1_1 = ((a >> 1) & 0x01) & ((b >> 1) & 0x01);
  f_u_wallace_rca4_ha0_xor0 = ((f_u_wallace_rca4_and_2_0 >> 0) & 0x01) ^ ((f_u_wallace_rca4_and_1_1 >> 0) & 0x01);
  f_u_wallace_rca4_ha0_and0 = ((f_u_wallace_rca4_and_2_0 >> 0) & 0x01) & ((f_u_wallace_rca4_and_1_1 >> 0) & 0x01);
  f_u_wallace_rca4_and_3_0 = ((a >> 3) & 0x01) & ((b >> 0) & 0x01);
  f_u_wallace_rca4_and_2_1 = ((a >> 2) & 0x01) & ((b >> 1) & 0x01);
  f_u_wallace_rca4_fa0_xor0 = ((f_u_wallace_rca4_ha0_and0 >> 0) & 0x01) ^ ((f_u_wallace_rca4_and_3_0 >> 0) & 0x01);
  f_u_wallace_rca4_fa0_and0 = ((f_u_wallace_rca4_ha0_and0 >> 0) & 0x01) & ((f_u_wallace_rca4_and_3_0 >> 0) & 0x01);
  f_u_wallace_rca4_fa0_xor1 = ((f_u_wallace_rca4_fa0_xor0 >> 0) & 0x01) ^ ((f_u_wallace_rca4_and_2_1 >> 0) & 0x01);
  f_u_wallace_rca4_fa0_and1 = ((f_u_wallace_rca4_fa0_xor0 >> 0) & 0x01) & ((f_u_wallace_rca4_and_2_1 >> 0) & 0x01);
  f_u_wallace_rca4_fa0_or0 = ((f_u_wallace_rca4_fa0_and0 >> 0) & 0x01) | ((f_u_wallace_rca4_fa0_and1 >> 0) & 0x01);
  f_u_wallace_rca4_and_3_1 = ((a >> 3) & 0x01) & ((b >> 1) & 0x01);
  f_u_wallace_rca4_and_2_2 = ((a >> 2) & 0x01) & ((b >> 2) & 0x01);
  f_u_wallace_rca4_fa1_xor0 = ((f_u_wallace_rca4_fa0_or0 >> 0) & 0x01) ^ ((f_u_wallace_rca4_and_3_1 >> 0) & 0x01);
  f_u_wallace_rca4_fa1_and0 = ((f_u_wallace_rca4_fa0_or0 >> 0) & 0x01) & ((f_u_wallace_rca4_and_3_1 >> 0) & 0x01);
  f_u_wallace_rca4_fa1_xor1 = ((f_u_wallace_rca4_fa1_xor0 >> 0) & 0x01) ^ ((f_u_wallace_rca4_and_2_2 >> 0) & 0x01);
  f_u_wallace_rca4_fa1_and1 = ((f_u_wallace_rca4_fa1_xor0 >> 0) & 0x01) & ((f_u_wallace_rca4_and_2_2 >> 0) & 0x01);
  f_u_wallace_rca4_fa1_or0 = ((f_u_wallace_rca4_fa1_and0 >> 0) & 0x01) | ((f_u_wallace_rca4_fa1_and1 >> 0) & 0x01);
  f_u_wallace_rca4_and_1_2 = ((a >> 1) & 0x01) & ((b >> 2) & 0x01);
  f_u_wallace_rca4_and_0_3 = ((a >> 0) & 0x01) & ((b >> 3) & 0x01);
  f_u_wallace_rca4_ha1_xor0 = ((f_u_wallace_rca4_and_1_2 >> 0) & 0x01) ^ ((f_u_wallace_rca4_and_0_3 >> 0) & 0x01);
  f_u_wallace_rca4_ha1_and0 = ((f_u_wallace_rca4_and_1_2 >> 0) & 0x01) & ((f_u_wallace_rca4_and_0_3 >> 0) & 0x01);
  f_u_wallace_rca4_and_1_3 = ((a >> 1) & 0x01) & ((b >> 3) & 0x01);
  f_u_wallace_rca4_ha2_xor0 = ((f_u_wallace_rca4_ha1_and0 >> 0) & 0x01) ^ ((f_u_wallace_rca4_and_1_3 >> 0) & 0x01);
  f_u_wallace_rca4_ha2_and0 = ((f_u_wallace_rca4_ha1_and0 >> 0) & 0x01) & ((f_u_wallace_rca4_and_1_3 >> 0) & 0x01);
  f_u_wallace_rca4_and_3_2 = ((a >> 3) & 0x01) & ((b >> 2) & 0x01);
  f_u_wallace_rca4_fa2_xor0 = ((f_u_wallace_rca4_ha2_and0 >> 0) & 0x01) ^ ((f_u_wallace_rca4_fa1_or0 >> 0) & 0x01);
  f_u_wallace_rca4_fa2_and0 = ((f_u_wallace_rca4_ha2_and0 >> 0) & 0x01) & ((f_u_wallace_rca4_fa1_or0 >> 0) & 0x01);
  f_u_wallace_rca4_fa2_xor1 = ((f_u_wallace_rca4_fa2_xor0 >> 0) & 0x01) ^ ((f_u_wallace_rca4_and_3_2 >> 0) & 0x01);
  f_u_wallace_rca4_fa2_and1 = ((f_u_wallace_rca4_fa2_xor0 >> 0) & 0x01) & ((f_u_wallace_rca4_and_3_2 >> 0) & 0x01);
  f_u_wallace_rca4_fa2_or0 = ((f_u_wallace_rca4_fa2_and0 >> 0) & 0x01) | ((f_u_wallace_rca4_fa2_and1 >> 0) & 0x01);
  f_u_wallace_rca4_and_0_0 = ((a >> 0) & 0x01) & ((b >> 0) & 0x01);
  f_u_wallace_rca4_and_1_0 = ((a >> 1) & 0x01) & ((b >> 0) & 0x01);
  f_u_wallace_rca4_and_0_2 = ((a >> 0) & 0x01) & ((b >> 2) & 0x01);
  f_u_wallace_rca4_and_2_3 = ((a >> 2) & 0x01) & ((b >> 3) & 0x01);
  f_u_wallace_rca4_and_0_1 = ((a >> 0) & 0x01) & ((b >> 1) & 0x01);
  f_u_wallace_rca4_and_3_3 = ((a >> 3) & 0x01) & ((b >> 3) & 0x01);
  f_u_wallace_rca4_u_rca6_ha_xor0 = ((f_u_wallace_rca4_and_1_0 >> 0) & 0x01) ^ ((f_u_wallace_rca4_and_0_1 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_ha_and0 = ((f_u_wallace_rca4_and_1_0 >> 0) & 0x01) & ((f_u_wallace_rca4_and_0_1 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa1_xor0 = ((f_u_wallace_rca4_and_0_2 >> 0) & 0x01) ^ ((f_u_wallace_rca4_ha0_xor0 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa1_and0 = ((f_u_wallace_rca4_and_0_2 >> 0) & 0x01) & ((f_u_wallace_rca4_ha0_xor0 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa1_xor1 = ((f_u_wallace_rca4_u_rca6_fa1_xor0 >> 0) & 0x01) ^ ((f_u_wallace_rca4_u_rca6_ha_and0 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa1_and1 = ((f_u_wallace_rca4_u_rca6_fa1_xor0 >> 0) & 0x01) & ((f_u_wallace_rca4_u_rca6_ha_and0 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa1_or0 = ((f_u_wallace_rca4_u_rca6_fa1_and0 >> 0) & 0x01) | ((f_u_wallace_rca4_u_rca6_fa1_and1 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa2_xor0 = ((f_u_wallace_rca4_fa0_xor1 >> 0) & 0x01) ^ ((f_u_wallace_rca4_ha1_xor0 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa2_and0 = ((f_u_wallace_rca4_fa0_xor1 >> 0) & 0x01) & ((f_u_wallace_rca4_ha1_xor0 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa2_xor1 = ((f_u_wallace_rca4_u_rca6_fa2_xor0 >> 0) & 0x01) ^ ((f_u_wallace_rca4_u_rca6_fa1_or0 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa2_and1 = ((f_u_wallace_rca4_u_rca6_fa2_xor0 >> 0) & 0x01) & ((f_u_wallace_rca4_u_rca6_fa1_or0 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa2_or0 = ((f_u_wallace_rca4_u_rca6_fa2_and0 >> 0) & 0x01) | ((f_u_wallace_rca4_u_rca6_fa2_and1 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa3_xor0 = ((f_u_wallace_rca4_fa1_xor1 >> 0) & 0x01) ^ ((f_u_wallace_rca4_ha2_xor0 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa3_and0 = ((f_u_wallace_rca4_fa1_xor1 >> 0) & 0x01) & ((f_u_wallace_rca4_ha2_xor0 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa3_xor1 = ((f_u_wallace_rca4_u_rca6_fa3_xor0 >> 0) & 0x01) ^ ((f_u_wallace_rca4_u_rca6_fa2_or0 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa3_and1 = ((f_u_wallace_rca4_u_rca6_fa3_xor0 >> 0) & 0x01) & ((f_u_wallace_rca4_u_rca6_fa2_or0 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa3_or0 = ((f_u_wallace_rca4_u_rca6_fa3_and0 >> 0) & 0x01) | ((f_u_wallace_rca4_u_rca6_fa3_and1 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa4_xor0 = ((f_u_wallace_rca4_and_2_3 >> 0) & 0x01) ^ ((f_u_wallace_rca4_fa2_xor1 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa4_and0 = ((f_u_wallace_rca4_and_2_3 >> 0) & 0x01) & ((f_u_wallace_rca4_fa2_xor1 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa4_xor1 = ((f_u_wallace_rca4_u_rca6_fa4_xor0 >> 0) & 0x01) ^ ((f_u_wallace_rca4_u_rca6_fa3_or0 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa4_and1 = ((f_u_wallace_rca4_u_rca6_fa4_xor0 >> 0) & 0x01) & ((f_u_wallace_rca4_u_rca6_fa3_or0 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa4_or0 = ((f_u_wallace_rca4_u_rca6_fa4_and0 >> 0) & 0x01) | ((f_u_wallace_rca4_u_rca6_fa4_and1 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa5_xor0 = ((f_u_wallace_rca4_fa2_or0 >> 0) & 0x01) ^ ((f_u_wallace_rca4_and_3_3 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa5_and0 = ((f_u_wallace_rca4_fa2_or0 >> 0) & 0x01) & ((f_u_wallace_rca4_and_3_3 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa5_xor1 = ((f_u_wallace_rca4_u_rca6_fa5_xor0 >> 0) & 0x01) ^ ((f_u_wallace_rca4_u_rca6_fa4_or0 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa5_and1 = ((f_u_wallace_rca4_u_rca6_fa5_xor0 >> 0) & 0x01) & ((f_u_wallace_rca4_u_rca6_fa4_or0 >> 0) & 0x01);
  f_u_wallace_rca4_u_rca6_fa5_or0 = ((f_u_wallace_rca4_u_rca6_fa5_and0 >> 0) & 0x01) | ((f_u_wallace_rca4_u_rca6_fa5_and1 >> 0) & 0x01);

  f_u_wallace_rca4_out |= ((f_u_wallace_rca4_and_0_0 >> 0) & 0x01) << 0;
  f_u_wallace_rca4_out |= ((f_u_wallace_rca4_u_rca6_ha_xor0 >> 0) & 0x01) << 1;
  f_u_wallace_rca4_out |= ((f_u_wallace_rca4_u_rca6_fa1_xor1 >> 0) & 0x01) << 2;
  f_u_wallace_rca4_out |= ((f_u_wallace_rca4_u_rca6_fa2_xor1 >> 0) & 0x01) << 3;
  f_u_wallace_rca4_out |= ((f_u_wallace_rca4_u_rca6_fa3_xor1 >> 0) & 0x01) << 4;
  f_u_wallace_rca4_out |= ((f_u_wallace_rca4_u_rca6_fa4_xor1 >> 0) & 0x01) << 5;
  f_u_wallace_rca4_out |= ((f_u_wallace_rca4_u_rca6_fa5_xor1 >> 0) & 0x01) << 6;
  f_u_wallace_rca4_out |= ((f_u_wallace_rca4_u_rca6_fa5_or0 >> 0) & 0x01) << 7;
  return f_u_wallace_rca4_out;
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
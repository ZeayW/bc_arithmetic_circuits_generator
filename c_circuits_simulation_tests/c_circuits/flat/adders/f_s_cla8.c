#include <stdio.h>
#include <stdint.h>

int64_t f_s_cla8(int64_t a, int64_t b){
  uint64_t f_s_cla8_out = 0;
  uint8_t f_s_cla8_pg_logic0_or0 = 0;
  uint8_t f_s_cla8_pg_logic0_and0 = 0;
  uint8_t f_s_cla8_pg_logic0_xor0 = 0;
  uint8_t f_s_cla8_pg_logic1_or0 = 0;
  uint8_t f_s_cla8_pg_logic1_and0 = 0;
  uint8_t f_s_cla8_pg_logic1_xor0 = 0;
  uint8_t f_s_cla8_xor1 = 0;
  uint8_t f_s_cla8_and0 = 0;
  uint8_t f_s_cla8_or0 = 0;
  uint8_t f_s_cla8_pg_logic2_or0 = 0;
  uint8_t f_s_cla8_pg_logic2_and0 = 0;
  uint8_t f_s_cla8_pg_logic2_xor0 = 0;
  uint8_t f_s_cla8_xor2 = 0;
  uint8_t f_s_cla8_and1 = 0;
  uint8_t f_s_cla8_and2 = 0;
  uint8_t f_s_cla8_and3 = 0;
  uint8_t f_s_cla8_and4 = 0;
  uint8_t f_s_cla8_or1 = 0;
  uint8_t f_s_cla8_or2 = 0;
  uint8_t f_s_cla8_pg_logic3_or0 = 0;
  uint8_t f_s_cla8_pg_logic3_and0 = 0;
  uint8_t f_s_cla8_pg_logic3_xor0 = 0;
  uint8_t f_s_cla8_xor3 = 0;
  uint8_t f_s_cla8_and5 = 0;
  uint8_t f_s_cla8_and6 = 0;
  uint8_t f_s_cla8_and7 = 0;
  uint8_t f_s_cla8_and8 = 0;
  uint8_t f_s_cla8_and9 = 0;
  uint8_t f_s_cla8_and10 = 0;
  uint8_t f_s_cla8_and11 = 0;
  uint8_t f_s_cla8_or3 = 0;
  uint8_t f_s_cla8_or4 = 0;
  uint8_t f_s_cla8_or5 = 0;
  uint8_t f_s_cla8_pg_logic4_or0 = 0;
  uint8_t f_s_cla8_pg_logic4_and0 = 0;
  uint8_t f_s_cla8_pg_logic4_xor0 = 0;
  uint8_t f_s_cla8_xor4 = 0;
  uint8_t f_s_cla8_and12 = 0;
  uint8_t f_s_cla8_or6 = 0;
  uint8_t f_s_cla8_pg_logic5_or0 = 0;
  uint8_t f_s_cla8_pg_logic5_and0 = 0;
  uint8_t f_s_cla8_pg_logic5_xor0 = 0;
  uint8_t f_s_cla8_xor5 = 0;
  uint8_t f_s_cla8_and13 = 0;
  uint8_t f_s_cla8_and14 = 0;
  uint8_t f_s_cla8_and15 = 0;
  uint8_t f_s_cla8_or7 = 0;
  uint8_t f_s_cla8_or8 = 0;
  uint8_t f_s_cla8_pg_logic6_or0 = 0;
  uint8_t f_s_cla8_pg_logic6_and0 = 0;
  uint8_t f_s_cla8_pg_logic6_xor0 = 0;
  uint8_t f_s_cla8_xor6 = 0;
  uint8_t f_s_cla8_and16 = 0;
  uint8_t f_s_cla8_and17 = 0;
  uint8_t f_s_cla8_and18 = 0;
  uint8_t f_s_cla8_and19 = 0;
  uint8_t f_s_cla8_and20 = 0;
  uint8_t f_s_cla8_and21 = 0;
  uint8_t f_s_cla8_or9 = 0;
  uint8_t f_s_cla8_or10 = 0;
  uint8_t f_s_cla8_or11 = 0;
  uint8_t f_s_cla8_pg_logic7_or0 = 0;
  uint8_t f_s_cla8_pg_logic7_and0 = 0;
  uint8_t f_s_cla8_pg_logic7_xor0 = 0;
  uint8_t f_s_cla8_xor7 = 0;
  uint8_t f_s_cla8_and22 = 0;
  uint8_t f_s_cla8_and23 = 0;
  uint8_t f_s_cla8_and24 = 0;
  uint8_t f_s_cla8_and25 = 0;
  uint8_t f_s_cla8_and26 = 0;
  uint8_t f_s_cla8_and27 = 0;
  uint8_t f_s_cla8_and28 = 0;
  uint8_t f_s_cla8_and29 = 0;
  uint8_t f_s_cla8_and30 = 0;
  uint8_t f_s_cla8_and31 = 0;
  uint8_t f_s_cla8_or12 = 0;
  uint8_t f_s_cla8_or13 = 0;
  uint8_t f_s_cla8_or14 = 0;
  uint8_t f_s_cla8_or15 = 0;
  uint8_t f_s_cla8_xor8 = 0;
  uint8_t f_s_cla8_xor9 = 0;

  f_s_cla8_pg_logic0_or0 = ((a >> 0) & 0x01) | ((b >> 0) & 0x01);
  f_s_cla8_pg_logic0_and0 = ((a >> 0) & 0x01) & ((b >> 0) & 0x01);
  f_s_cla8_pg_logic0_xor0 = ((a >> 0) & 0x01) ^ ((b >> 0) & 0x01);
  f_s_cla8_pg_logic1_or0 = ((a >> 1) & 0x01) | ((b >> 1) & 0x01);
  f_s_cla8_pg_logic1_and0 = ((a >> 1) & 0x01) & ((b >> 1) & 0x01);
  f_s_cla8_pg_logic1_xor0 = ((a >> 1) & 0x01) ^ ((b >> 1) & 0x01);
  f_s_cla8_xor1 = ((f_s_cla8_pg_logic1_xor0 >> 0) & 0x01) ^ ((f_s_cla8_pg_logic0_and0 >> 0) & 0x01);
  f_s_cla8_and0 = ((f_s_cla8_pg_logic0_and0 >> 0) & 0x01) & ((f_s_cla8_pg_logic1_or0 >> 0) & 0x01);
  f_s_cla8_or0 = ((f_s_cla8_pg_logic1_and0 >> 0) & 0x01) | ((f_s_cla8_and0 >> 0) & 0x01);
  f_s_cla8_pg_logic2_or0 = ((a >> 2) & 0x01) | ((b >> 2) & 0x01);
  f_s_cla8_pg_logic2_and0 = ((a >> 2) & 0x01) & ((b >> 2) & 0x01);
  f_s_cla8_pg_logic2_xor0 = ((a >> 2) & 0x01) ^ ((b >> 2) & 0x01);
  f_s_cla8_xor2 = ((f_s_cla8_pg_logic2_xor0 >> 0) & 0x01) ^ ((f_s_cla8_or0 >> 0) & 0x01);
  f_s_cla8_and1 = ((f_s_cla8_pg_logic2_or0 >> 0) & 0x01) & ((f_s_cla8_pg_logic0_or0 >> 0) & 0x01);
  f_s_cla8_and2 = ((f_s_cla8_pg_logic0_and0 >> 0) & 0x01) & ((f_s_cla8_pg_logic2_or0 >> 0) & 0x01);
  f_s_cla8_and3 = ((f_s_cla8_and2 >> 0) & 0x01) & ((f_s_cla8_pg_logic1_or0 >> 0) & 0x01);
  f_s_cla8_and4 = ((f_s_cla8_pg_logic1_and0 >> 0) & 0x01) & ((f_s_cla8_pg_logic2_or0 >> 0) & 0x01);
  f_s_cla8_or1 = ((f_s_cla8_and3 >> 0) & 0x01) | ((f_s_cla8_and4 >> 0) & 0x01);
  f_s_cla8_or2 = ((f_s_cla8_pg_logic2_and0 >> 0) & 0x01) | ((f_s_cla8_or1 >> 0) & 0x01);
  f_s_cla8_pg_logic3_or0 = ((a >> 3) & 0x01) | ((b >> 3) & 0x01);
  f_s_cla8_pg_logic3_and0 = ((a >> 3) & 0x01) & ((b >> 3) & 0x01);
  f_s_cla8_pg_logic3_xor0 = ((a >> 3) & 0x01) ^ ((b >> 3) & 0x01);
  f_s_cla8_xor3 = ((f_s_cla8_pg_logic3_xor0 >> 0) & 0x01) ^ ((f_s_cla8_or2 >> 0) & 0x01);
  f_s_cla8_and5 = ((f_s_cla8_pg_logic3_or0 >> 0) & 0x01) & ((f_s_cla8_pg_logic1_or0 >> 0) & 0x01);
  f_s_cla8_and6 = ((f_s_cla8_pg_logic0_and0 >> 0) & 0x01) & ((f_s_cla8_pg_logic2_or0 >> 0) & 0x01);
  f_s_cla8_and7 = ((f_s_cla8_pg_logic3_or0 >> 0) & 0x01) & ((f_s_cla8_pg_logic1_or0 >> 0) & 0x01);
  f_s_cla8_and8 = ((f_s_cla8_and6 >> 0) & 0x01) & ((f_s_cla8_and7 >> 0) & 0x01);
  f_s_cla8_and9 = ((f_s_cla8_pg_logic1_and0 >> 0) & 0x01) & ((f_s_cla8_pg_logic3_or0 >> 0) & 0x01);
  f_s_cla8_and10 = ((f_s_cla8_and9 >> 0) & 0x01) & ((f_s_cla8_pg_logic2_or0 >> 0) & 0x01);
  f_s_cla8_and11 = ((f_s_cla8_pg_logic2_and0 >> 0) & 0x01) & ((f_s_cla8_pg_logic3_or0 >> 0) & 0x01);
  f_s_cla8_or3 = ((f_s_cla8_and8 >> 0) & 0x01) | ((f_s_cla8_and11 >> 0) & 0x01);
  f_s_cla8_or4 = ((f_s_cla8_and10 >> 0) & 0x01) | ((f_s_cla8_or3 >> 0) & 0x01);
  f_s_cla8_or5 = ((f_s_cla8_pg_logic3_and0 >> 0) & 0x01) | ((f_s_cla8_or4 >> 0) & 0x01);
  f_s_cla8_pg_logic4_or0 = ((a >> 4) & 0x01) | ((b >> 4) & 0x01);
  f_s_cla8_pg_logic4_and0 = ((a >> 4) & 0x01) & ((b >> 4) & 0x01);
  f_s_cla8_pg_logic4_xor0 = ((a >> 4) & 0x01) ^ ((b >> 4) & 0x01);
  f_s_cla8_xor4 = ((f_s_cla8_pg_logic4_xor0 >> 0) & 0x01) ^ ((f_s_cla8_or5 >> 0) & 0x01);
  f_s_cla8_and12 = ((f_s_cla8_or5 >> 0) & 0x01) & ((f_s_cla8_pg_logic4_or0 >> 0) & 0x01);
  f_s_cla8_or6 = ((f_s_cla8_pg_logic4_and0 >> 0) & 0x01) | ((f_s_cla8_and12 >> 0) & 0x01);
  f_s_cla8_pg_logic5_or0 = ((a >> 5) & 0x01) | ((b >> 5) & 0x01);
  f_s_cla8_pg_logic5_and0 = ((a >> 5) & 0x01) & ((b >> 5) & 0x01);
  f_s_cla8_pg_logic5_xor0 = ((a >> 5) & 0x01) ^ ((b >> 5) & 0x01);
  f_s_cla8_xor5 = ((f_s_cla8_pg_logic5_xor0 >> 0) & 0x01) ^ ((f_s_cla8_or6 >> 0) & 0x01);
  f_s_cla8_and13 = ((f_s_cla8_or5 >> 0) & 0x01) & ((f_s_cla8_pg_logic5_or0 >> 0) & 0x01);
  f_s_cla8_and14 = ((f_s_cla8_and13 >> 0) & 0x01) & ((f_s_cla8_pg_logic4_or0 >> 0) & 0x01);
  f_s_cla8_and15 = ((f_s_cla8_pg_logic4_and0 >> 0) & 0x01) & ((f_s_cla8_pg_logic5_or0 >> 0) & 0x01);
  f_s_cla8_or7 = ((f_s_cla8_and14 >> 0) & 0x01) | ((f_s_cla8_and15 >> 0) & 0x01);
  f_s_cla8_or8 = ((f_s_cla8_pg_logic5_and0 >> 0) & 0x01) | ((f_s_cla8_or7 >> 0) & 0x01);
  f_s_cla8_pg_logic6_or0 = ((a >> 6) & 0x01) | ((b >> 6) & 0x01);
  f_s_cla8_pg_logic6_and0 = ((a >> 6) & 0x01) & ((b >> 6) & 0x01);
  f_s_cla8_pg_logic6_xor0 = ((a >> 6) & 0x01) ^ ((b >> 6) & 0x01);
  f_s_cla8_xor6 = ((f_s_cla8_pg_logic6_xor0 >> 0) & 0x01) ^ ((f_s_cla8_or8 >> 0) & 0x01);
  f_s_cla8_and16 = ((f_s_cla8_or5 >> 0) & 0x01) & ((f_s_cla8_pg_logic5_or0 >> 0) & 0x01);
  f_s_cla8_and17 = ((f_s_cla8_pg_logic6_or0 >> 0) & 0x01) & ((f_s_cla8_pg_logic4_or0 >> 0) & 0x01);
  f_s_cla8_and18 = ((f_s_cla8_and16 >> 0) & 0x01) & ((f_s_cla8_and17 >> 0) & 0x01);
  f_s_cla8_and19 = ((f_s_cla8_pg_logic4_and0 >> 0) & 0x01) & ((f_s_cla8_pg_logic6_or0 >> 0) & 0x01);
  f_s_cla8_and20 = ((f_s_cla8_and19 >> 0) & 0x01) & ((f_s_cla8_pg_logic5_or0 >> 0) & 0x01);
  f_s_cla8_and21 = ((f_s_cla8_pg_logic5_and0 >> 0) & 0x01) & ((f_s_cla8_pg_logic6_or0 >> 0) & 0x01);
  f_s_cla8_or9 = ((f_s_cla8_and18 >> 0) & 0x01) | ((f_s_cla8_and20 >> 0) & 0x01);
  f_s_cla8_or10 = ((f_s_cla8_or9 >> 0) & 0x01) | ((f_s_cla8_and21 >> 0) & 0x01);
  f_s_cla8_or11 = ((f_s_cla8_pg_logic6_and0 >> 0) & 0x01) | ((f_s_cla8_or10 >> 0) & 0x01);
  f_s_cla8_pg_logic7_or0 = ((a >> 7) & 0x01) | ((b >> 7) & 0x01);
  f_s_cla8_pg_logic7_and0 = ((a >> 7) & 0x01) & ((b >> 7) & 0x01);
  f_s_cla8_pg_logic7_xor0 = ((a >> 7) & 0x01) ^ ((b >> 7) & 0x01);
  f_s_cla8_xor7 = ((f_s_cla8_pg_logic7_xor0 >> 0) & 0x01) ^ ((f_s_cla8_or11 >> 0) & 0x01);
  f_s_cla8_and22 = ((f_s_cla8_or5 >> 0) & 0x01) & ((f_s_cla8_pg_logic6_or0 >> 0) & 0x01);
  f_s_cla8_and23 = ((f_s_cla8_pg_logic7_or0 >> 0) & 0x01) & ((f_s_cla8_pg_logic5_or0 >> 0) & 0x01);
  f_s_cla8_and24 = ((f_s_cla8_and22 >> 0) & 0x01) & ((f_s_cla8_and23 >> 0) & 0x01);
  f_s_cla8_and25 = ((f_s_cla8_and24 >> 0) & 0x01) & ((f_s_cla8_pg_logic4_or0 >> 0) & 0x01);
  f_s_cla8_and26 = ((f_s_cla8_pg_logic4_and0 >> 0) & 0x01) & ((f_s_cla8_pg_logic6_or0 >> 0) & 0x01);
  f_s_cla8_and27 = ((f_s_cla8_pg_logic7_or0 >> 0) & 0x01) & ((f_s_cla8_pg_logic5_or0 >> 0) & 0x01);
  f_s_cla8_and28 = ((f_s_cla8_and26 >> 0) & 0x01) & ((f_s_cla8_and27 >> 0) & 0x01);
  f_s_cla8_and29 = ((f_s_cla8_pg_logic5_and0 >> 0) & 0x01) & ((f_s_cla8_pg_logic7_or0 >> 0) & 0x01);
  f_s_cla8_and30 = ((f_s_cla8_and29 >> 0) & 0x01) & ((f_s_cla8_pg_logic6_or0 >> 0) & 0x01);
  f_s_cla8_and31 = ((f_s_cla8_pg_logic6_and0 >> 0) & 0x01) & ((f_s_cla8_pg_logic7_or0 >> 0) & 0x01);
  f_s_cla8_or12 = ((f_s_cla8_and25 >> 0) & 0x01) | ((f_s_cla8_and30 >> 0) & 0x01);
  f_s_cla8_or13 = ((f_s_cla8_and28 >> 0) & 0x01) | ((f_s_cla8_and31 >> 0) & 0x01);
  f_s_cla8_or14 = ((f_s_cla8_or12 >> 0) & 0x01) | ((f_s_cla8_or13 >> 0) & 0x01);
  f_s_cla8_or15 = ((f_s_cla8_pg_logic7_and0 >> 0) & 0x01) | ((f_s_cla8_or14 >> 0) & 0x01);
  f_s_cla8_xor8 = ((a >> 7) & 0x01) ^ ((b >> 7) & 0x01);
  f_s_cla8_xor9 = ((f_s_cla8_xor8 >> 0) & 0x01) ^ ((f_s_cla8_or15 >> 0) & 0x01);

  f_s_cla8_out |= ((f_s_cla8_pg_logic0_xor0 >> 0) & 0x01) << 0;
  f_s_cla8_out |= ((f_s_cla8_xor1 >> 0) & 0x01) << 1;
  f_s_cla8_out |= ((f_s_cla8_xor2 >> 0) & 0x01) << 2;
  f_s_cla8_out |= ((f_s_cla8_xor3 >> 0) & 0x01) << 3;
  f_s_cla8_out |= ((f_s_cla8_xor4 >> 0) & 0x01) << 4;
  f_s_cla8_out |= ((f_s_cla8_xor5 >> 0) & 0x01) << 5;
  f_s_cla8_out |= ((f_s_cla8_xor6 >> 0) & 0x01) << 6;
  f_s_cla8_out |= ((f_s_cla8_xor7 >> 0) & 0x01) << 7;
  f_s_cla8_out |= ((f_s_cla8_xor9 >> 0) & 0x01) << 8;
  return f_s_cla8_out;
}

#include <assert.h>
int main(){
  int result = 0;
  for (int i = -128; i < 128; i++){
    for (int j = -128; j < 128; j++){
      result = i + j;
      
      // Calculating 2's complement in case of negative sum
      if (result < 0) {
        result = 512 + result;  
      }

      assert(result == (int)f_s_cla8(i,j));
    }
  }
  return 0;
}
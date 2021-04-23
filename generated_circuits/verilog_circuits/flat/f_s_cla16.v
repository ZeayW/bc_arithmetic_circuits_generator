module f_s_cla16(input [15:0] a, input [15:0] b, output [16:0] f_s_cla16_out);
  wire f_s_cla16_pg_logic0_or0;
  wire f_s_cla16_pg_logic0_and0;
  wire f_s_cla16_pg_logic0_xor0;
  wire f_s_cla16_pg_logic1_or0;
  wire f_s_cla16_pg_logic1_and0;
  wire f_s_cla16_pg_logic1_xor0;
  wire f_s_cla16_xor1;
  wire f_s_cla16_and0;
  wire f_s_cla16_or0;
  wire f_s_cla16_pg_logic2_or0;
  wire f_s_cla16_pg_logic2_and0;
  wire f_s_cla16_pg_logic2_xor0;
  wire f_s_cla16_xor2;
  wire f_s_cla16_and1;
  wire f_s_cla16_and2;
  wire f_s_cla16_and3;
  wire f_s_cla16_and4;
  wire f_s_cla16_or1;
  wire f_s_cla16_or2;
  wire f_s_cla16_pg_logic3_or0;
  wire f_s_cla16_pg_logic3_and0;
  wire f_s_cla16_pg_logic3_xor0;
  wire f_s_cla16_xor3;
  wire f_s_cla16_and5;
  wire f_s_cla16_and6;
  wire f_s_cla16_and7;
  wire f_s_cla16_and8;
  wire f_s_cla16_and9;
  wire f_s_cla16_and10;
  wire f_s_cla16_and11;
  wire f_s_cla16_or3;
  wire f_s_cla16_or4;
  wire f_s_cla16_or5;
  wire f_s_cla16_pg_logic4_or0;
  wire f_s_cla16_pg_logic4_and0;
  wire f_s_cla16_pg_logic4_xor0;
  wire f_s_cla16_xor4;
  wire f_s_cla16_and12;
  wire f_s_cla16_or6;
  wire f_s_cla16_pg_logic5_or0;
  wire f_s_cla16_pg_logic5_and0;
  wire f_s_cla16_pg_logic5_xor0;
  wire f_s_cla16_xor5;
  wire f_s_cla16_and13;
  wire f_s_cla16_and14;
  wire f_s_cla16_and15;
  wire f_s_cla16_or7;
  wire f_s_cla16_or8;
  wire f_s_cla16_pg_logic6_or0;
  wire f_s_cla16_pg_logic6_and0;
  wire f_s_cla16_pg_logic6_xor0;
  wire f_s_cla16_xor6;
  wire f_s_cla16_and16;
  wire f_s_cla16_and17;
  wire f_s_cla16_and18;
  wire f_s_cla16_and19;
  wire f_s_cla16_and20;
  wire f_s_cla16_and21;
  wire f_s_cla16_or9;
  wire f_s_cla16_or10;
  wire f_s_cla16_or11;
  wire f_s_cla16_pg_logic7_or0;
  wire f_s_cla16_pg_logic7_and0;
  wire f_s_cla16_pg_logic7_xor0;
  wire f_s_cla16_xor7;
  wire f_s_cla16_and22;
  wire f_s_cla16_and23;
  wire f_s_cla16_and24;
  wire f_s_cla16_and25;
  wire f_s_cla16_and26;
  wire f_s_cla16_and27;
  wire f_s_cla16_and28;
  wire f_s_cla16_and29;
  wire f_s_cla16_and30;
  wire f_s_cla16_and31;
  wire f_s_cla16_or12;
  wire f_s_cla16_or13;
  wire f_s_cla16_or14;
  wire f_s_cla16_or15;
  wire f_s_cla16_pg_logic8_or0;
  wire f_s_cla16_pg_logic8_and0;
  wire f_s_cla16_pg_logic8_xor0;
  wire f_s_cla16_xor8;
  wire f_s_cla16_and32;
  wire f_s_cla16_or16;
  wire f_s_cla16_pg_logic9_or0;
  wire f_s_cla16_pg_logic9_and0;
  wire f_s_cla16_pg_logic9_xor0;
  wire f_s_cla16_xor9;
  wire f_s_cla16_and33;
  wire f_s_cla16_and34;
  wire f_s_cla16_and35;
  wire f_s_cla16_or17;
  wire f_s_cla16_or18;
  wire f_s_cla16_pg_logic10_or0;
  wire f_s_cla16_pg_logic10_and0;
  wire f_s_cla16_pg_logic10_xor0;
  wire f_s_cla16_xor10;
  wire f_s_cla16_and36;
  wire f_s_cla16_and37;
  wire f_s_cla16_and38;
  wire f_s_cla16_and39;
  wire f_s_cla16_and40;
  wire f_s_cla16_and41;
  wire f_s_cla16_or19;
  wire f_s_cla16_or20;
  wire f_s_cla16_or21;
  wire f_s_cla16_pg_logic11_or0;
  wire f_s_cla16_pg_logic11_and0;
  wire f_s_cla16_pg_logic11_xor0;
  wire f_s_cla16_xor11;
  wire f_s_cla16_and42;
  wire f_s_cla16_and43;
  wire f_s_cla16_and44;
  wire f_s_cla16_and45;
  wire f_s_cla16_and46;
  wire f_s_cla16_and47;
  wire f_s_cla16_and48;
  wire f_s_cla16_and49;
  wire f_s_cla16_and50;
  wire f_s_cla16_and51;
  wire f_s_cla16_or22;
  wire f_s_cla16_or23;
  wire f_s_cla16_or24;
  wire f_s_cla16_or25;
  wire f_s_cla16_pg_logic12_or0;
  wire f_s_cla16_pg_logic12_and0;
  wire f_s_cla16_pg_logic12_xor0;
  wire f_s_cla16_xor12;
  wire f_s_cla16_and52;
  wire f_s_cla16_or26;
  wire f_s_cla16_pg_logic13_or0;
  wire f_s_cla16_pg_logic13_and0;
  wire f_s_cla16_pg_logic13_xor0;
  wire f_s_cla16_xor13;
  wire f_s_cla16_and53;
  wire f_s_cla16_and54;
  wire f_s_cla16_and55;
  wire f_s_cla16_or27;
  wire f_s_cla16_or28;
  wire f_s_cla16_pg_logic14_or0;
  wire f_s_cla16_pg_logic14_and0;
  wire f_s_cla16_pg_logic14_xor0;
  wire f_s_cla16_xor14;
  wire f_s_cla16_and56;
  wire f_s_cla16_and57;
  wire f_s_cla16_and58;
  wire f_s_cla16_and59;
  wire f_s_cla16_and60;
  wire f_s_cla16_and61;
  wire f_s_cla16_or29;
  wire f_s_cla16_or30;
  wire f_s_cla16_or31;
  wire f_s_cla16_pg_logic15_or0;
  wire f_s_cla16_pg_logic15_and0;
  wire f_s_cla16_pg_logic15_xor0;
  wire f_s_cla16_xor15;
  wire f_s_cla16_and62;
  wire f_s_cla16_and63;
  wire f_s_cla16_and64;
  wire f_s_cla16_and65;
  wire f_s_cla16_and66;
  wire f_s_cla16_and67;
  wire f_s_cla16_and68;
  wire f_s_cla16_and69;
  wire f_s_cla16_and70;
  wire f_s_cla16_and71;
  wire f_s_cla16_or32;
  wire f_s_cla16_or33;
  wire f_s_cla16_or34;
  wire f_s_cla16_or35;
  wire f_s_cla16_xor16;
  wire f_s_cla16_xor17;

  assign f_s_cla16_pg_logic0_or0 = a[0] | b[0];
  assign f_s_cla16_pg_logic0_and0 = a[0] & b[0];
  assign f_s_cla16_pg_logic0_xor0 = a[0] ^ b[0];
  assign f_s_cla16_pg_logic1_or0 = a[1] | b[1];
  assign f_s_cla16_pg_logic1_and0 = a[1] & b[1];
  assign f_s_cla16_pg_logic1_xor0 = a[1] ^ b[1];
  assign f_s_cla16_xor1 = f_s_cla16_pg_logic1_xor0 ^ f_s_cla16_pg_logic0_and0;
  assign f_s_cla16_and0 = f_s_cla16_pg_logic0_and0 & f_s_cla16_pg_logic1_or0;
  assign f_s_cla16_or0 = f_s_cla16_pg_logic1_and0 | f_s_cla16_and0;
  assign f_s_cla16_pg_logic2_or0 = a[2] | b[2];
  assign f_s_cla16_pg_logic2_and0 = a[2] & b[2];
  assign f_s_cla16_pg_logic2_xor0 = a[2] ^ b[2];
  assign f_s_cla16_xor2 = f_s_cla16_pg_logic2_xor0 ^ f_s_cla16_or0;
  assign f_s_cla16_and1 = f_s_cla16_pg_logic2_or0 & f_s_cla16_pg_logic0_or0;
  assign f_s_cla16_and2 = f_s_cla16_pg_logic0_and0 & f_s_cla16_pg_logic2_or0;
  assign f_s_cla16_and3 = f_s_cla16_and2 & f_s_cla16_pg_logic1_or0;
  assign f_s_cla16_and4 = f_s_cla16_pg_logic1_and0 & f_s_cla16_pg_logic2_or0;
  assign f_s_cla16_or1 = f_s_cla16_and3 | f_s_cla16_and4;
  assign f_s_cla16_or2 = f_s_cla16_pg_logic2_and0 | f_s_cla16_or1;
  assign f_s_cla16_pg_logic3_or0 = a[3] | b[3];
  assign f_s_cla16_pg_logic3_and0 = a[3] & b[3];
  assign f_s_cla16_pg_logic3_xor0 = a[3] ^ b[3];
  assign f_s_cla16_xor3 = f_s_cla16_pg_logic3_xor0 ^ f_s_cla16_or2;
  assign f_s_cla16_and5 = f_s_cla16_pg_logic3_or0 & f_s_cla16_pg_logic1_or0;
  assign f_s_cla16_and6 = f_s_cla16_pg_logic0_and0 & f_s_cla16_pg_logic2_or0;
  assign f_s_cla16_and7 = f_s_cla16_pg_logic3_or0 & f_s_cla16_pg_logic1_or0;
  assign f_s_cla16_and8 = f_s_cla16_and6 & f_s_cla16_and7;
  assign f_s_cla16_and9 = f_s_cla16_pg_logic1_and0 & f_s_cla16_pg_logic3_or0;
  assign f_s_cla16_and10 = f_s_cla16_and9 & f_s_cla16_pg_logic2_or0;
  assign f_s_cla16_and11 = f_s_cla16_pg_logic2_and0 & f_s_cla16_pg_logic3_or0;
  assign f_s_cla16_or3 = f_s_cla16_and8 | f_s_cla16_and11;
  assign f_s_cla16_or4 = f_s_cla16_and10 | f_s_cla16_or3;
  assign f_s_cla16_or5 = f_s_cla16_pg_logic3_and0 | f_s_cla16_or4;
  assign f_s_cla16_pg_logic4_or0 = a[4] | b[4];
  assign f_s_cla16_pg_logic4_and0 = a[4] & b[4];
  assign f_s_cla16_pg_logic4_xor0 = a[4] ^ b[4];
  assign f_s_cla16_xor4 = f_s_cla16_pg_logic4_xor0 ^ f_s_cla16_or5;
  assign f_s_cla16_and12 = f_s_cla16_or5 & f_s_cla16_pg_logic4_or0;
  assign f_s_cla16_or6 = f_s_cla16_pg_logic4_and0 | f_s_cla16_and12;
  assign f_s_cla16_pg_logic5_or0 = a[5] | b[5];
  assign f_s_cla16_pg_logic5_and0 = a[5] & b[5];
  assign f_s_cla16_pg_logic5_xor0 = a[5] ^ b[5];
  assign f_s_cla16_xor5 = f_s_cla16_pg_logic5_xor0 ^ f_s_cla16_or6;
  assign f_s_cla16_and13 = f_s_cla16_or5 & f_s_cla16_pg_logic5_or0;
  assign f_s_cla16_and14 = f_s_cla16_and13 & f_s_cla16_pg_logic4_or0;
  assign f_s_cla16_and15 = f_s_cla16_pg_logic4_and0 & f_s_cla16_pg_logic5_or0;
  assign f_s_cla16_or7 = f_s_cla16_and14 | f_s_cla16_and15;
  assign f_s_cla16_or8 = f_s_cla16_pg_logic5_and0 | f_s_cla16_or7;
  assign f_s_cla16_pg_logic6_or0 = a[6] | b[6];
  assign f_s_cla16_pg_logic6_and0 = a[6] & b[6];
  assign f_s_cla16_pg_logic6_xor0 = a[6] ^ b[6];
  assign f_s_cla16_xor6 = f_s_cla16_pg_logic6_xor0 ^ f_s_cla16_or8;
  assign f_s_cla16_and16 = f_s_cla16_or5 & f_s_cla16_pg_logic5_or0;
  assign f_s_cla16_and17 = f_s_cla16_pg_logic6_or0 & f_s_cla16_pg_logic4_or0;
  assign f_s_cla16_and18 = f_s_cla16_and16 & f_s_cla16_and17;
  assign f_s_cla16_and19 = f_s_cla16_pg_logic4_and0 & f_s_cla16_pg_logic6_or0;
  assign f_s_cla16_and20 = f_s_cla16_and19 & f_s_cla16_pg_logic5_or0;
  assign f_s_cla16_and21 = f_s_cla16_pg_logic5_and0 & f_s_cla16_pg_logic6_or0;
  assign f_s_cla16_or9 = f_s_cla16_and18 | f_s_cla16_and20;
  assign f_s_cla16_or10 = f_s_cla16_or9 | f_s_cla16_and21;
  assign f_s_cla16_or11 = f_s_cla16_pg_logic6_and0 | f_s_cla16_or10;
  assign f_s_cla16_pg_logic7_or0 = a[7] | b[7];
  assign f_s_cla16_pg_logic7_and0 = a[7] & b[7];
  assign f_s_cla16_pg_logic7_xor0 = a[7] ^ b[7];
  assign f_s_cla16_xor7 = f_s_cla16_pg_logic7_xor0 ^ f_s_cla16_or11;
  assign f_s_cla16_and22 = f_s_cla16_or5 & f_s_cla16_pg_logic6_or0;
  assign f_s_cla16_and23 = f_s_cla16_pg_logic7_or0 & f_s_cla16_pg_logic5_or0;
  assign f_s_cla16_and24 = f_s_cla16_and22 & f_s_cla16_and23;
  assign f_s_cla16_and25 = f_s_cla16_and24 & f_s_cla16_pg_logic4_or0;
  assign f_s_cla16_and26 = f_s_cla16_pg_logic4_and0 & f_s_cla16_pg_logic6_or0;
  assign f_s_cla16_and27 = f_s_cla16_pg_logic7_or0 & f_s_cla16_pg_logic5_or0;
  assign f_s_cla16_and28 = f_s_cla16_and26 & f_s_cla16_and27;
  assign f_s_cla16_and29 = f_s_cla16_pg_logic5_and0 & f_s_cla16_pg_logic7_or0;
  assign f_s_cla16_and30 = f_s_cla16_and29 & f_s_cla16_pg_logic6_or0;
  assign f_s_cla16_and31 = f_s_cla16_pg_logic6_and0 & f_s_cla16_pg_logic7_or0;
  assign f_s_cla16_or12 = f_s_cla16_and25 | f_s_cla16_and30;
  assign f_s_cla16_or13 = f_s_cla16_and28 | f_s_cla16_and31;
  assign f_s_cla16_or14 = f_s_cla16_or12 | f_s_cla16_or13;
  assign f_s_cla16_or15 = f_s_cla16_pg_logic7_and0 | f_s_cla16_or14;
  assign f_s_cla16_pg_logic8_or0 = a[8] | b[8];
  assign f_s_cla16_pg_logic8_and0 = a[8] & b[8];
  assign f_s_cla16_pg_logic8_xor0 = a[8] ^ b[8];
  assign f_s_cla16_xor8 = f_s_cla16_pg_logic8_xor0 ^ f_s_cla16_or15;
  assign f_s_cla16_and32 = f_s_cla16_or15 & f_s_cla16_pg_logic8_or0;
  assign f_s_cla16_or16 = f_s_cla16_pg_logic8_and0 | f_s_cla16_and32;
  assign f_s_cla16_pg_logic9_or0 = a[9] | b[9];
  assign f_s_cla16_pg_logic9_and0 = a[9] & b[9];
  assign f_s_cla16_pg_logic9_xor0 = a[9] ^ b[9];
  assign f_s_cla16_xor9 = f_s_cla16_pg_logic9_xor0 ^ f_s_cla16_or16;
  assign f_s_cla16_and33 = f_s_cla16_or15 & f_s_cla16_pg_logic9_or0;
  assign f_s_cla16_and34 = f_s_cla16_and33 & f_s_cla16_pg_logic8_or0;
  assign f_s_cla16_and35 = f_s_cla16_pg_logic8_and0 & f_s_cla16_pg_logic9_or0;
  assign f_s_cla16_or17 = f_s_cla16_and34 | f_s_cla16_and35;
  assign f_s_cla16_or18 = f_s_cla16_pg_logic9_and0 | f_s_cla16_or17;
  assign f_s_cla16_pg_logic10_or0 = a[10] | b[10];
  assign f_s_cla16_pg_logic10_and0 = a[10] & b[10];
  assign f_s_cla16_pg_logic10_xor0 = a[10] ^ b[10];
  assign f_s_cla16_xor10 = f_s_cla16_pg_logic10_xor0 ^ f_s_cla16_or18;
  assign f_s_cla16_and36 = f_s_cla16_or15 & f_s_cla16_pg_logic9_or0;
  assign f_s_cla16_and37 = f_s_cla16_pg_logic10_or0 & f_s_cla16_pg_logic8_or0;
  assign f_s_cla16_and38 = f_s_cla16_and36 & f_s_cla16_and37;
  assign f_s_cla16_and39 = f_s_cla16_pg_logic8_and0 & f_s_cla16_pg_logic10_or0;
  assign f_s_cla16_and40 = f_s_cla16_and39 & f_s_cla16_pg_logic9_or0;
  assign f_s_cla16_and41 = f_s_cla16_pg_logic9_and0 & f_s_cla16_pg_logic10_or0;
  assign f_s_cla16_or19 = f_s_cla16_and38 | f_s_cla16_and40;
  assign f_s_cla16_or20 = f_s_cla16_or19 | f_s_cla16_and41;
  assign f_s_cla16_or21 = f_s_cla16_pg_logic10_and0 | f_s_cla16_or20;
  assign f_s_cla16_pg_logic11_or0 = a[11] | b[11];
  assign f_s_cla16_pg_logic11_and0 = a[11] & b[11];
  assign f_s_cla16_pg_logic11_xor0 = a[11] ^ b[11];
  assign f_s_cla16_xor11 = f_s_cla16_pg_logic11_xor0 ^ f_s_cla16_or21;
  assign f_s_cla16_and42 = f_s_cla16_or15 & f_s_cla16_pg_logic10_or0;
  assign f_s_cla16_and43 = f_s_cla16_pg_logic11_or0 & f_s_cla16_pg_logic9_or0;
  assign f_s_cla16_and44 = f_s_cla16_and42 & f_s_cla16_and43;
  assign f_s_cla16_and45 = f_s_cla16_and44 & f_s_cla16_pg_logic8_or0;
  assign f_s_cla16_and46 = f_s_cla16_pg_logic8_and0 & f_s_cla16_pg_logic10_or0;
  assign f_s_cla16_and47 = f_s_cla16_pg_logic11_or0 & f_s_cla16_pg_logic9_or0;
  assign f_s_cla16_and48 = f_s_cla16_and46 & f_s_cla16_and47;
  assign f_s_cla16_and49 = f_s_cla16_pg_logic9_and0 & f_s_cla16_pg_logic11_or0;
  assign f_s_cla16_and50 = f_s_cla16_and49 & f_s_cla16_pg_logic10_or0;
  assign f_s_cla16_and51 = f_s_cla16_pg_logic10_and0 & f_s_cla16_pg_logic11_or0;
  assign f_s_cla16_or22 = f_s_cla16_and45 | f_s_cla16_and50;
  assign f_s_cla16_or23 = f_s_cla16_and48 | f_s_cla16_and51;
  assign f_s_cla16_or24 = f_s_cla16_or22 | f_s_cla16_or23;
  assign f_s_cla16_or25 = f_s_cla16_pg_logic11_and0 | f_s_cla16_or24;
  assign f_s_cla16_pg_logic12_or0 = a[12] | b[12];
  assign f_s_cla16_pg_logic12_and0 = a[12] & b[12];
  assign f_s_cla16_pg_logic12_xor0 = a[12] ^ b[12];
  assign f_s_cla16_xor12 = f_s_cla16_pg_logic12_xor0 ^ f_s_cla16_or25;
  assign f_s_cla16_and52 = f_s_cla16_or25 & f_s_cla16_pg_logic12_or0;
  assign f_s_cla16_or26 = f_s_cla16_pg_logic12_and0 | f_s_cla16_and52;
  assign f_s_cla16_pg_logic13_or0 = a[13] | b[13];
  assign f_s_cla16_pg_logic13_and0 = a[13] & b[13];
  assign f_s_cla16_pg_logic13_xor0 = a[13] ^ b[13];
  assign f_s_cla16_xor13 = f_s_cla16_pg_logic13_xor0 ^ f_s_cla16_or26;
  assign f_s_cla16_and53 = f_s_cla16_or25 & f_s_cla16_pg_logic13_or0;
  assign f_s_cla16_and54 = f_s_cla16_and53 & f_s_cla16_pg_logic12_or0;
  assign f_s_cla16_and55 = f_s_cla16_pg_logic12_and0 & f_s_cla16_pg_logic13_or0;
  assign f_s_cla16_or27 = f_s_cla16_and54 | f_s_cla16_and55;
  assign f_s_cla16_or28 = f_s_cla16_pg_logic13_and0 | f_s_cla16_or27;
  assign f_s_cla16_pg_logic14_or0 = a[14] | b[14];
  assign f_s_cla16_pg_logic14_and0 = a[14] & b[14];
  assign f_s_cla16_pg_logic14_xor0 = a[14] ^ b[14];
  assign f_s_cla16_xor14 = f_s_cla16_pg_logic14_xor0 ^ f_s_cla16_or28;
  assign f_s_cla16_and56 = f_s_cla16_or25 & f_s_cla16_pg_logic13_or0;
  assign f_s_cla16_and57 = f_s_cla16_pg_logic14_or0 & f_s_cla16_pg_logic12_or0;
  assign f_s_cla16_and58 = f_s_cla16_and56 & f_s_cla16_and57;
  assign f_s_cla16_and59 = f_s_cla16_pg_logic12_and0 & f_s_cla16_pg_logic14_or0;
  assign f_s_cla16_and60 = f_s_cla16_and59 & f_s_cla16_pg_logic13_or0;
  assign f_s_cla16_and61 = f_s_cla16_pg_logic13_and0 & f_s_cla16_pg_logic14_or0;
  assign f_s_cla16_or29 = f_s_cla16_and58 | f_s_cla16_and60;
  assign f_s_cla16_or30 = f_s_cla16_or29 | f_s_cla16_and61;
  assign f_s_cla16_or31 = f_s_cla16_pg_logic14_and0 | f_s_cla16_or30;
  assign f_s_cla16_pg_logic15_or0 = a[15] | b[15];
  assign f_s_cla16_pg_logic15_and0 = a[15] & b[15];
  assign f_s_cla16_pg_logic15_xor0 = a[15] ^ b[15];
  assign f_s_cla16_xor15 = f_s_cla16_pg_logic15_xor0 ^ f_s_cla16_or31;
  assign f_s_cla16_and62 = f_s_cla16_or25 & f_s_cla16_pg_logic14_or0;
  assign f_s_cla16_and63 = f_s_cla16_pg_logic15_or0 & f_s_cla16_pg_logic13_or0;
  assign f_s_cla16_and64 = f_s_cla16_and62 & f_s_cla16_and63;
  assign f_s_cla16_and65 = f_s_cla16_and64 & f_s_cla16_pg_logic12_or0;
  assign f_s_cla16_and66 = f_s_cla16_pg_logic12_and0 & f_s_cla16_pg_logic14_or0;
  assign f_s_cla16_and67 = f_s_cla16_pg_logic15_or0 & f_s_cla16_pg_logic13_or0;
  assign f_s_cla16_and68 = f_s_cla16_and66 & f_s_cla16_and67;
  assign f_s_cla16_and69 = f_s_cla16_pg_logic13_and0 & f_s_cla16_pg_logic15_or0;
  assign f_s_cla16_and70 = f_s_cla16_and69 & f_s_cla16_pg_logic14_or0;
  assign f_s_cla16_and71 = f_s_cla16_pg_logic14_and0 & f_s_cla16_pg_logic15_or0;
  assign f_s_cla16_or32 = f_s_cla16_and65 | f_s_cla16_and70;
  assign f_s_cla16_or33 = f_s_cla16_and68 | f_s_cla16_and71;
  assign f_s_cla16_or34 = f_s_cla16_or32 | f_s_cla16_or33;
  assign f_s_cla16_or35 = f_s_cla16_pg_logic15_and0 | f_s_cla16_or34;
  assign f_s_cla16_xor16 = a[15] ^ b[15];
  assign f_s_cla16_xor17 = f_s_cla16_xor16 ^ f_s_cla16_or35;

  assign f_s_cla16_out[0] = f_s_cla16_pg_logic0_xor0;
  assign f_s_cla16_out[1] = f_s_cla16_xor1;
  assign f_s_cla16_out[2] = f_s_cla16_xor2;
  assign f_s_cla16_out[3] = f_s_cla16_xor3;
  assign f_s_cla16_out[4] = f_s_cla16_xor4;
  assign f_s_cla16_out[5] = f_s_cla16_xor5;
  assign f_s_cla16_out[6] = f_s_cla16_xor6;
  assign f_s_cla16_out[7] = f_s_cla16_xor7;
  assign f_s_cla16_out[8] = f_s_cla16_xor8;
  assign f_s_cla16_out[9] = f_s_cla16_xor9;
  assign f_s_cla16_out[10] = f_s_cla16_xor10;
  assign f_s_cla16_out[11] = f_s_cla16_xor11;
  assign f_s_cla16_out[12] = f_s_cla16_xor12;
  assign f_s_cla16_out[13] = f_s_cla16_xor13;
  assign f_s_cla16_out[14] = f_s_cla16_xor14;
  assign f_s_cla16_out[15] = f_s_cla16_xor15;
  assign f_s_cla16_out[16] = f_s_cla16_xor17;
endmodule
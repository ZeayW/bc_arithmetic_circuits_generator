module xor_gate(input _a, input _b, output _y0);
  assign _y0 = _a ^ _b;
endmodule

module xnor_gate(input _a, input _b, output _y0);
  assign _y0 = ~(_a ^ _b);
endmodule

module nor_gate(input _a, input _b, output _y0);
  assign _y0 = ~(_a | _b);
endmodule

module or_gate(input _a, input _b, output _y0);
  assign _y0 = _a | _b;
endmodule

module and_gate(input _a, input _b, output _y0);
  assign _y0 = _a & _b;
endmodule

module constant_wire_value_0(input a, input b, output constant_wire_0);
  wire constant_wire_value_0_a;
  wire constant_wire_value_0_b;
  wire constant_wire_value_0_y0;
  wire constant_wire_value_0_y1;

  assign constant_wire_value_0_a = a;
  assign constant_wire_value_0_b = b;

  xor_gate xor_gate_constant_wire_value_0_y0(constant_wire_value_0_a, constant_wire_value_0_b, constant_wire_value_0_y0);
  xnor_gate xnor_gate_constant_wire_value_0_y1(constant_wire_value_0_a, constant_wire_value_0_b, constant_wire_value_0_y1);
  nor_gate nor_gate_constant_wire_0(constant_wire_value_0_y0, constant_wire_value_0_y1, constant_wire_0);
endmodule

module pg_logic(input a, input b, output pg_logic_y0, output pg_logic_y1, output pg_logic_y2);
  wire pg_logic_a;
  wire pg_logic_b;

  assign pg_logic_a = a;
  assign pg_logic_b = b;

  or_gate or_gate_pg_logic_y0(pg_logic_a, pg_logic_b, pg_logic_y0);
  and_gate and_gate_pg_logic_y1(pg_logic_a, pg_logic_b, pg_logic_y1);
  xor_gate xor_gate_pg_logic_y2(pg_logic_a, pg_logic_b, pg_logic_y2);
endmodule

module h_s_cla8(input [7:0] a, input [7:0] b, output [8:0] out);
  wire a_0;
  wire a_1;
  wire a_2;
  wire a_3;
  wire a_4;
  wire a_5;
  wire a_6;
  wire a_7;
  wire b_0;
  wire b_1;
  wire b_2;
  wire b_3;
  wire b_4;
  wire b_5;
  wire b_6;
  wire b_7;
  wire constant_wire_0;
  wire h_s_cla8_pg_logic0_y0;
  wire h_s_cla8_pg_logic0_y1;
  wire h_s_cla8_pg_logic0_y2;
  wire h_s_cla8_xor0_y0;
  wire h_s_cla8_and0_y0;
  wire h_s_cla8_or0_y0;
  wire h_s_cla8_pg_logic1_y0;
  wire h_s_cla8_pg_logic1_y1;
  wire h_s_cla8_pg_logic1_y2;
  wire h_s_cla8_xor1_y0;
  wire h_s_cla8_and1_y0;
  wire h_s_cla8_and2_y0;
  wire h_s_cla8_and3_y0;
  wire h_s_cla8_and4_y0;
  wire h_s_cla8_or1_y0;
  wire h_s_cla8_or2_y0;
  wire h_s_cla8_pg_logic2_y0;
  wire h_s_cla8_pg_logic2_y1;
  wire h_s_cla8_pg_logic2_y2;
  wire h_s_cla8_xor2_y0;
  wire h_s_cla8_and5_y0;
  wire h_s_cla8_and6_y0;
  wire h_s_cla8_and7_y0;
  wire h_s_cla8_and8_y0;
  wire h_s_cla8_and9_y0;
  wire h_s_cla8_and10_y0;
  wire h_s_cla8_and11_y0;
  wire h_s_cla8_and12_y0;
  wire h_s_cla8_and13_y0;
  wire h_s_cla8_or3_y0;
  wire h_s_cla8_or4_y0;
  wire h_s_cla8_or5_y0;
  wire h_s_cla8_pg_logic3_y0;
  wire h_s_cla8_pg_logic3_y1;
  wire h_s_cla8_pg_logic3_y2;
  wire h_s_cla8_xor3_y0;
  wire h_s_cla8_and14_y0;
  wire h_s_cla8_and15_y0;
  wire h_s_cla8_and16_y0;
  wire h_s_cla8_and17_y0;
  wire h_s_cla8_and18_y0;
  wire h_s_cla8_and19_y0;
  wire h_s_cla8_and20_y0;
  wire h_s_cla8_and21_y0;
  wire h_s_cla8_and22_y0;
  wire h_s_cla8_and23_y0;
  wire h_s_cla8_and24_y0;
  wire h_s_cla8_and25_y0;
  wire h_s_cla8_and26_y0;
  wire h_s_cla8_and27_y0;
  wire h_s_cla8_and28_y0;
  wire h_s_cla8_and29_y0;
  wire h_s_cla8_or6_y0;
  wire h_s_cla8_or7_y0;
  wire h_s_cla8_or8_y0;
  wire h_s_cla8_or9_y0;
  wire h_s_cla8_pg_logic4_y0;
  wire h_s_cla8_pg_logic4_y1;
  wire h_s_cla8_pg_logic4_y2;
  wire h_s_cla8_xor4_y0;
  wire h_s_cla8_and30_y0;
  wire h_s_cla8_and31_y0;
  wire h_s_cla8_and32_y0;
  wire h_s_cla8_and33_y0;
  wire h_s_cla8_and34_y0;
  wire h_s_cla8_and35_y0;
  wire h_s_cla8_and36_y0;
  wire h_s_cla8_and37_y0;
  wire h_s_cla8_and38_y0;
  wire h_s_cla8_and39_y0;
  wire h_s_cla8_and40_y0;
  wire h_s_cla8_and41_y0;
  wire h_s_cla8_and42_y0;
  wire h_s_cla8_and43_y0;
  wire h_s_cla8_and44_y0;
  wire h_s_cla8_and45_y0;
  wire h_s_cla8_and46_y0;
  wire h_s_cla8_and47_y0;
  wire h_s_cla8_and48_y0;
  wire h_s_cla8_and49_y0;
  wire h_s_cla8_and50_y0;
  wire h_s_cla8_and51_y0;
  wire h_s_cla8_and52_y0;
  wire h_s_cla8_and53_y0;
  wire h_s_cla8_and54_y0;
  wire h_s_cla8_or10_y0;
  wire h_s_cla8_or11_y0;
  wire h_s_cla8_or12_y0;
  wire h_s_cla8_or13_y0;
  wire h_s_cla8_or14_y0;
  wire h_s_cla8_pg_logic5_y0;
  wire h_s_cla8_pg_logic5_y1;
  wire h_s_cla8_pg_logic5_y2;
  wire h_s_cla8_xor5_y0;
  wire h_s_cla8_and55_y0;
  wire h_s_cla8_and56_y0;
  wire h_s_cla8_and57_y0;
  wire h_s_cla8_and58_y0;
  wire h_s_cla8_and59_y0;
  wire h_s_cla8_and60_y0;
  wire h_s_cla8_and61_y0;
  wire h_s_cla8_and62_y0;
  wire h_s_cla8_and63_y0;
  wire h_s_cla8_and64_y0;
  wire h_s_cla8_and65_y0;
  wire h_s_cla8_and66_y0;
  wire h_s_cla8_and67_y0;
  wire h_s_cla8_and68_y0;
  wire h_s_cla8_and69_y0;
  wire h_s_cla8_and70_y0;
  wire h_s_cla8_and71_y0;
  wire h_s_cla8_and72_y0;
  wire h_s_cla8_and73_y0;
  wire h_s_cla8_and74_y0;
  wire h_s_cla8_and75_y0;
  wire h_s_cla8_and76_y0;
  wire h_s_cla8_and77_y0;
  wire h_s_cla8_and78_y0;
  wire h_s_cla8_and79_y0;
  wire h_s_cla8_and80_y0;
  wire h_s_cla8_and81_y0;
  wire h_s_cla8_and82_y0;
  wire h_s_cla8_and83_y0;
  wire h_s_cla8_and84_y0;
  wire h_s_cla8_and85_y0;
  wire h_s_cla8_and86_y0;
  wire h_s_cla8_and87_y0;
  wire h_s_cla8_and88_y0;
  wire h_s_cla8_and89_y0;
  wire h_s_cla8_and90_y0;
  wire h_s_cla8_or15_y0;
  wire h_s_cla8_or16_y0;
  wire h_s_cla8_or17_y0;
  wire h_s_cla8_or18_y0;
  wire h_s_cla8_or19_y0;
  wire h_s_cla8_or20_y0;
  wire h_s_cla8_pg_logic6_y0;
  wire h_s_cla8_pg_logic6_y1;
  wire h_s_cla8_pg_logic6_y2;
  wire h_s_cla8_xor6_y0;
  wire h_s_cla8_and91_y0;
  wire h_s_cla8_and92_y0;
  wire h_s_cla8_and93_y0;
  wire h_s_cla8_and94_y0;
  wire h_s_cla8_and95_y0;
  wire h_s_cla8_and96_y0;
  wire h_s_cla8_and97_y0;
  wire h_s_cla8_and98_y0;
  wire h_s_cla8_and99_y0;
  wire h_s_cla8_and100_y0;
  wire h_s_cla8_and101_y0;
  wire h_s_cla8_and102_y0;
  wire h_s_cla8_and103_y0;
  wire h_s_cla8_and104_y0;
  wire h_s_cla8_and105_y0;
  wire h_s_cla8_and106_y0;
  wire h_s_cla8_and107_y0;
  wire h_s_cla8_and108_y0;
  wire h_s_cla8_and109_y0;
  wire h_s_cla8_and110_y0;
  wire h_s_cla8_and111_y0;
  wire h_s_cla8_and112_y0;
  wire h_s_cla8_and113_y0;
  wire h_s_cla8_and114_y0;
  wire h_s_cla8_and115_y0;
  wire h_s_cla8_and116_y0;
  wire h_s_cla8_and117_y0;
  wire h_s_cla8_and118_y0;
  wire h_s_cla8_and119_y0;
  wire h_s_cla8_and120_y0;
  wire h_s_cla8_and121_y0;
  wire h_s_cla8_and122_y0;
  wire h_s_cla8_and123_y0;
  wire h_s_cla8_and124_y0;
  wire h_s_cla8_and125_y0;
  wire h_s_cla8_and126_y0;
  wire h_s_cla8_and127_y0;
  wire h_s_cla8_and128_y0;
  wire h_s_cla8_and129_y0;
  wire h_s_cla8_and130_y0;
  wire h_s_cla8_and131_y0;
  wire h_s_cla8_and132_y0;
  wire h_s_cla8_and133_y0;
  wire h_s_cla8_and134_y0;
  wire h_s_cla8_and135_y0;
  wire h_s_cla8_and136_y0;
  wire h_s_cla8_and137_y0;
  wire h_s_cla8_and138_y0;
  wire h_s_cla8_and139_y0;
  wire h_s_cla8_or21_y0;
  wire h_s_cla8_or22_y0;
  wire h_s_cla8_or23_y0;
  wire h_s_cla8_or24_y0;
  wire h_s_cla8_or25_y0;
  wire h_s_cla8_or26_y0;
  wire h_s_cla8_or27_y0;
  wire h_s_cla8_pg_logic7_y0;
  wire h_s_cla8_pg_logic7_y1;
  wire h_s_cla8_pg_logic7_y2;
  wire h_s_cla8_xor7_y0;
  wire h_s_cla8_and140_y0;
  wire h_s_cla8_and141_y0;
  wire h_s_cla8_and142_y0;
  wire h_s_cla8_and143_y0;
  wire h_s_cla8_and144_y0;
  wire h_s_cla8_and145_y0;
  wire h_s_cla8_and146_y0;
  wire h_s_cla8_and147_y0;
  wire h_s_cla8_and148_y0;
  wire h_s_cla8_and149_y0;
  wire h_s_cla8_and150_y0;
  wire h_s_cla8_and151_y0;
  wire h_s_cla8_and152_y0;
  wire h_s_cla8_and153_y0;
  wire h_s_cla8_and154_y0;
  wire h_s_cla8_and155_y0;
  wire h_s_cla8_and156_y0;
  wire h_s_cla8_and157_y0;
  wire h_s_cla8_and158_y0;
  wire h_s_cla8_and159_y0;
  wire h_s_cla8_and160_y0;
  wire h_s_cla8_and161_y0;
  wire h_s_cla8_and162_y0;
  wire h_s_cla8_and163_y0;
  wire h_s_cla8_and164_y0;
  wire h_s_cla8_and165_y0;
  wire h_s_cla8_and166_y0;
  wire h_s_cla8_and167_y0;
  wire h_s_cla8_and168_y0;
  wire h_s_cla8_and169_y0;
  wire h_s_cla8_and170_y0;
  wire h_s_cla8_and171_y0;
  wire h_s_cla8_and172_y0;
  wire h_s_cla8_and173_y0;
  wire h_s_cla8_and174_y0;
  wire h_s_cla8_and175_y0;
  wire h_s_cla8_and176_y0;
  wire h_s_cla8_and177_y0;
  wire h_s_cla8_and178_y0;
  wire h_s_cla8_and179_y0;
  wire h_s_cla8_and180_y0;
  wire h_s_cla8_and181_y0;
  wire h_s_cla8_and182_y0;
  wire h_s_cla8_and183_y0;
  wire h_s_cla8_and184_y0;
  wire h_s_cla8_and185_y0;
  wire h_s_cla8_and186_y0;
  wire h_s_cla8_and187_y0;
  wire h_s_cla8_and188_y0;
  wire h_s_cla8_and189_y0;
  wire h_s_cla8_and190_y0;
  wire h_s_cla8_and191_y0;
  wire h_s_cla8_and192_y0;
  wire h_s_cla8_and193_y0;
  wire h_s_cla8_and194_y0;
  wire h_s_cla8_and195_y0;
  wire h_s_cla8_and196_y0;
  wire h_s_cla8_and197_y0;
  wire h_s_cla8_and198_y0;
  wire h_s_cla8_and199_y0;
  wire h_s_cla8_and200_y0;
  wire h_s_cla8_and201_y0;
  wire h_s_cla8_and202_y0;
  wire h_s_cla8_and203_y0;
  wire h_s_cla8_or28_y0;
  wire h_s_cla8_or29_y0;
  wire h_s_cla8_or30_y0;
  wire h_s_cla8_or31_y0;
  wire h_s_cla8_or32_y0;
  wire h_s_cla8_or33_y0;
  wire h_s_cla8_or34_y0;
  wire h_s_cla8_or35_y0;
  wire h_s_cla8_xor8_y0;
  wire h_s_cla8_xor9_y0;

  assign a_0 = a[0];
  assign a_1 = a[1];
  assign a_2 = a[2];
  assign a_3 = a[3];
  assign a_4 = a[4];
  assign a_5 = a[5];
  assign a_6 = a[6];
  assign a_7 = a[7];
  assign b_0 = b[0];
  assign b_1 = b[1];
  assign b_2 = b[2];
  assign b_3 = b[3];
  assign b_4 = b[4];
  assign b_5 = b[5];
  assign b_6 = b[6];
  assign b_7 = b[7];
  constant_wire_value_0 constant_wire_value_0_constant_wire_0(a_0, b_0, constant_wire_0);
  pg_logic pg_logic_h_s_cla8_pg_logic0_y0(a_0, b_0, h_s_cla8_pg_logic0_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_pg_logic0_y2);
  xor_gate xor_gate_h_s_cla8_xor0_y0(h_s_cla8_pg_logic0_y2, constant_wire_0, h_s_cla8_xor0_y0);
  and_gate and_gate_h_s_cla8_and0_y0(h_s_cla8_pg_logic0_y0, constant_wire_0, h_s_cla8_and0_y0);
  or_gate or_gate_h_s_cla8_or0_y0(h_s_cla8_pg_logic0_y1, h_s_cla8_and0_y0, h_s_cla8_or0_y0);
  pg_logic pg_logic_h_s_cla8_pg_logic1_y0(a_1, b_1, h_s_cla8_pg_logic1_y0, h_s_cla8_pg_logic1_y1, h_s_cla8_pg_logic1_y2);
  xor_gate xor_gate_h_s_cla8_xor1_y0(h_s_cla8_pg_logic1_y2, h_s_cla8_or0_y0, h_s_cla8_xor1_y0);
  and_gate and_gate_h_s_cla8_and1_y0(h_s_cla8_pg_logic0_y0, constant_wire_0, h_s_cla8_and1_y0);
  and_gate and_gate_h_s_cla8_and2_y0(h_s_cla8_pg_logic1_y0, constant_wire_0, h_s_cla8_and2_y0);
  and_gate and_gate_h_s_cla8_and3_y0(h_s_cla8_and2_y0, h_s_cla8_and1_y0, h_s_cla8_and3_y0);
  and_gate and_gate_h_s_cla8_and4_y0(h_s_cla8_pg_logic1_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and4_y0);
  or_gate or_gate_h_s_cla8_or1_y0(h_s_cla8_and4_y0, h_s_cla8_and3_y0, h_s_cla8_or1_y0);
  or_gate or_gate_h_s_cla8_or2_y0(h_s_cla8_pg_logic1_y1, h_s_cla8_or1_y0, h_s_cla8_or2_y0);
  pg_logic pg_logic_h_s_cla8_pg_logic2_y0(a_2, b_2, h_s_cla8_pg_logic2_y0, h_s_cla8_pg_logic2_y1, h_s_cla8_pg_logic2_y2);
  xor_gate xor_gate_h_s_cla8_xor2_y0(h_s_cla8_pg_logic2_y2, h_s_cla8_or2_y0, h_s_cla8_xor2_y0);
  and_gate and_gate_h_s_cla8_and5_y0(h_s_cla8_pg_logic0_y0, constant_wire_0, h_s_cla8_and5_y0);
  and_gate and_gate_h_s_cla8_and6_y0(h_s_cla8_pg_logic1_y0, constant_wire_0, h_s_cla8_and6_y0);
  and_gate and_gate_h_s_cla8_and7_y0(h_s_cla8_and6_y0, h_s_cla8_and5_y0, h_s_cla8_and7_y0);
  and_gate and_gate_h_s_cla8_and8_y0(h_s_cla8_pg_logic2_y0, constant_wire_0, h_s_cla8_and8_y0);
  and_gate and_gate_h_s_cla8_and9_y0(h_s_cla8_and8_y0, h_s_cla8_and7_y0, h_s_cla8_and9_y0);
  and_gate and_gate_h_s_cla8_and10_y0(h_s_cla8_pg_logic1_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and10_y0);
  and_gate and_gate_h_s_cla8_and11_y0(h_s_cla8_pg_logic2_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and11_y0);
  and_gate and_gate_h_s_cla8_and12_y0(h_s_cla8_and11_y0, h_s_cla8_and10_y0, h_s_cla8_and12_y0);
  and_gate and_gate_h_s_cla8_and13_y0(h_s_cla8_pg_logic2_y0, h_s_cla8_pg_logic1_y1, h_s_cla8_and13_y0);
  or_gate or_gate_h_s_cla8_or3_y0(h_s_cla8_and13_y0, h_s_cla8_and9_y0, h_s_cla8_or3_y0);
  or_gate or_gate_h_s_cla8_or4_y0(h_s_cla8_or3_y0, h_s_cla8_and12_y0, h_s_cla8_or4_y0);
  or_gate or_gate_h_s_cla8_or5_y0(h_s_cla8_pg_logic2_y1, h_s_cla8_or4_y0, h_s_cla8_or5_y0);
  pg_logic pg_logic_h_s_cla8_pg_logic3_y0(a_3, b_3, h_s_cla8_pg_logic3_y0, h_s_cla8_pg_logic3_y1, h_s_cla8_pg_logic3_y2);
  xor_gate xor_gate_h_s_cla8_xor3_y0(h_s_cla8_pg_logic3_y2, h_s_cla8_or5_y0, h_s_cla8_xor3_y0);
  and_gate and_gate_h_s_cla8_and14_y0(h_s_cla8_pg_logic0_y0, constant_wire_0, h_s_cla8_and14_y0);
  and_gate and_gate_h_s_cla8_and15_y0(h_s_cla8_pg_logic1_y0, constant_wire_0, h_s_cla8_and15_y0);
  and_gate and_gate_h_s_cla8_and16_y0(h_s_cla8_and15_y0, h_s_cla8_and14_y0, h_s_cla8_and16_y0);
  and_gate and_gate_h_s_cla8_and17_y0(h_s_cla8_pg_logic2_y0, constant_wire_0, h_s_cla8_and17_y0);
  and_gate and_gate_h_s_cla8_and18_y0(h_s_cla8_and17_y0, h_s_cla8_and16_y0, h_s_cla8_and18_y0);
  and_gate and_gate_h_s_cla8_and19_y0(h_s_cla8_pg_logic3_y0, constant_wire_0, h_s_cla8_and19_y0);
  and_gate and_gate_h_s_cla8_and20_y0(h_s_cla8_and19_y0, h_s_cla8_and18_y0, h_s_cla8_and20_y0);
  and_gate and_gate_h_s_cla8_and21_y0(h_s_cla8_pg_logic1_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and21_y0);
  and_gate and_gate_h_s_cla8_and22_y0(h_s_cla8_pg_logic2_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and22_y0);
  and_gate and_gate_h_s_cla8_and23_y0(h_s_cla8_and22_y0, h_s_cla8_and21_y0, h_s_cla8_and23_y0);
  and_gate and_gate_h_s_cla8_and24_y0(h_s_cla8_pg_logic3_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and24_y0);
  and_gate and_gate_h_s_cla8_and25_y0(h_s_cla8_and24_y0, h_s_cla8_and23_y0, h_s_cla8_and25_y0);
  and_gate and_gate_h_s_cla8_and26_y0(h_s_cla8_pg_logic2_y0, h_s_cla8_pg_logic1_y1, h_s_cla8_and26_y0);
  and_gate and_gate_h_s_cla8_and27_y0(h_s_cla8_pg_logic3_y0, h_s_cla8_pg_logic1_y1, h_s_cla8_and27_y0);
  and_gate and_gate_h_s_cla8_and28_y0(h_s_cla8_and27_y0, h_s_cla8_and26_y0, h_s_cla8_and28_y0);
  and_gate and_gate_h_s_cla8_and29_y0(h_s_cla8_pg_logic3_y0, h_s_cla8_pg_logic2_y1, h_s_cla8_and29_y0);
  or_gate or_gate_h_s_cla8_or6_y0(h_s_cla8_and29_y0, h_s_cla8_and20_y0, h_s_cla8_or6_y0);
  or_gate or_gate_h_s_cla8_or7_y0(h_s_cla8_or6_y0, h_s_cla8_and25_y0, h_s_cla8_or7_y0);
  or_gate or_gate_h_s_cla8_or8_y0(h_s_cla8_or7_y0, h_s_cla8_and28_y0, h_s_cla8_or8_y0);
  or_gate or_gate_h_s_cla8_or9_y0(h_s_cla8_pg_logic3_y1, h_s_cla8_or8_y0, h_s_cla8_or9_y0);
  pg_logic pg_logic_h_s_cla8_pg_logic4_y0(a_4, b_4, h_s_cla8_pg_logic4_y0, h_s_cla8_pg_logic4_y1, h_s_cla8_pg_logic4_y2);
  xor_gate xor_gate_h_s_cla8_xor4_y0(h_s_cla8_pg_logic4_y2, h_s_cla8_or9_y0, h_s_cla8_xor4_y0);
  and_gate and_gate_h_s_cla8_and30_y0(h_s_cla8_pg_logic0_y0, constant_wire_0, h_s_cla8_and30_y0);
  and_gate and_gate_h_s_cla8_and31_y0(h_s_cla8_pg_logic1_y0, constant_wire_0, h_s_cla8_and31_y0);
  and_gate and_gate_h_s_cla8_and32_y0(h_s_cla8_and31_y0, h_s_cla8_and30_y0, h_s_cla8_and32_y0);
  and_gate and_gate_h_s_cla8_and33_y0(h_s_cla8_pg_logic2_y0, constant_wire_0, h_s_cla8_and33_y0);
  and_gate and_gate_h_s_cla8_and34_y0(h_s_cla8_and33_y0, h_s_cla8_and32_y0, h_s_cla8_and34_y0);
  and_gate and_gate_h_s_cla8_and35_y0(h_s_cla8_pg_logic3_y0, constant_wire_0, h_s_cla8_and35_y0);
  and_gate and_gate_h_s_cla8_and36_y0(h_s_cla8_and35_y0, h_s_cla8_and34_y0, h_s_cla8_and36_y0);
  and_gate and_gate_h_s_cla8_and37_y0(h_s_cla8_pg_logic4_y0, constant_wire_0, h_s_cla8_and37_y0);
  and_gate and_gate_h_s_cla8_and38_y0(h_s_cla8_and37_y0, h_s_cla8_and36_y0, h_s_cla8_and38_y0);
  and_gate and_gate_h_s_cla8_and39_y0(h_s_cla8_pg_logic1_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and39_y0);
  and_gate and_gate_h_s_cla8_and40_y0(h_s_cla8_pg_logic2_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and40_y0);
  and_gate and_gate_h_s_cla8_and41_y0(h_s_cla8_and40_y0, h_s_cla8_and39_y0, h_s_cla8_and41_y0);
  and_gate and_gate_h_s_cla8_and42_y0(h_s_cla8_pg_logic3_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and42_y0);
  and_gate and_gate_h_s_cla8_and43_y0(h_s_cla8_and42_y0, h_s_cla8_and41_y0, h_s_cla8_and43_y0);
  and_gate and_gate_h_s_cla8_and44_y0(h_s_cla8_pg_logic4_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and44_y0);
  and_gate and_gate_h_s_cla8_and45_y0(h_s_cla8_and44_y0, h_s_cla8_and43_y0, h_s_cla8_and45_y0);
  and_gate and_gate_h_s_cla8_and46_y0(h_s_cla8_pg_logic2_y0, h_s_cla8_pg_logic1_y1, h_s_cla8_and46_y0);
  and_gate and_gate_h_s_cla8_and47_y0(h_s_cla8_pg_logic3_y0, h_s_cla8_pg_logic1_y1, h_s_cla8_and47_y0);
  and_gate and_gate_h_s_cla8_and48_y0(h_s_cla8_and47_y0, h_s_cla8_and46_y0, h_s_cla8_and48_y0);
  and_gate and_gate_h_s_cla8_and49_y0(h_s_cla8_pg_logic4_y0, h_s_cla8_pg_logic1_y1, h_s_cla8_and49_y0);
  and_gate and_gate_h_s_cla8_and50_y0(h_s_cla8_and49_y0, h_s_cla8_and48_y0, h_s_cla8_and50_y0);
  and_gate and_gate_h_s_cla8_and51_y0(h_s_cla8_pg_logic3_y0, h_s_cla8_pg_logic2_y1, h_s_cla8_and51_y0);
  and_gate and_gate_h_s_cla8_and52_y0(h_s_cla8_pg_logic4_y0, h_s_cla8_pg_logic2_y1, h_s_cla8_and52_y0);
  and_gate and_gate_h_s_cla8_and53_y0(h_s_cla8_and52_y0, h_s_cla8_and51_y0, h_s_cla8_and53_y0);
  and_gate and_gate_h_s_cla8_and54_y0(h_s_cla8_pg_logic4_y0, h_s_cla8_pg_logic3_y1, h_s_cla8_and54_y0);
  or_gate or_gate_h_s_cla8_or10_y0(h_s_cla8_and54_y0, h_s_cla8_and38_y0, h_s_cla8_or10_y0);
  or_gate or_gate_h_s_cla8_or11_y0(h_s_cla8_or10_y0, h_s_cla8_and45_y0, h_s_cla8_or11_y0);
  or_gate or_gate_h_s_cla8_or12_y0(h_s_cla8_or11_y0, h_s_cla8_and50_y0, h_s_cla8_or12_y0);
  or_gate or_gate_h_s_cla8_or13_y0(h_s_cla8_or12_y0, h_s_cla8_and53_y0, h_s_cla8_or13_y0);
  or_gate or_gate_h_s_cla8_or14_y0(h_s_cla8_pg_logic4_y1, h_s_cla8_or13_y0, h_s_cla8_or14_y0);
  pg_logic pg_logic_h_s_cla8_pg_logic5_y0(a_5, b_5, h_s_cla8_pg_logic5_y0, h_s_cla8_pg_logic5_y1, h_s_cla8_pg_logic5_y2);
  xor_gate xor_gate_h_s_cla8_xor5_y0(h_s_cla8_pg_logic5_y2, h_s_cla8_or14_y0, h_s_cla8_xor5_y0);
  and_gate and_gate_h_s_cla8_and55_y0(h_s_cla8_pg_logic0_y0, constant_wire_0, h_s_cla8_and55_y0);
  and_gate and_gate_h_s_cla8_and56_y0(h_s_cla8_pg_logic1_y0, constant_wire_0, h_s_cla8_and56_y0);
  and_gate and_gate_h_s_cla8_and57_y0(h_s_cla8_and56_y0, h_s_cla8_and55_y0, h_s_cla8_and57_y0);
  and_gate and_gate_h_s_cla8_and58_y0(h_s_cla8_pg_logic2_y0, constant_wire_0, h_s_cla8_and58_y0);
  and_gate and_gate_h_s_cla8_and59_y0(h_s_cla8_and58_y0, h_s_cla8_and57_y0, h_s_cla8_and59_y0);
  and_gate and_gate_h_s_cla8_and60_y0(h_s_cla8_pg_logic3_y0, constant_wire_0, h_s_cla8_and60_y0);
  and_gate and_gate_h_s_cla8_and61_y0(h_s_cla8_and60_y0, h_s_cla8_and59_y0, h_s_cla8_and61_y0);
  and_gate and_gate_h_s_cla8_and62_y0(h_s_cla8_pg_logic4_y0, constant_wire_0, h_s_cla8_and62_y0);
  and_gate and_gate_h_s_cla8_and63_y0(h_s_cla8_and62_y0, h_s_cla8_and61_y0, h_s_cla8_and63_y0);
  and_gate and_gate_h_s_cla8_and64_y0(h_s_cla8_pg_logic5_y0, constant_wire_0, h_s_cla8_and64_y0);
  and_gate and_gate_h_s_cla8_and65_y0(h_s_cla8_and64_y0, h_s_cla8_and63_y0, h_s_cla8_and65_y0);
  and_gate and_gate_h_s_cla8_and66_y0(h_s_cla8_pg_logic1_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and66_y0);
  and_gate and_gate_h_s_cla8_and67_y0(h_s_cla8_pg_logic2_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and67_y0);
  and_gate and_gate_h_s_cla8_and68_y0(h_s_cla8_and67_y0, h_s_cla8_and66_y0, h_s_cla8_and68_y0);
  and_gate and_gate_h_s_cla8_and69_y0(h_s_cla8_pg_logic3_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and69_y0);
  and_gate and_gate_h_s_cla8_and70_y0(h_s_cla8_and69_y0, h_s_cla8_and68_y0, h_s_cla8_and70_y0);
  and_gate and_gate_h_s_cla8_and71_y0(h_s_cla8_pg_logic4_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and71_y0);
  and_gate and_gate_h_s_cla8_and72_y0(h_s_cla8_and71_y0, h_s_cla8_and70_y0, h_s_cla8_and72_y0);
  and_gate and_gate_h_s_cla8_and73_y0(h_s_cla8_pg_logic5_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and73_y0);
  and_gate and_gate_h_s_cla8_and74_y0(h_s_cla8_and73_y0, h_s_cla8_and72_y0, h_s_cla8_and74_y0);
  and_gate and_gate_h_s_cla8_and75_y0(h_s_cla8_pg_logic2_y0, h_s_cla8_pg_logic1_y1, h_s_cla8_and75_y0);
  and_gate and_gate_h_s_cla8_and76_y0(h_s_cla8_pg_logic3_y0, h_s_cla8_pg_logic1_y1, h_s_cla8_and76_y0);
  and_gate and_gate_h_s_cla8_and77_y0(h_s_cla8_and76_y0, h_s_cla8_and75_y0, h_s_cla8_and77_y0);
  and_gate and_gate_h_s_cla8_and78_y0(h_s_cla8_pg_logic4_y0, h_s_cla8_pg_logic1_y1, h_s_cla8_and78_y0);
  and_gate and_gate_h_s_cla8_and79_y0(h_s_cla8_and78_y0, h_s_cla8_and77_y0, h_s_cla8_and79_y0);
  and_gate and_gate_h_s_cla8_and80_y0(h_s_cla8_pg_logic5_y0, h_s_cla8_pg_logic1_y1, h_s_cla8_and80_y0);
  and_gate and_gate_h_s_cla8_and81_y0(h_s_cla8_and80_y0, h_s_cla8_and79_y0, h_s_cla8_and81_y0);
  and_gate and_gate_h_s_cla8_and82_y0(h_s_cla8_pg_logic3_y0, h_s_cla8_pg_logic2_y1, h_s_cla8_and82_y0);
  and_gate and_gate_h_s_cla8_and83_y0(h_s_cla8_pg_logic4_y0, h_s_cla8_pg_logic2_y1, h_s_cla8_and83_y0);
  and_gate and_gate_h_s_cla8_and84_y0(h_s_cla8_and83_y0, h_s_cla8_and82_y0, h_s_cla8_and84_y0);
  and_gate and_gate_h_s_cla8_and85_y0(h_s_cla8_pg_logic5_y0, h_s_cla8_pg_logic2_y1, h_s_cla8_and85_y0);
  and_gate and_gate_h_s_cla8_and86_y0(h_s_cla8_and85_y0, h_s_cla8_and84_y0, h_s_cla8_and86_y0);
  and_gate and_gate_h_s_cla8_and87_y0(h_s_cla8_pg_logic4_y0, h_s_cla8_pg_logic3_y1, h_s_cla8_and87_y0);
  and_gate and_gate_h_s_cla8_and88_y0(h_s_cla8_pg_logic5_y0, h_s_cla8_pg_logic3_y1, h_s_cla8_and88_y0);
  and_gate and_gate_h_s_cla8_and89_y0(h_s_cla8_and88_y0, h_s_cla8_and87_y0, h_s_cla8_and89_y0);
  and_gate and_gate_h_s_cla8_and90_y0(h_s_cla8_pg_logic5_y0, h_s_cla8_pg_logic4_y1, h_s_cla8_and90_y0);
  or_gate or_gate_h_s_cla8_or15_y0(h_s_cla8_and90_y0, h_s_cla8_and65_y0, h_s_cla8_or15_y0);
  or_gate or_gate_h_s_cla8_or16_y0(h_s_cla8_or15_y0, h_s_cla8_and74_y0, h_s_cla8_or16_y0);
  or_gate or_gate_h_s_cla8_or17_y0(h_s_cla8_or16_y0, h_s_cla8_and81_y0, h_s_cla8_or17_y0);
  or_gate or_gate_h_s_cla8_or18_y0(h_s_cla8_or17_y0, h_s_cla8_and86_y0, h_s_cla8_or18_y0);
  or_gate or_gate_h_s_cla8_or19_y0(h_s_cla8_or18_y0, h_s_cla8_and89_y0, h_s_cla8_or19_y0);
  or_gate or_gate_h_s_cla8_or20_y0(h_s_cla8_pg_logic5_y1, h_s_cla8_or19_y0, h_s_cla8_or20_y0);
  pg_logic pg_logic_h_s_cla8_pg_logic6_y0(a_6, b_6, h_s_cla8_pg_logic6_y0, h_s_cla8_pg_logic6_y1, h_s_cla8_pg_logic6_y2);
  xor_gate xor_gate_h_s_cla8_xor6_y0(h_s_cla8_pg_logic6_y2, h_s_cla8_or20_y0, h_s_cla8_xor6_y0);
  and_gate and_gate_h_s_cla8_and91_y0(h_s_cla8_pg_logic0_y0, constant_wire_0, h_s_cla8_and91_y0);
  and_gate and_gate_h_s_cla8_and92_y0(h_s_cla8_pg_logic1_y0, constant_wire_0, h_s_cla8_and92_y0);
  and_gate and_gate_h_s_cla8_and93_y0(h_s_cla8_and92_y0, h_s_cla8_and91_y0, h_s_cla8_and93_y0);
  and_gate and_gate_h_s_cla8_and94_y0(h_s_cla8_pg_logic2_y0, constant_wire_0, h_s_cla8_and94_y0);
  and_gate and_gate_h_s_cla8_and95_y0(h_s_cla8_and94_y0, h_s_cla8_and93_y0, h_s_cla8_and95_y0);
  and_gate and_gate_h_s_cla8_and96_y0(h_s_cla8_pg_logic3_y0, constant_wire_0, h_s_cla8_and96_y0);
  and_gate and_gate_h_s_cla8_and97_y0(h_s_cla8_and96_y0, h_s_cla8_and95_y0, h_s_cla8_and97_y0);
  and_gate and_gate_h_s_cla8_and98_y0(h_s_cla8_pg_logic4_y0, constant_wire_0, h_s_cla8_and98_y0);
  and_gate and_gate_h_s_cla8_and99_y0(h_s_cla8_and98_y0, h_s_cla8_and97_y0, h_s_cla8_and99_y0);
  and_gate and_gate_h_s_cla8_and100_y0(h_s_cla8_pg_logic5_y0, constant_wire_0, h_s_cla8_and100_y0);
  and_gate and_gate_h_s_cla8_and101_y0(h_s_cla8_and100_y0, h_s_cla8_and99_y0, h_s_cla8_and101_y0);
  and_gate and_gate_h_s_cla8_and102_y0(h_s_cla8_pg_logic6_y0, constant_wire_0, h_s_cla8_and102_y0);
  and_gate and_gate_h_s_cla8_and103_y0(h_s_cla8_and102_y0, h_s_cla8_and101_y0, h_s_cla8_and103_y0);
  and_gate and_gate_h_s_cla8_and104_y0(h_s_cla8_pg_logic1_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and104_y0);
  and_gate and_gate_h_s_cla8_and105_y0(h_s_cla8_pg_logic2_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and105_y0);
  and_gate and_gate_h_s_cla8_and106_y0(h_s_cla8_and105_y0, h_s_cla8_and104_y0, h_s_cla8_and106_y0);
  and_gate and_gate_h_s_cla8_and107_y0(h_s_cla8_pg_logic3_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and107_y0);
  and_gate and_gate_h_s_cla8_and108_y0(h_s_cla8_and107_y0, h_s_cla8_and106_y0, h_s_cla8_and108_y0);
  and_gate and_gate_h_s_cla8_and109_y0(h_s_cla8_pg_logic4_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and109_y0);
  and_gate and_gate_h_s_cla8_and110_y0(h_s_cla8_and109_y0, h_s_cla8_and108_y0, h_s_cla8_and110_y0);
  and_gate and_gate_h_s_cla8_and111_y0(h_s_cla8_pg_logic5_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and111_y0);
  and_gate and_gate_h_s_cla8_and112_y0(h_s_cla8_and111_y0, h_s_cla8_and110_y0, h_s_cla8_and112_y0);
  and_gate and_gate_h_s_cla8_and113_y0(h_s_cla8_pg_logic6_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and113_y0);
  and_gate and_gate_h_s_cla8_and114_y0(h_s_cla8_and113_y0, h_s_cla8_and112_y0, h_s_cla8_and114_y0);
  and_gate and_gate_h_s_cla8_and115_y0(h_s_cla8_pg_logic2_y0, h_s_cla8_pg_logic1_y1, h_s_cla8_and115_y0);
  and_gate and_gate_h_s_cla8_and116_y0(h_s_cla8_pg_logic3_y0, h_s_cla8_pg_logic1_y1, h_s_cla8_and116_y0);
  and_gate and_gate_h_s_cla8_and117_y0(h_s_cla8_and116_y0, h_s_cla8_and115_y0, h_s_cla8_and117_y0);
  and_gate and_gate_h_s_cla8_and118_y0(h_s_cla8_pg_logic4_y0, h_s_cla8_pg_logic1_y1, h_s_cla8_and118_y0);
  and_gate and_gate_h_s_cla8_and119_y0(h_s_cla8_and118_y0, h_s_cla8_and117_y0, h_s_cla8_and119_y0);
  and_gate and_gate_h_s_cla8_and120_y0(h_s_cla8_pg_logic5_y0, h_s_cla8_pg_logic1_y1, h_s_cla8_and120_y0);
  and_gate and_gate_h_s_cla8_and121_y0(h_s_cla8_and120_y0, h_s_cla8_and119_y0, h_s_cla8_and121_y0);
  and_gate and_gate_h_s_cla8_and122_y0(h_s_cla8_pg_logic6_y0, h_s_cla8_pg_logic1_y1, h_s_cla8_and122_y0);
  and_gate and_gate_h_s_cla8_and123_y0(h_s_cla8_and122_y0, h_s_cla8_and121_y0, h_s_cla8_and123_y0);
  and_gate and_gate_h_s_cla8_and124_y0(h_s_cla8_pg_logic3_y0, h_s_cla8_pg_logic2_y1, h_s_cla8_and124_y0);
  and_gate and_gate_h_s_cla8_and125_y0(h_s_cla8_pg_logic4_y0, h_s_cla8_pg_logic2_y1, h_s_cla8_and125_y0);
  and_gate and_gate_h_s_cla8_and126_y0(h_s_cla8_and125_y0, h_s_cla8_and124_y0, h_s_cla8_and126_y0);
  and_gate and_gate_h_s_cla8_and127_y0(h_s_cla8_pg_logic5_y0, h_s_cla8_pg_logic2_y1, h_s_cla8_and127_y0);
  and_gate and_gate_h_s_cla8_and128_y0(h_s_cla8_and127_y0, h_s_cla8_and126_y0, h_s_cla8_and128_y0);
  and_gate and_gate_h_s_cla8_and129_y0(h_s_cla8_pg_logic6_y0, h_s_cla8_pg_logic2_y1, h_s_cla8_and129_y0);
  and_gate and_gate_h_s_cla8_and130_y0(h_s_cla8_and129_y0, h_s_cla8_and128_y0, h_s_cla8_and130_y0);
  and_gate and_gate_h_s_cla8_and131_y0(h_s_cla8_pg_logic4_y0, h_s_cla8_pg_logic3_y1, h_s_cla8_and131_y0);
  and_gate and_gate_h_s_cla8_and132_y0(h_s_cla8_pg_logic5_y0, h_s_cla8_pg_logic3_y1, h_s_cla8_and132_y0);
  and_gate and_gate_h_s_cla8_and133_y0(h_s_cla8_and132_y0, h_s_cla8_and131_y0, h_s_cla8_and133_y0);
  and_gate and_gate_h_s_cla8_and134_y0(h_s_cla8_pg_logic6_y0, h_s_cla8_pg_logic3_y1, h_s_cla8_and134_y0);
  and_gate and_gate_h_s_cla8_and135_y0(h_s_cla8_and134_y0, h_s_cla8_and133_y0, h_s_cla8_and135_y0);
  and_gate and_gate_h_s_cla8_and136_y0(h_s_cla8_pg_logic5_y0, h_s_cla8_pg_logic4_y1, h_s_cla8_and136_y0);
  and_gate and_gate_h_s_cla8_and137_y0(h_s_cla8_pg_logic6_y0, h_s_cla8_pg_logic4_y1, h_s_cla8_and137_y0);
  and_gate and_gate_h_s_cla8_and138_y0(h_s_cla8_and137_y0, h_s_cla8_and136_y0, h_s_cla8_and138_y0);
  and_gate and_gate_h_s_cla8_and139_y0(h_s_cla8_pg_logic6_y0, h_s_cla8_pg_logic5_y1, h_s_cla8_and139_y0);
  or_gate or_gate_h_s_cla8_or21_y0(h_s_cla8_and139_y0, h_s_cla8_and103_y0, h_s_cla8_or21_y0);
  or_gate or_gate_h_s_cla8_or22_y0(h_s_cla8_or21_y0, h_s_cla8_and114_y0, h_s_cla8_or22_y0);
  or_gate or_gate_h_s_cla8_or23_y0(h_s_cla8_or22_y0, h_s_cla8_and123_y0, h_s_cla8_or23_y0);
  or_gate or_gate_h_s_cla8_or24_y0(h_s_cla8_or23_y0, h_s_cla8_and130_y0, h_s_cla8_or24_y0);
  or_gate or_gate_h_s_cla8_or25_y0(h_s_cla8_or24_y0, h_s_cla8_and135_y0, h_s_cla8_or25_y0);
  or_gate or_gate_h_s_cla8_or26_y0(h_s_cla8_or25_y0, h_s_cla8_and138_y0, h_s_cla8_or26_y0);
  or_gate or_gate_h_s_cla8_or27_y0(h_s_cla8_pg_logic6_y1, h_s_cla8_or26_y0, h_s_cla8_or27_y0);
  pg_logic pg_logic_h_s_cla8_pg_logic7_y0(a_7, b_7, h_s_cla8_pg_logic7_y0, h_s_cla8_pg_logic7_y1, h_s_cla8_pg_logic7_y2);
  xor_gate xor_gate_h_s_cla8_xor7_y0(h_s_cla8_pg_logic7_y2, h_s_cla8_or27_y0, h_s_cla8_xor7_y0);
  and_gate and_gate_h_s_cla8_and140_y0(h_s_cla8_pg_logic0_y0, constant_wire_0, h_s_cla8_and140_y0);
  and_gate and_gate_h_s_cla8_and141_y0(h_s_cla8_pg_logic1_y0, constant_wire_0, h_s_cla8_and141_y0);
  and_gate and_gate_h_s_cla8_and142_y0(h_s_cla8_and141_y0, h_s_cla8_and140_y0, h_s_cla8_and142_y0);
  and_gate and_gate_h_s_cla8_and143_y0(h_s_cla8_pg_logic2_y0, constant_wire_0, h_s_cla8_and143_y0);
  and_gate and_gate_h_s_cla8_and144_y0(h_s_cla8_and143_y0, h_s_cla8_and142_y0, h_s_cla8_and144_y0);
  and_gate and_gate_h_s_cla8_and145_y0(h_s_cla8_pg_logic3_y0, constant_wire_0, h_s_cla8_and145_y0);
  and_gate and_gate_h_s_cla8_and146_y0(h_s_cla8_and145_y0, h_s_cla8_and144_y0, h_s_cla8_and146_y0);
  and_gate and_gate_h_s_cla8_and147_y0(h_s_cla8_pg_logic4_y0, constant_wire_0, h_s_cla8_and147_y0);
  and_gate and_gate_h_s_cla8_and148_y0(h_s_cla8_and147_y0, h_s_cla8_and146_y0, h_s_cla8_and148_y0);
  and_gate and_gate_h_s_cla8_and149_y0(h_s_cla8_pg_logic5_y0, constant_wire_0, h_s_cla8_and149_y0);
  and_gate and_gate_h_s_cla8_and150_y0(h_s_cla8_and149_y0, h_s_cla8_and148_y0, h_s_cla8_and150_y0);
  and_gate and_gate_h_s_cla8_and151_y0(h_s_cla8_pg_logic6_y0, constant_wire_0, h_s_cla8_and151_y0);
  and_gate and_gate_h_s_cla8_and152_y0(h_s_cla8_and151_y0, h_s_cla8_and150_y0, h_s_cla8_and152_y0);
  and_gate and_gate_h_s_cla8_and153_y0(h_s_cla8_pg_logic7_y0, constant_wire_0, h_s_cla8_and153_y0);
  and_gate and_gate_h_s_cla8_and154_y0(h_s_cla8_and153_y0, h_s_cla8_and152_y0, h_s_cla8_and154_y0);
  and_gate and_gate_h_s_cla8_and155_y0(h_s_cla8_pg_logic1_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and155_y0);
  and_gate and_gate_h_s_cla8_and156_y0(h_s_cla8_pg_logic2_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and156_y0);
  and_gate and_gate_h_s_cla8_and157_y0(h_s_cla8_and156_y0, h_s_cla8_and155_y0, h_s_cla8_and157_y0);
  and_gate and_gate_h_s_cla8_and158_y0(h_s_cla8_pg_logic3_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and158_y0);
  and_gate and_gate_h_s_cla8_and159_y0(h_s_cla8_and158_y0, h_s_cla8_and157_y0, h_s_cla8_and159_y0);
  and_gate and_gate_h_s_cla8_and160_y0(h_s_cla8_pg_logic4_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and160_y0);
  and_gate and_gate_h_s_cla8_and161_y0(h_s_cla8_and160_y0, h_s_cla8_and159_y0, h_s_cla8_and161_y0);
  and_gate and_gate_h_s_cla8_and162_y0(h_s_cla8_pg_logic5_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and162_y0);
  and_gate and_gate_h_s_cla8_and163_y0(h_s_cla8_and162_y0, h_s_cla8_and161_y0, h_s_cla8_and163_y0);
  and_gate and_gate_h_s_cla8_and164_y0(h_s_cla8_pg_logic6_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and164_y0);
  and_gate and_gate_h_s_cla8_and165_y0(h_s_cla8_and164_y0, h_s_cla8_and163_y0, h_s_cla8_and165_y0);
  and_gate and_gate_h_s_cla8_and166_y0(h_s_cla8_pg_logic7_y0, h_s_cla8_pg_logic0_y1, h_s_cla8_and166_y0);
  and_gate and_gate_h_s_cla8_and167_y0(h_s_cla8_and166_y0, h_s_cla8_and165_y0, h_s_cla8_and167_y0);
  and_gate and_gate_h_s_cla8_and168_y0(h_s_cla8_pg_logic2_y0, h_s_cla8_pg_logic1_y1, h_s_cla8_and168_y0);
  and_gate and_gate_h_s_cla8_and169_y0(h_s_cla8_pg_logic3_y0, h_s_cla8_pg_logic1_y1, h_s_cla8_and169_y0);
  and_gate and_gate_h_s_cla8_and170_y0(h_s_cla8_and169_y0, h_s_cla8_and168_y0, h_s_cla8_and170_y0);
  and_gate and_gate_h_s_cla8_and171_y0(h_s_cla8_pg_logic4_y0, h_s_cla8_pg_logic1_y1, h_s_cla8_and171_y0);
  and_gate and_gate_h_s_cla8_and172_y0(h_s_cla8_and171_y0, h_s_cla8_and170_y0, h_s_cla8_and172_y0);
  and_gate and_gate_h_s_cla8_and173_y0(h_s_cla8_pg_logic5_y0, h_s_cla8_pg_logic1_y1, h_s_cla8_and173_y0);
  and_gate and_gate_h_s_cla8_and174_y0(h_s_cla8_and173_y0, h_s_cla8_and172_y0, h_s_cla8_and174_y0);
  and_gate and_gate_h_s_cla8_and175_y0(h_s_cla8_pg_logic6_y0, h_s_cla8_pg_logic1_y1, h_s_cla8_and175_y0);
  and_gate and_gate_h_s_cla8_and176_y0(h_s_cla8_and175_y0, h_s_cla8_and174_y0, h_s_cla8_and176_y0);
  and_gate and_gate_h_s_cla8_and177_y0(h_s_cla8_pg_logic7_y0, h_s_cla8_pg_logic1_y1, h_s_cla8_and177_y0);
  and_gate and_gate_h_s_cla8_and178_y0(h_s_cla8_and177_y0, h_s_cla8_and176_y0, h_s_cla8_and178_y0);
  and_gate and_gate_h_s_cla8_and179_y0(h_s_cla8_pg_logic3_y0, h_s_cla8_pg_logic2_y1, h_s_cla8_and179_y0);
  and_gate and_gate_h_s_cla8_and180_y0(h_s_cla8_pg_logic4_y0, h_s_cla8_pg_logic2_y1, h_s_cla8_and180_y0);
  and_gate and_gate_h_s_cla8_and181_y0(h_s_cla8_and180_y0, h_s_cla8_and179_y0, h_s_cla8_and181_y0);
  and_gate and_gate_h_s_cla8_and182_y0(h_s_cla8_pg_logic5_y0, h_s_cla8_pg_logic2_y1, h_s_cla8_and182_y0);
  and_gate and_gate_h_s_cla8_and183_y0(h_s_cla8_and182_y0, h_s_cla8_and181_y0, h_s_cla8_and183_y0);
  and_gate and_gate_h_s_cla8_and184_y0(h_s_cla8_pg_logic6_y0, h_s_cla8_pg_logic2_y1, h_s_cla8_and184_y0);
  and_gate and_gate_h_s_cla8_and185_y0(h_s_cla8_and184_y0, h_s_cla8_and183_y0, h_s_cla8_and185_y0);
  and_gate and_gate_h_s_cla8_and186_y0(h_s_cla8_pg_logic7_y0, h_s_cla8_pg_logic2_y1, h_s_cla8_and186_y0);
  and_gate and_gate_h_s_cla8_and187_y0(h_s_cla8_and186_y0, h_s_cla8_and185_y0, h_s_cla8_and187_y0);
  and_gate and_gate_h_s_cla8_and188_y0(h_s_cla8_pg_logic4_y0, h_s_cla8_pg_logic3_y1, h_s_cla8_and188_y0);
  and_gate and_gate_h_s_cla8_and189_y0(h_s_cla8_pg_logic5_y0, h_s_cla8_pg_logic3_y1, h_s_cla8_and189_y0);
  and_gate and_gate_h_s_cla8_and190_y0(h_s_cla8_and189_y0, h_s_cla8_and188_y0, h_s_cla8_and190_y0);
  and_gate and_gate_h_s_cla8_and191_y0(h_s_cla8_pg_logic6_y0, h_s_cla8_pg_logic3_y1, h_s_cla8_and191_y0);
  and_gate and_gate_h_s_cla8_and192_y0(h_s_cla8_and191_y0, h_s_cla8_and190_y0, h_s_cla8_and192_y0);
  and_gate and_gate_h_s_cla8_and193_y0(h_s_cla8_pg_logic7_y0, h_s_cla8_pg_logic3_y1, h_s_cla8_and193_y0);
  and_gate and_gate_h_s_cla8_and194_y0(h_s_cla8_and193_y0, h_s_cla8_and192_y0, h_s_cla8_and194_y0);
  and_gate and_gate_h_s_cla8_and195_y0(h_s_cla8_pg_logic5_y0, h_s_cla8_pg_logic4_y1, h_s_cla8_and195_y0);
  and_gate and_gate_h_s_cla8_and196_y0(h_s_cla8_pg_logic6_y0, h_s_cla8_pg_logic4_y1, h_s_cla8_and196_y0);
  and_gate and_gate_h_s_cla8_and197_y0(h_s_cla8_and196_y0, h_s_cla8_and195_y0, h_s_cla8_and197_y0);
  and_gate and_gate_h_s_cla8_and198_y0(h_s_cla8_pg_logic7_y0, h_s_cla8_pg_logic4_y1, h_s_cla8_and198_y0);
  and_gate and_gate_h_s_cla8_and199_y0(h_s_cla8_and198_y0, h_s_cla8_and197_y0, h_s_cla8_and199_y0);
  and_gate and_gate_h_s_cla8_and200_y0(h_s_cla8_pg_logic6_y0, h_s_cla8_pg_logic5_y1, h_s_cla8_and200_y0);
  and_gate and_gate_h_s_cla8_and201_y0(h_s_cla8_pg_logic7_y0, h_s_cla8_pg_logic5_y1, h_s_cla8_and201_y0);
  and_gate and_gate_h_s_cla8_and202_y0(h_s_cla8_and201_y0, h_s_cla8_and200_y0, h_s_cla8_and202_y0);
  and_gate and_gate_h_s_cla8_and203_y0(h_s_cla8_pg_logic7_y0, h_s_cla8_pg_logic6_y1, h_s_cla8_and203_y0);
  or_gate or_gate_h_s_cla8_or28_y0(h_s_cla8_and203_y0, h_s_cla8_and154_y0, h_s_cla8_or28_y0);
  or_gate or_gate_h_s_cla8_or29_y0(h_s_cla8_or28_y0, h_s_cla8_and167_y0, h_s_cla8_or29_y0);
  or_gate or_gate_h_s_cla8_or30_y0(h_s_cla8_or29_y0, h_s_cla8_and178_y0, h_s_cla8_or30_y0);
  or_gate or_gate_h_s_cla8_or31_y0(h_s_cla8_or30_y0, h_s_cla8_and187_y0, h_s_cla8_or31_y0);
  or_gate or_gate_h_s_cla8_or32_y0(h_s_cla8_or31_y0, h_s_cla8_and194_y0, h_s_cla8_or32_y0);
  or_gate or_gate_h_s_cla8_or33_y0(h_s_cla8_or32_y0, h_s_cla8_and199_y0, h_s_cla8_or33_y0);
  or_gate or_gate_h_s_cla8_or34_y0(h_s_cla8_or33_y0, h_s_cla8_and202_y0, h_s_cla8_or34_y0);
  or_gate or_gate_h_s_cla8_or35_y0(h_s_cla8_pg_logic7_y1, h_s_cla8_or34_y0, h_s_cla8_or35_y0);
  xor_gate xor_gate_h_s_cla8_xor8_y0(a_7, b_7, h_s_cla8_xor8_y0);
  xor_gate xor_gate_h_s_cla8_xor9_y0(h_s_cla8_xor8_y0, h_s_cla8_or35_y0, h_s_cla8_xor9_y0);

  assign out[0] = h_s_cla8_xor0_y0;
  assign out[1] = h_s_cla8_xor1_y0;
  assign out[2] = h_s_cla8_xor2_y0;
  assign out[3] = h_s_cla8_xor3_y0;
  assign out[4] = h_s_cla8_xor4_y0;
  assign out[5] = h_s_cla8_xor5_y0;
  assign out[6] = h_s_cla8_xor6_y0;
  assign out[7] = h_s_cla8_xor7_y0;
  assign out[8] = h_s_cla8_xor9_y0;
endmodule
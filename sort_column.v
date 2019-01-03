`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:09:42 11/13/2018 
// Design Name: 
// Module Name:    sort_column 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
//14 clock to output
module sort_column #(
	parameter DATA_WIDTH = 8,
	parameter CULUMN_NUM = 7
  
)(
	input wire clk,
	input wire rst,
	input wire refresh,
	input wire [DATA_WIDTH-1:0] in0,
	input wire [DATA_WIDTH-1:0] in1,
   input wire [DATA_WIDTH-1:0] in2,
   input wire [DATA_WIDTH-1:0] in3,
   input wire [DATA_WIDTH-1:0] in4,
	input wire [DATA_WIDTH-1:0] in5,
   input wire [DATA_WIDTH-1:0] in6,	
	output reg [DATA_WIDTH-1:0] out0,
	output reg [DATA_WIDTH-1:0] out1,
	output reg [DATA_WIDTH-1:0] out2,
	output reg [DATA_WIDTH-1:0] out3,
	output reg [DATA_WIDTH-1:0] out4,
	output reg [DATA_WIDTH-1:0] out5,
	output reg [DATA_WIDTH-1:0] out6
);
	integer i;
	integer j;
	wire [DATA_WIDTH-1:0]tmp_wire[CULUMN_NUM-1:0][CULUMN_NUM-1:0];
	reg [DATA_WIDTH-1:0]tmp_reg[CULUMN_NUM-1:0][CULUMN_NUM-1:0];
	//wire [DATA_WIDTH-1:0]out_wire;
	
	compare #(.DATA_WIDTH(DATA_WIDTH),.NUM(0))compare_0
	(
		.clk(clk),
		.rst(rst),
		.in0(tmp_reg[0][0]),
		.in1(tmp_reg[0][1]),
		.in2(tmp_reg[0][2]),
		.in3(tmp_reg[0][3]),
		.in4(tmp_reg[0][4]),
		.in5(tmp_reg[0][5]),
		.in6(tmp_reg[0][6]),	
		.out0(tmp_wire[0][0]),
		.out1(tmp_wire[0][1]),
		.out2(tmp_wire[0][2]),
		.out3(tmp_wire[0][3]),
		.out4(tmp_wire[0][4]),
		.out5(tmp_wire[0][5]),
		.out6(tmp_wire[0][6])
	);
	
	
	compare #(.DATA_WIDTH(DATA_WIDTH),.NUM(1))compare_1
	(
		.clk(clk),
		.rst(rst),
		.in0(tmp_reg[1][0]),
		.in1(tmp_reg[1][1]),
		.in2(tmp_reg[1][2]),
		.in3(tmp_reg[1][3]),
		.in4(tmp_reg[1][4]),
		.in5(tmp_reg[1][5]),
		.in6(tmp_reg[1][6]),
		.out0(tmp_wire[1][0]),
		.out1(tmp_wire[1][1]),
		.out2(tmp_wire[1][2]),
		.out3(tmp_wire[1][3]),
		.out4(tmp_wire[1][4]),
		.out5(tmp_wire[1][5]),
		.out6(tmp_wire[1][6])
	);
		
	compare #(.DATA_WIDTH(DATA_WIDTH),.NUM(0))compare_2
	(
		.clk(clk),
		.rst(rst),
		.in0(tmp_reg[2][0]),
		.in1(tmp_reg[2][1]),
		.in2(tmp_reg[2][2]),
		.in3(tmp_reg[2][3]),
		.in4(tmp_reg[2][4]),
		.in5(tmp_reg[2][5]),
		.in6(tmp_reg[2][6]),
		.out0(tmp_wire[2][0]),
		.out1(tmp_wire[2][1]),
		.out2(tmp_wire[2][2]),
		.out3(tmp_wire[2][3]),
		.out4(tmp_wire[2][4]),
		.out5(tmp_wire[2][5]),
		.out6(tmp_wire[2][6])
	);
	
		compare #(.DATA_WIDTH(DATA_WIDTH),.NUM(1))compare_3
	(
		.clk(clk),
		.rst(rst),
		.in0(tmp_reg[3][0]),
		.in1(tmp_reg[3][1]),
		.in2(tmp_reg[3][2]),
		.in3(tmp_reg[3][3]),
		.in4(tmp_reg[3][4]),
		.in5(tmp_reg[3][5]),
		.in6(tmp_reg[3][6]),
		.out0(tmp_wire[3][0]),
		.out1(tmp_wire[3][1]),
		.out2(tmp_wire[3][2]),
		.out3(tmp_wire[3][3]),
		.out4(tmp_wire[3][4]),
		.out5(tmp_wire[3][5]),
		.out6(tmp_wire[3][6])
	);
		compare #(.DATA_WIDTH(DATA_WIDTH),.NUM(0))compare_4
	(
		.clk(clk),
		.rst(rst),
		.in0(tmp_reg[4][0]),
		.in1(tmp_reg[4][1]),
		.in2(tmp_reg[4][2]),
		.in3(tmp_reg[4][3]),
		.in4(tmp_reg[4][4]),
		.in5(tmp_reg[4][5]),
		.in6(tmp_reg[4][6]),
		.out0(tmp_wire[4][0]),
		.out1(tmp_wire[4][1]),
		.out2(tmp_wire[4][2]),
		.out3(tmp_wire[4][3]),
		.out4(tmp_wire[4][4]),
		.out5(tmp_wire[4][5]),
		.out6(tmp_wire[4][6])
	);
		compare #(.DATA_WIDTH(DATA_WIDTH),.NUM(1))compare_5
	(
		.clk(clk),
		.rst(rst),
		.in0(tmp_reg[5][0]),
		.in1(tmp_reg[5][1]),
		.in2(tmp_reg[5][2]),
		.in3(tmp_reg[5][3]),
		.in4(tmp_reg[5][4]),
		.in5(tmp_reg[5][5]),
		.in6(tmp_reg[5][6]),
		.out0(tmp_wire[5][0]),
		.out1(tmp_wire[5][1]),
		.out2(tmp_wire[5][2]),
		.out3(tmp_wire[5][3]),
		.out4(tmp_wire[5][4]),
		.out5(tmp_wire[5][5]),
		.out6(tmp_wire[5][6])

	);
		compare #(.DATA_WIDTH(DATA_WIDTH),.NUM(0))compare_6
	(
		.clk(clk),
		.rst(rst),
		.in0(tmp_reg[6][0]),
		.in1(tmp_reg[6][1]),
		.in2(tmp_reg[6][2]),
		.in3(tmp_reg[6][3]),
		.in4(tmp_reg[6][4]),
		.in5(tmp_reg[6][5]),
		.in6(tmp_reg[6][6]),
		.out0(tmp_wire[6][0]),
		.out1(tmp_wire[6][1]),
		.out2(tmp_wire[6][2]),
		.out3(tmp_wire[6][3]),
		.out4(tmp_wire[6][4]),
		.out5(tmp_wire[6][5]),
		.out6(tmp_wire[6][6])

	);
	always@(posedge clk)begin
		if(rst|refresh)begin
			for(i = 0; i < CULUMN_NUM; i = i + 1) begin
				for(j = 0; j < CULUMN_NUM; j = j + 1)begin
					tmp_reg[i][j] <= 8'b0;
				end
			end
			out0 <= 8'b0;
			out1 <= 8'b0;
			out2 <= 8'b0;
			out3 <= 8'b0;
			out4 <= 8'b0;
			out5 <= 8'b0;
			out6 <= 8'b0;
		end else begin		
			//out <= out_wire;
			tmp_reg[0][0] <= in0;
			tmp_reg[0][1] <= in1;
			tmp_reg[0][2] <= in2;
			tmp_reg[0][3] <= in3;
			tmp_reg[0][4] <= in4;
			tmp_reg[0][5] <= in5;
			tmp_reg[0][6] <= in6;
			tmp_reg[1][0] <= tmp_wire[0][0];
			tmp_reg[1][1] <= tmp_wire[0][1];
			tmp_reg[1][2] <= tmp_wire[0][2];
			tmp_reg[1][3] <= tmp_wire[0][3];
			tmp_reg[1][4] <= tmp_wire[0][4];
			tmp_reg[1][5] <= tmp_wire[0][5];
			tmp_reg[1][6] <= tmp_wire[0][6];
			tmp_reg[2][0] <= tmp_wire[1][0];
			tmp_reg[2][1] <= tmp_wire[1][1];
			tmp_reg[2][2] <= tmp_wire[1][2];
			tmp_reg[2][3] <= tmp_wire[1][3];
			tmp_reg[2][4] <= tmp_wire[1][4];
			tmp_reg[2][5] <= tmp_wire[1][5];
			tmp_reg[2][6] <= tmp_wire[1][6];
			tmp_reg[3][0] <= tmp_wire[2][0];
			tmp_reg[3][1] <= tmp_wire[2][1];
			tmp_reg[3][2] <= tmp_wire[2][2];
			tmp_reg[3][3] <= tmp_wire[2][3];
			tmp_reg[3][4] <= tmp_wire[2][4];
			tmp_reg[3][5] <= tmp_wire[2][5];
			tmp_reg[3][6] <= tmp_wire[2][6];
			tmp_reg[4][0] <= tmp_wire[3][0];
			tmp_reg[4][1] <= tmp_wire[3][1];
			tmp_reg[4][2] <= tmp_wire[3][2];
			tmp_reg[4][3] <= tmp_wire[3][3];
			tmp_reg[4][4] <= tmp_wire[3][4];
			tmp_reg[4][5] <= tmp_wire[3][5];
			tmp_reg[4][6] <= tmp_wire[3][6];
			tmp_reg[5][0] <= tmp_wire[4][0];
			tmp_reg[5][1] <= tmp_wire[4][1];
			tmp_reg[5][2] <= tmp_wire[4][2];
			tmp_reg[5][3] <= tmp_wire[4][3];
			tmp_reg[5][4] <= tmp_wire[4][4];
			tmp_reg[5][5] <= tmp_wire[4][5];
			tmp_reg[5][6] <= tmp_wire[4][6];
			tmp_reg[6][0] <= tmp_wire[5][0];
			tmp_reg[6][1] <= tmp_wire[5][1];
			tmp_reg[6][2] <= tmp_wire[5][2];
			tmp_reg[6][3] <= tmp_wire[5][3];
			tmp_reg[6][4] <= tmp_wire[5][4];
			tmp_reg[6][5] <= tmp_wire[5][5];
			tmp_reg[6][6] <= tmp_wire[5][6];
			out0 <= tmp_wire[6][0];
			out1 <= tmp_wire[6][1];
			out2 <= tmp_wire[6][2];
			out3 <= tmp_wire[6][3];
			out4 <= tmp_wire[6][4];
			out5 <= tmp_wire[6][5];
			out6 <= tmp_wire[6][6];
		end
	end

			
	
endmodule

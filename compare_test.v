`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:37:19 11/27/2018
// Design Name:   compare
// Module Name:   C:/Users/yuuya/Documents/workspace/AppLab/fpga-filter-hardware-20181127-2/compare_test.v
// Project Name:  memory
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: compare
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
//0 clock to output
module compare_test;
	parameter PERIOD = 20;
	// Inputs
	reg clk;
	reg [9:0] in0;
	reg rst;
	reg [9:0] in1;
	reg [9:0] in2;
	reg [9:0] in3;
	reg [9:0] in4;
	reg [9:0] in5;
	reg [9:0] in6;

	// Outputs
	wire [9:0] out0;
	wire [9:0] out1;
	wire [9:0] out2;
	wire [9:0] out3;
	wire [9:0] out4;
	wire [9:0] out5;
	wire [9:0] out6;

	// Instantiate the Unit Under Test (UUT)
	compare uut (
		.clk(clk), 
		.in0(in0), 
		.rst(rst), 
		.in1(in1), 
		.in2(in2), 
		.in3(in3), 
		.in4(in4), 
		.in5(in5), 
		.in6(in6), 
		.out0(out0), 
		.out1(out1), 
		.out2(out2), 
		.out3(out3), 
		.out4(out4), 
		.out5(out5), 
		.out6(out6)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		in0 = 0;
		rst = 1;
		in1 = 1;
		in2 = 2;
		in3 = 3;
		in4 = 4;
		in5 = 5;
		in6 = 6;


	end
	// クロックの生成
	initial begin
	  clk = 1;
	  #(PERIOD / 4)
	  forever begin
		 #(PERIOD / 2) clk = 0;
		 #(PERIOD / 2) clk = 1;
	  end
	end
	// リセットの生成
	initial begin
	  rst = 1;
	  #(PERIOD * 2) rst = 0;
	end

      
endmodule


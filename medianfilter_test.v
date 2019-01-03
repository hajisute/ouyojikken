`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:37:37 11/27/2018
// Design Name:   medianfilter
// Module Name:   C:/Users/yuuya/Documents/workspace/AppLab/fpga-filter-hardware-20181127-2/medianfilter_test.v
// Project Name:  memory
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: medianfilter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
//35 clock to output
module medianfilter_test;
	parameter PERIOD = 20;
	// Inputs
	reg clk;
	reg rst;
	reg [7:0] in0;
	reg [7:0] in1;
	reg [7:0] in2;
	reg [7:0] in3;
	reg [7:0] in4;
	reg [7:0] in5;
	reg [7:0] in6;

	// Outputs
	wire [8-1:0]out;

	// Instantiate the Unit Under Test (UUT)
	medianfilter uut (
		.clk(clk), 
		.rst(rst), 
		.in0(in0), 
		.in1(in1), 
		.in2(in2), 
		.in3(in3), 
		.in4(in4), 
		.in5(in5), 
		.in6(in6), 
		.out(out)
	);
	integer count = 0;
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;
		in0 = 0;
		in1 = 1;
		in2 = 2;
		in3 = 30;
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
		 #(PERIOD / 2) clk = 1;count = count + 1;
		 
	  end
	end
	// リセットの生成
	initial begin
	  rst = 1;
	  #(PERIOD * 2) rst = 0;
	end

endmodule


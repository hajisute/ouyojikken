`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:43:49 11/27/2018
// Design Name:   sort_column
// Module Name:   C:/Users/yuuya/Documents/workspace/AppLab/fpga-filter-hardware-20181127-2/sort_compare_test.v
// Project Name:  memory
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sort_column
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sort_compare_test;

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
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	sort_column uut (
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

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;
		in0 = 0;
		in1 = 1;
		in2 = 2;
		in3 = 30;
		in4 = 40;
		in5 = 5;
		in6 = 6;
		
		// Wait 100 ns for global reset to finish
		#100;
      rst = 0;
		#100;
		// Add stimulus here
		forever begin 
			#10 clk = 1;
			#10 clk = 0;
		end
	end
      
endmodule


`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:27:48 11/27/2018
// Design Name:   cmp_unit
// Module Name:   C:/Users/yuuya/Documents/workspace/AppLab/fpga-filter-hardware-20181127-2/cmp_unit_test.v
// Project Name:  memory
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cmp_unit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cmp_unit_test;

	// Inputs
	reg [9:0] in1;
	reg [9:0] in2;
	reg clk;
	reg rst;

	// Outputs
	wire [9:0] out1;
	wire [9:0] out2;

	// Instantiate the Unit Under Test (UUT)
	cmp_unit uut (
		.in1(in1), 
		.in2(in2), 
		.clk(clk), 
		.rst(rst), 
		.out1(out1), 
		.out2(out2)
	);

	initial begin
		// Initialize Inputs
		in1 = 1;
		in2 = 2;
		clk = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
		  
		// Add stimulus here
		
		forever begin
			#10 clk = 1;
			#10 clk = 0;
		end
		
	end
      
endmodule


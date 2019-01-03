`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:27:10 11/28/2018
// Design Name:   sobelfilter
// Module Name:   C:/Users/yuuya/Documents/workspace/AppLab/fpga-filter-hardware-20181127-2/sobel_test.v
// Project Name:  memory
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sobelfilter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sobel_test;
	parameter PERIOD = 20;
	// Inputs
	reg clk;
	reg rst;
	reg refresh;
	reg [7:0] in0;
	reg [7:0] in1;
	reg [7:0] in2;
	reg [7:0] in3;
	reg [7:0] in4;
	reg [7:0] in5;
	reg [7:0] in6;
	reg [7:0] in7;
	reg [7:0] in8;

	// Outputs
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	sobelfilter uut (
		.clk(clk), 
		.rst(rst), 
		.refresh(refresh), 
		.in0(in0), 
		.in1(in1), 
		.in2(in2), 
		.in3(in3), 
		.in4(in4), 
		.in5(in5), 
		.in6(in6), 
		.in7(in7), 
		.in8(in8), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		refresh = 0;
		in0 = 0;
		in1 = 0;
		in2 = 0;
		in3 = 0;
		in4 = 0;
		in5 = 0;
		in6 = 0;
		in7 = 0;
		in8 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	integer count = 0;
	initial begin
	  clk = 1;
	  #(PERIOD / 4)
	  forever begin
		 #(PERIOD / 2) clk = 0;
		 #(PERIOD / 2) clk = 1;count = count + 1;
		 
	  end
	end
	// ÉäÉZÉbÉgÇÃê∂ê¨
	initial begin
	  rst = 1;
	  #(PERIOD * 2) rst = 0;
	end
      
endmodule


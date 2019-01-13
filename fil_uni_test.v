`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:38:22 01/08/2019
// Design Name:   filter_unit
// Module Name:   C:/Users/FPGA/Desktop/fpga-filter-hardware-20181127/fil_uni_test.v
// Project Name:  memory
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: filter_unit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module fil_uni_test_v;

	// Inputs
	reg [9:0] data_in;
	reg [9:0] image_width;
	reg clk;
	reg rst;
	reg refresh;

	// Outputs
	wire [9:0] data_out;

	// Instantiate the Unit Under Test (UUT)
	filter_unit uut (
		.data_in(data_in), 
		.image_width(image_width), 
		.clk(clk), 
		.rst(rst), 
		.refresh(refresh), 
		.data_out(data_out)
	);

	initial begin
		// Initialize Inputs
		data_in = 0;
		image_width = 0;
		clk = 0;
		rst = 0;
		refresh = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule


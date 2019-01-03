`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:02:42 11/27/2018
// Design Name:   operation
// Module Name:   C:/Users/FPGA/Desktop/fpga-filter-hardware/test.v
// Project Name:  memory
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: operation
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_v;

	// Inputs
	reg [809:0] data_bus;
	reg clk;
	reg rst;
	reg refresh;

	// Outputs
	wire [9:0] out;

	// Instantiate the Unit Under Test (UUT)
	operation uut (
		.data_bus(data_bus), 
		.clk(clk), 
		.rst(rst), 
		.refresh(refresh), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		data_bus = 0;
		clk = 0;
		rst = 0;
		refresh = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule


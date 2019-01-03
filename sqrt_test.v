`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:50:39 11/27/2018
// Design Name:   sqrt
// Module Name:   C:/Users/FPGA/Desktop/fpga-filter-hardware/sqrt_test.v
// Project Name:  memory
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sqrt
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sqrt_test_v;

	// Inputs
	reg [7:0] in1;
	reg [7:0] in2;
	reg rst;
	reg clk;

	// Outputs
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	sqrt uut (
		.in1(in1), 
		.in2(in2), 
		.out(out), 
		.rst(rst), 
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		in1 = 100;
		in2 = 100;
		rst = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		forever begin
			#10 clk = 1;
			#10 clk = 0;
		end

	end
	
	
	
	
      
endmodule


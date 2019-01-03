`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:16:12 11/27/2018
// Design Name:   operation
// Module Name:   C:/Users/FPGA/Desktop/fpga-filter-hardware/operation_test.v
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

module operation_test_v;
	parameter PERIOD = 20;
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
	
	// クロックの生成


	initial begin
		// Initialize Inputs
		data_bus = 810'b0;
		//111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111;
		clk = 0;
		rst = 0;
		refresh = 0;

		// Wait 100 ns for global reset to finish
		// Add stimulus here

	end
	integer count = 0;
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


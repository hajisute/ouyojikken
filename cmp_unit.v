`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:21:12 11/13/2018 
// Design Name: 
// Module Name:    cmp_unit 
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
//0 clock to output
module cmp_unit #(

		//各画素値のbit幅（tag（2b）+画素値（8b））
		parameter DATA_WIDTH = 8 


	)(
		
		input wire[DATA_WIDTH - 1:0] in1,
		input wire[DATA_WIDTH - 1:0] in2,
		
		input wire clk,
		input wire rst,
		
		output wire [DATA_WIDTH - 1:0] out1,
		output wire [DATA_WIDTH - 1:0] out2
		
	);

	assign	out1 = (in1 >= in2) ? in1 : in2;
	assign 	out2 = (in1 >= in2) ? in2 : in1;	


endmodule

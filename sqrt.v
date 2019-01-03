`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:55:22 10/23/2018 
// Design Name: 
// Module Name:    sqrt 
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

module sqrt #(
  parameter DATA_WIDTH = 8
)(
  input [DATA_WIDTH - 1: 0] in1,
  input [DATA_WIDTH - 1: 0] in2,
  output reg [DATA_WIDTH - 1: 0] out,
  input rst,
  input clk
);

  reg [DATA_WIDTH*2 - 1: 0] Gx2;
  reg [DATA_WIDTH*2 - 1: 0] Gy2;
  reg [DATA_WIDTH*2 + 1 - 1: 0] Gx2Gy2;
  reg [DATA_WIDTH*2 +1 -13 - 1: 0] address;
  wire [DATA_WIDTH - 1: 0] tmp;

always @(posedge clk) begin  

	if(rst) begin
		//èoóÕÇèâä˙âª

		Gx2 <= 0;
		Gy2 <= 0;	  
		Gx2Gy2 <= 0;	  
		address <= 0;  
	   out <= 0;
	end
	else begin 
	
	  Gx2 <= in1 * in1;
	  Gy2 <= in2 * in2;
	  
	  Gx2Gy2 <= Gx2 + Gy2;
	  
	  address <= Gx2Gy2 >> 13;  
	  out <= tmp;
  end
end




week3_memory sqrt_table (
	.addr(address), // Bus [3 : 0] 
	.clk(clk),
	.dout(tmp)  // Bus [7 : 0]
); 

endmodule




`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:18:06 10/16/2018 
// Design Name: 
// Module Name:    kadai2_1 
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
// 11ビット絶対値演算回路
module abs #(
  parameter DATA_WIDTH = 11
)(
  input [DATA_WIDTH - 1: 0] in,
  output reg [DATA_WIDTH - 2: 0] out,
  input rst,
  input clk
);

always @(posedge clk) begin 
  if(rst) begin
    out <= 0;
  end else begin
  ///////////////////////////////////////////////////////////////////
    out <= (in[DATA_WIDTH-1] == 1'b1) ? ~in + 1: in;
   
  
  
  ///////////////////////////////////////////////////////////////////
  end
end
endmodule
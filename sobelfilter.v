`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:32:49 11/06/2018 
// Design Name: 
// Module Name:    sobelfilter 
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
module sobelfilter #(
										//各画素値のbit幅（画素値（8b）＋tag（2b））
										parameter DATA_WIDTH = 8

	)(

			input																			 clk,
			//rst信号は動作開始時にon
			input																			 rst,
			//refresh信号は各フレームの開始時にon
			input																			 refresh,
			input wire [8-1:0] in0,
			input wire [8-1:0] in1,
			input wire [8-1:0] in2,
			input wire [8-1:0] in3,  //0 1 2
			input wire [8-1:0] in4,  //3 4 5
			input wire [8-1:0] in5,  //6 7 8
			input wire [8-1:0] in6,
			input wire [8-1:0] in7,
			input wire [8-1:0] in8,			
			//出力値（tag2b+画素値8b）
			output reg [8-1:0]										 out
			

);

	//計算に用いるレジスタ
	reg [9-1:0] reg1;
	reg [9-1:0] reg2;
	reg [9-1:0] reg3;
	reg [9-1:0] reg4;

	reg [10-1:0] reg5;
	reg [10-1:0] reg6;

	reg [11-1:0] reg7;

	reg [9-1:0] reg1y;
	reg [9-1:0] reg2y;
	reg [9-1:0] reg3y;
	reg [9-1:0] reg4y;

	reg [10-1:0] reg5y;
	reg [10-1:0] reg6y;

	reg [11-1:0] reg7y;

	wire [10-1:0] abs_out;
	wire [10-1:0] abs_out_y;
	wire [7:0] pixel_out_wire;
	reg [8-1:0]pixel_out_x;
	reg [8-1:0]pixel_out_y;
	
	
	always @(posedge clk) begin
		if(rst|refresh) begin
			//出力を初期化
			out <= 8'b0;
			reg1 <= 9'b0;
			reg2 <= 9'b0;
			reg3 <= 9'b0; 
			reg4 <= 9'b0;
			reg5 <= 10'b0;
			reg6 <= 10'b0;
			reg7 <= 11'b0;
			reg1y <= 9'b0;
			reg2y <= 9'b0;
			reg3y <= 9'b0;
			reg4y <= 9'b0;
			reg5y <= 10'b0;
			reg6y <= 10'b0;
			reg7y <= 11'b0;
			pixel_out_x <= 8'b0;
			pixel_out_y <= 8'b0;
			
		end else begin

			/////////////////////////////////////////////////////////
			// 演算回路(未実装)
			reg1 <= in0 + in6;
			reg2 <= 2 * in3;  
			reg3 <= in2 + in8;  
			reg4 <= 2 * in5;
			reg1y <= in0 + in2;
			reg2y <= 2 * in1;  
			reg3y <= in6 + in8;  
			reg4y <= 2 * in7;
			
         reg5 <= reg1 + reg2;          reg6 <= reg3 + reg4;
         reg5y <= reg1y + reg2y;          reg6y <= reg3y + reg4y;
			
         reg7 <= reg5 - reg6;
			reg7y <= reg5y - reg6y;
			/////////////////////////////////////////////////////////
			
			//例：中心画素値をそのまま出力
			//pixel_out <= i[OPE_WIDTH/2][OPE_WIDTH/2];
			pixel_out_x <= abs_out>>2;
			pixel_out_y <= abs_out_y>>2;
			out <= pixel_out_wire;
		end
	end

	/////////////////////////////////////////////////////////
	// 絶対値演算ユニット 　　　　　　					//
	/////////////////////////////////////////////////////////

	/* ここで課題で作成した絶対値の演算回路を
	 モジュール呼び出しする */
	
	abs
    #( .DATA_WIDTH(11 ))
   abs_0 (
    .in (reg7), 
    .out (abs_out),
    .rst(rst),
    .clk(clk)
  );
  abs
    #( .DATA_WIDTH(11 ))
   abs_1 (
    .in (reg7y), 
    .out (abs_out_y),
    .rst(rst),
    .clk(clk)
  );
  
  	sqrt
    #( .DATA_WIDTH(8 ))
   sqrt_0 (
    .in1 (pixel_out_x),
    .in2 (pixel_out_y),	 
    .out (pixel_out_wire),
    .rst(rst),
    .clk(clk)
  );
  
// outputに結線できるのはwireのみ



endmodule

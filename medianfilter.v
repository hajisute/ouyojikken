`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:36:33 11/14/2018 
// Design Name: 
// Module Name:    medianfilter 
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
module medianfilter#(
		//各画素値のbit幅（tag（2b）+画素値（8b））
		parameter DATA_WIDTH = 8,
		parameter COLUMN_NUM = 7

	)(
		input wire clk,
		input wire rst,
		input wire refresh,
		input wire [DATA_WIDTH-1:0] in0,
		input wire [DATA_WIDTH-1:0] in1,
		input wire [DATA_WIDTH-1:0] in2,
		input wire [DATA_WIDTH-1:0] in3,
		input wire [DATA_WIDTH-1:0] in4,
		input wire [DATA_WIDTH-1:0] in5,
		input wire [DATA_WIDTH-1:0] in6,
		output reg [DATA_WIDTH-1:0] out
	);
	
	reg [8-1:0]tmp[7-1:0];
	reg [8-1:0]queue[7-1:0];
	wire [8-1:0]queue_wire[7-1:0];
	wire [8-1:0]out_wire;
	//reg tmp;
	sort_column #(
		.DATA_WIDTH(DATA_WIDTH),
		.CULUMN_NUM(COLUMN_NUM)	  
	)sort_colmun0(
		.clk(clk),
		.rst(rst),
		.in0(tmp[0]),
		.in1(tmp[1]),
		.in2(tmp[2]),
		.in3(tmp[3]),
		.in4(tmp[4]),
		.in5(tmp[5]),
		.in6(tmp[6]),	
		.out0(),
		.out1(),
		.out2(),
		.out3(queue_wire[0]),
		.out4(),
		.out5(),
		.out6()

	);
	
	sort_column #(
		.DATA_WIDTH(DATA_WIDTH),
		.CULUMN_NUM(COLUMN_NUM)	  
	)sort_queue0(
		.clk(clk),
		.rst(rst),
		.in0(queue[0]),
		.in1(queue[1]),
		.in2(queue[2]),
		.in3(queue[3]),
		.in4(queue[4]),
		.in5(queue[5]),
		.in6(queue[6]),
		.out0(),
		.out1(),
		.out2(),
		.out3(out_wire),
		.out4(),
		.out5(),
		.out6()		

	);


	integer i;
	
	always @(posedge clk) begin 
		if(rst|refresh)begin
			out <=  8'b00000000;
			//median_to_queue_wire <= 8'b000000000;
			for(i = 0; i < 7;i = i + 1)begin
				queue[i] <= 8'b00000010;
				tmp[i] <= 8'b0;
			end
		end else begin
			//tmp <= median_to_queue_wire;
			out <= out_wire;
			queue[0] <= queue_wire[0];
			queue[1] <= queue_wire[1];
			queue[2] <= queue_wire[2];
			queue[3] <= queue_wire[3];
			queue[4] <= queue_wire[4];
			queue[5] <= queue_wire[5];
			queue[6] <= queue_wire[6];
			tmp[0] <= in0;
			tmp[1] <= in1;
			tmp[2] <= in2;
			tmp[3] <= in3;
			tmp[4] <= in4;
			tmp[5] <= in5;
			tmp[6] <= in6;
		end
	end

	assign queue_wire[1] = queue[0];
	assign queue_wire[2] = queue[1];
	assign queue_wire[3] = queue[2];
	assign queue_wire[4] = queue[3];
	assign queue_wire[5] = queue[4];
	assign queue_wire[6] = queue[5];
	

endmodule

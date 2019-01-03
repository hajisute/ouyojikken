`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:52:45 11/13/2018 
// Design Name: 
// Module Name:    compare 
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

module compare #(
		//各画素値のbit幅（tag（2b））
		parameter DATA_WIDTH = 8,
		parameter NUM = 0

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
		output reg [DATA_WIDTH-1:0] out0,
		output reg [DATA_WIDTH-1:0] out1,
		output reg [DATA_WIDTH-1:0] out2,
		output reg [DATA_WIDTH-1:0] out3,
		output reg [DATA_WIDTH-1:0] out4,
		output reg [DATA_WIDTH-1:0] out5,
		output reg [DATA_WIDTH-1:0] out6
	);
	wire [DATA_WIDTH-1:0] tmp[1:0][7:0];
	

	always @(posedge clk) begin 
		if(rst|refresh) begin
		 //初期化
			out0 <= 8'b0;
			out1 <= 8'b0;
			out2 <= 8'b0;
			out3 <= 8'b0;
			out4 <= 8'b0;
			out5 <= 8'b0;
			out6 <= 8'b0;
		end else begin
			if(NUM == 0) begin
				out0 <=  tmp[0][0];
				out1 <=  tmp[0][1];
				out2 <=  tmp[0][2];
				out3 <=  tmp[0][3];
				out4 <=  tmp[0][4];
				out5 <=  tmp[0][5];
				out6 <= in6;
			end else begin
				out0 <= in0;
				out1 <=  tmp[1][1];
				out2 <=  tmp[1][2];
				out3 <=  tmp[1][3];
				out4 <=  tmp[1][4];
				out5 <=  tmp[1][5];
				out6 <=  tmp[1][6];
			end
		end
	end
	
	cmp_unit #(.DATA_WIDTH(DATA_WIDTH)) cmp_unit0(.in1(in0),.in2(in1),.clk(clk),.rst(rst),.out1(tmp[0][0]),.out2(tmp[0][1]));
	cmp_unit #(.DATA_WIDTH(DATA_WIDTH)) cmp_unit1(.in1(in2),.in2(in3),.clk(clk),.rst(rst),.out1(tmp[0][2]),.out2(tmp[0][3]));
	cmp_unit #(.DATA_WIDTH(DATA_WIDTH)) cmp_unit2(.in1(in4),.in2(in5),.clk(clk),.rst(rst),.out1(tmp[0][4]),.out2(tmp[0][5]));
	cmp_unit #(.DATA_WIDTH(DATA_WIDTH)) cmp_unit3(.in1(in1),.in2(in2),.clk(clk),.rst(rst),.out1(tmp[1][1]),.out2(tmp[1][2]));
	cmp_unit #(.DATA_WIDTH(DATA_WIDTH)) cmp_unit4(.in1(in3),.in2(in4),.clk(clk),.rst(rst),.out1(tmp[1][3]),.out2(tmp[1][4]));
	cmp_unit #(.DATA_WIDTH(DATA_WIDTH)) cmp_unit5(.in1(in5),.in2(in6),.clk(clk),.rst(rst),.out1(tmp[1][5]),.out2(tmp[1][6]));	
endmodule

/*
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:52:45 11/13/2018 
// Design Name: 
// Module Name:    compare 
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

module compare #(

		//各画素に付加されるtagのビット幅
		parameter TAG_WIDTH = 2,
		//各画素値のbit幅（tag（2b）+画素値（8b））
		parameter DATA_WIDTH = 8 + TAG_WIDTH,
		parameter NUM = 0

	)(
		input wire clk,
		input wire rst,
		input wire [DATA_WIDTH-1:0] in0,
		input wire [DATA_WIDTH-1:0] in1,
		input wire [DATA_WIDTH-1:0] in2,
		input wire [DATA_WIDTH-1:0] in3,
		input wire [DATA_WIDTH-1:0] in4,
		input wire [DATA_WIDTH-1:0] in5,
		input wire [DATA_WIDTH-1:0] in6,	
		output reg [DATA_WIDTH-1:0] out0,
		output reg [DATA_WIDTH-1:0] out1,
		output reg [DATA_WIDTH-1:0] out2,
		output reg [DATA_WIDTH-1:0] out3,
		output reg [DATA_WIDTH-1:0] out4,
		output reg [DATA_WIDTH-1:0] out5,
		output reg [DATA_WIDTH-1:0] out6
	);
	wire [DATA_WIDTH-1:0] tmp[1:0][7:0];
	reg [DATA_WIDTH-1:0] reg_in[7:0];
	integer i;
	always @(posedge clk) begin
	  if(rst) begin
		 //初期化
		 for(i = 0; i < DATA_WIDTH; i = i + 1) begin
			reg_in[i] <= 8'b0;
		 end

		 out0 <= 8'b0;
		 out1 <= 8'b0;
		 out2 <= 8'b0;
		 out3 <= 8'b0;
		 out4 <= 8'b0;
		 out5 <= 8'b0;
		 out6 <= 8'b0;
	  end else begin
			reg_in[0] <= in0;
			reg_in[1] <= in1;
			reg_in[2] <= in2;
			reg_in[3] <= in3;
			reg_in[4] <= in4;
			reg_in[5] <= in5;
			reg_in[6] <= in6;
				if(NUM == 0) begin
					out0 <=  tmp[0][0];
					out1 <=  tmp[0][1];
					out2 <=  tmp[0][2];
					out3 <=  tmp[0][3];
					out4 <=  tmp[0][4];
					out5 <=  tmp[0][5];
					out6 <= in6;
				end else begin
					out0 <= in0;
					out1 <=  tmp[1][1];
					out2 <=  tmp[1][2];
					out3 <=  tmp[1][3];
					out4 <=  tmp[1][4];
					out5 <=  tmp[1][5];
					out6 <=  tmp[1][6];
				end
		end
	end
	
	cmp_unit #(.TAG_WIDTH(TAG_WIDTH),.DATA_WIDTH(DATA_WIDTH)) cmp_unit0(.in1(reg_in0),.in2(reg_in1),.clk(clk),.rst(rst),.out1(tmp[0][0]),.out2(tmp[0][1]));
	cmp_unit #(.TAG_WIDTH(TAG_WIDTH),.DATA_WIDTH(DATA_WIDTH)) cmp_unit1(.in1(reg_in2),.in2(reg_in3),.clk(clk),.rst(rst),.out1(tmp[0][2]),.out2(tmp[0][3]));
	cmp_unit #(.TAG_WIDTH(TAG_WIDTH),.DATA_WIDTH(DATA_WIDTH)) cmp_unit2(.in1(reg_in4),.in2(reg_in5),.clk(clk),.rst(rst),.out1(tmp[0][4]),.out2(tmp[0][5]));
	cmp_unit #(.TAG_WIDTH(TAG_WIDTH),.DATA_WIDTH(DATA_WIDTH)) cmp_unit3(.in1(reg_in1),.in2(reg_in2),.clk(clk),.rst(rst),.out1(tmp[1][1]),.out2(tmp[1][2]));
	cmp_unit #(.TAG_WIDTH(TAG_WIDTH),.DATA_WIDTH(DATA_WIDTH)) cmp_unit4(.in1(reg_in3),.in2(reg_in4),.clk(clk),.rst(rst),.out1(tmp[1][3]),.out2(tmp[1][4]));
	cmp_unit #(.TAG_WIDTH(TAG_WIDTH),.DATA_WIDTH(DATA_WIDTH)) cmp_unit5(.in1(reg_in5),.in2(reg_in6),.clk(clk),.rst(rst),.out1(tmp[1][5]),.out2(tmp[1][6]));	
endmodule
*/
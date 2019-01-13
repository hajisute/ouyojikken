
`timescale 1ns / 1ps
module operation	#(
										//各画素に付加されるtagのビット幅
										parameter TAG_WIDTH = 2,
										//tag値：無効値
										parameter INVALID_TAG = 2'd0,
										//tag値：有効値
										parameter DATA_TAG0 = 2'd1,
										//tag値：有効値（行末）
										parameter DATA_TAG1 = 2'd2,
										//tag値：無効値（終了）
										parameter DATA_END_TAG = 2'd3,
										//Operation Window幅（正方形）
										parameter OPE_WIDTH = 9,
										//各画素値のbit幅（画素値（8b）＋tag（2b））
										parameter DATA_WIDTH = 8 + TAG_WIDTH
										)(
											//入力データバス
											input [DATA_WIDTH*OPE_WIDTH*OPE_WIDTH-1:0] data_bus,
											input																			 clk,
											//rst信号は動作開始時にon
											input																			 rst,
											//refresh信号は各フレームの開始時にon
											input																			 refresh,
											//出力値（tag2b+画素値8b）
											output [DATA_WIDTH-1:0]										 out
											);
	

	//各画素値8bは上位2bにtagが付加された10bで与えられます．
	//tagは，DATA_TAG0,DATA_TAG1,INVALID_DATA,DATA_END_TAGの四通りで，
	//それぞれ，有効データ，有効データ（行末），無効データ，終了データ（フレーム内の全ての画素値を転送し終えたあと）を意味します．
	
	//出力データも画素値にtagを付加した10bとなります．
	//上位モジュールでtag情報に基づいて，そのフレームの処理が終了したことを判定しているので
	//outの上位2bに正確なtag値を入力してください．
	

	//2次元配列dとiはそれぞれ，tagを含んだ10b，画素値のみの8bで構成されます．

	
	//入力画素値（タグ付き）
	//ビット幅　画素値8b+tag2bの10b
	// OPE_SIZE*OPE_SIZEの2次元配列
	wire [DATA_WIDTH-1:0] d[OPE_WIDTH-1:0][OPE_WIDTH-1:0];
	wire [TAG_WIDTH-1:0] tag_in;

	//入力画素（ダグなし）
	//ビット幅8
	// OPE_SIZE*OPE_SIZEの2次元配列
	wire [8-1:0] i[OPE_WIDTH-1:0][OPE_WIDTH-1:0];



	//出力画素値
	wire [8-1:0] pixel_out_wire;
	reg[8-1:0] pixel_out;


	//出力画素のtag
	reg [TAG_WIDTH-1:0] tag_out;
	wire [TAG_WIDTH-1:0] tag_out_wire;
	//適当に遅らせましょう

	reg [8-1:0] tmp[OPE_WIDTH-1:0];
	reg [8-1:0] median_of_median[3-1:0][3-1:0];
	wire [8-1:0] median_of_median_wire[3-1:0][3-1:0];

	  
	//generate文	 
	//data_busから各画素（配列）への対応付け（基本的には触らない）
	genvar x,y;
	generate	
		for(y = 0; y < OPE_WIDTH; y = y + 1) begin: ope_loop_y
			for(x = 0; x < OPE_WIDTH; x = x + 1) begin: ope_loop_x
				assign d[y][x] = data_bus[(((y*OPE_WIDTH)+x)*DATA_WIDTH)+:DATA_WIDTH];
				assign i[y][x] = d[y][x][0+:8];
			end
		end
	endgenerate
	//ここまで

	//中心画素のtagを入力タグとして使用
	assign tag_in = d[OPE_WIDTH/2][OPE_WIDTH/2][8+:TAG_WIDTH];

	//tag_out,pixel_outをoutに対応付け
	assign out[8+:TAG_WIDTH] = tag_out;
	assign out[0+:8] = pixel_out;
   
	

	//画素値を参照したい場合はi[y][x]を使用してください。
	//出力画素値はpixel_out，そのtag値はtag_outを使用してください．
	
	//-------------------------medianfilter呼び出しここから---------------------------
	//medianfilter上段
	medianfilter #(
		.DATA_WIDTH(DATA_WIDTH - TAG_WIDTH),
		.COLUMN_NUM(7)	  
	)medianfilter_upper_line(
		.clk(clk),
		.rst(rst),
		.refresh(refresh),
		.in0(tmp[0]),
		.in1(tmp[1]),
		.in2(tmp[2]),
		.in3(tmp[3]),
		.in4(tmp[4]),
		.in5(tmp[5]),
		.in6(tmp[6]),	
		.out(median_of_median_wire[0][0])

	);

  
  	//medianfilter中段
	medianfilter #(
		.DATA_WIDTH(DATA_WIDTH - TAG_WIDTH),
		.COLUMN_NUM(7)	  
	)medianfilter_middle_line(
		.clk(clk),
		.rst(rst),
		.refresh(refresh),
		.in0(tmp[1]),
		.in1(tmp[2]),
		.in2(tmp[3]),
		.in3(tmp[4]),
		.in4(tmp[5]),
		.in5(tmp[6]),
		.in6(tmp[7]),	
		.out(median_of_median_wire[1][0])
//		.out(pixel_out_wire)
	);

  
  	//medianfilteｒ下段
	medianfilter #(
		.DATA_WIDTH(DATA_WIDTH - TAG_WIDTH),
		.COLUMN_NUM(7)	  
	)medianfilter_lower_line(
		.clk(clk),
		.rst(rst),
		.refresh(refresh),
		.in0(tmp[2]),
		.in1(tmp[3]),
		.in2(tmp[4]),
		.in3(tmp[5]),
		.in4(tmp[6]),
		.in5(tmp[7]),
		.in6(tmp[8]),	
		.out(median_of_median_wire[2][0])
	);
	//-------------------------------------------ここまで----------------------------------------------------------
	integer j;
	integer k;
	//median_of_medianをキューとして扱う
	always @(posedge clk) begin 
		if(rst|refresh)begin
			tag_out <= 2'b0;
			pixel_out <= 8'b0;
			for(j = 0;j < 3; j = j + 1)begin
				for(k = 0;k < 3; k = k + 1)begin
					median_of_median[j][k] <= 8'b0;
				end
			end
			for(j = 0;j < OPE_WIDTH; j = j + 1)begin
				tmp[j] = 8'b0;
			end
		end else begin
			pixel_out <= pixel_out_wire;
			tag_out <= tag_out_wire;
			median_of_median[0][0] <= median_of_median_wire[0][0];
			median_of_median[0][1] <= median_of_median_wire[0][1];
			median_of_median[0][2] <= median_of_median_wire[0][2];
			median_of_median[1][0] <= median_of_median_wire[1][0];
			median_of_median[1][1] <= median_of_median_wire[1][1];
			median_of_median[1][2] <= median_of_median_wire[1][2];
			median_of_median[2][0] <= median_of_median_wire[2][0];
			median_of_median[2][1] <= median_of_median_wire[2][1];
			median_of_median[2][2] <= median_of_median_wire[2][2];
			tmp[0] = i[0][0];
			tmp[1] = i[1][0];
			tmp[2] = i[2][0];
			tmp[3] = i[3][0];
			tmp[4] = i[4][0];
			tmp[5] = i[5][0];
			tmp[6] = i[6][0];
			tmp[7] = i[7][0];
			tmp[8] = i[8][0];
		end
	end
	
	//sobelfilter呼び出し
	sobelfilter #(
		.DATA_WIDTH(8 + TAG_WIDTH)
	)sobelfiter0(
		.clk(clk),
		.rst(rst),
		.refresh(refresh),
		.in0(median_of_median[0][0]),  //in*の扱い
		.in1(median_of_median[0][1]),  // i|0 1 2
		.in2(median_of_median[0][2]),  //---------
		.in3(median_of_median[1][0]),  // 0|0 1 2
		.in4(median_of_median[1][1]),  // 1|3 4 5
		.in5(median_of_median[1][2]),  // 2|6 7 8
		.in6(median_of_median[2][0]),
		.in7(median_of_median[2][1]),
		.in8(median_of_median[2][2]),			
		.out(pixel_out_wire)
	);
	
	//タグを遅延させるためのqueue
	Queue2 #(//パラメータの宣言
		.WIDTH(2),
		.INIT(8'b0),
		.DEPTH(40)//?
	) queue_for_tag(//入出力ポートの宣言
		.out(tag_out_wire),
		.in(tag_in),
		.reset(rst), 
		.clock(clk)
	);
	
	
	assign median_of_median_wire[0][1] = median_of_median[0][0];
	assign median_of_median_wire[0][2] = median_of_median[0][1];
	assign median_of_median_wire[1][1] = median_of_median[1][0];
	assign median_of_median_wire[1][2] = median_of_median[1][1];
	assign median_of_median_wire[2][1] = median_of_median[2][0];
	assign median_of_median_wire[2][2] = median_of_median[2][1];
	
	
// outputに結線できるのはwireのみ


endmodule

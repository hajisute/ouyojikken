
`timescale 1ns / 1ps
module operation	#(
										//�e��f�ɕt�������tag�̃r�b�g��
										parameter TAG_WIDTH = 2,
										//tag�l�F�����l
										parameter INVALID_TAG = 2'd0,
										//tag�l�F�L���l
										parameter DATA_TAG0 = 2'd1,
										//tag�l�F�L���l�i�s���j
										parameter DATA_TAG1 = 2'd2,
										//tag�l�F�����l�i�I���j
										parameter DATA_END_TAG = 2'd3,
										//Operation Window���i�����`�j
										parameter OPE_WIDTH = 9,
										//�e��f�l��bit���i��f�l�i8b�j�{tag�i2b�j�j
										parameter DATA_WIDTH = 8 + TAG_WIDTH
										)(
											//���̓f�[�^�o�X
											input [DATA_WIDTH*OPE_WIDTH*OPE_WIDTH-1:0] data_bus,
											input																			 clk,
											//rst�M���͓���J�n����on
											input																			 rst,
											//refresh�M���͊e�t���[���̊J�n����on
											input																			 refresh,
											//�o�͒l�itag2b+��f�l8b�j
											output [DATA_WIDTH-1:0]										 out
											);
	

	//�e��f�l8b�͏��2b��tag���t�����ꂽ10b�ŗ^�����܂��D
	//tag�́CDATA_TAG0,DATA_TAG1,INVALID_DATA,DATA_END_TAG�̎l�ʂ�ŁC
	//���ꂼ��C�L���f�[�^�C�L���f�[�^�i�s���j�C�����f�[�^�C�I���f�[�^�i�t���[�����̑S�Ẳ�f�l��]�����I�������Ɓj���Ӗ����܂��D
	
	//�o�̓f�[�^����f�l��tag��t������10b�ƂȂ�܂��D
	//��ʃ��W���[����tag���Ɋ�Â��āC���̃t���[���̏������I���������Ƃ𔻒肵�Ă���̂�
	//out�̏��2b�ɐ��m��tag�l����͂��Ă��������D
	

	//2�����z��d��i�͂��ꂼ��Ctag���܂�10b�C��f�l�݂̂�8b�ō\������܂��D

	
	//���͉�f�l�i�^�O�t���j
	//�r�b�g���@��f�l8b+tag2b��10b
	// OPE_SIZE*OPE_SIZE��2�����z��
	wire [DATA_WIDTH-1:0] d[OPE_WIDTH-1:0][OPE_WIDTH-1:0];
	wire [TAG_WIDTH-1:0] tag_in;

	//���͉�f�i�_�O�Ȃ��j
	//�r�b�g��8
	// OPE_SIZE*OPE_SIZE��2�����z��
	wire [8-1:0] i[OPE_WIDTH-1:0][OPE_WIDTH-1:0];



	//�o�͉�f�l
	wire [8-1:0] pixel_out_wire;
	reg[8-1:0] pixel_out;


	//�o�͉�f��tag
	reg [TAG_WIDTH-1:0] tag_out;
	wire [TAG_WIDTH-1:0] tag_out_wire;
	//�K���ɒx�点�܂��傤

	reg [8-1:0] tmp[OPE_WIDTH-1:0];
	reg [8-1:0] median_of_median[3-1:0][3-1:0];
	wire [8-1:0] median_of_median_wire[3-1:0][3-1:0];

	  
	//generate��	 
	//data_bus����e��f�i�z��j�ւ̑Ή��t���i��{�I�ɂ͐G��Ȃ��j
	genvar x,y;
	generate	
		for(y = 0; y < OPE_WIDTH; y = y + 1) begin: ope_loop_y
			for(x = 0; x < OPE_WIDTH; x = x + 1) begin: ope_loop_x
				assign d[y][x] = data_bus[(((y*OPE_WIDTH)+x)*DATA_WIDTH)+:DATA_WIDTH];
				assign i[y][x] = d[y][x][0+:8];
			end
		end
	endgenerate
	//�����܂�

	//���S��f��tag����̓^�O�Ƃ��Ďg�p
	assign tag_in = d[OPE_WIDTH/2][OPE_WIDTH/2][8+:TAG_WIDTH];

	//tag_out,pixel_out��out�ɑΉ��t��
	assign out[8+:TAG_WIDTH] = tag_out;
	assign out[0+:8] = pixel_out;
   
	

	//��f�l���Q�Ƃ������ꍇ��i[y][x]���g�p���Ă��������B
	//�o�͉�f�l��pixel_out�C����tag�l��tag_out���g�p���Ă��������D
	
	//-------------------------medianfilter�Ăяo����������---------------------------
	//medianfilter��i
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

  
  	//medianfilter���i
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

  
  	//medianfilte�����i
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
	//-------------------------------------------�����܂�----------------------------------------------------------
	integer j;
	integer k;
	//median_of_median���L���[�Ƃ��Ĉ���
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
	
	//sobelfilter�Ăяo��
	sobelfilter #(
		.DATA_WIDTH(8 + TAG_WIDTH)
	)sobelfiter0(
		.clk(clk),
		.rst(rst),
		.refresh(refresh),
		.in0(median_of_median[0][0]),  //in*�̈���
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
	
	//�^�O��x�������邽�߂�queue
	Queue2 #(//�p�����[�^�̐錾
		.WIDTH(2),
		.INIT(8'b0),
		.DEPTH(40)//?
	) queue_for_tag(//���o�̓|�[�g�̐錾
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
	
	
// output�Ɍ����ł���̂�wire�̂�


endmodule

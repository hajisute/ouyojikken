`timescale 1ns / 1ps
module filter_unit	#(
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
	//�e��f�l��bit���itag�i2b�j+��f�l�i8b�j�j
	parameter DATA_WIDTH = 8 + TAG_WIDTH
)(
	//���͉�f10b�itag[2b]+pixel[8b]�j
	input [DATA_WIDTH-1:0]	data_in,
	//�摜��
	input [9:0]							image_width,
	input										clk,
	//rst�M���͓���J�n����on
	input										rst,
	//refresh�M���͊e�t���[���̊J�n����on
	input										refresh,
	//�o�͉�f10b�itag[2b]+pixel[8b]�j
	output [DATA_WIDTH-1:0] data_out
);
	//for���p�̕ϐ��錾
	integer	i,j;


	//��f�f�[�^�p���W�X�^(pixel(8b)+tag(2b))
	reg [DATA_WIDTH-1:0]	d[OPE_WIDTH-1:0][OPE_WIDTH-1:0];

	// �A�h���X�����p���W�X�^
	reg [9:0]	raddr,waddr;		



	//line_buffer�pwire
	wire [DATA_WIDTH-1:0]	buf_out[OPE_WIDTH-1:0];

	//���ʃ��W���[���ڑ��pbus
	//OPE_SIZE^2��data(10b)
	wire [DATA_WIDTH*OPE_WIDTH*OPE_WIDTH-1:0] data_bus;

	//generate���p�ϐ��̐錾
	genvar x,y;
	//databus��data�̑Ή��t��
	generate
		for(y = 0; y < OPE_WIDTH; y = y + 1) begin: loop_y
			for(x = 0; x < OPE_WIDTH; x = x + 1) begin: loop_x
				assign data_bus[(((y*OPE_WIDTH)+x)*DATA_WIDTH)+:DATA_WIDTH]	= d[y][x];
			end
		end
	endgenerate

	assign buf_out[OPE_WIDTH-1] = data_in;


	always @(posedge clk) begin
		if(rst|refresh) begin
			raddr <= 0;
			waddr <= 0;

			//data���W�X�^�̏�����
			for(i = 0; i < OPE_WIDTH; i = i + 1) begin // i++, ++i�Ƃ͋L�q�ł��Ȃ�
				for(j = 0; j < OPE_WIDTH; j = j + 1) begin
					d[i][j]	<= 0;
				end
			end
		end
		else begin
			/////////////////////////////////////////////////////////
			//OPE_WIDTH�~OPE_WIDTH�V�t�g���W�X�^
			//���ɗp���Ȃ���ΐG��Ȃ�
			///////////////////////////////////////////////////////////

			for(i = 0; i < OPE_WIDTH; i = i + 1) begin // i++, ++i�Ƃ͋L�q�ł��Ȃ�
				for(j = 0; j < OPE_WIDTH; j = j + 1) begin
					if(j==OPE_WIDTH-1)	begin
						d[i][j]<=buf_out[i];
					end
					else begin
						d[i][j]	<=	d[i][j+1];
					end
				end
			end

			/////////////////////////////////////////////////////////
			//OPE_WIDTH�~OPE_WIDTH�V�t�g���W�X�^�@�I���
			///////////////////////////////////////////////////////////


			//Control : BlockRAM�̃A�h���X������H�i�G��Ȃ��j

			waddr <= raddr;
			if(raddr == image_width-9'h1)	// 1�s���̃A�h���X
				raddr <= 0;
			else
				raddr <= raddr + 1;
		end
	end

	///////////////////////////////////////////////////////////
				// Unit_3 : ���Z��H(���W���[���Ăяo��)
	/////////////////////////////////////////////////////////

	// ���Z��H�̌Ăяo��
	
	//ope_0����medianfilter,sobelfilter�ς݂̉�f�l���A���ė���
	operation #(
		.TAG_WIDTH(TAG_WIDTH),
		.INVALID_TAG(INVALID_TAG),
		.DATA_TAG0(DATA_TAG0),
		.DATA_TAG1(DATA_TAG1),
		.DATA_END_TAG(DATA_END_TAG),
		.OPE_WIDTH(OPE_WIDTH)//median_filter��9�~9
	)ope_0(
		.data_bus(data_bus),
		.clk (clk),
		.rst (rst),
		.refresh(refresh),
		.out (data_out)
	);

	
	/////////////////////////////////////////////////////////
	// BlockRAMs (depth=ImageWidth width=8bit)	�̌Ăяo��
	/////////////////////////////////////////////////////////

	//OPE_WIDTH�ɉ�����line_buffer�̐���
	generate
		for(y = 0; y < OPE_WIDTH-1; y = y + 1) begin: Gen_linebuffer
			blockram_10b1024 line_buffer (
																			.addra(waddr),
																			.addrb(raddr),
																			.clka(clk),
																			.clkb(clk),
																			.dina(buf_out[y+1]),
																			.doutb(buf_out[y]),
																			.wea(1'b1)
																			);
		end
	endgenerate

endmodule

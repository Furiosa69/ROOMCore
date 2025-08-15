module LSU (
	input 				clk,
	input 				reset,
	input  [31:0] pc_in,
	output reg [31:0] pc_out,
	input  [ 3:0] lsu_cnt,
	output [31:0] data_load,
	input  [31:0] data_store,
	input  [31:0] addr_load,
	input  [31:0] addr_store,
	input  				mem_lsu_valid,
	output 				lsu_mem_ready
);

	reg [31:0] pc_lsu;
	reg [31:0] temp;
	
	localparam IDLE  = 1'b0;
	localparam READY = 1'b1;

	reg c_state,n_state;

	always @(posedge clk or posedge reset) begin
		if(reset) begin
			c_state <= IDLE;
			pc_lsu  <= 32'h80000000;
		end else begin
			c_state <= n_state;
			case (c_state)
				IDLE :if(mem_lsu_valid) pc_lsu <= pc_in;
				READY:pc_out <= pc_lsu;
				default : ;
			endcase
		end
	end

	assign lsu_mem_ready = ( c_state == IDLE);

	always @(*) begin
		case(c_state)
			IDLE:
				if(mem_lsu_valid) n_state = READY;
				else 							n_state = IDLE;
			READY:							n_state = IDLE;
			default:
				n_state = IDLE;
		endcase

		if(lsu_mem_ready && mem_lsu_valid) begin
			case(lsu_cnt)
				4'b0001 : pmem_write(addr_store, data_store, 1);	
				4'b0010 : pmem_write(addr_store, data_store, 2);	
				4'b0011 : pmem_write(addr_store, data_store, 4);	
				4'b0100 : begin
					temp = pmem_read(addr_load,1);
				end
				4'b0101 : begin
					temp = pmem_read(addr_load,2);
				end
				4'b0110 : begin
					temp = pmem_read(addr_load ,4);
				end
				4'b0111 : begin
					temp = pmem_read(addr_load ,1);
				end
				4'b1000 : begin
					temp = pmem_read(addr_load ,2);
				end
				default : ;
			endcase
		end
	end

	assign data_load = (lsu_cnt === 4'b0100) ? {{24{temp[ 7]}},temp[ 7:0]} :
								     (lsu_cnt === 4'b0101) ? {{16{temp[15]}},temp[15:0]} :
										 (lsu_cnt === 4'b0110) ? 								 temp				 :
										 (lsu_cnt === 4'b0111) ? {				 24'b0,temp[ 7:0]} :
										 (lsu_cnt === 4'b1000) ? {				 16'b0,temp[15:0]} :
										 32'b0;
endmodule

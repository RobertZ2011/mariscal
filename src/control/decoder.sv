module m_control_decoder(
	input clk,
	input nrst,
	output busy,

	input[31:0] instruction,

	output[31:0] reg_a_sel,
	input[31:0] reg_a,

	output[31:0] reg_b_sel,
	input[31:0] reg_b,

	output reg[31:0] a,
	output reg[31:0] b,
	output reg s_control control,
	output reg[4:0] rd,
);
	wire s_decoded decoded;
	m_decoder decoder(instruction, decoded);
	assign busy = 0;

	always @(posedge clk or negedge nrst) begin
		if (!nrst) begin
			a <= 0
			b <= 0;
		end
		else begin
			if decoded.kind == KIND_RRR begin
				reg_a_sel <= decoded.rs;
				reg_b_sel <= decoded.rq;
				rd <= decoded.rd;

				a <= reg_a;
				b <= reg_b;
				control <= decoded.alu_config;
			end
			else begin
				a <= 0;
				b <= 0;
				control <= {
					CORE_OP_ADD,
					UNARY_OP_ID,
					UNARY_OP_ID,
					{
						SHIFT_SHL,
						0
					},
					UNARY_OP_ID
				};
			end
		end
	end
endmodule
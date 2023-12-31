import p_alu::*;

module test;
	wire[31:0] out;
	wire e_cmp_res cmp;

	reg[31:0] a;
	reg[31:0] b;
	e_core_op op;

	m_alu_core_op core(
		.a_in(a),
		.b_in(b),
		.op(op),

		.out(out),
		.cmp(cmp)
	);

	initial begin
		// Add
		op = CORE_OP_ADD;

		a = 32'h0;
		b = 32'h0;
		#10;
		assert (out == 32'h0);

		a = 32'hffffffff;
		b = 32'h0;
		#10;
		assert (out == 32'hffffffff);

		a = 32'h0;
		b = 32'hffffffff;
		#10;
		assert (out == 32'hffffffff);

		op = CORE_OP_AND;
		#10;

		op = CORE_OP_XOR;
		#10;

		op = CORE_OP_SHL;
		#10;

		op = CORE_OP_SHR;
		#10;

		op = CORE_OP_ASL;
		#10;

		op = CORE_OP_ASR;
		#10;
		$finish;
	end
endmodule

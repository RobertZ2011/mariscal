import p_alu::*;

module test;
	wire[31:0] out;

	reg[31:0] in;
	e_unary_op op;

	m_alu_unary unary(
		.in(in),
		.op(op),

		.out(out)
	);

	initial begin
		/* Id */
		op = UNARY_OP_ID;
		in = 0;
		#10
		assert (out == 0);

		in = 32'hffffffff;
		#10
		assert (out == 32'hffffffff);

		in = 32'haaaaaaaa;
		#10
		assert (out == 32'haaaaaaaa);

		in = 32'h55555555;
		#10
		assert (out == 32'h55555555);

		/* Neg */
		op = UNARY_OP_NEG;
		in = 0;
		#10
		assert (out == 0);

		in = 32'hffffffff;
		#10
		assert (out == 32'h1);

		in = 32'h1;
		#10
		assert (out == 32'hffffffff);

		/* Not */
		op = UNARY_OP_NOT;
		in = 0;
		#10
		assert (out == 32'hffffffff);

		in = 32'hffffffff;
		#10
		assert (out == 0);

		in = 32'h55555555;
		#10
		assert (out == 32'haaaaaaaa);

		in = 32'haaaaaaaa;
		#10
		assert (out == 32'h55555555);

		/* Zero */
		op = UNARY_OP_ZERO;
		in = 0;
		#10
		assert (out == 0);

		in = 32'hffffffff;
		#10
		assert (out == 0);

		in = 32'haaaaaaaa;
		#10
		assert (out == 0);

		in = 32'h55555555;
		#10
		assert (out == 0);

		$finish;
	end
endmodule
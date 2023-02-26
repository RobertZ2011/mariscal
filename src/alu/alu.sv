import p_alu::*;

module m_alu(
	input[31:0] a,
	input[31:0] b,
	input s_control ctrl,

	output[31:0] out,
	output e_cmp_res cmp
);
	wire[31:0] shifted;
	wire[31:0] a_op;
	wire[31:0] b_op;

	m_alu_preshifter shifter(b, ctrl.pre_shift, shifted);
	m_alu_core_op core(ctrl.op, a_op, b_op, out, cmp);
	m_alu_unary a_unary(ctrl.a_op, a, a_op);
	m_alu_unary b_unary(ctrl.b_op, shifted, b_op);
endmodule
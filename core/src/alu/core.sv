import p_alu::*;

module m_alu_core_op(
	input e_core_op op,
	input[31:0] a_in,
	input[31:0] b_in,

	output[31:0] out,
	output e_cmp_res cmp
);
	assign out = f_core(op, a_in, b_in);
	assign cmp = f_cmp(a_in, b_in);

	function[31:0] f_core(input e_core_op o, input[31:0] a, input[31:0] b);
		case (o)
			CORE_OP_ADD: return a + b;
			CORE_OP_AND: return a & b;
			CORE_OP_XOR: return a ^ b;

			CORE_OP_SHL: return a << b;
			CORE_OP_SHR: return a >> b;
			CORE_OP_ASL: return a <<< b;
			CORE_OP_ASR: return a >>> b;

			default: return 32'hffffffff;
		endcase
	endfunction

	function e_cmp_res f_cmp(input[31:0] a, input[31:0] b);
		if (a == b)
			return CMP_RES_EQ;
		else if (a > b)
			return CMP_RES_GT;
		else
			return CMP_RES_LT;
	endfunction
endmodule
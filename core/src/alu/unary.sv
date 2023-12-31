import p_alu::*;

module m_alu_unary(
	input e_unary_op op,
	input[31:0] in,
	output[31:0] out
);
	assign out = f_unary(op, in);

	function[31:0] f_unary(input e_unary_op o, input[31:0] i);
		case (o)
			UNARY_OP_ID: return i;
			UNARY_OP_NEG: return -i;
			UNARY_OP_NOT: return ~i;
			UNARY_OP_ZERO: return 32'b0;
		endcase
	endfunction
endmodule
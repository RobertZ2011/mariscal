import p_common::*;

module m_alu_preshifter(
	input[31:0] data,
	input s_shift shift,

	output[31:0] shifted
);

	assign shifted = f_shift(data, shift);

	function[31:0] f_shift(input[31:0] d, input s_shift s);
		case (s.shift_type)
			SHIFT_SHL: f_shift = d << s.amount;
			SHIFT_SHR: f_shift = d >> s.amount;

			SHIFT_ASL: f_shift = d <<< s.amount;
			SHIFT_ASR: f_shift = d >>> s.amount;

			default: f_shift = d;
		endcase
	endfunction
endmodule
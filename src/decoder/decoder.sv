import p_instruction::*;

module m_decoder(
	input[31:0] instr,
	output s_decoded decoded
);

	function e_kind instr_kind(input[31:0] i);
		instr_kind = KIND_RRR;
	endfunction

	function s_decoded decode_rrr(input[31:0] i);
	endfunction

endmodule
/* 
* Copyright Robert Zieba 2023.
* This source describes Open Hardware and is licensed under the CERN-OHL-
* W v2
* You may redistribute and modify this documentation and make products
* using it under the terms of the CERN-OHL-W v2 (https:/cern.ch/cern-ohl).
* This documentation is distributed WITHOUT ANY EXPRESS OR IMPLIED
* WARRANTY, INCLUDING OF MERCHANTABILITY, SATISFACTORY QUALITY
* AND FITNESS FOR A PARTICULAR PURPOSE. Please see the CERN-OHL-W v2
* for applicable conditions.
* Source location: https://github.com/RobertZ2011/mariscal
* As per CERN-OHL-W v2 section 4.1, should You produce hardware based on
* these sources, You must maintain the Source Location visible on the
* external case of any product you make using this documentation.
*/
import p_alu::*;
import p_instruction::*;

module m_decoder_alu(
	input e_kind kind,
	input[31:0] instruction,
	output s_control control
);
	wire s_shift shift;

	m_decoder_shift m_shift(
		.kind(kind),
		.instruction(instruction),
		.shift(shift)
	);

	assign control = f_decode(kind, instruction);

	function s_control f_invalid;
        return {
            CORE_OP_INVALID,
            UNARY_OP_ID,
            UNARY_OP_ID,
            {
                SHIFT_SHL,
                5'b0
            },
            UNARY_OP_ID
        };
    endfunction

	function s_control f_decode_bin_op(input[4:0] i);
		case (i)
			BINOP_ADD: f_decode_bin_op = {
				CORE_OP_ADD,
				UNARY_OP_ID, 
				UNARY_OP_ID,
				shift,
				UNARY_OP_ID
			};
			BINOP_SUB: f_decode_bin_op = {
				CORE_OP_ADD,
				UNARY_OP_ID, 
				UNARY_OP_NEG,
				shift,
				UNARY_OP_ID
			};

			BINOP_AND: f_decode_bin_op = {
				CORE_OP_AND,
				UNARY_OP_ID, 
				UNARY_OP_ID,
				shift,
				UNARY_OP_ID
			};
			BINOP_OR: f_decode_bin_op = {
				CORE_OP_AND,
				UNARY_OP_NOT, 
				UNARY_OP_NOT,
				shift,
				UNARY_OP_NOT
			};
			BINOP_XOR: f_decode_bin_op = {
				CORE_OP_XOR,
				UNARY_OP_ID, 
				UNARY_OP_ID,
				shift,
				UNARY_OP_ID
			};

			BINOP_SHL: f_decode_bin_op = {
				CORE_OP_SHL,
				UNARY_OP_ID, 
				UNARY_OP_ID,
				shift,
				UNARY_OP_ID
			};
			BINOP_SHR: f_decode_bin_op = {
				CORE_OP_SHR,
				UNARY_OP_ID, 
				UNARY_OP_ID,
				shift,
				UNARY_OP_ID
			};
			BINOP_ASL: f_decode_bin_op = {
				CORE_OP_ASL,
				UNARY_OP_ID, 
				UNARY_OP_ID,
				shift,
				UNARY_OP_ID
			};
			BINOP_ASR: f_decode_bin_op = {
				CORE_OP_ASR,
				UNARY_OP_ID, 
				UNARY_OP_ID,
				shift,
				UNARY_OP_ID
			};
			BINOP_ROR: f_decode_bin_op = {
				CORE_OP_ROR,
				UNARY_OP_ID, 
				UNARY_OP_ID,
				shift,
				UNARY_OP_ID
			};
			BINOP_ROL: f_decode_bin_op = {
				CORE_OP_ROL,
				UNARY_OP_ID, 
				UNARY_OP_ID,
				shift,
				UNARY_OP_ID
			};
			
			BINOP_NOT: f_decode_bin_op = {
				CORE_OP_ADD,
				UNARY_OP_ID, 
				UNARY_OP_ID,
				shift,
				UNARY_OP_NOT
			};
			BINOP_NEG: f_decode_bin_op = {
				CORE_OP_ADD,
				UNARY_OP_ID, 
				UNARY_OP_ID,
				shift,
				UNARY_OP_NEG
			};

			default: f_decode_bin_op = f_invalid();
		endcase
	endfunction

	function s_control f_decode(e_kind k, input[31:0] i);
		case (k)
			KIND_RRR: f_decode = f_decode_bin_op(i[27:23]);
			default: f_decode = f_invalid();
		endcase
	endfunction
endmodule
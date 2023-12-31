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

module m_alu_decoder(
	input e_kind kind,
	input[31:0] instruction,
	output s_control ctrl
);

	assign ctrl = f_decode(kind, instruction);

	function s_control f_invalid;
        return {
            CORE_OP_INVALID,
            UNARY_OP_ID,
            UNARY_OP_ID,
            {
                SHIFT_SHL,
                3'b0
            },
            UNARY_OP_ID
        };
    endfunction

	function s_control f_decode_bin_op(input[4:0] i);
		case (i)
			BINOP_ADD: return {
				CORE_OP_ADD,
				UNARY_OP_ID, 
				UNARY_OP_ID,
				{
					SHIFT_SHL,
					3'b0
				},
				UNARY_OP_ID
			};
			BINOP_SUB: return {
				CORE_OP_ADD,
				UNARY_OP_ID, 
				UNARY_OP_NEG,
				{
					SHIFT_SHL,
					3'b0
				},
				UNARY_OP_ID
			};

			BINOP_AND: return {
				CORE_OP_AND,
				UNARY_OP_ID, 
				UNARY_OP_ID,
				{
					SHIFT_SHL,
					3'b0
				},
				UNARY_OP_ID
			};
			BINOP_OR: return {
				CORE_OP_AND,
				UNARY_OP_NOT, 
				UNARY_OP_NOT,
				{
					SHIFT_SHL,
					3'b0
				},
				UNARY_OP_NOT
			};
			BINOP_XOR: return {
				CORE_OP_XOR,
				UNARY_OP_ID, 
				UNARY_OP_ID,
				{
					SHIFT_SHL,
					3'b0
				},
				UNARY_OP_ID
			};

			BINOP_SHL: return {
				CORE_OP_SHL,
				UNARY_OP_ID, 
				UNARY_OP_ID,
				{
					SHIFT_SHL,
					3'b0
				},
				UNARY_OP_ID
			};
			BINOP_SHR: return {
				CORE_OP_SHR,
				UNARY_OP_ID, 
				UNARY_OP_ID,
				{
					SHIFT_SHL,
					3'b0
				},
				UNARY_OP_ID
			};
			BINOP_ASL: return {
				CORE_OP_ASL,
				UNARY_OP_ID, 
				UNARY_OP_ID,
				{
					SHIFT_SHL,
					3'b0
				},
				UNARY_OP_ID
			};
			BINOP_ASR: return {
				CORE_OP_ASR,
				UNARY_OP_ID, 
				UNARY_OP_ID,
				{
					SHIFT_SHL,
					3'b0
				},
				UNARY_OP_ID
			};
			BINOP_ROR: return {
				CORE_OP_SHL,
				UNARY_OP_ID, 
				UNARY_OP_ID,
				{
					SHIFT_SHL,
					3'b0
				},
				UNARY_OP_ID
			};
			BINOP_ROL: return {
				CORE_OP_ROR,
				UNARY_OP_ID, 
				UNARY_OP_ID,
				{
					SHIFT_SHL,
					3'b0
				},
				UNARY_OP_ID
			};
			
			BINOP_NOT: return {
				CORE_OP_ADD,
				UNARY_OP_NOT, 
				UNARY_OP_ZERO,
				{
					SHIFT_SHL,
					3'b0
				},
				UNARY_OP_ID
			};
			BINOP_NEG: return {
				CORE_OP_ADD,
				UNARY_OP_ZERO, 
				UNARY_OP_NEG,
				{
					SHIFT_SHL,
					3'b0
				},
				UNARY_OP_ID
			};

			default: return f_invalid();
		endcase
	endfunction

	function f_decode(e_kind k, input[31:0] i);
		case (k)
			KIND_RRR: return f_decode_bin_op(i[27:23]);
			default: return f_invalid();
		endcase
	endfunction
endmodule
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
import p_common::*;
import p_instruction::*;

module m_decoder(
	input[31:0] instruction,
	output s_decoded decoded
);

	wire e_kind kind = f_instr_kind(instruction);
	wire e_cond cond;
	wire s_control ctrl;
	wire s_shift shift;
	wire[31:0] immediate;
	wire[4:0] rd;
	wire[4:0] rs;
	wire[4:0] rq;

	m_cond_decoder c(kind, instruction, cond);
	m_reg_decoder r(kind, instruction, rd, rs, rq);
	m_alu_decoder a(kind, instruction, ctrl);
	m_immediate_decoder i(kind, instruction, immediate);
	m_shift_decoder s(kind, instruction, shift);

	assign decoded = {
		kind,
		cond,

		ctrl,

		rd,
		rs,
		rq,

		immediate,

		shift
	};

	function e_kind f_instr_kind(input[3:0] i);
		case (i[3:2])
			2'b00: 
				case (i[1:0])
					2'b00: return KIND_RRR;
					2'b01: return KIND_MEMORY;
					2'b10: return KIND_MODEL;
					default: return KIND_INVALID;
				endcase
			2'b01: return KIND_RRI;
			2'b11: return KIND_CUSTOM;
			default: return KIND_INVALID;
		endcase
	endfunction
endmodule
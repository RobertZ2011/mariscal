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
import p_instruction::*;

module m_decoder_cond(
	input e_kind kind,
	input[31:0] instruction,
	output e_cond cond
);
	assign cond = f_cond(kind);

	function e_cond f_cond(e_kind k);
		case (k)
			KIND_RRR: return COND_AL;
			KIND_MEMORY: return COND_AL;
			KIND_MODEL: return COND_AL;
			KIND_CUSTOM: return COND_AL;
			/* TODO: make this work. */
			KIND_RRI: return COND_AL;
			/* TODO: figure out making this an exception. */
			default: return COND_NV;
		endcase
	endfunction
endmodule
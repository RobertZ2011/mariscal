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

module m_decoder_shift(
	input e_kind kind,
	input[31:0] instruction,
	output s_shift shift
);
	function s_shift f_shift(e_kind k, input[31:0] i);
		case (k)
			KIND_RRR: f_shift = {
				i[7:5],
				i[4:0]
			};
			default: f_shift = {
				SHIFT_SHL,
				5'b0
			};
		endcase
	endfunction

	assign shift = f_shift(kind, instruction);
endmodule
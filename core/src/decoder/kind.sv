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

module m_decoder_kind(
	input[31:0] instruction,
	output e_kind kind
);
	assign kind = f_kind(instruction[31:28]);

	function e_kind f_kind(input[3:0] i);
		case (i[3:2])
			2'b00: 
				case (i[1:0])
					2'b00: f_kind = KIND_RRR;
					2'b01: f_kind =  KIND_MEMORY;
					2'b10: f_kind = KIND_MODEL;
					default: f_kind = KIND_INVALID;
				endcase
			2'b01: f_kind = KIND_RRI;
			2'b11: f_kind = KIND_CUSTOM;
			default: f_kind = KIND_INVALID;
		endcase
	endfunction
endmodule
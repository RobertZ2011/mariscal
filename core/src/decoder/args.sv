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

module m_decoder_args(
	input e_kind kind,
	input[31:0] instruction,

	output[4:0] rs_sel,
	input[31:0] rs_in,
	output[4:0] rq_sel,
	input[31:0] rq_in,

	output[31:0] val_a,
	output[31:0] val_b,

	output[4:0] rd
);
	function logic[31:0] f_val_a(e_kind k, input[31:0] i);
		case (k)
			KIND_RRR: f_val_a = rs_in;
			KIND_RRI: f_val_a = rs_in;
			default: f_val_a = 32'b0;
		endcase
	endfunction

	function logic[31:0] f_val_b(e_kind k, input[31:0] i);
		case (k)
			KIND_RRR: f_val_b = rq_in;
			KIND_RRI: f_val_b = { {20{i[11]}}, i[11:0] };
			default: f_val_b = 32'b0;
		endcase
	endfunction

	function logic[4:0] f_rs_sel(e_kind k, input[31:0] i);
		case (k)
			KIND_RRR: f_rs_sel = i[17:13];
			KIND_RRI: f_rs_sel = i[19:15];
			default: f_rs_sel = 5'b0;
		endcase
	endfunction;

	function logic[4:0] f_rq_sel(e_kind k, input[31:0] i);
		case (k)
			KIND_RRR: f_rq_sel = i[12:8];
			default: f_rq_sel = 5'b0;
		endcase
	endfunction;

	function logic[4:0] f_rd(e_kind k, input[31:0] i);
		case (k)
			KIND_RRR: f_rd = i[22:18]; 
			KIND_RRI: f_rd = i[24:20];
			default: f_rd = 5'b0;
		endcase
	endfunction;

	assign val_a = f_val_a(kind, instruction);
	assign val_b = f_val_b(kind, instruction);

	assign rs_sel = f_rs_sel(kind, instruction);
	assign rq_sel = f_rq_sel(kind, instruction);

	assign rd = f_rd(kind, instruction);
endmodule
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
module test;
	reg[31:0] instruction;
	wire e_kind kind;

	wire[31:0] val_a;
	wire[31:0] val_b;
	wire[4:0] rs_sel;
	wire[4:0] rq_sel;
	wire[4:0] rd;

	reg[31:0] rs_in;
	reg[31:0] rq_in;

	m_decoder_kind m_kind(
		.instruction(instruction),
		.kind(kind)
	);

	m_decoder_args m_args(
		.instruction(instruction),
		.kind(kind),

		.val_a(val_a),
		.val_b(val_b),

		.rs_sel(rs_sel),
		.rs_in(rs_in),

		.rq_sel(rq_sel),
		.rq_in(rq_in),

		.rd(rd)
	);

	initial begin
		$finish;
	end
endmodule
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

	output[4:0] rs_sel,
	input[31:0] rs_in,
	output[4:0] rq_sel,
	input[31:0] rq_in,

	output s_decoded decoded
);

	wire e_kind kind;
	wire e_cond cond;
	wire s_control control;
	wire s_shift shift;
	wire[31:0] a;
	wire[31:0] b;
	wire[4:0] rd;

	m_decoder_kind m_kind(
		.instruction(instruction),
		.kind(kind)
	);

	m_decoder_cond m_cond(
		.instruction(instruction),
		.kind(kind),
		.cond(cond)
	);

	m_decoder_shift m_shift(
		.instruction(instruction),
		.kind(kind),
		.shift(shift)
	);

	m_decoder_args m_args(
		.instruction(instruction),
		.kind(kind),

		.rd(rd),
		.val_a(a),
		.val_b(b),

		.rs_sel(rs_sel),
		.rs_in(rs_in),

		.rq_sel(rq_sel),
		.rq_in(rq_in)
	);

	m_decoder_alu m_alu(
		.instruction(instruction),
		.kind(kind),
		.control(control)
	);

	assign decoded = {
		kind,
		cond,

		control,

		rd,
		a,
		b
	};
endmodule
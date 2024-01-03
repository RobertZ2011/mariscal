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
changequote(`[', `]')
define([RQ_VAL], ['hffffffff])
define([RS_VAL], ['haaaaaaaa])
changequote([`], ['])
module test;
	reg[31:0] instruction;

	reg[31:0] rs;
	reg[31:0] rq;

	wire[4:0] rs_sel;
	wire[4:0] rq_sel;
	wire s_decoded decoded;

	m_decoder decoder(
		.instruction(instruction),

		.rs_sel(rs_sel),
		.rs_in(rs),
		.rq_sel(rq_sel),
		.rq_in(rq),

		.decoded(decoded)
	);

	initial begin
		rs = RS_VAL;
		rq = RQ_VAL;

		// RRR tests
		// Test rd
		forloop(`reg', `0', `31', `
		instruction = asm(format(``add r%d, r1, r2'', reg));
		#10
		assert (decoded.rd == reg);
		')

		// Test rs register
		forloop(`reg', `0', `31', `
		instruction = asm(format(``add r0, r%d, r2'', reg));
		#10
		assert (rs_sel == reg);
		assert (decoded.a == RS_VAL);
		')

		// Test rq register
		forloop(`reg', `0', `31', `
		instruction = asm(format(``add r0, r1, r%d'', reg));
		#10
		assert (rq_sel == reg);
		assert (decoded.b == RQ_VAL);
		')

		$finish;
	end
endmodule
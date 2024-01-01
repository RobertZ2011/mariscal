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
		// RRR tests
		// Test rd
		forloop(`reg', `0', `31', `
		instruction = asm(format(``add r%d, r1, r2'', reg));
		#10
		assert (rd == reg);
		')

		// Test rs register
		forloop(`reg', `0', `31', `
		instruction = asm(format(``add r0, r%d, r2'', reg));
		#10
		assert (rs_sel == reg)
		')

		// Test rq register
		forloop(`reg', `0', `31', `
		instruction = asm(format(``add r0, r1, r%d'', reg));
		#10
		assert (rq_sel == reg)
		')

		// Test rs register reads
		forloop(`reg', `0', `31', `
		instruction = asm(format(``add r0, r%d, r2'', reg));
		rs_in = reg;
		#10
		assert (val_a == reg)
		')

		//Test rq register reads
		forloop(`reg', `0', `31', `
		instruction = asm(format(``add r0, r1, r%d'', reg));
		rq_in = reg;
		#10
		assert (val_b == reg)
		')

		// RRI tests
		// Test rd
		forloop(`reg', `0', `31', `
		instruction = asm(format(``add r%d, r1, 5'', reg));
		#10
		assert (rd == reg)
		')

		// Test rs register
		forloop(`reg', `0', `31', `
		instruction = asm(format(``add r0, r%d, 5'', reg));
		#10
		assert (rs_sel == reg)
		')

		// Test immediates
		instruction = asm(`add r0, r1, 0');
		#10
		assert (val_b == 0)

		instruction = asm(`add r0, r1, -1');
		#10
		assert (val_b == -1)

		$finish;
	end
endmodule
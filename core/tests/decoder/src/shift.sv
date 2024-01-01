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
	wire s_shift shift;
	wire e_kind kind;

    m_decoder_kind m_kind(
		.instruction(instruction),
		.kind(kind)
	);

	m_decoder_shift m_shift(
		.instruction(instruction),
		.kind(kind),
		.shift(shift)
	);

	initial begin
		// RRR
		instruction = 32'h0;
		#10;
		assert (shift == {
            SHIFT_SHL,
            5'b0
        })

		instruction = 32'h0fffffff;
		#10;
		assert (shift == {
            SHIFT_INVALID,
            5'b11111
        })

		$finish;
	end
endmodule
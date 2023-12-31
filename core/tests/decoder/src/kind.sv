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
	wire e_kind out;

	m_decoder_kind decoder(
		.instruction(instruction),
		.kind(out)
	);

	initial begin
		// RRR
		instruction = 32'h0;
		#10;
		assert (out == KIND_RRR)

		instruction = 32'h0fffffff;
		#10;
		assert (out == KIND_RRR)

		// Memory
		instruction = 32'h10000000;
		#10;
		assert (out == KIND_MEMORY)

		instruction = 32'h1fffffff;
		#10;
		assert (out == KIND_MEMORY)

		// Model
		instruction = 32'h20000000;
		#10;
		assert (out == KIND_MODEL)

		instruction = 32'h2fffffff;
		#10;
		assert (out == KIND_MODEL)

		// Invalid
		instruction = 32'h30000000;
		#10;
		assert (out == KIND_INVALID)

		instruction = 32'h3fffffff;
		#10;
		assert (out == KIND_INVALID)

		// RRI
		instruction = 32'h40000000;
		#10;
		assert (out == KIND_RRI)

		instruction = 32'h7fffffff;
		#10;
		assert (out == KIND_RRI)

		//Invalid
		instruction = 32'h80000000;
		#10;
		assert (out == KIND_INVALID)

		instruction = 32'hbfffffff;
		#10;
		assert (out == KIND_INVALID)

		// Custom
		instruction = 32'hc0000000;
		#10;
		assert (out == KIND_CUSTOM)

		instruction = 32'hffffffff;
		#10;
		assert (out == KIND_CUSTOM)

		$finish;
	end
endmodule
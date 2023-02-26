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

module registers(
	input[4:0] sel_a,
	input[4:0] sel_b,
	output[31:0] a,
	output[31:0] b,
	
	input[4:0] sel_data,
	input[31:0] data,
	input we,
	
	input clk,
	input nrst
);

	reg[31:0] registers[31];

	// Need to handle the zero register
	assign a = (sel_a == 0) ? 0 : registers[sel_a - 1];
	assign b = (sel_b == 0) ? 0 : registers[sel_b - 1];

	always @(posedge clk or negedge nrst) begin
		if (!nrst) begin
			for (integer i = 0; i < 31; i = i + 1)
				registers[i] <= 0;
		end
		else if (we) begin
			// Writes to the zero register are discarded
			if (sel_data != 0)
				registers[sel_data - 1] <= data;
		end
	end

endmodule

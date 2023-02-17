/* Copyright 2023 Robert Zieba, see LICENSE file for full license. */

`timescale 1 ns/10 ps

module registers_test;
	reg [4:0] sel_a;
	reg [4:0] sel_b;
	wire [31:0] a;
	wire [31:0] b;

	reg [4:0] sel_data;
	reg [31:0] data;
	reg we;
	
	reg clk;
	reg nrst;

	registers regs(
		.sel_a(sel_a),
		.sel_b(sel_b),
		.a(a),
		.b(b),
				   
		.sel_data(sel_data),
		.data(data),
		.we(we),
				   
		.clk(clk), 
		.nrst(nrst)
	);

	initial begin
		nrst = 1;
		clk = 0;
		#10;
		
		// Test reads and writes to zero register
		sel_data = 0;
		data = 'hffffffff;
		we = 1;
		clk = 1;
		#10 clk = 0;

		sel_a = 0;
		sel_b = 0;
		#10;
		assert (a == 0);
		assert (b == 0);

		// Write to each register
		for (integer i = 1; i < 32; i = i + 1) begin
			sel_data = 5'(i);
			data = i;
			we = 1;
			clk = 1;
			#10 clk = 0;
			#10;
		end

		// Test register contents
		for (integer i = 1; i < 32; i = i + 1) begin
			sel_a = 5'(i);
			sel_b = 5'(i);
			#10;
			assert (a == i);
			assert (b == i);
		end

		// Test reset
		nrst = 0;
		#10 nrst = 1;

		for (integer i = 1; i < 32; i = i + 1) begin
			sel_a = 5'(i);
			sel_b = 5'(i);
			#10;
			assert (a == 0);
			assert (b == 0);
		end

		$finish;
	end
endmodule

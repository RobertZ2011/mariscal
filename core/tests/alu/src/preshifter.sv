import p_alu::*;

module test;
	reg[31:0] in;
	s_shift shift;
	wire[31:0] out;

	m_alu_preshifter preshifter(
		.in(in),
		.shift(shift),
		.shifted(out)
	);

	initial begin

		shift.shift_type = SHIFT_SHL;
		for (integer i = 0; i < 32; i++) begin
			in = 32'haaaaaaaa;
			shift.amount = 5'(i);
			#10

			assert (out == 32'haaaaaaaa << i);
		end

		shift.shift_type = SHIFT_SHR;
		for (integer i = 0; i < 32; i++) begin
			in = 32'haaaaaaaa;
			shift.amount = 5'(i);
			#10

			assert (out == 32'haaaaaaaa >> i);
		end

		shift.shift_type = SHIFT_ASL;
		for (integer i = 0; i < 32; i++) begin
			in = 32'haaaaaaaa;
			shift.amount = 5'(i);
			#10

			assert (out == 32'haaaaaaaa <<< i);
		end

		shift.shift_type = SHIFT_ASR;
		for (integer i = 0; i < 32; i++) begin
			in = 32'haaaaaaaa;
			shift.amount = 5'(i);
			#10

			assert (out == 32'haaaaaaaa >>> i);
		end

		$finish;
	end
endmodule
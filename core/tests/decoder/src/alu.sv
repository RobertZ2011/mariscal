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

	wire s_control control;

	m_decoder_kind m_kind(
		.instruction(instruction),
		.kind(kind)
	);

	m_decoder_alu alu(
		.instruction(instruction),
		.kind(kind),
		.control(control)
	);

	initial begin
		// RRR tests
		instruction = asm(`add r0, r1, r2');
		#10
		assert (control ==
			{
				CORE_OP_ADD,
				UNARY_OP_ID, 
				UNARY_OP_ID,
				{
					SHIFT_SHL,
					format(`5%cb0', `39')
				},
				UNARY_OP_ID
			}
		);

		instruction = asm(`sub r0, r1, r2');
		#10
		assert (control ==
			{
				CORE_OP_ADD,
				UNARY_OP_ID, 
				UNARY_OP_NEG,
				{
					SHIFT_SHL,
					format(`5%cb0', `39')
				},
				UNARY_OP_ID
			}
		);

		instruction = asm(`and r0, r1, r2');
		#10
		assert (control ==
			{
				CORE_OP_AND,
				UNARY_OP_ID, 
				UNARY_OP_ID,
				{
					SHIFT_SHL,
					format(`5%cb0', `39')
				},
				UNARY_OP_ID
			}
		);

		instruction = asm(`or r0, r1, r2');
		#10
		assert (control ==
			{
				CORE_OP_AND,
				UNARY_OP_NOT,
				UNARY_OP_NOT,
				{
					SHIFT_SHL,
					format(`5%cb0', `39')
				},
				UNARY_OP_NOT
			}
		);

		instruction = asm(`xor r0, r1, r2');
		#10
		assert (control ==
			{
				CORE_OP_XOR,
				UNARY_OP_ID,
				UNARY_OP_ID,
				{
					SHIFT_SHL,
					format(`5%cb0', `39')
				},
				UNARY_OP_ID
			}
		);

		instruction = asm(`shl r0, r1, r2');
		#10
		assert (control ==
			{
				CORE_OP_SHL,
				UNARY_OP_ID,
				UNARY_OP_ID,
				{
					SHIFT_SHL,
					format(`5%cb0', `39')
				},
				UNARY_OP_ID
			}
		);

		instruction = asm(`shr r0, r1, r2');
		#10
		assert (control ==
			{
				CORE_OP_SHR,
				UNARY_OP_ID,
				UNARY_OP_ID,
				{
					SHIFT_SHL,
					format(`5%cb0', `39')
				},
				UNARY_OP_ID
			}
		);

		instruction = asm(`asl r0, r1, r2');
		#10
		assert (control ==
			{
				CORE_OP_ASL,
				UNARY_OP_ID,
				UNARY_OP_ID,
				{
					SHIFT_SHL,
					format(`5%cb0', `39')
				},
				UNARY_OP_ID
			}
		);

		instruction = asm(`asr r0, r1, r2');
		#10
		assert (control ==
			{
				CORE_OP_ASR,
				UNARY_OP_ID,
				UNARY_OP_ID,
				{
					SHIFT_SHL,
					format(`5%cb0', `39')
				},
				UNARY_OP_ID
			}
		);

		instruction = asm(`rol r0, r1, r2');
		#10
		assert (control ==
			{
				CORE_OP_ROL,
				UNARY_OP_ID,
				UNARY_OP_ID,
				{
					SHIFT_SHL,
					format(`5%cb0', `39')
				},
				UNARY_OP_ID
			}
		);

		instruction = asm(`ror r0, r1, r2');
		#10
		assert (control ==
			{
				CORE_OP_ROR,
				UNARY_OP_ID,
				UNARY_OP_ID,
				{
					SHIFT_SHL,
					format(`5%cb0', `39')
				},
				UNARY_OP_ID
			}
		);

		$finish;
	end
endmodule
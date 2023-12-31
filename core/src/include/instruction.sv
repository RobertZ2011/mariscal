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

package p_instruction;
	typedef enum bit[2:0] {
		KIND_RRR,
		KIND_MEMORY,
		KIND_MODEL,
		KIND_RRI,
		KIND_CUSTOM,
		KIND_INVALID = 3'b111
	} e_kind;

	typedef enum bit[4:0] { 
		BINOP_ADD,
		BINOP_SUB,
		BINOP_MUL,
		BINOP_DIV,
		BINOP_MOD,

		BINOP_AND,
		BINOP_OR,
		BINOP_XOR,

		BINOP_SHL,
		BINOP_SHR,
		BINOP_ASL,
		BINOP_ASR,
		BINOP_ROL,
		BINOP_ROR,

		BINOP_NOT,
		BINOP_NEG,

		BINOP_CMP,

		BINOP_INVALID = 5'b11111
	} e_bin_op;

	typedef enum bit[4:0] {
		MEMOP_LDRB_RR,
		MEMOP_STRB_RR,
		MEMOP_LDRS_RR,
		MEMOP_STRS_RR,
		MEMOP_LDRW_RR,
		MEMOP_STRW_RR,

		MEMOP_LDRB_RI,
		MEMOP_STRB_RI,
		MEMOP_LDRS_RI,
		MEMOP_STRS_RI,
		MEMOP_LDRW_RI,
		MEMOP_STRW_RI,

		MEMOP_INVALID = 5'b11111
	 } e_mem_op;

	typedef union packed {
		e_bin_op bin_op;
		e_mem_op mem_op;
	} u_bin_op;

	typedef enum bit[2:0] {
		COND_AL,
		COND_EQ,
		COND_NE,
		COND_GT,
		COND_GE,
		COND_LT,
		COND_LE,
		COND_NV
	} e_cond;

	typedef struct packed {
		e_kind kind;
		e_cond cond;

		s_control alu_config;

		bit[4:0] rd;
		bit[4:0] rs;
		bit[4:0] rq;

		bit[31:0] immedate;
		s_shift shift;
	} s_decoded;
endpackage
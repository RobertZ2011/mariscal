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

import p_common::*;

package p_alu;
    typedef enum {
        CORE_OP_ADD,
        CORE_OP_AND,
        CORE_OP_XOR,

        CORE_OP_SHL,
        CORE_OP_SHR,
        CORE_OP_ASL,
        CORE_OP_ASR,
        CORE_OP_ROL,
        CORE_OP_ROR
    } e_core_op;

    typedef enum {
        UNARY_OP_ID,
        UNARY_OP_NEG,
        UNARY_OP_NOT
    } e_unary_op;

    typedef enum {
        CMP_RES_EQ,
        CMP_RES_GT,
        CMP_RES_LT
    } e_cmp_res;

    typedef struct packed {
        e_core_op op;
        e_unary_op a_op;
        e_unary_op b_op;
        s_shift b_shift;
        e_unary_op out_op;
    } s_control;
endpackage
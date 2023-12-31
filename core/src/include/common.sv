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

package p_common;
    typedef enum bit[2:0] {
		SHIFT_SHL,
		SHIFT_SHR,
		SHIFT_ASL,
		SHIFT_ASR,
		SHIFT_ROL,
		SHIFT_ROR,
		SHIFT_INVALID
	} e_shift_type;

    typedef struct packed {
        e_shift_type shift_type;
        bit[4:0] amount;
    } s_shift;
endpackage
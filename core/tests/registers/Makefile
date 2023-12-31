# Copyright 2023 Robert Zieba, see LICENSE file for full license.
all:
	iverilog -g2005-sv src/registers_test.sv ../../src/registers/registers.sv
	./a.out

clean:
	rm a.out
SRC_ROOT := ../../src/alu
SRC := ../../src/include/common.sv ../../src/include/alu.sv ../../src/include/instruction.sv ${SRC_ROOT}/shifter.sv ${SRC_ROOT}/alu.sv

all:
	iverilog -g2005-sv src/alu_test.sv ${SRC}
	./a.out

clean:
	rm a.out
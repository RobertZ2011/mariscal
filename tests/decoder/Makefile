SRC_ROOT := ../../src/decoder
SRC := ../../src/include/common.sv ../../src/include/alu.sv ../../src/include/instruction.sv ${SRC_ROOT}/decoder.sv

all:
	iverilog -g2005-sv src/decoder_test.sv ${SRC}
	./a.out

clean:
	rm a.out
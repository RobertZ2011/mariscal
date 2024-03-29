#!/bin/bash

source ../include.sh

#build_and_run "kind" "alu.sv instruction.sv" "decoder/kind.sv" "src/kind.sv"
#build_and_run "cond" "alu.sv instruction.sv" "decoder/kind.sv decoder/cond.sv" "src/cond.sv"
#build_and_run "shift" "alu.sv instruction.sv" "decoder/kind.sv decoder/shift.sv" "src/shift.sv"
#build_and_run "args" "alu.sv instruction.sv" "decoder/kind.sv decoder/args.sv" "src/args.sv"
#build_and_run "alu" "alu.sv instruction.sv" "decoder/kind.sv decoder/shift.sv decoder/alu.sv" "src/alu.sv"
build_and_run "decoder" "alu.sv instruction.sv" "decoder/kind.sv decoder/shift.sv decoder/cond.sv decoder/args.sv decoder/alu.sv decoder/decoder.sv" "src/decoder.sv"
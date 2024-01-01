#!/bin/bash

source ../include.sh

build_and_run "kind" "alu.sv instruction.sv" "decoder/kind.sv" "src/kind.sv"
build_and_run "cond" "alu.sv instruction.sv" "decoder/kind.sv decoder/cond.sv" "src/cond.sv"
build_and_run "shift" "alu.sv instruction.sv" "decoder/kind.sv decoder/shift.sv" "src/shift.sv"
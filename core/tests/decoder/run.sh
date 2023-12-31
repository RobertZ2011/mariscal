#!/bin/bash

source ../include.sh

build_and_run "kind" "alu.sv instruction.sv" "decoder/kind.sv" "src/kind.sv"
build_and_run "kind" "alu.sv instruction.sv" "decoder/kind.sv decoder/cond.sv" "src/cond.sv"
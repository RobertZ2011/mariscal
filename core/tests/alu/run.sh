#!/bin/bash

source ../include.sh

build_and_run "core" "alu.sv" "alu/core.sv" "src/core.sv"
build_and_run "preshifter" "alu.sv" "alu/shifter.sv" "src/preshifter.sv"
build_and_run "unary" "alu.sv" "alu/unary.sv" "src/unary.sv"
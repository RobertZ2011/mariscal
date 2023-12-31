build_and_run () {
	local include_root="../../src/include"
	local src_root="../../src" 

	local target="${1}"
	local includes="${include_root}/common.sv "
	local sources=""
	local tests=${4}
	local build="build/${target}"

	# Includes
	for include in ${2}; do
		local path="${include_root}/${include}"
		includes+="${path} "
	done

	# Sources
	for source in ${3}; do
		local path="${src_root}/${source}"
		sources+="${path} "
	done

	printf "\nBuilding target %s\n" "${target}"
	mkdir -p "${build}"
	verilator --binary --timing --assert -sv -j 0 --top test --prefix "${target}" --Mdir "${build}" ${includes} ${sources} ${tests}

	printf "\nRunning target %s\n" "${target}"
	"./${build}/${target}"
}
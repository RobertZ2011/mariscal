export PATH=../../../../bibe-as/target/debug:$PATH
set -e

for arg in "$@"; do
case $arg in
    --debug) set -x ;;
  esac
done

preprocess () {
	local res=""

	for src in ${1}; do
		local gen="build/generated/${src}"
		local dir=$(dirname "${gen}")
		mkdir -p "${dir}"
		m4 ../include.m4 "${src}" > "${gen}"
		res+="${gen} "
	done

	echo "${res}"
}

build_and_run () {
	local include_root="../../src/include"
	local src_root="../../src" 

	local target="${1}"
	local includes="${include_root}/common.sv "
	local sources=""
	local tests=$(preprocess "${4}")
	local build="build/${target}"
	local args="${5}"

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

	verilator --lint-only --timing --assert -sv --top test --prefix "${target}" --Mdir "${build}" ${args} ${includes} ${sources} ${tests}
	verilator --binary --timing --assert -sv -j 0 --top test --prefix "${target}" --Mdir "${build}" ${args} ${includes} ${sources} ${tests}

	printf "\nRunning target %s\n" "${target}"
	"./${build}/${target}"
}
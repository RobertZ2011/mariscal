define(`forloop',
	   `pushdef(`$1', `$2')_forloop(`$1', `$2', `$3', `$4')popdef(`$1')')
define(`_forloop',
		`$4`'ifelse($1, `$3', ,
			`define(`$1', incr($1))_forloop(`$1', `$2', `$3', `$4')')')
undefine(`shift')
define(`asm', `format(`%ch%s /* %s */', `39', esyscmd(`echo "$1" | bibe-as -f hex -o /dev/stdout /dev/stdin'), `$1') ifelse(sysval, `0', , errprint(`Asm failed at' __file__`:'__line__))')

define(`harness_ram', `')
define(`harness_rom', `')

define(`harness_memory')
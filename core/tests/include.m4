define(`forloop',
	   `pushdef(`$1', `$2')_forloop(`$1', `$2', `$3', `$4')popdef(`$1')')
define(`_forloop',
		`$4`'ifelse($1, `$3', ,
			`define(`$1', incr($1))_forloop(`$1', `$2', `$3', `$4')')')
undefine(`shift')
define(`asm', `format(`%ch%s', `39', esyscmd(`echo "$1" | bibe-as -f hex -o /dev/stdout /dev/stdin'))')
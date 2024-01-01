undefine(`shift')
define(`asm', `format(`%ch%s', `39', esyscmd(`echo "$1" | bibe-as -f hex -o /dev/stdout /dev/stdin'))')
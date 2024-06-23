#!/bin/sh

clang -Wno-unused-command-line-argument -Xclang -ast-dump=json ./lib.c -fsyntax-only -ferror-limit=99999 |
	jq '.inner[] | select(.name) | select((.name | startswith("_"))| not)' |
	jq 'select((.kind == "VarDecl" or .kind == "FunctionDecl") | not)' |
	jq 'walk(if type == "object" then del(.loc, .id, .range, .typeAliasDeclId, .isReferenced) else . end)' |
	jq 'select(.type?.qualType // .name // "" | startswith("_") | not) | select(.name // "" | endswith("_t") | not )' |
	jq -n '[inputs]'
	

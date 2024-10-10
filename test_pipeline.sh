#!/usr/bin/env bash

make bonus && valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --track-fds=yes --trace-children=yes --read-var-info=yes --read-inline-info=yes ./minishell_bonus <<<'cat </dev/null | cat | cat "./.envrc" | cat | cat'

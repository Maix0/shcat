#!/usr/bin/env bash

make && valgrind --leak-check=full --show-leak-kinds=none --track-origins=yes --track-fds=no --trace-children=yes --read-var-info=yes --read-inline-info=yes ./minishell <<<'cat </dev/null | cat | cat "./.envrc"'

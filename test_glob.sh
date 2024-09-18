#!/usr/bin/env bash

make && valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --track-fds=yes --trace-children=yes --read-var-info=yes --read-inline-info=yes ./minishell <<<'/usr/bin/env echo *'

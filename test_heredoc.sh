#!/usr/bin/env bash

make && valgrind --leak-check=full --show-leak-kinds=none --track-origins=yes --track-fds=yes --trace-children=yes --read-var-info=yes --read-inline-info=yes --vgdb=no --vgdb-error=0  ./minishell <<<'cat <<EOF | xargs printf "\\x1b[32m%s\\x1b[0m\\n"
bonjour je suis un heredoc
le saviez tu je dois finir par EOF mais qui est sur la ligne
donc par example si j ai cette ligne qui fini avec EOF
rien ne se passe
mais la ligne d en dessous fini le heredoc :D
EOF'

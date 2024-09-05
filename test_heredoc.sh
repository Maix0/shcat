#!/usr/bin/env bash

make && valgrind --leak-check=full --show-leak-kinds=none --track-origins=yes --track-fds=yes --trace-children=yes --read-var-info=yes --read-inline-info=yes ./minishell <<<'cat <<EOF
bonjour je suis un heredoc
le saviez tu je dois finir par EOF mais qui est sur la ligne
donc par example si j ai cette ligne qui fini avec EOF
rien ne se passe
mais la ligne d en dessous fini le heredoc :D
EOF'
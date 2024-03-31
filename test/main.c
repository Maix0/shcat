#include "../includes/minishell.h"

int main()
{
	char *cwd;
	size_t size;

	cwd = (char *)malloc(size);
	size = 1024;
	if (cwd == NULL) {
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	while (getcwd(cwd, size) == NULL) {
		size *= 2;
		cwd = (char *)realloc(cwd, size);
		if (cwd == NULL) {
			perror("realloc");
			exit(EXIT_FAILURE);
		}
	}
	printf("Le répertoire de travail actuel est : %s\n", cwd);
	free(cwd); // N'oubliez pas de libérer la mémoire allouée
	return 0;
}


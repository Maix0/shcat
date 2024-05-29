#include "./includes/ft_math.h"

int	main(int argc, char *argv[])
{
	t_number	nb;

	if (argc == 2)
	{
		ft_init_numbers(argv[1], &nb);
		printf("Number: %s\n", nb.number);
		printf("Integer: %s\n", nb.int_part);
		printf("Float: %s\n", nb.float_part);
		printf("Integer size: %zu\n", nb.int_size);
		printf("Float size: %zu\n", nb.float_size);
	}
	return (0);
}

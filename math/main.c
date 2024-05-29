/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:41:26 by rparodi           #+#    #+#             */
/*   Updated: 2024/05/28 15:48:40 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./includes/ft_math.h"

int main(int argc, char *argv[])
{
	t_number nb;

	if (argc != 2)
	{
		printf("Usage: %s <string>\n", argv[0]);
		return 1;
	}
	else if (argc == 2)
	{
		if (ft_init_numbers(argv[1], &nb) == ERROR)
		{
			printf("Error\n");
			return 1;
		}
		else
			printf("Number = %s \n(int: %s, %zu) (float: %s, %zu)\n", nb.number, nb.int_part, nb.int_size, nb.float_part, nb.float_size);
	}
	return (0);
}

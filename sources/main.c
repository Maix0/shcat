/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:40:38 by rparodi           #+#    #+#             */
/*   Updated: 2024/03/28 15:20:38 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	ft_take_cmd(void)
{
    int		i = 0;
    char	*next_line = NULL;
    while (i < 10000000)
    {
		next_line = readline("shcat > ");
        if (!next_line)
            exit(1);
        printf("%s\n", next_line);
		add_history(next_line);
        free(next_line);
        i++;
    }
}

int	main(void)
{
	printf("Welcome to our Minishell !\n");
	ft_take_cmd();
}

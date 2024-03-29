/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:40:38 by rparodi           #+#    #+#             */
/*   Updated: 2024/03/29 11:53:25 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int	ft_check_type_cmd(i8 *cmd)
{
	usize	i;

	i = 0;
	while (cmd[i] != '\0')
	{
		if (cmd[i] == '>')
		{
			if (cmd[i + 1] == '>')
				printf("Have to redirect at the end of the file\n");
			else
				printf("Have to redirect in the file\n");
		}
	}
	return (1);
}

void	ft_take_cmd(void)
{
    i32		i = 0;
    i8		*user_input = NULL;
    while (i < 10000000)
    {
		user_input = readline("shcat > ");
        if (!user_input || strcmp("exit", user_input) == 0)
            ft_exit(0);
        ft_check_type_cmd(user_input);
		add_history(user_input);
        free(user_input);
        i++;
    }
}

i32	main(void)
{
	ft_take_cmd();
}

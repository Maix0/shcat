/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:40:38 by rparodi           #+#    #+#             */
/*   Updated: 2024/03/29 14:58:04 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

i32	ft_check_type_cmd(i8 *cmd)
{
	usize	i;

	i = 0;
	while (cmd[i] != '\0')
	{
		if (cmd[i] == '>')
		{
			if (cmd[++i] == '>')
				printf("Have to redirect at the end of the file after\n");
			else if (cmd[i] == '&')
				printf("Have to redirect the stdout in the file\n");
			else
				printf("Have to redirect in the file\n");
		}
		else if (cmd[i] == '<')
		{
			if (cmd[++i] == '<')
				printf("Have to redirect at the end of the file before\n");
			else if (cmd[i] == '&')
				printf("Have to redirect the stdin in the file\n");
			else
				printf("Have to redirect in the file\n");
		}
		else if (cmd[i] == ';')
			printf("Have to execute one more command\n");
		else if (cmd[i] == '"')
		{
			i++;
			while (cmd[i] != '\0')
			{
				if (cmd[i] == '"')
				{
					printf("Quote span found !\n");
					break ;
				}
				i++;
			}
			if (cmd[i] == '\0')
				 printf("Quote span not found !\n");
		}
		else if (cmd[i] == '|')
		{
			if (cmd[++i] == '|')
				printf("Or something\n");
			else
				printf("I have to pipe a cmd !\n");
			
		}
		else
			printf("Error!\n");
		i++;
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
            ft_exit(user_input, 0);
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

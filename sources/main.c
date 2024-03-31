/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:40:38 by rparodi           #+#    #+#             */
/*   Updated: 2024/03/31 20:08:28 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

i32	ft_check_type_cmd(i8 **cmd)
{
	usize	j;

	j = 0;
	while (cmd[j])
	{
		if (ft_strcmp(cmd[j], ">") == 0)
			printf("Have to redirect in the file\n");
		else if (ft_strcmp(cmd[j], ">>") == 0)
			printf("Have to redirect at the end of the file after\n");
		else if (ft_strcmp(cmd[j], ">&") == 0)
			printf("Have to redirect the stdout in the file\n");
		else if (ft_strcmp(cmd[j], "<") == 0)
			printf("Have to redirect at the end of the file before\n");
		else if (ft_strcmp(cmd[j], "<<") == 0)
			printf("Have to redirect at the end of the file after\n");
		else if (ft_strcmp(cmd[j], "<&") == 0)
			printf("Have to redirect the stdout in the file\n");
		else if (ft_strcmp(cmd[j], ";") == 0)
			printf("Have to execute one more command\n");
		else if (ft_strcmp(cmd[j], ";") == 0)
			printf("Have to execute one more command\n");
		else if (ft_strcmp(cmd[j], "|") == 0)
			printf("I have to pipe a cmd !\n");
		else if (ft_strcmp(cmd[j], "||") == 0)
			printf("Or something\n");
		else if (ft_strcmp(cmd[j], "&&") == 0)
			printf("Only if the first has exit status 0\n");
		else if (ft_strcmp(cmd[j], "&") == 0)
			printf("Parreil mais chelou\n");
		else
			printf("Error!\n");
		j++;
	}
	return (1);
}

void	ft_take_cmd(void)
{
    i32		i;
    i8		*user_input = NULL;
	i8		**args = NULL;

	i = 0;
	while (i < 10000000)
	{
		user_input = readline("shcat > ");
		if (!user_input || strcmp("exit", user_input) == 0)
			ft_exit(user_input, 0);
		args = ft_split(user_input, ' ');
		if (!user_input)
			exit(1);
		ft_check_type_cmd(args);
		add_history(user_input);
        free(user_input);
        i++;
    }
}

i32	main(void)
{
	ft_take_cmd();
}

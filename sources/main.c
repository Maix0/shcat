/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:40:38 by rparodi           #+#    #+#             */
/*   Updated: 2024/03/31 21:02:40 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

t_i32	ft_check_type_operators(t_str *operators)
{
	t_usize	i;

	i = 0;
	while (operators[i])
	{
		if (ft_strcmp(operators[i], ">") == 0)
			printf("Have to redirect in the file\n");
		else if (ft_strcmp(operators[i], ">>") == 0)
			printf("Have to redirect at the end of the file after\n");
		else if (ft_strcmp(operators[i], ">&") == 0)
			printf("Have to redirect the stdout in the file\n");
		else if (ft_strcmp(operators[i], "<") == 0)
			printf("Have to redirect at the end of the file before\n");
		else if (ft_strcmp(operators[i], "<<") == 0)
			printf("Have to redirect at the end of the file after\n");
		else if (ft_strcmp(operators[i], "<&") == 0)
			printf("Have to redirect the stdout in the file\n");
		else if (ft_strcmp(operators[i], ";") == 0)
			printf("Have to execute one more command\n");
		else if (ft_strcmp(operators[i], ";") == 0)
			printf("Have to execute one more command\n");
		else if (ft_strcmp(operators[i], "|") == 0)
			printf("I have to pipe a operators !\n");
		else if (ft_strcmp(operators[i], "||") == 0)
			printf("Or something\n");
		else if (ft_strcmp(operators[i], "&&") == 0)
			printf("Only if the first has exit status 0\n");
		else if (ft_strcmp(operators[i], "&") == 0)
			printf("Parreil mais chelou\n");
		else
			return (0);
		i++;
	}
	return (1);
}

void ft_check(char **input)
{
	t_usize	i;

	i = 0;
	while (input[i] != NULL)
	{
		if (ft_check_type_operators(input) == 1)
			printf("Operateur\n");
		else
			printf("Commande ou args\n");
		i++;
	}
}

void	ft_take_args(void)
{
    t_i32		i;
    t_str		user_input = NULL;
	t_str		*args = NULL;

	i = 0;
	while (i < 10000000)
	{
		user_input = readline("shcat > ");
		if (!user_input || strcmp("exit", user_input) == 0)
			ft_exit(user_input, 0);
		args = ft_split(user_input, ' ');
		if (!user_input)
			exit(1);
		ft_check(args);
		add_history(user_input);
        free(user_input);
        i++;
    }
}

t_i32	main(void)
{
	ft_take_args();
}

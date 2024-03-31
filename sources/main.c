/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:40:38 by rparodi           #+#    #+#             */
/*   Updated: 2024/04/01 01:51:47 by rparodi          ###   ########.fr       */
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

void ft_check(t_utils *shcat, char **input)
{
	t_usize	i;

	i = 0;
	while (input[i] != NULL)
	{
		if (ft_check_type_operators(input) == 1)
			printf("Operateur\n");
		else
		{
			if (ft_strcmp(input[i], "exit") == 0)
				ft_exit(NULL, 0);
			else if (ft_strcmp(input[i], "pwd") == 0)
				ft_pwd();
			else
				ft_other_cmd(shcat, i);
		}
		i++;
	}
}

void	ft_take_args(t_utils *shcat)
{
    t_i32		i;
    t_str		user_input = NULL;
	t_str		*args = NULL;

	i = 0;
	while (1)
	{
		shcat->str_input = readline(shcat->name_shell);
		if (!user_input)
			ft_exit(shcat, 0);
		shcat->strs_input = ft_split(user_input, ' ');
		if (!args)
			exit(1);
		ft_check(shcat, shcat->strs_input);
		add_history(shcat->str_input);
		ft_free_strs(shcat->strs_input);
        free(shcat->str_input);
        i++;
    }
}

void	ft_init_arge(t_str arge[], t_utils *utils)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = NULL;
	while (arge[i] != NULL)
	{
		if (arge[i][0] == 'P' && arge[i][1] == 'A' && arge[i][2] == 'T' && \
			arge[i][3] == 'H' && arge[i][4] == '=')
		{
			temp = ft_strdup(arge[i] + 5);
			if (!temp)
				ft_exit(utils, 1);
			else
				utils->path = ft_split(temp, ':');
			break ;
		}
		i++;
	}
	if (temp != NULL)
		free(temp);
}

t_i32	main(t_i32 argc, t_str argv[], t_str arge[])
{
	t_utils	*shcat;

	shcat = (t_utils *)malloc(sizeof(t_utils));
	if (argc == 2)
		shcat->name_shell = ft_strdup(strcat(argv[1], " > "));
	else
		shcat->name_shell = ft_strdup("shcat > ");
	ft_init_arge(arge, shcat);
	shcat->envp = arge;
	ft_take_args(shcat);
}

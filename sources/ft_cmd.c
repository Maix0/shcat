/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 20:26:13 by rparodi           #+#    #+#             */
/*   Updated: 2024/04/30 21:31:27 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	ft_exec_cmd(t_utils *utils, t_str cmd, t_str cmd_args[])
{
	if (execve(cmd, cmd_args, utils->envp) == -1)
	{
		printf("ERROR >\n execve\n %s\n", cmd);
		ft_free_strs((char **)cmd_args);
		ft_exit(utils, 1);
	}
}

void	ft_other_cmd(t_utils *shcat, t_usize i, t_usize prev_i)
{
	pid_t	pid;
	t_i32	options;
	t_str	*args;
	t_usize	k;
	// t_str	cmd;

	k = prev_i;
	args = (t_str *)malloc(sizeof(t_str) * (i + 2));
	while (prev_i < i)
	{
		printf("ft_other_cmd = %s\n", shcat->strs_input[prev_i]);
		args[k] = malloc(ft_strlen(shcat->strs_input[prev_i]));
		ft_strlcpy(args[k], shcat->strs_input[prev_i], ft_strlen(shcat->strs_input[prev_i]));
		prev_i++;
		k++;
	}
	args[k] = NULL;
	// cmd = ft_check_cmds(shcat, args[tmp]);
	options = 0;
	pid = fork();
	if (pid == -1)
		ft_exit(shcat, 1);
	// if (pid == 0)
	// 	ft_exec_cmd(shcat, cmd, args);
	waitpid(pid, NULL, options);
}

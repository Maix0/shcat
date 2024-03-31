/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 01:00:30 by rparodi           #+#    #+#             */
/*   Updated: 2024/04/01 01:54:23 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	ft_exec_cmd(t_utils *utils, char *cmd, char *cmd_args)
{
	const char	**args = (const char **)ft_split(cmd_args, ' ');

	if (execve(cmd, (char *const *)args, (char *const *)utils->envp) == -1)
	{
		ft_free_strs((char **)args);
		ft_exit(utils, 1);
	}
}

void	ft_other_cmd(t_utils *shcat, t_usize i)
{
	pid_t	pid;
	t_i32	options;

	printf("ft_other_cmd = %s", shcat->strs_input[i]);
	options = 0;
	pid = fork();
	if (pid == -1)
		ft_exit(shcat, 1);
	if (pid == 0)
		ft_exec_cmd(shcat, shcat->strs_input[i], NULL);
	waitpid(pid, NULL, options);
}

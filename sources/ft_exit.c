/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 11:35:51 by rparodi           #+#    #+#             */
/*   Updated: 2024/04/01 01:16:47 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	ft_free_strs(t_str *strs)
{
	t_usize	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

	t_str	str_input;
	t_str	*strs_input;

void	ft_free_utils(t_utils *s)
{
	if (s->str_input)
		free(str_input);
	if (s->strs_input)
		ft_free_strs(strs_input);
	free(s);
}

void	ft_exit(t_utils *maiboyerlpb, t_u8 exit_status)
{
	if (maiboyerlpb)
		ft_free_utils(maiboyerlpb);
	printf("exit\n");
	exit(exit_status);
}
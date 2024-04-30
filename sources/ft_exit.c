/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 11:35:51 by rparodi           #+#    #+#             */
/*   Updated: 2024/04/30 16:07:48 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	ft_free(void *ptr)
{
	if (!ptr)
		free(ptr);
	ptr = NULL;
}

void	ft_free_strs(t_str *strs)
{
	t_usize	i;

	i = 0;
	while (strs[i])
	{
		ft_free(strs[i]);
		i++;
	}
	ft_free(strs);
}

void	ft_free_utils(t_utils *s)
{
	(void)(s);
}

void	ft_exit(t_utils *maiboyerlpb, t_u8 exit_status)
{
	if (maiboyerlpb != NULL)
		ft_free_utils(maiboyerlpb);
	printf("exit\n");
	exit(exit_status);
}

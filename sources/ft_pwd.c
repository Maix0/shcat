/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 22:14:33 by rparodi           #+#    #+#             */
/*   Updated: 2024/05/25 16:08:50 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "minishell.h"

void ft_pwd(void)
{
	t_str	str;
	t_usize size;

	size = 1024;
	str = (t_str)mem_alloc_array((size + 1), sizeof(t_i8));
	if (str == NULL)
		ft_exit(NULL, 0);
	while (getcwd(str, size) == NULL)
	{
		if (str)
			free(str);
		size *= 2;
		str = (t_str)mem_alloc_array(sizeof(t_i8), size);
		if (str == NULL)
		{
			ft_exit(NULL, 0);
		}
	}
	printf("%s\n", str);
	free(str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:50:29 by rparodi           #+#    #+#             */
/*   Updated: 2024/03/31 22:32:32 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	*ft_memset(void *s, t_i32 c, t_usize n)
{
	t_str	str;
	t_usize	i;

	i = 0;
	str = (t_str)s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}

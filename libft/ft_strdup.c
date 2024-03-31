/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:53:59 by rparodi           #+#    #+#             */
/*   Updated: 2024/04/01 01:41:35 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

t_str	ft_strdup(t_const_str s)
{
	t_usize	len;
	t_str	to_return;

	len = ft_strlen(s) + 1;
	to_return = (t_str)malloc(sizeof(t_i8) * len);
	if (!to_return)
		return (NULL);
	ft_strlcpy(to_return, s, len);
	return (to_return);
}

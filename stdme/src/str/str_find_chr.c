/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_find_chr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:29:13 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:44 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/str/str.h"

char	*str_find_chr(t_const_str str, char chr)
{
	t_usize	index;

	if (str == NULL)
		return (NULL);
	index = 0;
	while (str[index])
	{
		if (str[index] == chr)
			return ((char *)&str[index]);
		index++;
	}
	if (str[index] == chr)
		return ((char *)&str[index]);
	return (NULL);
}

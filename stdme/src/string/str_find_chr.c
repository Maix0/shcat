/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_find_chr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:29:13 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 14:47:43 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/string/str_find_chr.h"

char	*str_find_chr(t_const_str str, char chr)
{
	t_usize	index;

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

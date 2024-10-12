/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_find_rev_chr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:29:13 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:45 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/str/str.h"
#include "me/str/str.h"

char	*str_find_rev_chr(t_const_str str, char chr)
{
	t_isize	index;

	if (str == NULL)
		return (NULL);
	index = str_len((t_str)str);
	while (index >= 0)
	{
		if (str[index] == chr)
			return ((char *)&str[index]);
		index--;
	}
	return (NULL);
}

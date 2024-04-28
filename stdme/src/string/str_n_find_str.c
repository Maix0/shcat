/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_n_find_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:11:01 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/28 19:40:32 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/string/str_len.h"
#include "me/string/str_n_find_str.h"

static t_str	local_get_end_of_search(t_usize len, t_str str)
{
	t_usize	out_len;

	out_len = str_len(str);
	if (len > out_len)
		len = out_len;
	return (str + len);
}

const char	*str_n_find_str(t_const_str str, t_const_str to_find, t_usize len)
{
	t_str	needle;
	t_str	haystack;
	t_str	end_of_search;

	if ((str == NULL || to_find == NULL))
		return (NULL);
	if (*to_find == '\0')
		return ((t_str)str);
	end_of_search = local_get_end_of_search(len, (t_str)str);
	while (*str)
	{
		haystack = (t_str)str;
		needle = (t_str)to_find;
		while (haystack < end_of_search && *haystack && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (str);
		str++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:26:00 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 14:52:34 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/string/str_clone.h"
#include "me/string/str_map.h"

t_str	str_map(t_const_str s, char (*f)(t_usize, char))
{
	t_str	out;
	t_usize	idx;

	if (f == NULL || s == NULL)
		return (NULL);
	out = str_clone((t_str)s);
	if (out == NULL)
		return (NULL);
	idx = 0;
	while (s[idx])
	{
		out[idx] = f(idx, s[idx]);
		idx++;
	}
	return (out);
}

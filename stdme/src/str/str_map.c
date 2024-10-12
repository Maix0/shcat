/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:26:00 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:47 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/str/str.h"
#include "me/str/str.h"

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

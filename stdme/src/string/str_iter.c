/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_iter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:26:00 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 14:49:47 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/string/str_iter.h"

void	str_iter(t_str s, void (*f)(t_usize, char *))
{
	t_usize	idx;

	if (s == NULL)
		return ;
	idx = 0;
	while (s[idx])
	{
		f(idx, &s[idx]);
		idx++;
	}
}

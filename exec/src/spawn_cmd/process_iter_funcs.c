/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_iter_funcs.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 22:25:44 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/29 17:22:42 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include <stdbool.h>
#include <stdio.h>

bool	exec_find_null(const t_str *s)
{
	return (s == NULL);
}

bool	exec_str_start_with(t_const_str s, t_const_str prefix)
{
	while (*prefix && *s)
	{
		if (*prefix++ != *s++)
			return (false);
	}
	return (*prefix == '\0');
}

bool	exec_find_path(const t_str *s)
{
	t_str	ss;

	if (*s == NULL)
		return (false);
	ss = *s;
	return (ss[0] == 'P' && ss[1] == 'A' && ss[2] == 'T' && ss[3] == 'H' && \
			ss[4] == '=');
}

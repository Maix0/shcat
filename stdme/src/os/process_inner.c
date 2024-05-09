/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_inner.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 22:25:44 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/09 16:57:24 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include <stdbool.h>

bool	find_null(const t_str *s)
{
	return (s == NULL);
}

bool	str_start_with(t_const_str s, t_const_str prefix)
{
	while (*prefix && *s)
	{
		if (*prefix++ != *s++)
			return (false);
	}
	return (*prefix == '\0');
}

bool	find_path(const t_str *s)
{
	if (*s == NULL)
		return (false);
	return (str_start_with(*s, "PATH="));
}

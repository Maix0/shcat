/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_inner.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 22:25:44 by maiboyer          #+#    #+#             */
/*   Updated: 2024/01/04 22:26:10 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"

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
	return (str_start_with(*s, "PATH="));
}

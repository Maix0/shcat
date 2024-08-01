/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_inner.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 22:25:44 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/01 06:37:51 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include <stdbool.h>
#include <stdio.h>

bool	find_null(const t_str *s)
{
	return (s == NULL);
}

bool	find_path(const t_str *s)
{
	t_str	ss;

	if (*s == NULL)
		return (false);
	ss = *s;
	return (ss[0] == 'P' && ss[1] == 'A' && ss[2] == 'T' && ss[3] == 'H' && \
			ss[4] == '=');
}

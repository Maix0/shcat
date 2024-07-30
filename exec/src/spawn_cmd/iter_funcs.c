/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 22:25:44 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/30 13:22:34 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include <stdbool.h>
#include <stdio.h>

bool exec_find_null(const t_str *s)
{
	return (s == NULL);
}

bool exec_find_path(const t_str *s)
{
	t_str str;

	if (*s == NULL)
		return (false);
	str = *s;
	return (str[0] == 'P' && str[1] == 'A' && str[2] == 'T' && str[3] == 'H' && str[4] == '=');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_funcs2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:38:43 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:39:17 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/length.h"
#include "parser/point.h"

t_length	length_zero(void)
{
	return ((t_length){0, {0, 0}});
}

t_length	length_saturating_sub(t_length len1, t_length len2)
{
	if (len1.bytes > len2.bytes)
		return (length_sub(len1, len2));
	else
		return (length_zero());
}

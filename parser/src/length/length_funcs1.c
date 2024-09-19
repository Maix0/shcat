/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_funcs1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:38:43 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:53:22 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/length.h"
#include "parser/point.h"

bool	length_is_undefined(t_length length)
{
	return (length.bytes == 0 && length.extent.column != 0);
}

t_length	length_min(t_length len1, t_length len2)
{
	if (len1.bytes < len2.bytes)
		return (len1);
	return (len2);
}

t_length	length_add(t_length len1, t_length len2)
{
	t_length	result;

	result.bytes = len1.bytes + len2.bytes;
	result.extent = point_add(len1.extent, len2.extent);
	return (result);
}

t_length	length_sub(t_length len1, t_length len2)
{
	t_length	result;

	result.bytes = len1.bytes - len2.bytes;
	result.extent = point_sub(len1.extent, len2.extent);
	return (result);
}

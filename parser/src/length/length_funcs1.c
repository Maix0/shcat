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

bool	length_is_undefined(Length length)
{
	return (length.bytes == 0 && length.extent.column != 0);
}

Length	length_min(Length len1, Length len2)
{
	if (len1.bytes < len2.bytes)
		return (len1);
	return (len2);
}

Length	length_add(Length len1, Length len2)
{
	Length	result;

	result.bytes = len1.bytes + len2.bytes;
	result.extent = point_add(len1.extent, len2.extent);
	return (result);
}

Length	length_sub(Length len1, Length len2)
{
	Length	result;

	result.bytes = len1.bytes - len2.bytes;
	result.extent = point_sub(len1.extent, len2.extent);
	return (result);
}

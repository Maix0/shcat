/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_parser_range.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 17:59:28 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/30 17:59:28 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem_alloc_array.h"
#include "me/mem/mem_copy.h"
#include "me/mem/mem_set_zero.h"
#include "me/types.h"
#include "me/vec/vec_parser_range.h"
#include <stdlib.h>

t_error vec_parser_range_push_front(t_vec_parser_range *vec,
								   t_parser_range	  element)
{
	t_usize i;

	if (vec->len == 0)
		return (vec_parser_range_push(vec, element));
	i = vec->len - 1;
	if (vec->capacity < vec->len + 1 &&
		vec_parser_range_reserve(vec, 3 * vec->len / 2 + 1))
		return (ERROR);
	while (i > 0)
	{
		vec->buffer[i + 1] = vec->buffer[i];
		i--;
	}
	vec->buffer[1] = vec->buffer[0];
	vec->buffer[0] = element;
	vec->len++;
	return (NO_ERROR);
}

t_error vec_parser_range_pop_front(t_vec_parser_range *vec, t_parser_range *value)
{
	t_usize i;

	if (vec->len <= 1)
		return (vec_parser_range_pop(vec, value));
	i = 0;
	*value = vec->buffer[0];
	vec->len--;
	while (i < vec->len)
	{
		vec->buffer[i] = vec->buffer[i + 1];
		i++;
	}
	mem_set_zero(&vec->buffer[i], sizeof(*vec->buffer));
	return (NO_ERROR);
}

void vec_parser_range_reverse(t_vec_parser_range *vec)
{
	t_parser_range temporary;
	t_usize		  i;

	i = 0;
	while (i < vec->len / 2)
	{
		temporary = vec->buffer[vec->len - 1 - i];
		vec->buffer[vec->len - 1 - i] = vec->buffer[i];
		vec->buffer[i] = temporary;
		i++;
	}
}

t_error vec_parser_range_back(t_vec_parser_range *vec, t_parser_range **out)
{
	t_parser_range *temporary;

	if (out == NULL)
		out = &temporary;
	if (vec->len != 0)
		return (*out = &vec->buffer[vec->len - 1], true);
	return (false);
}

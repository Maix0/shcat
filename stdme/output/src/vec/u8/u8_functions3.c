/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u8_functions3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 17:59:28 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:23 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "me/types.h"
#include "me/vec/vec_u8.h"
#include <stdlib.h>

t_error	vec_u8_push_front(t_vec_u8 *vec, t_u8 element)
{
	t_usize	i;

	if (vec->len == 0)
		return (vec_u8_push(vec, element));
	i = vec->len - 1;
	if (vec->capacity < vec->len + 1 && vec_u8_reserve(vec, 3 * vec->len / 2
			+ 1))
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

t_error	vec_u8_pop_front(t_vec_u8 *vec, t_u8 *value)
{
	t_usize	i;

	if (vec->len <= 1)
		return (vec_u8_pop(vec, value));
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

void	vec_u8_reverse(t_vec_u8 *vec)
{
	t_u8	temporary;
	t_usize	i;

	i = 0;
	while (i < vec->len / 2)
	{
		temporary = vec->buffer[vec->len - 1 - i];
		vec->buffer[vec->len - 1 - i] = vec->buffer[i];
		vec->buffer[i] = temporary;
		i++;
	}
}

t_error	vec_u8_back(t_vec_u8 *vec, t_u8 **out)
{
	t_u8	*temporary;

	if (out == NULL)
		out = &temporary;
	if (vec->len != 0)
		return (*out = &vec->buffer[vec->len - 1], true);
	return (false);
}

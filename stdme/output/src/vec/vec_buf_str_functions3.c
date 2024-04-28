/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_buf_str.c                                  :+:      :+:    :+:   */
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
#include "me/vec/vec_buf_str.h"
#include <stdlib.h>

t_error	vec_buf_str_push_front(t_vec_buf_str *vec, t_buffer_str element)
{
	t_usize	i;

	if (vec->len == 0)
		return (vec_buf_str_push(vec, element));
	i = vec->len - 1;
	if (vec->capacity < vec->len + 1 && vec_buf_str_reserve(vec, 3 * vec->len
			/ 2 + 1))
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

t_error	vec_buf_str_pop_front(t_vec_buf_str *vec, t_buffer_str *value)
{
	t_usize	i;

	if (vec->len <= 1)
		return (vec_buf_str_pop(vec, value));
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

void	vec_buf_str_reverse(t_vec_buf_str *vec)
{
	t_buffer_str	temporary;
	t_usize			i;

	i = 0;
	while (i < vec->len / 2)
	{
		temporary = vec->buffer[vec->len - 1 - i];
		vec->buffer[vec->len - 1 - i] = vec->buffer[i];
		vec->buffer[i] = temporary;
		i++;
	}
}

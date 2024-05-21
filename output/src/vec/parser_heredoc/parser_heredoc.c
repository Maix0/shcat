/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_parser_heredoc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:46:28 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 17:54:11 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "me/mem/mem.h"
#include "me/mem/mem.h"
#include "me/types.h"
#include "me/mem/mem.h"
#include "me/vec/vec_parser_heredoc.h"
#include <stdlib.h>

t_vec_parser_heredoc vec_parser_heredoc_new(t_usize				  capacity,
									  t_free_parser_heredoc_item free_function)
{
	t_vec_parser_heredoc out;

	out = (t_vec_parser_heredoc){0};
	out.free_func = free_function;
	out.buffer = mem_alloc_array(capacity, sizeof(t_heredoc));
	if (out.buffer)
		out.capacity = capacity;
	return (out);
}

/// Return true in case of an error
t_error vec_parser_heredoc_push(t_vec_parser_heredoc *vec, t_heredoc element)
{
	if (vec == NULL)
		return (ERROR);
	vec_parser_heredoc_reserve(vec, vec->len + 1);
	vec->buffer[vec->len] = element;
	vec->len += 1;
	return (NO_ERROR);
}

/// Return true in case of an error
t_error vec_parser_heredoc_reserve(t_vec_parser_heredoc *vec, t_usize wanted_capacity)
{
	size_t		   new_capacity;

	if (vec == NULL)
		return (ERROR);
	if (wanted_capacity > vec->capacity)
	{
		new_capacity = (vec->capacity * 3) / 2 + 1;
		while (wanted_capacity > new_capacity)
			new_capacity = (new_capacity * 3) / 2 + 1;
		vec->buffer = mem_realloc_array(vec->buffer, new_capacity, sizeof(t_heredoc));
		vec->capacity = new_capacity;
	}
	return (NO_ERROR);
}

/// Return true if the vector is empty
/// This function is safe to call with value being NULL
t_error vec_parser_heredoc_pop(t_vec_parser_heredoc *vec, t_heredoc *value)
{
	t_heredoc  temp_value;
	t_heredoc *ptr;

	if (vec == NULL)
		return (ERROR);
	ptr = value;
	if (vec->len == 0)
		return (ERROR);
	if (value == NULL)
		ptr = &temp_value;
	vec->len--;
	*ptr = vec->buffer[vec->len];
	mem_set_zero(&vec->buffer[vec->len], sizeof(t_heredoc));
	return (NO_ERROR);
}

/// This function is safe to call with `free_elem` being NULL
void vec_parser_heredoc_free(t_vec_parser_heredoc vec)
{
	if (vec.free_func)
	{
		while (vec.len)
		{
			vec.free_func(vec.buffer[vec.len - 1]);
			vec.len--;
		}
	}
	mem_free(vec.buffer);
}
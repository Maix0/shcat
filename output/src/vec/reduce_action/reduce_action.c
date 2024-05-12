/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_reduce_action.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:46:28 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 17:54:11 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem_alloc_array.h"
#include "me/mem/mem_copy.h"
#include "me/mem/mem_set_zero.h"
#include "me/types.h"
#include "me/alloc/alloc.h"
#include "me/vec/vec_reduce_action.h"
#include <stdlib.h>

t_vec_reduce_action vec_reduce_action_new(t_usize				  capacity,
									  t_free_reduce_action_item free_function)
{
	t_vec_reduce_action out;

	out = (t_vec_reduce_action){0};
	out.free_func = free_function;
	out.buffer = mem_alloc_array(capacity, sizeof(t_reduce_action));
	if (out.buffer)
		out.capacity = capacity;
	return (out);
}

/// Return true in case of an error
t_error vec_reduce_action_push(t_vec_reduce_action *vec, t_reduce_action element)
{
	size_t		   new_capacity;

	if (vec == NULL)
		return (ERROR);
	if (vec->len + 1 > vec->capacity)
	{
		new_capacity = (vec->capacity * 3) / 2 + 1;
		while (vec->len + 1 > new_capacity)
			new_capacity = (new_capacity * 3) / 2 + 1;
		vec->buffer = me_realloc_array(vec->buffer, new_capacity, sizeof(t_reduce_action));
		vec->capacity = new_capacity;
	}
	vec->buffer[vec->len] = element;
	vec->len += 1;
	return (NO_ERROR);
}

/// Return true in case of an error
t_error vec_reduce_action_reserve(t_vec_reduce_action *vec, t_usize wanted_capacity)
{
	size_t		   new_capacity;

	if (vec == NULL)
		return (ERROR);
	if (wanted_capacity > vec->capacity)
	{
		new_capacity = (vec->capacity * 3) / 2 + 1;
		while (wanted_capacity > new_capacity)
			new_capacity = (new_capacity * 3) / 2 + 1;
		vec->buffer = me_realloc_array(vec->buffer, new_capacity, sizeof(t_reduce_action));
		vec->capacity = new_capacity;
	}
	return (NO_ERROR);
}

/// Return true if the vector is empty
/// This function is safe to call with value being NULL
t_error vec_reduce_action_pop(t_vec_reduce_action *vec, t_reduce_action *value)
{
	t_reduce_action  temp_value;
	t_reduce_action *ptr;

	if (vec == NULL)
		return (ERROR);
	ptr = value;
	if (vec->len == 0)
		return (ERROR);
	if (value == NULL)
		ptr = &temp_value;
	vec->len--;
	*ptr = vec->buffer[vec->len];
	mem_set_zero(&vec->buffer[vec->len], sizeof(t_reduce_action));
	return (NO_ERROR);
}

/// This function is safe to call with `free_elem` being NULL
void vec_reduce_action_free(t_vec_reduce_action vec)
{
	if (vec.free_func)
	{
		while (vec.len)
		{
			vec.free_func(vec.buffer[vec.len - 1]);
			vec.len--;
		}
	}
	me_free(vec.buffer);
}

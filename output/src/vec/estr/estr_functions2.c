/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   estr_functions2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 17:59:28 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:41 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "me/types.h"
#include "me/vec/vec_estr.h"
#include <stdlib.h>

t_error	vec_estr_find(t_vec_estr *vec, bool (*fn)(const t_expandable_str *),
		t_usize *index)
{
	t_usize	idx;

	if (vec == NULL || fn == NULL || index == NULL)
		return (ERROR);
	idx = 0;
	while (idx < vec->len)
	{
		if (fn((const t_expandable_str *)&vec->buffer[idx]))
		{
			*index = idx;
			return (NO_ERROR);
		}
		idx++;
	}
	return (ERROR);
}

t_error	vec_estr_find_starting(t_vec_estr *vec,
		bool (*fn)(const t_expandable_str *), t_usize starting_index,
		t_usize *index)
{
	t_usize	idx;

	if (vec == NULL || fn == NULL || index == NULL)
		return (ERROR);
	idx = starting_index;
	while (idx < vec->len)
	{
		if (fn((const t_expandable_str *)&vec->buffer[idx]))
		{
			*index = idx;
			return (NO_ERROR);
		}
		idx++;
	}
	return (ERROR);
}

t_error	vec_estr_all(t_vec_estr *vec, bool (*fn)(const t_expandable_str *),
		bool *result)
{
	t_usize	idx;

	if (vec == NULL || fn == NULL || result == NULL)
		return (ERROR);
	idx = 0;
	*result = true;
	while (*result && idx < vec->len)
	{
		if (!fn((const t_expandable_str *)&vec->buffer[idx]))
			*result = false;
		idx++;
	}
	return (ERROR);
}

t_error	vec_estr_any(t_vec_estr *vec, bool (*fn)(const t_expandable_str *),
		bool *result)
{
	t_usize	idx;

	if (vec == NULL || fn == NULL || result == NULL)
		return (ERROR);
	idx = 0;
	*result = false;
	while (*result && idx < vec->len)
	{
		if (fn((const t_expandable_str *)&vec->buffer[idx]))
			*result = true;
		idx++;
	}
	return (ERROR);
}

void	vec_estr_iter(t_vec_estr *vec, void (*fn)(t_usize index,
			t_expandable_str *value, void *state), void *state)
{
	t_usize	idx;

	if (vec == NULL || fn == NULL)
		return ;
	idx = 0;
	while (idx < vec->len)
	{
		fn(idx, &vec->buffer[idx], state);
		idx++;
	}
}

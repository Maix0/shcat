/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_ast.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 17:59:28 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/30 17:59:28 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "me/mem/mem.h"
#include "me/mem/mem.h"
#include "me/types.h"
#include "me/vec/vec_ast.h"
#include <stdlib.h>

t_error vec_ast_find(t_vec_ast *vec,
							 bool (*fn)(const t_ast_node *), t_usize *index)
{
	t_usize idx;

	if (vec == NULL || fn == NULL || index == NULL)
		return (ERROR);
	idx = 0;
	while (idx < vec->len)
	{
		if (fn((const t_ast_node *)&vec->buffer[idx]))
		{
			*index = idx;
			return (NO_ERROR);
		}
		idx++;
	}
	return (ERROR);
}

t_error vec_ast_find_starting(t_vec_ast *vec,
									  bool (*fn)(const t_ast_node *),
									  t_usize starting_index, t_usize *index)
{
	t_usize idx;

	if (vec == NULL || fn == NULL || index == NULL)
		return (ERROR);
	idx = starting_index;
	while (idx < vec->len)
	{
		if (fn((const t_ast_node *)&vec->buffer[idx]))
		{
			*index = idx;
			return (NO_ERROR);
		}
		idx++;
	}
	return (ERROR);
}

t_error vec_ast_all(t_vec_ast *vec,
							bool (*fn)(const t_ast_node *), bool *result)
{
	t_usize idx;

	if (vec == NULL || fn == NULL || result == NULL)
		return (ERROR);
	idx = 0;
	*result = true;
	while (*result && idx < vec->len)
	{
		if (!fn((const t_ast_node *)&vec->buffer[idx]))
			*result = false;
		idx++;
	}
	return (ERROR);
}

t_error vec_ast_any(t_vec_ast *vec,
							bool (*fn)(const t_ast_node *), bool *result)
{
	t_usize idx;

	if (vec == NULL || fn == NULL || result == NULL)
		return (ERROR);
	idx = 0;
	*result = false;
	while (*result && idx < vec->len)
	{
		if (fn((const t_ast_node *)&vec->buffer[idx]))
			*result = true;
		idx++;
	}
	return (ERROR);
}

void vec_ast_iter(t_vec_ast *vec,
						  void (*fn)(t_usize index, t_ast_node *value,
									 void *state),
						  void *state)
{
	t_usize idx;

	if (vec == NULL || fn == NULL)
		return;
	idx = 0;
	while (idx < vec->len)
	{
		fn(idx, &vec->buffer[idx], state);
		idx++;
	}
}

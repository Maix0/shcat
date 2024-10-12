/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast_functions4.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 17:59:28 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:40 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "me/types.h"
#include "me/vec/vec_ast.h"
#include <stdlib.h>

t_ast_node	*vec_ast_get(t_vec_ast *vec, t_usize i)
{
	if (vec == NULL || vec->buffer == NULL)
		return (NULL);
	if (i < vec->len)
		return (&vec->buffer[i]);
	return (NULL);
}

t_ast_node	*vec_ast_last(t_vec_ast *vec)
{
	if (vec == NULL || vec->len == 0)
		return (NULL);
	return (&vec->buffer[vec->len - 1]);
}

void	vec_ast_copy_into(t_vec_ast *vec, t_vec_ast *dest)
{
	if (vec == NULL || dest == NULL)
		return ;
	vec_ast_reserve(dest, vec->capacity);
	mem_copy(dest->buffer, vec->buffer, vec->len * sizeof(t_ast_node));
}

struct s_vec_ast_splice_arguments	vec_ast_splice_args(t_usize index,
		t_usize old_count, t_usize new_count, const t_ast_node *elements)
{
	return ((struct s_vec_ast_splice_arguments){index, old_count, new_count,
		elements});
}

void	vec_ast_splice(t_vec_ast *self, struct s_vec_ast_splice_arguments args)
{
	t_ast_node	*contents;
	t_u32		new_size;
	t_u32		old_end;
	t_u32		new_end;

	new_size = self->len + args.new_count - args.old_count;
	old_end = args.index + args.old_count;
	new_end = args.index + args.new_count;
	vec_ast_reserve(self, new_size);
	contents = self->buffer;
	if (self->len > old_end)
		mem_move(contents + new_end, contents + old_end, (self->len - old_end)
			* sizeof(t_ast_node));
	if (args.new_count > 0)
	{
		if (args.elements)
			mem_copy((contents + args.index * sizeof(t_ast_node)),
				args.elements, args.new_count * sizeof(t_ast_node));
		else
			mem_set_zero((contents + args.index * sizeof(t_ast_node)),
				args.new_count * sizeof(t_ast_node));
	}
	self->len += args.new_count - args.old_count;
}

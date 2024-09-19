/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_subtree.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 17:59:28 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/30 17:59:28 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "me/types.h"
#include "me/vec/vec_subtree.h"
#include <stdlib.h>

t_subtree	*vec_subtree_get(t_vec_subtree *vec, t_usize i)
{
	if (vec == NULL || vec->buffer == NULL)
		return (NULL);
	if (i < vec->len)
		return (&vec->buffer[i]);
	return (NULL);
}

t_subtree	*vec_subtree_last(t_vec_subtree *vec)
{
	if (vec == NULL || vec->len == 0)
		return (NULL);
	return (&vec->buffer[vec->len - 1]);
}

void	vec_subtree_copy_into(t_vec_subtree *vec, t_vec_subtree *dest)
{
	if (vec == NULL || dest == NULL)
		return ;
	vec_subtree_reserve(dest, vec->capacity);
	mem_copy(dest->buffer, vec->buffer, vec->len * sizeof(t_subtree));
}

struct s_vec_subtree_splice_arguments	vec_subtree_splice_args(t_usize index,
		t_usize old_count, t_usize new_count, const t_subtree *elements)
{
	return ((struct s_vec_subtree_splice_arguments){index, old_count, new_count,
		elements});
}

void	vec_subtree_splice(t_vec_subtree *self,
		struct s_vec_subtree_splice_arguments args)
{
	t_subtree	*contents;
	t_u32		new_size;
	t_u32		old_end;
	t_u32		new_end;

	new_size = self->len + args.new_count - args.old_count;
	old_end = args.index + args.old_count;
	new_end = args.index + args.new_count;
	vec_subtree_reserve(self, new_size);
	contents = self->buffer;
	if (self->len > old_end)
		mem_move(contents + new_end, contents + old_end, (self->len - old_end)
			* sizeof(t_subtree));
	if (args.new_count > 0)
	{
		if (args.elements)
			mem_copy((contents + args.index * sizeof(t_subtree)), args.elements,
				args.new_count * sizeof(t_subtree));
		else
			mem_set_zero((contents + args.index * sizeof(t_subtree)),
				args.new_count * sizeof(t_subtree));
	}
	self->len += args.new_count - args.old_count;
}

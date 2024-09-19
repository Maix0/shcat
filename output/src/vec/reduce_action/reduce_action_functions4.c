/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reduce_action_functions4.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 17:59:28 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 17:51:32 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "me/types.h"
#include "me/vec/vec_reduce_action.h"
#include <stdlib.h>

t_reduce_action	*vec_reduce_action_get(t_vec_reduce_action *vec, t_usize i)
{
	if (vec == NULL || vec->buffer == NULL)
		return (NULL);
	if (i < vec->len)
		return (&vec->buffer[i]);
	return (NULL);
}

t_reduce_action	*vec_reduce_action_last(t_vec_reduce_action *vec)
{
	if (vec == NULL || vec->len == 0)
		return (NULL);
	return (&vec->buffer[vec->len - 1]);
}

void	vec_reduce_action_copy_into(t_vec_reduce_action *vec,
		t_vec_reduce_action *dest)
{
	if (vec == NULL || dest == NULL)
		return ;
	vec_reduce_action_reserve(dest, vec->capacity);
	mem_copy(dest->buffer, vec->buffer, vec->len * sizeof(t_reduce_action));
}

struct s_vec_reduce_action_splice_arguments	vec_reduce_action_splice_args(\
		t_usize index, \
		t_usize old_count, t_usize new_count, const t_reduce_action *elements)
{
	return ((struct s_vec_reduce_action_splice_arguments){index, old_count,
		new_count, elements});
}

void	vec_reduce_action_splice(t_vec_reduce_action *self,
		struct s_vec_reduce_action_splice_arguments args)
{
	t_reduce_action	*contents;
	t_u32			new_size;
	t_u32			old_end;
	t_u32			new_end;

	new_size = self->len + args.new_count - args.old_count;
	old_end = args.index + args.old_count;
	new_end = args.index + args.new_count;
	vec_reduce_action_reserve(self, new_size);
	contents = self->buffer;
	if (self->len > old_end)
		mem_move(contents + new_end, contents + old_end, (self->len - old_end)
			* sizeof(t_reduce_action));
	if (args.new_count > 0)
	{
		if (args.elements)
			mem_copy((contents + args.index * sizeof(t_reduce_action)),
				args.elements, args.new_count * sizeof(t_reduce_action));
		else
			mem_set_zero((contents + args.index * sizeof(t_reduce_action)),
				args.new_count * sizeof(t_reduce_action));
	}
	self->len += args.new_count - args.old_count;
}

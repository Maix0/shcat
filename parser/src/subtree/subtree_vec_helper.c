/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subtree_vec_helper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:28:56 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/02 21:42:14 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "me/vec/vec_subtree.h"
#include "parser/subtree.h"

void	ts_subtree_array_copy(t_vec_subtree self, t_vec_subtree *dest)
{
	t_usize	i;

	dest->len = self.len;
	dest->capacity = self.capacity;
	dest->buffer = self.buffer;
	if (self.capacity > 0)
	{
		dest->buffer = mem_alloc_array(self.capacity, sizeof(t_subtree));
		mem_copy(dest->buffer, self.buffer, self.len * sizeof(t_subtree));
		i = 0;
		while (i < self.len)
		{
			dest->buffer[i]->ref_count++;
			i++;
		}
	}
}

void	ts_subtree_array_clear(t_vec_subtree *self)
{
	t_usize	i;

	i = 0;
	while (i < self->len)
		ts_subtree_release(self->buffer[i++]);
}

void	ts_subtree_array_delete(t_vec_subtree *self)
{
	ts_subtree_array_clear(self);
	vec_subtree_free(*self);
}

void	ts_subtree_array_remove_trailing_extras(t_vec_subtree *self,
		t_vec_subtree *destination)
{
	t_subtree	last;

	destination->len = 0;
	while (self->len > 0)
	{
		last = self->buffer[self->len - 1];
		if (ts_subtree_extra(last))
		{
			self->len--;
			vec_subtree_push(destination, last);
		}
		else
			break ;
	}
	vec_subtree_reverse(destination);
}

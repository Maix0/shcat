/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_lifetime.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:47:47 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 16:48:13 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/stack_inner.h"
#include "parser/inner/stack_inner.h"

t_stack	*ts_stack_new(void)
{
	t_stack	*self;

	self = mem_alloc(sizeof(*self));
	array_init(&self->heads);
	array_init(&self->slices);
	array_init(&self->iterators);
	array_reserve(&self->heads, 4);
	array_reserve(&self->slices, 4);
	array_reserve(&self->iterators, 4);
	self->base_node = stack_node_new(NULL, NULL, false, 1);
	ts_stack_clear(self);
	return (self);
}

void	ts_stack_delete(t_stack *self)
{
	t_usize	i;

	i = 0;
	if (self->slices.contents)
		array_delete(&self->slices);
	if (self->iterators.contents)
		array_delete(&self->iterators);
	stack_node_release(self->base_node);
	while (i < self->heads.size)
		stack_head_delete(&self->heads.contents[i++]);
	array_clear(&self->heads);
	array_delete(&self->heads);
	mem_free(self);
}

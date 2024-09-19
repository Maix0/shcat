/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_iter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:46:43 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 18:57:31 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/vec/vec_subtree.h"
#include "parser/inner/stack_inner.h"
#include "parser/inner/stack_inner.h"

void	_set_stack_iter_vars(\
	t_stack *self, struct s_stack_iter_args *args)
{
	t_stack_iterator	new_iterator;
	t_stack_head		*head;

	array_clear(&self->slices);
	array_clear(&self->iterators);
	head = array_get(&self->heads, args->version);
	new_iterator = (t_stack_iterator){
		.node = head->node,
		.subtrees = vec_subtree_new(16, NULL),
		.subtree_count = 0,
		.is_pending = true,
	};
	if (args->goal_subtree_count >= 0)
		vec_subtree_reserve(&new_iterator.subtrees, \
	ts_subtree_alloc_size(args->goal_subtree_count) / sizeof(t_subtree));
	array_push(&self->iterators, new_iterator);
}

bool	_handle_pop_stop(\
	t_stack *self, struct s_stack_iter_args *args, \
	struct s_stack_iter_indexes *idx, t_stack_node **node)
{
	t_stack_action		action;
	t_stack_iterator	*iterator;
	t_vec_subtree		subtrees;

	iterator = &self->iterators.contents[idx->i];
	*node = iterator->node;
	action = args->callback(args->payload, iterator);
	if (action & SActionPop)
	{
		subtrees = iterator->subtrees;
		if (action & SActionStop || (*node)->link_count == 0)
			ts_subtree_array_copy(subtrees, &subtrees);
		vec_subtree_reverse(&subtrees);
		ts_stack__add_slice(self, args->version, *node, &subtrees);
	}
	if (action & SActionStop || (*node)->link_count == 0)
	{
		if (!(action & SActionPop))
			ts_subtree_array_delete(&iterator->subtrees);
		(array_erase(&self->iterators, idx->i), idx->size--);
		return (true);
	}
	return (false);
}

void	_stack_iter_misc(t_stack_link *link, t_stack_iterator **next_iterator, \
				struct s_stack_iter_args *args)
{
	(*next_iterator)->node = link->node;
	if (link->subtree)
	{
		if (args->goal_subtree_count >= 0)
		{
			vec_subtree_push(&(*next_iterator)->subtrees, link->subtree);
			link->subtree->ref_count++;
		}
		if (!ts_subtree_extra(link->subtree))
		{
			(*next_iterator)->subtree_count++;
			if (!link->is_pending)
				(*next_iterator)->is_pending = false;
		}
	}
	else
	{
		(*next_iterator)->subtree_count++;
		(*next_iterator)->is_pending = false;
	}
}

void	_func(t_stack *self, \
	t_stack_link *link, \
	t_stack_iterator **next_iterator, \
	struct s_stack_iter_args *args, \
	t_stack_node **node, \
	struct s_stack_iter_indexes *idx)
{
	t_stack_iterator	current_iterator;

	if (idx->j == (*node)->link_count)
	{
		*link = (*node)->links[0];
		*next_iterator = &self->iterators.contents[idx->i];
	}
	else
	{
		if (self->iterators.size >= MAX_ITERATOR_COUNT)
		{
			idx->j++;
			return ;
		}
		*link = (*node)->links[idx->j];
		current_iterator = self->iterators.contents[idx->i];
		array_push(&self->iterators, current_iterator);
		*next_iterator = array_back(&self->iterators);
		ts_subtree_array_copy((*next_iterator)->subtrees,
			&(*next_iterator)->subtrees);
	}
	_stack_iter_misc(link, next_iterator, args);
	idx->j++;
}

t_stack_slice_array	stack__iter(t_stack *self, struct s_stack_iter_args args)
{
	t_stack_iterator			*next_iterator;
	t_stack_link				link;
	t_stack_node				*node;
	struct s_stack_iter_indexes	idx;

	_set_stack_iter_vars(self, &args);
	while (self->iterators.size > 0)
	{
		idx.i = 0;
		idx.size = self->iterators.size;
		while (idx.i < idx.size)
		{
			if (_handle_pop_stop(self, &args, &idx, &node))
				continue ;
			idx.j = 1;
			while (idx.j <= node->link_count)
				_func(self, &link, &next_iterator, &args, &node, &idx);
			idx.i++;
		}
	}
	return (self->slices);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_iterator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:14:00 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:28:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/_inner/node.h"
#include "parser/language.h"
#include "parser/tree.h"

NodeChildIterator	ts_node_iterate_children(const TSNode *node)
{
	t_subtree			subtree;
	const TSSymbol	*alias_sequence;

	subtree = ts_node__subtree(*node);
	if (ts_subtree_child_count(subtree) == 0)
		return ((NodeChildIterator){NULL, node->tree, length_zero(), 0, 0,
			NULL});
	alias_sequence = ts_language_alias_sequence(node->tree->language,
			subtree->production_id);
	return ((NodeChildIterator){
		.tree = node->tree,
		.parent = subtree,
		.position = {ts_node_start_byte(*node), ts_node_start_point(*node)},
		.child_index = 0,
		.structural_child_index = 0,
		.alias_sequence = alias_sequence,
	});
}

bool	ts_node_child_iterator_done(NodeChildIterator *self)
{
	return (self->child_index == self->parent->child_count);
}

bool	ts_node_child_iterator_next(NodeChildIterator *self, TSNode *result)
{
	const t_subtree	*child;
	TSSymbol		alias_symbol;

	if (!self->parent || ts_node_child_iterator_done(self))
		return (false);
	alias_symbol = 0;
	child = &ts_subtree_children(self->parent)[self->child_index];
	if (!ts_subtree_extra(*child))
	{
		if (self->alias_sequence)
			alias_symbol = self->alias_sequence[self->structural_child_index];
		self->structural_child_index++;
	}
	if (self->child_index > 0)
		self->position = length_add(self->position, ts_subtree_padding(*child));
	*result = ts_node_new(self->tree, child, self->position, alias_symbol);
	self->position = length_add(self->position, ts_subtree_size(*child));
	self->child_index++;
	return (true);
}

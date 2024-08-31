/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_relevent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:16:53 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:26:57 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/_inner/node.h"
#include "parser/language.h"
#include "parser/tree.h"

bool	ts_node__is_relevant(TSNode self, bool include_anonymous)
{
	TSSymbol	alias;
	Subtree		tree;

	tree = ts_node__subtree(self);
	if (include_anonymous)
		return (ts_subtree_visible(tree) || ts_node__alias(&self));
	alias = ts_node__alias(&self);
	if (alias)
		return (ts_language_symbol_metadata(self.tree->language, alias).named);
	else
		return (ts_subtree_visible(tree) && ts_subtree_named(tree));
}

t_u32	ts_node__relevant_child_count(TSNode self, bool include_anonymous)
{
	Subtree	tree;

	tree = ts_node__subtree(self);
	if (ts_subtree_child_count(tree) > 0)
	{
		if (include_anonymous)
			return (tree->visible_child_count);
		else
			return (tree->named_child_count);
	}
	return (0);
}
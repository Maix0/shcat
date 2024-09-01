/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_getter_funcs1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:04:21 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:29:45 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/node.h"
#include "parser/language.h"
#include "parser/tree.h"

bool	ts_node_is_extra(TSNode self)
{
	return (ts_subtree_extra(ts_node__subtree(self)));
}

bool	ts_node_is_named(TSNode self)
{
	TSSymbol	alias;

	alias = ts_node__alias(&self);
	if (alias)
		return (ts_language_symbol_metadata(self.tree->language, alias).named);
	return (ts_subtree_named(ts_node__subtree(self)));
}

TSNode	ts_node_child(TSNode self, t_u32 child_index)
{
	return (ts_node__child(self, child_index, true));
}

TSNode	ts_node_named_child(TSNode self, t_u32 child_index)
{
	return (ts_node__child(self, child_index, false));
}

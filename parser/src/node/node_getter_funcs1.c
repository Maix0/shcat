/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_getter_funcs1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:04:21 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:07:17 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/_inner/node.h"
#include "parser/tree.h"
#include "parser/language.h"

t_u32 ts_node_start_byte(TSNode self)
{
	return self.start_byte;
}

const TSLanguage *ts_node_language(TSNode self)
{
	return self.tree->language;
}

TSPoint ts_node_start_point(TSNode self)
{
	return (TSPoint){self.start_row, self.start_col};
}

t_u32 ts_node__alias(const TSNode *self)
{
	return self->alias;
}

Subtree ts_node__subtree(TSNode self)
{
	return *(const Subtree *)self.id;
}

t_u32 ts_node_end_byte(TSNode self)
{
	return ts_node_start_byte(self) + ts_subtree_size(ts_node__subtree(self)).bytes;
}

TSSymbol ts_node_symbol(TSNode self)
{
	TSSymbol symbol = ts_node__alias(&self);
	if (!symbol)
		symbol = ts_subtree_symbol(ts_node__subtree(self));
	return ts_language_public_symbol(self.tree->language, symbol);
}

t_const_str ts_node_type(TSNode self)
{
	TSSymbol symbol = ts_node__alias(&self);
	if (!symbol)
		symbol = ts_subtree_symbol(ts_node__subtree(self));
	return ts_language_symbol_name(self.tree->language, symbol);
}

TSSymbol ts_node_grammar_symbol(TSNode self)
{
	return ts_subtree_symbol(ts_node__subtree(self));
}

t_const_str ts_node_grammar_type(TSNode self)
{
	TSSymbol symbol = ts_subtree_symbol(ts_node__subtree(self));
	return ts_language_symbol_name(self.tree->language, symbol);
}

bool ts_node_is_extra(TSNode self)
{
	return ts_subtree_extra(ts_node__subtree(self));
}

bool ts_node_is_named(TSNode self)
{
	TSSymbol alias = ts_node__alias(&self);
	return alias ? ts_language_symbol_metadata(self.tree->language, alias).named : ts_subtree_named(ts_node__subtree(self));
}

TSNode ts_node_child(TSNode self, t_u32 child_index)
{
	return ts_node__child(self, child_index, true);
}

TSNode ts_node_named_child(TSNode self, t_u32 child_index)
{
	return ts_node__child(self, child_index, false);
}

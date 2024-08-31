/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_getter_funcs3.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:29:34 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:29:48 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/_inner/node.h"
#include "parser/language.h"
#include "parser/tree.h"

t_u32	ts_node_end_byte(TSNode self)
{
	return (ts_node_start_byte(self)
		+ ts_subtree_size(ts_node__subtree(self)).bytes);
}

TSSymbol	ts_node_symbol(TSNode self)
{
	TSSymbol	symbol;

	symbol = ts_node__alias(&self);
	if (!symbol)
		symbol = ts_subtree_symbol(ts_node__subtree(self));
	return (ts_language_public_symbol(self.tree->language, symbol));
}

t_const_str	ts_node_type(TSNode self)
{
	TSSymbol	symbol;

	symbol = ts_node__alias(&self);
	if (!symbol)
		symbol = ts_subtree_symbol(ts_node__subtree(self));
	return (ts_language_symbol_name(self.tree->language, symbol));
}

TSSymbol	ts_node_grammar_symbol(TSNode self)
{
	return (ts_subtree_symbol(ts_node__subtree(self)));
}

t_const_str	ts_node_grammar_type(TSNode self)
{
	TSSymbol	symbol;

	symbol = ts_subtree_symbol(ts_node__subtree(self));
	return (ts_language_symbol_name(self.tree->language, symbol));
}

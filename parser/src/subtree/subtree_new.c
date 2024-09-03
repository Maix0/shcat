/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subtree_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:33:35 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/03 14:15:44 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/language.h"
#include "parser/subtree.h"

// Create a new parent node with the given children.
//
// This takes ownership of the children array.
t_subtree	ts_subtree_new_node(TSSymbol symbol, t_vec_subtree *children,
		t_u32 production_id, const TSLanguage *language)
{
	TSSymbolMetadata		metadata;
	bool					fragile;
 	t_subtree 				data;

	metadata = ts_language_symbol_metadata(language, symbol);
	fragile = symbol == ts_builtin_sym_error
		|| symbol == ts_builtin_sym_error_repeat;
	vec_subtree_reserve(children, ts_subtree_alloc_size(children->len)
		/ sizeof(t_subtree));
	data = (void *)&children->buffer[children->len];
	*data = (t_subtree_data){.ref_count = 1, .symbol = symbol, .child_count = \
	children->len, .visible = metadata.visible, .named = metadata.named, \
	.has_changes = false, .has_external_scanner_state_change = false, \
	.fragile_left = fragile, .fragile_right = fragile, .is_keyword = false, \
	{{.visible_descendant_count = 0, .production_id = production_id, \
	.first_leaf = {.symbol = 0, .parse_state = 0}, }}};
	ts_subtree_summarize_children(data, language);
	return (data);
}

// Create a new error node containing the given children.
//
// This node is treated as 'extra'. Its children are prevented from having
// having any effect on the parse state.
t_subtree	ts_subtree_new_error_node(t_vec_subtree *children, bool extra,
		const TSLanguage *language)
{
	t_subtree	result;

	result = ts_subtree_new_node(ts_builtin_sym_error, children, 0, language);
	result->extra = extra;
	return (result);
}

// Create a new 'missing leaf' node.
//
// This node is treated as 'extra'. Its children are prevented from having
// having any effect on the parse state.
t_subtree	ts_subtree_new_missing_leaf(TSSymbol symbol, Length padding,
		t_u32 lookahead_bytes, const TSLanguage *language)
{
	t_subtree	result;

	result = ts_subtree_new_leaf(symbol, padding, length_zero(),
			lookahead_bytes, 0, false, false, false, language);
	result->is_missing = true;
	return (result);
}

t_subtree	ts_subtree_new_leaf(TSSymbol symbol, Length padding, Length size,
		t_u32 lookahead_bytes, TSStateId parse_state, bool has_external_tokens,
		bool depends_on_column, bool is_keyword, const TSLanguage *language)
{
	TSSymbolMetadata	metadata;
	bool				extra;
	t_subtree_data		*data;

	extra = symbol == ts_builtin_sym_end;
	metadata = ts_language_symbol_metadata(language, symbol);
	data = mem_alloc(sizeof(*data));
	*data = (t_subtree_data){.ref_count = 1, .padding = padding, .size = size,
		.lookahead_bytes = lookahead_bytes, .error_cost = 0, .child_count = 0,
		.symbol = symbol, .parse_state = parse_state,
		.visible = metadata.visible, .named = metadata.named, .extra = extra,
		.fragile_left = false, .fragile_right = false, .has_changes = false,
		.has_external_tokens = has_external_tokens,
		.has_external_scanner_state_change = false,
		.depends_on_column = depends_on_column, .is_missing = false,
		.is_keyword = is_keyword, {{.first_leaf = {.symbol = 0,
		.parse_state = 0}}}};
	return ((t_subtree)data);
}

t_subtree	ts_subtree_new_error(t_i32 lookahead_char, Length padding,
		Length size, t_u32 bytes_scanned, TSStateId parse_state,
		const TSLanguage *language)
{
	t_subtree	result;

	result = ts_subtree_new_leaf(ts_builtin_sym_error, padding, size,
			bytes_scanned, parse_state, false, false, false, language);
	result->fragile_left = true;
	result->fragile_right = true;
	result->lookahead_char = lookahead_char;
	return (result);
}

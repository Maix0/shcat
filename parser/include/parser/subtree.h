/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subtree.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:03:06 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 16:37:37 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUBTREE_H
#define SUBTREE_H

#include "me/types.h"
#include "parser/api.h"
#include "parser/array.h"
#include "parser/external_scanner_state.h"
#include "parser/length.h"
#include "parser/parser.h"
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

#define TS_TREE_STATE_NONE USHRT_MAX
#define NULL_SUBTREE ((t_subtree)NULL)

#include "me/vec/vec_subtree.h"
#include "parser/inner/subtree_inner.h"

typedef t_vec_subtree t_vec_subtree;

bool _subtree_compress_inner(t_subtree *tree, t_symbol symbol, t_vec_subtree *stack);
int subtree_compare_func(t_subtree left, t_subtree right);
int ts_subtree_compare(t_subtree left, t_subtree right);
struct s_summarize_state _init_sumnarize_state(t_subtree self, const t_language *language);
t_subtree ts_subtree_clone(t_subtree self);
t_subtree ts_subtree_ensure_owner(t_subtree self);
t_subtree ts_subtree_last_external_token(t_subtree tree);
t_subtree ts_subtree_new_error(t_st_newerr_args args);
t_subtree ts_subtree_new_error_node(t_vec_subtree *children, bool extra, const t_language *language);
t_subtree ts_subtree_new_leaf(t_st_newleaf_args args);
t_subtree ts_subtree_new_missing_leaf(t_symbol symbol, t_length padding, t_u32 lookahead_bytes, const t_language *language);
t_subtree ts_subtree_new_node(t_symbol symbol, t_vec_subtree *children, t_u32 production_id, const t_language *language);
void _subtree_balance_inner(const t_language *language, t_vec_subtree *tree_stack);
void _subtree_balance_repush(t_vec_subtree *tree_stack, t_subtree tree);
void _subtree_release_inner(t_vec_subtree *to_free);
void _sumarize_end(t_subtree self, t_subtree *children);
void _summarize_loop_inner1(t_subtree self, const t_language *language, struct s_summarize_state *s);
void _summarize_loop_inner2(t_subtree self, const t_language *language, struct s_summarize_state *s);
void _summarize_loop_inner3(t_subtree self, const t_language *language, struct s_summarize_state *s);
void _summarize_loop_inner4(t_subtree self, const t_language *language, struct s_summarize_state *s);
void ts_subtree__compress(t_subtree self, t_u32 count, const t_language *language, t_vec_subtree *stack);
void ts_subtree_array_clear(t_vec_subtree *self);
void ts_subtree_array_copy(t_vec_subtree self, t_vec_subtree *dest);
void ts_subtree_array_delete(t_vec_subtree *self);
void ts_subtree_array_remove_trailing_extras(t_vec_subtree *self, t_vec_subtree *destination);
void ts_subtree_balance(t_subtree self, const t_language *language);
void ts_subtree_release(t_subtree self);
void ts_subtree_set_symbol(t_subtree *self, t_symbol symbol, const t_language *language);
void ts_subtree_summarize_children(t_subtree self, const t_language *language);

static inline t_symbol ts_subtree_symbol(t_subtree self)
{
	return ((self)->symbol);
}
static inline bool ts_subtree_visible(t_subtree self)
{
	return ((self)->visible);
}
static inline bool ts_subtree_named(t_subtree self)
{
	return ((self)->named);
}
static inline bool ts_subtree_extra(t_subtree self)
{
	return ((self)->extra);
}
static inline bool ts_subtree_has_changes(t_subtree self)
{
	return ((self)->has_changes);
}
static inline bool ts_subtree_missing(t_subtree self)
{
	return ((self)->is_missing);
}
static inline bool ts_subtree_is_keyword(t_subtree self)
{
	return ((self)->is_keyword);
}
static inline t_state_id ts_subtree_parse_state(t_subtree self)
{
	return ((self)->parse_state);
}
static inline t_u32 ts_subtree_lookahead_bytes(t_subtree self)
{
	return ((self)->lookahead_bytes);
}

// Get the size needed to store a heap-allocated subtree with the given
// number of children.
static inline size_t ts_subtree_alloc_size(t_u32 child_count)
{
	return child_count * sizeof(t_subtree) + sizeof(t_subtree_data);
}

// Get a subtree's children, which are allocated immediately before the
// tree's own heap data.
static inline t_subtree *ts_subtree_children(t_subtree self)
{
	return ((t_subtree *)((self)) - (self)->child_count);
}

static inline void ts_subtree_set_extra(t_subtree *self, bool is_extra)
{
	(*self)->extra = is_extra;
}

static inline t_symbol ts_subtree_leaf_symbol(t_subtree self)
{
	if (self->child_count == 0)
		return self->symbol;
	return self->first_leaf.symbol;
}

static inline t_state_id ts_subtree_leaf_parse_state(t_subtree self)
{
	if (self->child_count == 0)
		return self->parse_state;
	return self->first_leaf.parse_state;
}

static inline t_length ts_subtree_padding(t_subtree self)
{
	return self->padding;
}

static inline t_length ts_subtree_size(t_subtree self)
{
	return self->size;
}

static inline t_length ts_subtree_total_size(t_subtree self)
{
	return (length_add(ts_subtree_padding(self), ts_subtree_size(self)));
}

static inline t_u32 ts_subtree_total_bytes(t_subtree self)
{
	return (ts_subtree_total_size(self).bytes);
}

static inline t_u32 ts_subtree_child_count(t_subtree self)
{
	return (self->child_count);
}

static inline t_u32 ts_subtree_repeat_depth(t_subtree self)
{
	return (self->repeat_depth);
}

static inline t_u32 ts_subtree_visible_descendant_count(t_subtree self)
{
	return ((self->child_count == 0) ? 0 : self->visible_descendant_count);
}

static inline t_u32 ts_subtree_error_cost(t_subtree self)
{
	if (ts_subtree_missing(self))
		return (ERROR_COST_PER_MISSING_TREE + ERROR_COST_PER_RECOVERY);
	else
		return (self->error_cost);
}

static inline t_i32 ts_subtree_dynamic_precedence(t_subtree self)
{
	return ((self->child_count == 0) ? 0 : self->dynamic_precedence);
}

static inline bool ts_subtree_fragile_left(t_subtree self)
{
	return (self->fragile_left);
}

static inline bool ts_subtree_fragile_right(t_subtree self)
{
	return (self->fragile_right);
}

static inline bool ts_subtree_has_external_tokens(t_subtree self)
{
	return (self->has_external_tokens);
}

static inline bool ts_subtree_has_external_scanner_state_change(t_subtree self)
{
	return (self->has_external_scanner_state_change);
}

static inline bool ts_subtree_depends_on_column(t_subtree self)
{
	return (self->depends_on_column);
}

static inline bool ts_subtree_is_error(t_subtree self)
{
	return (ts_subtree_symbol(self) == ts_builtin_sym_error);
}

static inline bool ts_subtree_is_eof(t_subtree self)
{
	return (ts_subtree_symbol(self) == ts_builtin_sym_end);
}
#endif // SUBTREE_H

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subtree.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:03:06 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 18:37:26 by maiboyer         ###   ########.fr       */
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

#define TS_BIG_ENDIAN 0
#define TS_PTR_SIZE 64
#define TS_TREE_STATE_NONE USHRT_MAX
#define NULL_SUBTREE ((t_subtree)NULL)

// A heap-allocated representation of a subtree.
//
// This representation is used for parent nodes, external tokens,
// errors, and other leaf nodes whose data is too large to fit into
// the inline representation.
typedef struct s_subtree_data t_subtree_data;

struct s_subtree_data
{
	t_u32	  ref_count;
	Length	  padding;
	Length	  size;
	t_u32	  lookahead_bytes;
	t_u32	  error_cost;
	t_u32	  child_count;
	TSSymbol  symbol;
	TSStateId parse_state;

	bool visible : 1;
	bool named : 1;
	bool extra : 1;
	bool fragile_left : 1;
	bool fragile_right : 1;
	bool has_changes : 1;
	bool has_external_tokens : 1;
	bool has_external_scanner_state_change : 1;
	bool depends_on_column : 1;
	bool is_missing : 1;
	bool is_keyword : 1;

	union {
		// Non-terminal subtrees (`child_count > 0`)
		struct
		{
			t_u32 visible_child_count;
			t_u32 named_child_count;
			t_u32 visible_descendant_count;
			t_i32 dynamic_precedence;
			t_u16 repeat_depth;
			t_u16 production_id;
			struct
			{
				TSSymbol  symbol;
				TSStateId parse_state;
			} first_leaf;
		};

		// External terminal subtrees (`child_count == 0 && has_external_tokens`)
		t_external_scanner_state external_scanner_state;

		// Error terminal subtrees (`child_count == 0 && symbol == ts_builtin_sym_error`)
		t_i32 lookahead_char;
	};
};

// The fundamental building block of a syntax tree.
typedef const t_subtree_data *t_subtree;

// Like t_subtree, but mutable.
typedef t_subtree_data *t_mut_subtree;

typedef Array(t_subtree) SubtreeArray;
typedef Array(t_mut_subtree) MutableSubtreeArray;

void		ts_external_scanner_state_init(t_external_scanner_state *, const t_u8 *, t_u32);
const t_u8 *ts_external_scanner_state_data(const t_external_scanner_state *);
bool		ts_external_scanner_state_eq(const t_external_scanner_state *self, const t_u8 *, t_u32);
void		ts_external_scanner_state_delete(t_external_scanner_state *self);

void ts_subtree_array_copy(SubtreeArray, SubtreeArray *);
void ts_subtree_array_clear(SubtreeArray *);
void ts_subtree_array_delete(SubtreeArray *);
void ts_subtree_array_remove_trailing_extras(SubtreeArray *, SubtreeArray *);
void ts_subtree_array_reverse(SubtreeArray *);

t_subtree						ts_subtree_new_leaf(TSSymbol, Length, Length, t_u32, TSStateId, bool, bool, bool, const TSLanguage *);
t_subtree						ts_subtree_new_error(t_i32, Length, Length, t_u32, TSStateId, const TSLanguage *);
t_mut_subtree				ts_subtree_new_node(TSSymbol, SubtreeArray *, t_u32, const TSLanguage *);
t_subtree						ts_subtree_new_error_node(SubtreeArray *, bool, const TSLanguage *);
t_subtree						ts_subtree_new_missing_leaf(TSSymbol, Length, t_u32, const TSLanguage *);
t_mut_subtree				ts_subtree_make_mut(t_subtree);
void						ts_subtree_retain(t_subtree);
void						ts_subtree_release(t_subtree);
int							ts_subtree_compare(t_subtree, t_subtree);
void						ts_subtree_set_symbol(t_mut_subtree *, TSSymbol, const TSLanguage *);
void						ts_subtree_summarize(t_mut_subtree, const t_subtree *, t_u32, const TSLanguage *);
void						ts_subtree_summarize_children(t_mut_subtree, const TSLanguage *);
void						ts_subtree_balance(t_subtree, const TSLanguage *);
t_subtree						ts_subtree_edit(t_subtree, const TSInputEdit *edit);
char					   *ts_subtree_string(t_subtree, TSSymbol, bool, const TSLanguage *, bool include_all);
void						ts_subtree_print_dot_graph(t_subtree, const TSLanguage *, FILE *);
t_subtree						ts_subtree_last_external_token(t_subtree);
const t_external_scanner_state *ts_subtree_external_scanner_state(t_subtree self);
bool						ts_subtree_external_scanner_state_eq(t_subtree, t_subtree);

static inline TSSymbol ts_subtree_symbol(t_subtree self)
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
static inline TSStateId ts_subtree_parse_state(t_subtree self)
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
#define ts_subtree_children(self) ((t_subtree *)((self)) - (self)->child_count)

static inline void ts_subtree_set_extra(t_mut_subtree *self, bool is_extra)
{
	(*self)->extra = is_extra;
}

static inline TSSymbol ts_subtree_leaf_symbol(t_subtree self)
{
	if (self->child_count == 0)
		return self->symbol;
	return self->first_leaf.symbol;
}

static inline TSStateId ts_subtree_leaf_parse_state(t_subtree self)
{
	if (self->child_count == 0)
		return self->parse_state;
	return self->first_leaf.parse_state;
}

static inline Length ts_subtree_padding(t_subtree self)
{
	return self->padding;
}

static inline Length ts_subtree_size(t_subtree self)
{
	return self->size;
}

static inline Length ts_subtree_total_size(t_subtree self)
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

static inline t_subtree ts_subtree_from_mut(t_mut_subtree self)
{
	return (self);
}

static inline t_mut_subtree ts_subtree_to_mut_unsafe(t_subtree self)
{
	return ((t_mut_subtree)self);
}

#endif // SUBTREE_H

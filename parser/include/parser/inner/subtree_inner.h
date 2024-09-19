/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subtree_inner.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:01:50 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/14 14:30:56 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUBTREE_INNER_H
#define SUBTREE_INNER_H

#include "me/types.h"
#include "parser/external_scanner_state.h"
#include "parser/inner/length_inner.h"
#include "parser/inner/ptypes.h"

// A heap-allocated representation of a subtree.
//
// This representation is used for parent nodes, external tokens,
// errors, and other leaf nodes whose data is too large to fit into
// the inline representation.
typedef struct s_subtree_data t_subtree_data;

struct s_subtree_data
{
	t_u32	  ref_count;
	t_length	  padding;
	t_length	  size;
	t_u32	  lookahead_bytes;
	t_u32	  error_cost;
	t_u32	  child_count;
	t_symbol  symbol;
	t_state_id parse_state;

	bool visible;
	bool named;
	bool extra;
	bool fragile_left;
	bool fragile_right;
	bool has_changes;
	bool has_external_tokens;
	bool has_external_scanner_state_change;
	bool depends_on_column;
	bool is_missing;
	bool is_keyword;

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
				t_symbol  symbol;
				t_state_id parse_state;
			} first_leaf;
		};

		// External terminal subtrees (`child_count == 0 && has_external_tokens`)
		t_external_scanner_state external_scanner_state;

		// Error terminal subtrees (`child_count == 0 && symbol == ts_builtin_sym_error`)
		t_i32 lookahead_char;
	};
};

// The fundamental building block of a syntax tree.
typedef t_subtree_data *t_subtree;

typedef struct s_subtree_new_leaf_args t_st_newleaf_args;
typedef struct s_subtree_new_error_args t_st_newerr_args;

struct s_subtree_new_leaf_args
{
	t_symbol		  symbol;
	t_length			  padding;
	t_length			  size;
	t_u32			  lookahead_bytes;
	t_state_id		  parse_state;
	bool			  has_external_tokens;
	bool			  depends_on_column;
	bool			  is_keyword;
	const t_language *language;
};

struct s_subtree_new_error_args
{
	t_i32			  lookahead_char;
	t_length			  padding;
	t_length			  size;
	t_u32			  bytes_scanned;
	t_state_id		  parse_state;
	const t_language *language;
};

struct s_summarize_state
{
	t_u32			structural_index;
	const t_symbol	*alias_sequence;
	t_u32			lookahead_end_byte;
	t_subtree		*children;
	t_subtree		child;
	t_u32			child_lookahead_end_byte;
	t_u32			grandchild_count;
	t_usize			i;
};

#endif /* SUBTREE_INNER_H */

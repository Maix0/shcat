/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   api.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:54:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 16:45:08 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef API_H
#define API_H

#include "me/types.h"
#include "parser/inner/length_inner.h"
#include "parser/inner/point_inner.h"
#include "parser/inner/subtree_inner.h"

#define ERROR_STATE 0
#define ERROR_COST_PER_RECOVERY 500
#define ERROR_COST_PER_MISSING_TREE 110
#define ERROR_COST_PER_SKIPPED_TREE 100
#define ERROR_COST_PER_SKIPPED_LINE 30
#define ERROR_COST_PER_SKIPPED_CHAR 1

#define TREE_SITTER_LANGUAGE_VERSION 14
#define TREE_SITTER_MIN_COMPATIBLE_LANGUAGE_VERSION 13

t_tree			 *ts_tree_copy(const t_tree *self);
void			  ts_tree_delete(t_tree *self);
t_node			  ts_tree_root_node(const t_tree *self);
t_node			  ts_tree_root_node_with_offset(const t_tree *self, t_u32 offset_bytes, t_point offset_extent);
const t_language *ts_tree_language(const t_tree *self);

t_const_str		  ts_node_type(t_node self);
t_symbol		  ts_node_symbol(t_node self);
const t_language *ts_node_language(t_node self);
t_symbol		  ts_node_grammar_symbol(t_node self);
t_u32			  ts_node_start_byte(t_node self);
t_point			  ts_node_start_point(t_node self);
t_u32			  ts_node_end_byte(t_node self);
t_point			  ts_node_end_point(t_node self);
char			 *ts_node_string(t_node self);
bool			  ts_node_is_null(t_node self);
bool			  ts_node_is_named(t_node self);
bool			  ts_node_is_missing(t_node self);
bool			  ts_node_is_extra(t_node self);
bool			  ts_node_has_changes(t_node self);
bool			  ts_node_has_error(t_node self);
bool			  ts_node_is_error(t_node self);
t_state_id		  ts_node_parse_state(t_node self);
t_state_id		  ts_node_next_parse_state(t_node self);
t_node			  ts_node_parent(t_node self);
t_node			  ts_node_child_containing_descendant(t_node self, t_node descendant);
t_node			  ts_node_child(t_node self, t_u32 child_index);
t_const_str		  ts_node_field_name_for_child(t_node self, t_u32 child_index);
t_field_id		  ts_node_field_id_for_child(t_node self, t_u32 child_index);
t_u32			  ts_node_child_count(t_node self);
t_node			  ts_node_named_child(t_node self, t_u32 child_index);
t_u32			  ts_node_named_child_count(t_node self);
t_node			  ts_node_child_by_field_name(t_node self, t_const_str name, t_u32 name_length);
t_node			  ts_node_child_by_field_id(t_node self, t_field_id field_id);
t_node			  ts_node_next_sibling(t_node self);
t_node			  ts_node_prev_sibling(t_node self);
t_node			  ts_node_next_named_sibling(t_node self);
t_node			  ts_node_prev_named_sibling(t_node self);
t_node			  ts_node_first_child_for_byte(t_node self, t_u32 byte);
t_node			  ts_node_first_named_child_for_byte(t_node self, t_u32 byte);
t_u32			  ts_node_descendant_count(t_node self);
t_node			  ts_node_descendant_for_byte_range(t_node self, t_u32 start, t_u32 end);
t_node			  ts_node_descendant_for_point_range(t_node self, t_point start, t_point end);
t_node			  ts_node_named_descendant_for_byte_range(t_node self, t_u32 start, t_u32 end);
t_node			  ts_node_named_descendant_for_point_range(t_node self, t_point start, t_point end);
bool			  ts_node_eq(t_node self, t_node other);

const t_language *ts_language_copy(const t_language *self);
void			  ts_language_delete(const t_language *self);
t_u32			  ts_language_symbol_count(const t_language *self);
t_u32			  ts_language_state_count(const t_language *self);
t_const_str		  ts_language_symbol_name(const t_language *self, t_symbol symbol);
t_symbol		  ts_language_symbol_for_name(const t_language *self, t_const_str string, t_u32 length, bool is_named);
t_u32			  ts_language_field_count(const t_language *self);
t_const_str		  ts_language_field_name_for_id(const t_language *self, t_field_id id);
t_field_id		  ts_language_field_id_for_name(const t_language *self, t_const_str name, t_u32 name_length);
t_symbol_type	  ts_language_symbol_type(const t_language *self, t_symbol symbol);
t_u32			  ts_language_version(const t_language *self);
t_state_id		  ts_language_next_state(const t_language *self, t_state_id state, t_symbol symbol);

#endif // TREE_SITTER_API_H_

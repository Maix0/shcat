/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   api.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:54:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/02 20:15:44 by maiboyer         ###   ########.fr       */
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

TSParser		 *ts_parser_new(void);
void			  ts_parser_delete(TSParser *self);
const TSLanguage *ts_parser_language(const TSParser *self);
bool			  ts_parser_set_language(TSParser *self, const TSLanguage *language);
TSTree			 *ts_parser_parse(TSParser *self, TSInput input);
TSTree			 *ts_parser_parse_string(TSParser *self, t_const_str string, t_u32 length);
void			  ts_parser_reset(TSParser *self);

TSTree			 *ts_tree_copy(const TSTree *self);
void			  ts_tree_delete(TSTree *self);
TSNode			  ts_tree_root_node(const TSTree *self);
TSNode			  ts_tree_root_node_with_offset(const TSTree *self, t_u32 offset_bytes, TSPoint offset_extent);
const TSLanguage *ts_tree_language(const TSTree *self);

t_const_str		  ts_node_type(TSNode self);
TSSymbol		  ts_node_symbol(TSNode self);
const TSLanguage *ts_node_language(TSNode self);
t_const_str		  ts_node_grammar_type(TSNode self);
TSSymbol		  ts_node_grammar_symbol(TSNode self);
t_u32			  ts_node_start_byte(TSNode self);
TSPoint			  ts_node_start_point(TSNode self);
t_u32			  ts_node_end_byte(TSNode self);
TSPoint			  ts_node_end_point(TSNode self);
char			 *ts_node_string(TSNode self);
bool			  ts_node_is_null(TSNode self);
bool			  ts_node_is_named(TSNode self);
bool			  ts_node_is_missing(TSNode self);
bool			  ts_node_is_extra(TSNode self);
bool			  ts_node_has_changes(TSNode self);
bool			  ts_node_has_error(TSNode self);
bool			  ts_node_is_error(TSNode self);
TSStateId		  ts_node_parse_state(TSNode self);
TSStateId		  ts_node_next_parse_state(TSNode self);
TSNode			  ts_node_parent(TSNode self);
TSNode			  ts_node_child_containing_descendant(TSNode self, TSNode descendant);
TSNode			  ts_node_child(TSNode self, t_u32 child_index);
t_const_str		  ts_node_field_name_for_child(TSNode self, t_u32 child_index);
TSFieldId		  ts_node_field_id_for_child(TSNode self, t_u32 child_index);
t_u32			  ts_node_child_count(TSNode self);
TSNode			  ts_node_named_child(TSNode self, t_u32 child_index);
t_u32			  ts_node_named_child_count(TSNode self);
TSNode			  ts_node_child_by_field_name(TSNode self, t_const_str name, t_u32 name_length);
TSNode			  ts_node_child_by_field_id(TSNode self, TSFieldId field_id);
TSNode			  ts_node_next_sibling(TSNode self);
TSNode			  ts_node_prev_sibling(TSNode self);
TSNode			  ts_node_next_named_sibling(TSNode self);
TSNode			  ts_node_prev_named_sibling(TSNode self);
TSNode			  ts_node_first_child_for_byte(TSNode self, t_u32 byte);
TSNode			  ts_node_first_named_child_for_byte(TSNode self, t_u32 byte);
t_u32			  ts_node_descendant_count(TSNode self);
TSNode			  ts_node_descendant_for_byte_range(TSNode self, t_u32 start, t_u32 end);
TSNode			  ts_node_descendant_for_point_range(TSNode self, TSPoint start, TSPoint end);
TSNode			  ts_node_named_descendant_for_byte_range(TSNode self, t_u32 start, t_u32 end);
TSNode			  ts_node_named_descendant_for_point_range(TSNode self, TSPoint start, TSPoint end);
bool			  ts_node_eq(TSNode self, TSNode other);

const TSLanguage *ts_language_copy(const TSLanguage *self);
void			  ts_language_delete(const TSLanguage *self);
t_u32			  ts_language_symbol_count(const TSLanguage *self);
t_u32			  ts_language_state_count(const TSLanguage *self);
t_const_str		  ts_language_symbol_name(const TSLanguage *self, TSSymbol symbol);
TSSymbol		  ts_language_symbol_for_name(const TSLanguage *self, t_const_str string, t_u32 length, bool is_named);
t_u32			  ts_language_field_count(const TSLanguage *self);
t_const_str		  ts_language_field_name_for_id(const TSLanguage *self, TSFieldId id);
TSFieldId		  ts_language_field_id_for_name(const TSLanguage *self, t_const_str name, t_u32 name_length);
TSSymbolType	  ts_language_symbol_type(const TSLanguage *self, TSSymbol symbol);
t_u32			  ts_language_version(const TSLanguage *self);
TSStateId		  ts_language_next_state(const TSLanguage *self, TSStateId state, TSSymbol symbol);

#endif // TREE_SITTER_API_H_

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combined.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:01:23 by maiboyer          #+#    #+#             */
/*   Updated: 2024/06/18 17:12:45 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMBINED_H
#define COMBINED_H

#include "./api.h"
#include "./structs.h"

t_u32							ascii_decode(const t_u8 *chunk, t_u32 size, t_i32 *codepoint);
int								_ts_dup(int file_descriptor);

t_external_scanner_state		ts_external_scanner_state_copy(const t_external_scanner_state *self);
const char					   *ts_external_scanner_state_data(const t_external_scanner_state *self);
void							ts_external_scanner_state_delete(t_external_scanner_state *self);
bool							ts_external_scanner_state_eq(const t_external_scanner_state *self, const char *buffer, unsigned length);
void							ts_external_scanner_state_init(t_external_scanner_state *self, const char *data, unsigned length);

const t_language			   *ts_language_copy(const t_language *self);
void							ts_language_delete(const t_language *self);
t_u32							ts_language_field_count(const t_language *self);
t_field_id						ts_language_field_id_for_name(const t_language *self, const char *name, t_u32 name_length);
const char					   *ts_language_field_name_for_id(const t_language *self, t_field_id id);
t_state_id						ts_language_next_state(const t_language *self, t_state_id state, t_symbol symbol);
t_symbol						ts_language_public_symbol(const t_language *self, t_symbol symbol);
t_u32							ts_language_state_count(const t_language *self);
t_u32							ts_language_symbol_count(const t_language *self);
t_symbol						ts_language_symbol_for_name(const t_language *self, const char *string, t_u32 length, bool is_named);
t_symbol_metadata				ts_language_symbol_metadata(const t_language *self, t_symbol symbol);
const char					   *ts_language_symbol_name(const t_language *self, t_symbol symbol);
t_symbol_type					ts_language_symbol_type(const t_language *self, t_symbol symbol);
void							ts_language_table_entry(const t_language *self, t_state_id state, t_symbol symbol, t_table_entry *result);
t_u32							ts_language_version(const t_language *self);

void							ts_lexer_advance_to_end(t_lexer *self);
void							ts_lexer_delete(t_lexer *self);
void							ts_lexer_finish(t_lexer *self, t_u32 *lookahead_end_byte);
t_parse_range				   *ts_lexer_included_ranges(const t_lexer *self, t_u32 *count);
void							ts_lexer_init(t_lexer *self);
void							ts_lexer_mark_end(t_lexer *self);
void							ts_lexer_reset(t_lexer *self, t_length position);
bool							ts_lexer_set_included_ranges(t_lexer *self, const t_parse_range *ranges, t_u32 count);
void							ts_lexer_set_input(t_lexer *self, t_parse_input input);
void							ts_lexer_start(t_lexer *self);

// START PROBABLY DELETE WORTHY

t_symbol						ts_lookahead_iterator_current_symbol(const t_lookahead_iterator *self);
const char					   *ts_lookahead_iterator_current_symbol_name(const t_lookahead_iterator *self);
void							ts_lookahead_iterator_delete(t_lookahead_iterator *self);
const t_language			   *ts_lookahead_iterator_language(const t_lookahead_iterator *self);
t_lookahead_iterator		   *ts_lookahead_iterator_new(const t_language *self, t_state_id state);
bool							ts_lookahead_iterator_next(t_lookahead_iterator *self);
bool							ts_lookahead_iterator_reset(t_lookahead_iterator *self, const t_language *language, t_state_id state);
bool							ts_lookahead_iterator_reset_state(t_lookahead_iterator *self, t_state_id state);

// END PROBABLY DELETE WORTHY

t_parse_node					ts_node_child(t_parse_node self, t_u32 child_index);
t_parse_node					ts_node_child_by_field_id(t_parse_node self, t_field_id field_id);
t_parse_node					ts_node_child_by_field_name(t_parse_node self, const char *name, t_u32 name_length);
t_parse_node					ts_node_child_containing_descendant(t_parse_node self, t_parse_node subnode);
t_u32							ts_node_child_count(t_parse_node self);
t_u32							ts_node_descendant_count(t_parse_node self);
t_parse_node					ts_node_descendant_for_byte_range(t_parse_node self, t_u32 start, t_u32 end);
t_parse_node					ts_node_descendant_for_point_range(t_parse_node self, t_point start, t_point end);
void							ts_node_edit(t_parse_node *self, const t_input_edit *edit);
t_u32							ts_node_end_byte(t_parse_node self);
t_point							ts_node_end_point(t_parse_node self);
bool							ts_node_eq(t_parse_node self, t_parse_node other);
const char					   *ts_node_field_name_for_child(t_parse_node self, t_u32 child_index);
t_parse_node					ts_node_first_child_for_byte(t_parse_node self, t_u32 byte);
t_parse_node					ts_node_first_named_child_for_byte(t_parse_node self, t_u32 byte);
t_symbol						ts_node_grammar_symbol(t_parse_node self);
const char					   *ts_node_grammar_type(t_parse_node self);
bool							ts_node_has_changes(t_parse_node self);
bool							ts_node_has_error(t_parse_node self);
bool							ts_node_is_error(t_parse_node self);
bool							ts_node_is_extra(t_parse_node self);
bool							ts_node_is_missing(t_parse_node self);
bool							ts_node_is_named(t_parse_node self);
bool							ts_node_is_null(t_parse_node self);
const t_language			   *ts_node_language(t_parse_node self);
t_parse_node					ts_node_named_child(t_parse_node self, t_u32 child_index);
t_u32							ts_node_named_child_count(t_parse_node self);
t_parse_node					ts_node_named_descendant_for_byte_range(t_parse_node self, t_u32 start, t_u32 end);
t_parse_node					ts_node_named_descendant_for_point_range(t_parse_node self, t_point start, t_point end);
t_parse_node					ts_node_new(const t_first_tree *tree, const t_subtree *subtree, t_length position, t_symbol alias);
t_parse_node					ts_node_next_named_sibling(t_parse_node self);
t_state_id						ts_node_next_parse_state(t_parse_node self);
t_parse_node					ts_node_next_sibling(t_parse_node self);
t_parse_node					ts_node_parent(t_parse_node self);
t_state_id						ts_node_parse_state(t_parse_node self);
t_parse_node					ts_node_prev_named_sibling(t_parse_node self);
t_parse_node					ts_node_prev_sibling(t_parse_node self);
t_u32							ts_node_start_byte(t_parse_node self);
t_point							ts_node_start_point(t_parse_node self);
char						   *ts_node_string(t_parse_node self);
t_symbol						ts_node_symbol(t_parse_node self);
const char					   *ts_node_type(t_parse_node self);

const size_t				   *ts_parser_cancellation_flag(const t_first_parser *self);
void							ts_parser_delete(t_first_parser *self);
const t_parse_range			   *ts_parser_included_ranges(const t_first_parser *self, t_u32 *count);
const t_language			   *ts_parser_language(const t_first_parser *self);
t_parse_logger					ts_parser_logger(const t_first_parser *self);
t_first_parser				   *ts_parser_new(void);
t_first_tree				   *ts_parser_parse(t_first_parser *self, const t_first_tree *old_tree, t_parse_input input);
t_first_tree				   *ts_parser_parse_string(t_first_parser *self, const t_first_tree *old_tree, const char *string, t_u32 length);
t_first_tree				   *ts_parser_parse_string_encoding(t_first_parser *self, const t_first_tree *old_tree, const char *string, t_u32 length, t_input_encoding encoding);
void							ts_parser_print_dot_graphs(t_first_parser *self, int fd);
void							ts_parser_reset(t_first_parser *self);
void							ts_parser_set_cancellation_flag(t_first_parser *self, const size_t *flag);
bool							ts_parser_set_included_ranges(t_first_parser *self, const t_parse_range *ranges, t_u32 count);
bool							ts_parser_set_language(t_first_parser *self, const t_language *language);
void							ts_parser_set_logger(t_first_parser *self, t_parse_logger logger);
void							ts_parser_set_timeout_micros(t_first_parser *self, t_u64 timeout_micros);
t_u64							ts_parser_timeout_micros(const t_first_parser *self);

// START PROBABLY DELETE WORTHY

bool							ts_query__step_is_fallible(const t_parse_query *self, t_u16 step_index);
t_u32							ts_query_capture_count(const t_parse_query *self);
const char					   *ts_query_capture_name_for_id(const t_parse_query *self, t_u32 index, t_u32 *length);
t_quantifier					ts_query_capture_quantifier_for_id(const t_parse_query *self, t_u32 pattern_index, t_u32 capture_index);
void							ts_query_cursor__compare_captures(t_query_cursor *self, t_query_state *left_state, t_query_state *right_state, bool *left_contains_right, bool *right_contains_left);
int								ts_query_cursor__compare_nodes(t_parse_node left, t_parse_node right);
void							ts_query_cursor_delete(t_query_cursor *self);
bool							ts_query_cursor_did_exceed_match_limit(const t_query_cursor *self);
void							ts_query_cursor_exec(t_query_cursor *self, const t_parse_query *query, t_parse_node node);
t_u32							ts_query_cursor_match_limit(const t_query_cursor *self);
t_query_cursor				   *ts_query_cursor_new(void);
bool							ts_query_cursor_next_capture(t_query_cursor *self, t_query_match *match, t_u32 *capture_index);
bool							ts_query_cursor_next_match(t_query_cursor *self, t_query_match *match);
void							ts_query_cursor_remove_match(t_query_cursor *self, t_u32 match_id);
void							ts_query_cursor_set_byte_range(t_query_cursor *self, t_u32 start_byte, t_u32 end_byte);
void							ts_query_cursor_set_match_limit(t_query_cursor *self, t_u32 limit);
void							ts_query_cursor_set_max_start_depth(t_query_cursor *self, t_u32 max_start_depth);
void							ts_query_cursor_set_point_range(t_query_cursor *self, t_point start_point, t_point end_point);
void							ts_query_delete(t_parse_query *self);
void							ts_query_disable_capture(t_parse_query *self, const char *name, t_u32 length);
void							ts_query_disable_pattern(t_parse_query *self, t_u32 pattern_index);
bool							ts_query_is_pattern_guaranteed_at_step(const t_parse_query *self, t_u32 byte_offset);
bool							ts_query_is_pattern_non_local(const t_parse_query *self, t_u32 pattern_index);
bool							ts_query_is_pattern_rooted(const t_parse_query *self, t_u32 pattern_index);
t_parse_query				   *ts_query_new(const t_language *language, const char *source, t_u32 source_len, t_u32 *error_offset, t_query_error *error_type);
t_u32							ts_query_pattern_count(const t_parse_query *self);
const t_query_predicate_step   *ts_query_predicates_for_pattern(const t_parse_query *self, t_u32 pattern_index, t_u32 *step_count);
t_u32							ts_query_start_byte_for_pattern(const t_parse_query *self, t_u32 pattern_index);
t_u32							ts_query_string_count(const t_parse_query *self);
const char					   *ts_query_string_value_for_id(const t_parse_query *self, t_u32 index, t_u32 *length);

// END PROBABLY DELETE WORTHY

void							ts_range_array_get_changed_ranges(const t_parse_range *old_ranges, unsigned old_range_count, const t_parse_range *new_ranges, unsigned new_range_count, t_range_array *differences);
bool							ts_range_array_intersects(const t_range_array *self, unsigned start_index, t_u32 start_byte, t_u32 end_byte);

bool							ts_stack_can_merge(t_stack *self, t_stack_version version1, t_stack_version version2);
void							ts_stack_clear(t_stack *self);
t_stack_version					ts_stack_copy_version(t_stack *self, t_stack_version version);
void							ts_stack_delete(t_stack *self);
int								ts_stack_dynamic_precedence(t_stack *self, t_stack_version version);
unsigned						ts_stack_error_cost(const t_stack *self, t_stack_version version);
t_stack_summary				   *ts_stack_get_summary(t_stack *self, t_stack_version version);
void							ts_stack_halt(t_stack *self, t_stack_version version);
bool							ts_stack_has_advanced_since_error(const t_stack *self, t_stack_version version);
bool							ts_stack_is_active(const t_stack *self, t_stack_version version);
bool							ts_stack_is_halted(const t_stack *self, t_stack_version version);
bool							ts_stack_is_paused(const t_stack *self, t_stack_version version);
t_subtree						ts_stack_last_external_token(const t_stack *self, t_stack_version version);
bool							ts_stack_merge(t_stack *self, t_stack_version version1, t_stack_version version2);
t_stack						   *ts_stack_new(t_subtree_pool *subtree_pool);
unsigned						ts_stack_node_count_since_error(const t_stack *self, t_stack_version version);
void							ts_stack_pause(t_stack *self, t_stack_version version, t_subtree lookahead);
t_stack_slice_array				ts_stack_pop_all(t_stack *self, t_stack_version version);
t_stack_slice_array				ts_stack_pop_count(t_stack *self, t_stack_version version, t_u32 count);
t_subtree_array					ts_stack_pop_error(t_stack *self, t_stack_version version);
t_stack_slice_array				ts_stack_pop_pending(t_stack *self, t_stack_version version);
t_length						ts_stack_position(const t_stack *self, t_stack_version version);
bool							ts_stack_print_dot_graph(t_stack *self, const t_language *language, void *f);
void							ts_stack_push(t_stack *self, t_stack_version version, t_subtree subtree, bool pending, t_state_id state);
void							ts_stack_record_summary(t_stack *self, t_stack_version version, unsigned max_depth);
void							ts_stack_remove_version(t_stack *self, t_stack_version version);
void							ts_stack_renumber_version(t_stack *self, t_stack_version v1, t_stack_version v2);
t_subtree						ts_stack_resume(t_stack *self, t_stack_version version);
void							ts_stack_set_last_external_token(t_stack *self, t_stack_version version, t_subtree token);
t_state_id						ts_stack_state(const t_stack *self, t_stack_version version);
void							ts_stack_swap_versions(t_stack *self, t_stack_version v1, t_stack_version v2);
t_u32							ts_stack_version_count(const t_stack *self);

void							ts_subtree__print_dot_graph(const t_subtree *self, t_u32 start_offset, const t_language *language, t_symbol alias_symbol, void *f);
void							ts_subtree_array_clear(t_subtree_pool *pool, t_subtree_array *self);
void							ts_subtree_array_copy(t_subtree_array self, t_subtree_array *dest);
void							ts_subtree_array_delete(t_subtree_pool *pool, t_subtree_array *self);
void							ts_subtree_array_remove_trailing_extras(t_subtree_array *self, t_subtree_array *destination);
void							ts_subtree_array_reverse(t_subtree_array *self);
void							ts_subtree_balance(t_subtree self, t_subtree_pool *pool, const t_language *language);
t_mutable_subtree				ts_subtree_clone(t_subtree self);
int								ts_subtree_compare(t_subtree left, t_subtree right, t_subtree_pool *pool);
t_subtree						ts_subtree_edit(t_subtree self, const t_input_edit *input_edit, t_subtree_pool *pool);
const t_external_scanner_state *ts_subtree_external_scanner_state(t_subtree self);
bool							ts_subtree_external_scanner_state_eq(t_subtree self, t_subtree other);
unsigned						ts_subtree_get_changed_ranges(const t_subtree *old_tree, const t_subtree *new_tree, t_tree_cursor *cursor1, t_tree_cursor *cursor2, const t_language *language, const t_range_array *included_range_differences, t_parse_range **ranges);
t_subtree						ts_subtree_last_external_token(t_subtree tree);
t_mutable_subtree				ts_subtree_make_mut(t_subtree_pool *pool, t_subtree self);
t_subtree						ts_subtree_new_error(t_subtree_pool *pool, t_i32 lookahead_char, t_length padding, t_length size, t_u32 bytes_scanned, t_state_id parse_state, const t_language *language);
t_subtree						ts_subtree_new_error_node(t_subtree_array *children, bool extra, const t_language *language);
t_subtree						ts_subtree_new_leaf(t_subtree_pool *pool, t_symbol symbol, t_length padding, t_length size, t_u32 lookahead_bytes, t_state_id parse_state, bool has_external_tokens, bool depends_on_column, bool is_keyword, const t_language *language);
t_subtree						ts_subtree_new_missing_leaf(t_subtree_pool *pool, t_symbol symbol, t_length padding, t_u32 lookahead_bytes, const t_language *language);
t_mutable_subtree				ts_subtree_new_node(t_symbol symbol, t_subtree_array *children, unsigned production_id, const t_language *language);
void							ts_subtree_pool_delete(t_subtree_pool *self);
t_subtree_pool					ts_subtree_pool_new(t_u32 capacity);
void							ts_subtree_release(t_subtree_pool *pool, t_subtree self);
void							ts_subtree_retain(t_subtree self);
void							ts_subtree_set_symbol(t_mutable_subtree *self, t_symbol symbol, const t_language *language);
char						   *ts_subtree_string(t_subtree self, t_symbol alias_symbol, bool alias_is_named, const t_language *language, bool include_all);
void							ts_subtree_summarize_children(t_mutable_subtree self, const t_language *language);

t_first_tree				   *ts_tree_copy(const t_first_tree *self);

// START PROBABLY DELETE WORTHY

t_tree_cursor					ts_tree_cursor_copy(const t_tree_cursor *_cursor);
t_u32							ts_tree_cursor_current_depth(const t_tree_cursor *_self);
t_u32							ts_tree_cursor_current_descendant_index(const t_tree_cursor *_self);
t_field_id						ts_tree_cursor_current_field_id(const t_tree_cursor *_self);
const char					   *ts_tree_cursor_current_field_name(const t_tree_cursor *_self);
t_parse_node					ts_tree_cursor_current_node(const t_tree_cursor *_self);
void							ts_tree_cursor_current_status(const t_tree_cursor *_self, t_field_id *field_id, bool *has_later_siblings, bool *has_later_named_siblings, bool *can_have_later_siblings_with_this_field, t_symbol *supertypes, unsigned *supertype_count);
void							ts_tree_cursor_delete(t_tree_cursor *_self);
void							ts_tree_cursor_goto_descendant(t_tree_cursor *_self, t_u32 goal_descendant_index);
bool							ts_tree_cursor_goto_first_child(t_tree_cursor *self);
t_i64							ts_tree_cursor_goto_first_child_for_byte(t_tree_cursor *self, t_u32 goal_byte);
t_i64							ts_tree_cursor_goto_first_child_for_point(t_tree_cursor *self, t_point goal_point);
t_tree_cursor_step				ts_tree_cursor_goto_first_child_internal(t_tree_cursor *_self);
bool							ts_tree_cursor_goto_last_child(t_tree_cursor *self);
t_tree_cursor_step				ts_tree_cursor_goto_last_child_internal(t_tree_cursor *_self);
bool							ts_tree_cursor_goto_next_sibling(t_tree_cursor *self);
t_tree_cursor_step				ts_tree_cursor_goto_next_sibling_internal(t_tree_cursor *_self);
bool							ts_tree_cursor_goto_parent(t_tree_cursor *_self);
bool							ts_tree_cursor_goto_previous_sibling(t_tree_cursor *self);
t_tree_cursor_step				ts_tree_cursor_goto_previous_sibling_internal(t_tree_cursor *_self);
t_tree_cursor_step				ts_tree_cursor_goto_sibling_internal(t_tree_cursor *_self, bool (*advance)(t_cursor_child_iterator *, t_tree_cursor_entry *, bool *));
void							ts_tree_cursor_init(t_tree_cursor *self, t_parse_node node);
t_tree_cursor					ts_tree_cursor_new(t_parse_node node);
t_parse_node					ts_tree_cursor_parent_node(const t_tree_cursor *_self);
void							ts_tree_cursor_reset(t_tree_cursor *_self, t_parse_node node);
void							ts_tree_cursor_reset_to(t_tree_cursor *_dst, const t_tree_cursor *_src);

// END PROBABLY DELETE WORTHY

void							ts_tree_delete(t_first_tree *self);
void							ts_tree_edit(t_first_tree *self, const t_input_edit *edit);
t_parse_range				   *ts_tree_get_changed_ranges(const t_first_tree *old_tree, const t_first_tree *new_tree, t_u32 *length);
t_parse_range				   *ts_tree_included_ranges(const t_first_tree *self, t_u32 *length);
const t_language			   *ts_tree_language(const t_first_tree *self);
t_first_tree				   *ts_tree_new(t_subtree root, const t_language *language, const t_parse_range *included_ranges, unsigned included_range_count);
void							ts_tree_print_dot_graph(const t_first_tree *self, int file_descriptor);
t_parse_node					ts_tree_root_node(const t_first_tree *self);
t_parse_node					ts_tree_root_node_with_offset(const t_first_tree *self, t_u32 offset_bytes, t_point offset_extent);

#endif /* COMBINED_H */

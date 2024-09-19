/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_inner.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:56:47 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 16:44:59 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_INNER_H
#define PARSER_INNER_H

#include "me/mem/mem.h"
#include "me/types.h"
#include "me/vec/vec_reduce_action.h"
#include "me/vec/vec_subtree.h"
#include "parser/api.h"
#include "parser/array.h"
#include "parser/language.h"
#include "parser/length.h"
#include "parser/lexer.h"
#include "parser/reduce_action.h"
#include "parser/inner/stack_inner.h"
#include "parser/subtree.h"
#include "parser/tree.h"
#include <assert.h>
#include <stdio.h>

#define MAX_VERSION_COUNT 40
#define MAX_VERSION_COUNT_OVERFLOW 60
#define MAX_SUMMARY_DEPTH 1
#define MAX_COST_DIFFERENCE 16 * ERROR_COST_PER_SKIPPED_TREE

typedef enum e_error_comparison	t_error_comparison;
typedef struct s_error_status	t_error_status;
typedef struct s_string_input	t_string_input;
typedef struct s_parser			t_parser;

struct s_parser
{
	t_lexer			  lexer;
	t_stack			 *stack;
	const t_language *language;
	t_vec_reduce_action	  reduce_actions;
	t_subtree		  finished_tree;
	t_vec_subtree	  trailing_extras;
	t_vec_subtree	  trailing_extras2;
	t_vec_subtree	  scratch_trees;
	void			 *external_scanner_payload;
	t_u32			  accept_count;
	t_u32			  operation_count;
	bool			  has_scanner_error;
};

struct s_error_status
{
	t_u32 cost;
	t_u32 node_count;
	int	  dynamic_precedence;
	bool  is_in_error;
};

enum e_error_comparison
{

	ECTakeLeft,
	ECPreferLeft,
	ECNone,
	ECPreferRight,
	ECTakeRight,
};

struct s_string_input
{
	const t_u8 *string;
	t_u32		length;
};

t_parser *ts_parser_new(t_language *language);
t_tree *ts_parser_parse(t_parser *self, t_input input);
t_tree *ts_parser_parse_string(t_parser *self, t_const_str string, t_u32 length);
bool _parse_condition(t_parser *self, t_u32 *version_count, t_stack_version *version);
bool ts_parser__advance(t_parser *self, t_stack_version version);
bool ts_parser__better_version_exists(t_parser *self, t_stack_version version, bool is_in_error, t_u32 cost);
bool ts_parser__breakdown_top_of_stack(t_parser *self, t_stack_version version);
bool ts_parser__do_all_potential_reductions(t_parser *self, t_stack_version starting_version, t_symbol lookahead_symbol);
bool ts_parser__external_scanner_scan(t_parser *self, t_state_id external_lex_state);
bool ts_parser__recover_to_state(t_parser *self, t_stack_version version, t_u32 depth, t_state_id goal_state);
bool ts_parser__select_children(t_parser *self, t_subtree left, const t_vec_subtree *children);
bool ts_parser__select_tree(t_parser *self, t_subtree left, t_subtree right);
bool ts_parser_has_outstanding_parse(t_parser *self);
const t_u8 *ts_string_input_read(void *_self, t_u32 byte, t_point point, t_u32 *length);
t_error_comparison ts_parser__compare_versions(t_parser *self, t_error_status a, t_error_status b);
t_error_status ts_parser__version_status(t_parser *self, t_stack_version version);
t_stack_version ts_parser__reduce(t_parser *self, t_stack_version version, t_symbol symbol, t_u32 count, int dynamic_precedence, t_u16 production_id, bool is_fragile, bool end_of_non_terminal_extra);
t_subtree ts_parser__lex(t_parser *self, t_stack_version version, t_state_id parse_state);
t_u32 ts_parser__condense_stack(t_parser *self);
t_u32 ts_parser__external_scanner_serialize(t_parser *self);
void ts_parser__accept(t_parser *self, t_stack_version version, t_subtree lookahead);
void ts_parser__external_scanner_create(t_parser *self);
void ts_parser__external_scanner_deserialize(t_parser *self, t_subtree external_token);
void ts_parser__external_scanner_destroy(t_parser *self);
void ts_parser__handle_error(t_parser *self, t_stack_version version, t_subtree lookahead);
void ts_parser__recover(t_parser *self, t_stack_version version, t_subtree lookahead);
void ts_parser__shift(t_parser *self, t_stack_version version, t_state_id state, t_subtree lookahead, bool extra);
void ts_parser_delete(t_parser *self);
void ts_parser_reset(t_parser *self);

#endif /* PARSER_INNER_H */

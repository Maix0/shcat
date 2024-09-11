/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_inner.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:56:47 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/11 17:25:29 by maiboyer         ###   ########.fr       */
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
#include "parser/stack.h"
#include "parser/subtree.h"
#include "parser/tree.h"
#include <assert.h>
#include <stdio.h>

#define MAX_VERSION_COUNT 40
#define MAX_VERSION_COUNT_OVERFLOW 60
#define MAX_SUMMARY_DEPTH 1
#define MAX_COST_DIFFERENCE 16 * ERROR_COST_PER_SKIPPED_TREE

typedef struct s_error_status	t_error_status;
typedef enum e_error_comparison t_error_comparison;
typedef struct s_string_input	t_string_input;

struct TSParser
{
	t_lexer			  lexer;
	t_stack			 *stack;
	const TSLanguage *language;
	ReduceActionSet	  reduce_actions;
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

TSParser *ts_parser_new(TSLanguage *language);
void	  ts_parser_delete(TSParser *self);

void			   ts_parser__accept(TSParser *self, t_stack_version version, t_subtree lookahead);
bool			   ts_parser__advance(TSParser *self, t_stack_version version);
bool			   ts_parser__better_version_exists(TSParser *self, t_stack_version version, bool is_in_error, t_u32 cost);
bool			   ts_parser__breakdown_top_of_stack(TSParser *self, t_stack_version version);
t_error_comparison ts_parser__compare_versions(TSParser *self, t_error_status a, t_error_status b);
t_u32			   ts_parser__condense_stack(TSParser *self);
bool			   ts_parser__do_all_potential_reductions(TSParser *self, t_stack_version starting_version, TSSymbol lookahead_symbol);
void			   ts_parser__external_scanner_create(TSParser *self);
void			   ts_parser__external_scanner_deserialize(TSParser *self, t_subtree external_token);
void			   ts_parser__external_scanner_destroy(TSParser *self);
bool			   ts_parser__external_scanner_scan(TSParser *self, TSStateId external_lex_state);
t_u32			   ts_parser__external_scanner_serialize(TSParser *self);
void			   ts_parser__handle_error(TSParser *self, t_stack_version version, t_subtree lookahead);
t_subtree		   ts_parser__lex(TSParser *self, t_stack_version version, TSStateId parse_state);
void			   ts_parser__recover(TSParser *self, t_stack_version version, t_subtree lookahead);
bool			   ts_parser__recover_to_state(TSParser *self, t_stack_version version, t_u32 depth, TSStateId goal_state);
t_stack_version	   ts_parser__reduce(TSParser *self, t_stack_version version, TSSymbol symbol, t_u32 count, int dynamic_precedence,
									 t_u16 production_id, bool is_fragile, bool end_of_non_terminal_extra);
bool			   ts_parser__select_children(TSParser *self, t_subtree left, const t_vec_subtree *children);
bool			   ts_parser__select_tree(TSParser *self, t_subtree left, t_subtree right);
void			   ts_parser__shift(TSParser *self, t_stack_version version, TSStateId state, t_subtree lookahead, bool extra);
t_error_status	   ts_parser__version_status(TSParser *self, t_stack_version version);
bool			   ts_parser_has_outstanding_parse(TSParser *self);
const TSLanguage  *ts_parser_language(const TSParser *self);
TSTree			  *ts_parser_parse(TSParser *self, TSInput input);
TSTree			  *ts_parser_parse_string(TSParser *self, t_const_str string, t_u32 length);
void			   ts_parser_reset(TSParser *self);
bool			   ts_parser_set_language(TSParser *self, const TSLanguage *language);
const t_u8		  *ts_string_input_read(void *_self, t_u32 byte, TSPoint point, t_u32 *length);
#endif /* PARSER_INNER_H */

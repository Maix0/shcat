/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_inner.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:56:47 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/10 13:58:59 by maiboyer         ###   ########.fr       */
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

#endif /* PARSER_INNER_H */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:27:48 by rparodi           #+#    #+#             */
/*   Updated: 2024/08/06 18:30:53 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/_from_node.h"
#include "ast/ast.h"
#include "gmr/field_identifiers.h"
#include "gmr/field_identifiers.h"
#include "gmr/symbols.h"
#include "gmr/symbols.h"
#include "me/str/str.h"
#include "me/types.h"
#include "me/vec/vec_ast.h"
#include "parser/api.h"
#include <stdio.h>

void	_append_redirection(t_ast_node node, t_ast_node redirection)
{
	t_vec_ast	*vec;

	vec = NULL;
	if (!(redirection->kind == AST_FILE_REDIRECTION || \
			redirection->kind == AST_HEREDOC_REDIRECTION))
		return (ast_free(redirection));
	if (node->kind == AST_CASE)
		vec = &node->data.case_.suffixes_redirections;
	else if (node->kind == AST_COMMAND)
		vec = &node->data.command.suffixes_redirections;
	else if (node->kind == AST_COMPOUND_STATEMENT)
		vec = &node->data.compound_statement.suffixes_redirections;
	else if (node->kind == AST_LIST)
		vec = &node->data.list.suffixes_redirections;
	else if (node->kind == AST_PIPELINE)
		vec = &node->data.pipeline.suffixes_redirections;
	else if (node->kind == AST_SUBSHELL)
		vec = &node->data.subshell.suffixes_redirections;
	else
		vec = _append_scripting(node);
	if (vec != NULL)
		vec_ast_push(vec, redirection);
	else
		(ast_free(redirection));
}

t_ast_terminator_kind	_select_term(t_parse_node node)
{
	t_symbol	symbol;

	symbol = ts_node_grammar_symbol(ts_node_child(node, 0));
	if (symbol == anon_sym_SEMI)
		return (AST_TERM_SEMI);
	if (symbol == anon_sym_SEMI_SEMI)
		return (AST_TERM_DOUBLE_SEMI);
	printf("unknown term symbol %d\n", symbol);
	return (AST_TERM_NONE);
}

t_str	_extract_str(t_parse_node self, t_const_str input)
{
	t_usize	start;
	t_usize	end;
	t_str	result;

	start = ts_node_start_byte(self);
	end = ts_node_end_byte(self);
	result = str_substring(input, start, end - start);
	return (result);
}

/*
	E_OP_NONE = 0,				// ${var}
	E_OP_DEFAULT,				// ${var-word}
	E_OP_ASSIGN_DEFAULT,		// ${var=word}
	E_OP_ERROR,					// ${var?word}
	E_OP_ALTERNATE,				// ${var+word}
	E_OP_DEFAULT_COLON,			// ${var:-word}
	E_OP_ASSIGN_DEFAULT_COLON, // ${var:=word}
	E_OP_ERROR_COLON,			// ${var:?word}
	E_OP_ALTERNATE_COLON,		// ${var:+word}
	E_OP_LENGTH,				// ${#var}
	E_OP_SMALLEST_PREFIX,		// ${var#pattern}
	E_OP_LARGEST_PREFIX,		// ${var##pattern}
	E_OP_SMALLEST_SUFFIX,		// ${var%pattern}
	E_OP_LARGEST_SUFFIX,		// ${var%%pattern}
*/

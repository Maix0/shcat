/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 10:55:45 by rparodi           #+#    #+#             */
/*   Updated: 2024/08/14 18:29:10 by maiboyer         ###   ########.fr       */
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

t_ast_expansion_operator	_extract_exp_fix(t_node self)
{
	t_ast_expansion_operator	kind;
	t_symbol					symbol;

	kind = E_OP_NONE;
	symbol = ts_node_grammar_symbol(self);
	if (symbol == anon_sym_POUND)
		kind = E_OP_SMALLEST_PREFIX;
	if (symbol == sym__immediate_double_hash)
		kind = E_OP_LARGEST_PREFIX;
	if (symbol == anon_sym_PERCENT)
		kind = E_OP_SMALLEST_SUFFIX;
	if (symbol == anon_sym_PERCENT_PERCENT)
		kind = E_OP_LARGEST_SUFFIX;
	return (kind);
}

t_ast_expansion_operator	_extract_exp_op(t_node self)
{
	t_ast_expansion_operator	kind;
	t_symbol					symbol;

	symbol = ts_node_grammar_symbol(self);
	if (symbol == anon_sym_DASH)
		kind = E_OP_DEFAULT;
	else if (symbol == anon_sym_EQ)
		kind = E_OP_ASSIGN_DEFAULT;
	else if (symbol == anon_sym_QMARK)
		kind = E_OP_ERROR;
	else if (symbol == anon_sym_PLUS)
		kind = E_OP_ALTERNATE;
	else if (symbol == anon_sym_COLON_DASH)
		kind = E_OP_DEFAULT_COLON;
	else if (symbol == anon_sym_COLON_EQ)
		kind = E_OP_ASSIGN_DEFAULT_COLON;
	else if (symbol == anon_sym_COLON_QMARK)
		kind = E_OP_ERROR_COLON;
	else if (symbol == anon_sym_COLON_PLUS)
		kind = E_OP_ALTERNATE_COLON;
	else
		kind = _extract_exp_fix(self);
	return (kind);
}

t_vec_ast	*_vec_command(t_ast_command *val, t_usize i)
{
	if (i == 0)
		return (&val->prefixes);
	if (i == 1)
		return (&val->cmd_word);
	if (i == 2)
		return (&val->suffixes_redirections);
	me_abort("invalid index for i in _get_vec_command");
	return (NULL);
}

void	_add_negation(t_ast_node *node)
{
	if (node == NULL || *node == NULL)
		return ;
	if ((*node)->kind == AST_PIPELINE)
		(*node)->data.pipeline.bang = true;
	if ((*node)->kind == AST_COMMAND)
		(*node)->data.command.bang = true;
	if ((*node)->kind == AST_SUBSHELL)
		(*node)->data.subshell.bang = true;
	if ((*node)->kind == AST_COMPOUND_STATEMENT)
		(*node)->data.compound_statement.bang = true;
	if ((*node)->kind == AST_VARIABLE_ASSIGNMENT)
		(*node)->data.variable_assignment.bang = true;
}

t_ast_redirection_kind	_get_redirection_op(t_node self)
{
	t_symbol	symbol;

	symbol = ts_node_grammar_symbol(self);
	if (symbol == anon_sym_LT)
		return (AST_REDIR_INPUT);
	if (symbol == anon_sym_GT)
		return (AST_REDIR_OUTPUT);
	if (symbol == anon_sym_GT_GT)
		return (AST_REDIR_APPEND);
	if (symbol == anon_sym_LT_LT)
		return (AST_REDIR_HEREDOC);
	return (me_abort("invalid redirection symbol"), 0);
}

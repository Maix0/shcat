/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast_alloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:26:13 by rparodi           #+#    #+#             */
/*   Updated: 2024/08/01 09:35:16 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/ast.h"
#include "gmr/field_identifiers.h"
#include "gmr/symbols.h"
#include "me/mem/mem.h"
#include "me/str/str.h"
#include "me/types.h"
#include "me/vec/vec_ast.h"
#include "parser/api.h"
#include <stdio.h>
#include <inttypes.h>

void	ast_alloc_boucle(t_ast_node_kind kind, t_ast_node ret);
void	ast_alloc_condition(t_ast_node_kind kind, t_ast_node ret);
void	ast_alloc_arith(t_ast_node_kind kind, t_ast_node ret);
void	ast_alloc_exec(t_ast_node_kind kind, t_ast_node ret);
void	ast_alloc_redirection(t_ast_node_kind kind, t_ast_node ret);
void	ast_alloc_expantion(t_ast_node_kind kind, t_ast_node ret);
void	ast_alloc_other(t_ast_node_kind kind, t_ast_node ret);

void	ast_alloc_arith(t_ast_node_kind kind, t_ast_node ret)
{
	if (kind == AST_ARITHMETIC_EXPANSION)
		ret->data.arithmetic_expansion.expr = NULL;
	if (kind == AST_ARITHMETIC_POSTFIX)
	{
		ret->data.arithmetic_postfix.value = NULL;
		ret->data.arithmetic_postfix.op = 0;
	}
	if (kind == AST_ARITHMETIC_BINARY)
	{
		ret->data.arithmetic_binary.lhs = NULL;
		ret->data.arithmetic_binary.op = 0;
		ret->data.arithmetic_binary.rhs = NULL;
	}
}

void	ast_alloc_exec(t_ast_node_kind kind, t_ast_node ret)
{
	if (kind == AST_COMMAND)
	{
		ret->data.command.cmd_word = vec_ast_new(16, ast_free);
		ret->data.command.prefixes = vec_ast_new(16, ast_free);
		ret->data.command.suffixes_redirections = vec_ast_new(16, ast_free);
		ret->data.command.term = AST_TERM_NONE;
		ret->data.command.bang = false;
	}
	if (kind == AST_PROGRAM)
		ret->data.program.body = vec_ast_new(16, ast_free);
	if (kind == AST_COMMAND_SUBSTITUTION)
		ret->data.command_substitution.body = vec_ast_new(16, ast_free);
	if (kind == AST_PIPELINE)
	{
		ret->data.pipeline.bang = false;
		ret->data.pipeline.statements = vec_ast_new(16, ast_free);
		ret->data.pipeline.suffixes_redirections = vec_ast_new(16, ast_free);
		ret->data.pipeline.term = AST_TERM_NONE;
	}
}

void	ast_alloc_redirection(t_ast_node_kind kind, t_ast_node ret)
{
	if (kind == AST_FILE_REDIRECTION)
	{
		ret->data.file_redirection.input = NULL;
		ret->data.file_redirection.output = NULL;
	}
	if (kind == AST_HEREDOC_REDIRECTION)
	{
		ret->data.heredoc_redirection.delimiter = NULL;
		ret->data.heredoc_redirection.content = NULL;
	}
	if (kind == AST_LIST)
	{
		ret->data.list.left = NULL;
		ret->data.list.op = AST_LIST_OR;
		ret->data.list.right = NULL;
		ret->data.list.suffixes_redirections = vec_ast_new(16, ast_free);
		ret->data.list.term = AST_TERM_NONE;
	}
}

void	ast_alloc_other(t_ast_node_kind kind, t_ast_node ret)
{
	if (kind == AST_FUNCTION_DEFINITION)
	{
		ret->data.function_definition.body = vec_ast_new(16, ast_free);
		ret->data.function_definition.name = NULL;
	}
	if (kind == AST_COMPOUND_STATEMENT)
	{
		ret->data.compound_statement.body = vec_ast_new(16, ast_free);
		ret->data.compound_statement.suffixes_redirections \
			= vec_ast_new(16, ast_free);
		ret->data.compound_statement.term = AST_TERM_NONE;
	}
	if (kind == AST_UNTIL)
	{
		ret->data.until.condition = vec_ast_new(16, ast_free);
		ret->data.until.do_ = vec_ast_new(16, ast_free);
		ret->data.until.suffixes_redirections = vec_ast_new(16, ast_free);
		ret->data.until.term = AST_TERM_NONE;
	}
	if (kind == AST_VARIABLE_ASSIGNMENT)
	{
		ret->data.variable_assignment.name = NULL;
		ret->data.variable_assignment.value = NULL;
		ret->data.variable_assignment.bang = false;
	}
}

t_ast_node	ast_alloc(t_ast_node_kind kind)
{
	t_ast_node	ret;

	ret = mem_alloc(sizeof(*ret));
	ret->kind = kind;
	ast_alloc_boucle(kind, ret);
	ast_alloc_condition(kind, ret);
	ast_alloc_arith(kind, ret);
	ast_alloc_exec(kind, ret);
	ast_alloc_redirection(kind, ret);
	ast_alloc_expantion(kind, ret);
	ast_alloc_other(kind, ret);
	return (ret);
}

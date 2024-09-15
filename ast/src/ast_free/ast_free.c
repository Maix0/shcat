/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast_free.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:29:42 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/15 20:14:43 by maiboyer         ###   ########.fr       */
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

void	ast_free_arith(t_ast_node elem);
void	ast_free_condition(t_ast_node elem);
void	ast_free_exec(t_ast_node elem);
void	ast_free_loop(t_ast_node elem);
void	ast_free_other(t_ast_node elem);
void	ast_free_redirection(t_ast_node elem);

void	ast_free_arith(t_ast_node elem)
{
	if (elem->kind == AST_ARITHMETIC_EXPANSION)
	{
		ast_free(elem->data.arithmetic_expansion.expr);
	}
	if (elem->kind == AST_ARITHMETIC_POSTFIX)
	{
		ast_free(elem->data.arithmetic_postfix.value);
	}
	if (elem->kind == AST_ARITHMETIC_BINARY)
	{
		ast_free(elem->data.arithmetic_binary.lhs);
		ast_free(elem->data.arithmetic_binary.rhs);
	}
}

void	ast_free_loop(t_ast_node elem)
{
	if (elem->kind == AST_WHILE)
	{
		vec_ast_free(elem->data.while_.condition);
		vec_ast_free(elem->data.while_.do_);
		vec_ast_free(elem->data.while_.suffixes_redirections);
	}
	if (elem->kind == AST_FOR)
	{
		mem_free(elem->data.for_.var_name);
		vec_ast_free(elem->data.for_.do_);
		vec_ast_free(elem->data.for_.suffixes_redirections);
		vec_ast_free(elem->data.for_.words);
	}
	if (elem->kind == AST_UNTIL)
	{
		vec_ast_free(elem->data.until.condition);
		vec_ast_free(elem->data.until.do_);
		vec_ast_free(elem->data.until.suffixes_redirections);
	}
}

void	ast_free_redirection(t_ast_node elem)
{
	if (elem->kind == AST_LIST)
	{
		ast_free(elem->data.list.left);
		ast_free(elem->data.list.right);
		vec_ast_free(elem->data.list.suffixes_redirections);
	}
	if (elem->kind == AST_CASE)
	{
		ast_free(elem->data.case_.word);
		vec_ast_free(elem->data.case_.cases);
		vec_ast_free(elem->data.case_.suffixes_redirections);
	}
	if (elem->kind == AST_FILE_REDIRECTION)
	{
		mem_free(elem->data.file_redirection.input);
		ast_free(elem->data.file_redirection.output);
	}
	if (elem->kind == AST_HEREDOC_REDIRECTION)
	{
		mem_free(elem->data.heredoc_redirection.delimiter);
	}
}

void	ast_free_other(t_ast_node elem)
{
	if (elem->kind == AST_COMPOUND_STATEMENT)
	{
		vec_ast_free(elem->data.compound_statement.body);
		vec_ast_free(elem->data.compound_statement.suffixes_redirections);
	}
	if (elem->kind == AST_EXPANSION)
	{
		vec_ast_free(elem->data.expansion.args);
		mem_free(elem->data.expansion.var_name);
	}
	if (elem->kind == AST_SUBSHELL)
	{
		vec_ast_free(elem->data.subshell.body);
		vec_ast_free(elem->data.subshell.suffixes_redirections);
	}
	if (elem->kind == AST_VARIABLE_ASSIGNMENT)
	{
		ast_free(elem->data.variable_assignment.value);
		mem_free(elem->data.variable_assignment.name);
	}
}

void	ast_free(t_ast_node elem)
{
	if (elem == NULL)
		return ;
	ast_free_arith(elem);
	ast_free_loop(elem);
	ast_free_condition(elem);
	ast_free_exec(elem);
	ast_free_other(elem);
	ast_free_redirection(elem);
	if (elem->kind == AST_RAW_STRING)
		mem_free(elem->data.raw_string.str);
	if (elem->kind == AST_WORD)
		vec_ast_free(elem->data.word.inner);
	if (elem->kind == AST_EXTGLOB)
		mem_free(elem->data.extglob.pattern);
	if (elem->kind == AST_REGEX)
		mem_free(elem->data.regex.pattern);
	mem_free(elem);
}

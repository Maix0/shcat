/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast_free_scripting.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:52:55 by rparodi           #+#    #+#             */
/*   Updated: 2024/07/30 14:53:15 by rparodi          ###   ########.fr       */
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

void	ast_free_condition(t_ast_node elem)
{
	if (elem->kind == AST_IF)
	{
		ast_free(elem->data.if_.else_);
		vec_ast_free(elem->data.if_.condition);
		vec_ast_free(elem->data.if_.elif_);
		vec_ast_free(elem->data.if_.suffixes_redirections);
		vec_ast_free(elem->data.if_.then);
	}
	if (elem->kind == AST_CASE_ITEM)
	{
		vec_ast_free(elem->data.case_item.body);
		vec_ast_free(elem->data.case_item.pattern);
	}
	if (elem->kind == AST_ELIF)
	{
		vec_ast_free(elem->data.elif.condition);
		vec_ast_free(elem->data.elif.then);
	}
	if (elem->kind == AST_ELSE)
		vec_ast_free(elem->data.else_.then);
	if (elem->kind == AST_FUNCTION_DEFINITION)
	{
		vec_ast_free(elem->data.function_definition.body);
		mem_free(elem->data.function_definition.name);
	}
}

void	ast_free_exec(t_ast_node elem)
{
	if (elem->kind == AST_PROGRAM)
		vec_ast_free(elem->data.program.body);
	if (elem->kind == AST_COMMAND)
	{
		vec_ast_free(elem->data.command.cmd_word);
		vec_ast_free(elem->data.command.prefixes);
		vec_ast_free(elem->data.command.suffixes_redirections);
	}
	if (elem->kind == AST_COMMAND_SUBSTITUTION)
		vec_ast_free(elem->data.command_substitution.body);
	if (elem->kind == AST_PIPELINE)
	{
		vec_ast_free(elem->data.pipeline.statements);
		vec_ast_free(elem->data.pipeline.suffixes_redirections);
	}
}

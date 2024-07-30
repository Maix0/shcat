/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast_alloc_scripting.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:57:11 by rparodi           #+#    #+#             */
/*   Updated: 2024/07/30 17:57:53 by rparodi          ###   ########.fr       */
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

t_ast_node	ast_alloc_expantion(t_ast_node_kind kind, t_ast_node ret)
{
	if (kind == AST_RAW_STRING)
	{
		ret->data.raw_string.len = 0;
		ret->data.raw_string.str = NULL;
		ret->data.raw_string.kind = AST_WORD_NO_QUOTE;
		ret->data.raw_string.start = true;
		ret->data.raw_string.end = true;
	}
	if (kind == AST_SUBSHELL)
	{
		ret->data.subshell.term = AST_TERM_NONE;
		ret->data.subshell.body = vec_ast_new(16, ast_free);
		ret->data.subshell.suffixes_redirections = vec_ast_new(16, ast_free);
		ret->data.subshell.bang = false;
	}
	if (kind == AST_WORD)
	{
		ret->data.word.inner = vec_ast_new(16, ast_free);
		ret->data.word.kind = AST_WORD_NO_QUOTE;
	}
	if (kind == AST_EXTGLOB)
		ret->data.extglob.pattern = NULL;
	if (kind == AST_REGEX)
		ret->data.regex.pattern = NULL;
}

t_ast_node	ast_alloc_boucle(t_ast_node_kind kind, t_ast_node ret)
{
	if (kind == AST_IF)
	{
		ret->data.if_.condition = vec_ast_new(16, ast_free);
		ret->data.if_.elif_ = vec_ast_new(16, ast_free);
		ret->data.if_.else_ = NULL;
		ret->data.if_.suffixes_redirections = vec_ast_new(16, ast_free);
		ret->data.if_.term = AST_TERM_NONE;
		ret->data.if_.then = vec_ast_new(16, ast_free);
	}
	if (kind == AST_FOR)
	{
		ret->data.for_.do_ = vec_ast_new(16, ast_free);
		ret->data.for_.suffixes_redirections = vec_ast_new(16, ast_free);
		ret->data.for_.term = AST_TERM_NONE;
		ret->data.for_.var_name = NULL;
		ret->data.for_.words = vec_ast_new(16, ast_free);
	}
	if (kind == AST_WHILE)
	{
		ret->data.while_.condition = vec_ast_new(16, ast_free);
		ret->data.while_.do_ = vec_ast_new(16, ast_free);
		ret->data.while_.suffixes_redirections = vec_ast_new(16, ast_free);
		ret->data.while_.term = AST_TERM_NONE;
	}
}

t_ast_node	ast_alloc_condition(t_ast_node_kind kind, t_ast_node ret)
{
	if (kind == AST_CASE_ITEM)
	{
		ret->data.case_item.body = vec_ast_new(16, ast_free);
		ret->data.case_item.pattern = vec_ast_new(16, ast_free);
		ret->data.case_item.term = AST_TERM_NONE;
	}
	if (kind == AST_CASE)
	{
		ret->data.case_.cases = vec_ast_new(16, ast_free);
		ret->data.case_.suffixes_redirections = vec_ast_new(16, ast_free);
		ret->data.case_.term = AST_TERM_NONE;
		ret->data.case_.word = NULL;
	}
	if (kind == AST_ELIF)
	{
		ret->data.elif.condition = vec_ast_new(16, ast_free);
		ret->data.elif.then = vec_ast_new(16, ast_free);
	}
	if (kind == AST_ELSE)
		ret->data.else_.then = vec_ast_new(16, ast_free);
}

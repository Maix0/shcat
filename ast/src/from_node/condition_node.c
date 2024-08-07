/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:36:09 by rparodi           #+#    #+#             */
/*   Updated: 2024/08/06 18:58:01 by rparodi          ###   ########.fr       */
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

void	ast_set_term(t_ast_node *node, t_ast_terminator_kind term)
{
	t_ast_terminator_kind	void_storage;
	t_ast_terminator_kind	*ptr;
	t_ast_node				val;

	if (node == NULL)
		return ((void)printf("node == NULL\n"));
	val = *node;
	ptr = &void_storage;
	if (val->kind == AST_CASE)
		ptr = &val->data.case_.term;
	if (val->kind == AST_CASE_ITEM)
		ptr = &val->data.case_item.term;
	if (val->kind == AST_COMMAND)
		ptr = &val->data.command.term;
	if (val->kind == AST_COMPOUND_STATEMENT)
		ptr = &val->data.compound_statement.term;
	if (val->kind == AST_IF)
		ptr = &val->data.if_.term;
	if (val->kind == AST_SUBSHELL)
		ptr = &val->data.subshell.term;
	*ptr = term;
	if (ptr == &void_storage)
		printf("node wasn't a term capable node\n");
	(void)(void_storage);
}

t_error	build_sym_if_statement(\
	t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_parse_node	child;
	t_ast_node		ret;
	t_ast_node		tmp;
	t_usize			i;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_if_statement)
		return (ERROR);
	ret = ast_alloc(AST_IF);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		child = ts_node_child(self, i);
		if (!ts_node_is_named(child) && (i++, true))
			continue ;
		if (ts_node_field_id_for_child(self, i) == field_cond)
		{
			if (ast_from_node(child, input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.if_.condition, tmp);
		}
		if (ts_node_field_id_for_child(self, i) == field_body)
		{
			if (ast_from_node(child, input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.if_.then, tmp);
		}
		if (ts_node_field_id_for_child(self, i) == field_elif)
		{
			if (ast_from_node(child, input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.if_.elif_, tmp);
		}
		if (ts_node_field_id_for_child(self, i) == field_else)
		{
			if (ast_from_node(child, input, &tmp))
				return (ast_free(ret), ERROR);
			ret->data.if_.else_ = tmp;
		}
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_elif_clause(\
	t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node		ret;
	t_ast_node		tmp;
	t_usize			i;
	t_parse_node	child;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_elif_clause)
		return (ERROR);
	ret = ast_alloc(AST_ELIF);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		child = ts_node_child(self, i);
		if (!ts_node_is_named(child) && (i++, true))
			continue ;
		if (ts_node_field_id_for_child(self, i) == field_cond)
		{
			if (ast_from_node(child, input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.elif.condition, tmp);
		}
		if (ts_node_field_id_for_child(self, i) == field_body)
		{
			if (ast_from_node(child, input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.elif.then, tmp);
		}
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_else_clause(\
	t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node		ret;
	t_ast_node		tmp;
	t_usize			i;
	t_parse_node	child;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_else_clause)
		return (ERROR);
	ret = ast_alloc(AST_ELSE);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		child = ts_node_child(self, i);
		if (!ts_node_is_named(child) && (i++, true))
			continue ;
		if (ts_node_field_id_for_child(self, i) == field_body)
		{
			if (ast_from_node(child, input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.else_.then, tmp);
		}
	}
	return (*out = ret, NO_ERROR);
}

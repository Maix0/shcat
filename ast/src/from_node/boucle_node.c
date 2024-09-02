/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boucle_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:43:35 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/02 17:32:38 by rparodi          ###   ########.fr       */
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

t_vec_ast	*_append_scripting(\
	t_ast_node node)
{
	if (node->kind == AST_WHILE)
		return (&node->data.while_.suffixes_redirections);
	if (node->kind == AST_FOR)
		return (&node->data.for_.suffixes_redirections);
	if (node->kind == AST_IF)
		return (&node->data.if_.suffixes_redirections);
	if (node->kind == AST_UNTIL)
		return (&node->data.until.suffixes_redirections);
	return (NULL);
}

t_error	build_sym_for_statement(\
	t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_ast_node	tmp;
	t_usize		i;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_for_statement)
		return (ERROR);
	ret = ast_alloc(AST_FOR);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (!ts_node_is_named(ts_node_child(self, i)) && (i++, true))
			continue ;
		if (ts_node_field_id_for_child(self, i) == field_var)
		{
			ret->data.for_.var_name = \
			_extract_str(ts_node_child(self, i), input);
		}
		if (ts_node_field_id_for_child(self, i) == field_value)
		{
			if (ast_from_node(ts_node_child(self, i), input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.for_.words, tmp);
		}
		if (ts_node_field_id_for_child(self, i) == field_body)
		{
			if (ast_from_node(ts_node_child(self, i), input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.for_.do_, tmp);
		}
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_while_statement(\
	t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node				ret;
	t_ast_node				tmp;
	t_usize					i;
	t_parse_node			child;
	t_ast_terminator_kind	term;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_while_statement)
		return (ERROR);
	i = 0;
	if (ts_node_symbol(ts_node_child(self, 0)) == anon_sym_until)
		ret = ast_alloc(AST_UNTIL);
	else if (ts_node_symbol(ts_node_child(self, 0)) == anon_sym_while)
		ret = ast_alloc(AST_WHILE);
	else
		return (ERROR);
	while (i < ts_node_child_count(self))
	{
		child = ts_node_child(self, i);
		if (!ts_node_is_named(child) && (i++, true))
			continue ;
		if (ts_node_field_id_for_child(self, i) == field_term)
		{
			term = _select_term(ts_node_child(self, i));
			ast_set_term(\
				&ret->data.while_.condition.buffer[\
				ret->data.while_.condition.len - 1], term);
			i++;
			continue ;
		}
		if (ast_from_node(child, input, &tmp))
			return (ast_free(ret), ERROR);
		if (ts_node_field_id_for_child(self, i) == field_stmt)
			vec_ast_push(&ret->data.while_.condition, tmp);
		if (ts_node_field_id_for_child(self, i) == field_body)
			vec_ast_push(&ret->data.while_.do_, tmp);
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_do_group(\
	t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node				ret;
	t_ast_node				tmp;
	t_usize					i;
	t_ast_terminator_kind	term;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_do_group)
		return (ERROR);
	ret = ast_alloc(AST_COMPOUND_STATEMENT);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (ts_node_symbol(ts_node_child(self, i)) == anon_sym_do || \
			ts_node_symbol(ts_node_child(self, i)) == anon_sym_done)
		{
			i++;
			continue ;
		}
		if (ts_node_field_id_for_child(self, i) == field_term && \
			ret->data.compound_statement.body.len != 0)
		{
			term = _select_term(ts_node_child(self, i));
			ast_set_term(&ret->data.compound_statement.body.buffer[\
				ret->data.compound_statement.body.len - 1], term);
		}
		else
		{
			if (ast_from_node(ts_node_child(self, i), input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.compound_statement.body, tmp);
		}
		i++;
	}
	return (*out = ret, NO_ERROR);
}

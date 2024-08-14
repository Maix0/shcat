/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dev_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 15:07:10 by rparodi           #+#    #+#             */
/*   Updated: 2024/08/14 17:28:46 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/_from_node.h"
#include "ast/ast.h"
#include "gmr/field_identifiers.h"
#include "gmr/symbols.h"
#include "me/str/str.h"
#include "me/types.h"
#include "me/vec/vec_ast.h"
#include "parser/api.h"
#include <stdio.h>

t_error build_sym_negated_command(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node ret;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_negated_command)
		return (ERROR);
	if (ts_node_child_count(self) != 1)
		return (ERROR);
	if (ast_from_node(ts_node_child(self, 1), input, &ret))
		return (ERROR);
	_add_negation(&ret);
	return (*out = ret, NO_ERROR);
}

t_error build_sym_pipeline(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node ret;
	t_ast_node tmp;
	t_ast_node tmp2;
	t_usize	   i;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_pipeline)
		return (ERROR);
	ret = ast_alloc(AST_PIPELINE);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (!ts_node_is_named(ts_node_child(self, i)) && (i++, true))
			continue;
		if (ast_from_node(ts_node_child(self, i), input, &tmp))
			return (ast_free(ret), ERROR);
		if (tmp->kind == AST_PIPELINE)
		{
			while (!vec_ast_pop_front(&tmp->data.pipeline.statements, &tmp2))
				vec_ast_push(&ret->data.pipeline.statements, tmp2);
			ast_free(tmp);
		}
		else
			vec_ast_push(&ret->data.pipeline.statements, tmp);
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error build_sym_comment(t_parse_node self, t_const_str input, t_ast_node *out)
{
	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_comment)
		return (ERROR);
	*out = ast_alloc(AST_EMPTY);
	return (NO_ERROR);
}

t_error build_sym_variable_assignment(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	 ret;
	t_parse_node temp_ast;

	(void)(self);
	(void)(input);
	(void)(out);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_variable_assignment)
		return (ERROR);
	ret = ast_alloc(AST_VARIABLE_ASSIGNMENT);
	if (ts_node_child_count(self) >= 2)
	{
		temp_ast = ts_node_child(self, 0);
		if (ts_node_symbol(temp_ast) != sym_variable_name)
			return (ast_free(ret), ERROR);
		ret->data.variable_assignment.name = _extract_str(temp_ast, input);
	}
	if (ts_node_child_count(self) > 2)
	{
		if (ast_from_node(ts_node_child(self, 2), input, &ret->data.variable_assignment.value))
			return (ast_free(ret), ERROR);
	}
	return (*out = ret, NO_ERROR);
}

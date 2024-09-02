/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:33:20 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/02 17:33:41 by rparodi          ###   ########.fr       */
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

t_error	build_sym_compound_statement(\
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
	if (ts_node_symbol(self) != sym_compound_statement)
		return (ERROR);
	ret = ast_alloc(AST_COMPOUND_STATEMENT);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (ts_node_field_id_for_child(self, i) == field_term && \
			ret->data.compound_statement.body.len != 0)
		{
			term = _select_term(ts_node_child(self, i));
			ast_set_term(&ret->data.compound_statement.body.buffer[\
				ret->data.compound_statement.body.len - 1], term);
		}
		else
		{
			if (!ts_node_is_named(ts_node_child(self, i)) && (i++, true))
				continue ;
			if (ast_from_node(ts_node_child(self, i), input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.compound_statement.body, tmp);
		}
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_program(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_usize		i;
	t_ast_node	temp;

	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_program)
		return (ERROR);
	ret = ast_alloc(AST_PROGRAM);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		temp = NULL;
		if (ts_node_field_id_for_child(self, i) == field_stmt)
		{
			if (ast_from_node(ts_node_child(self, i), input, &temp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.program.body, temp);
		}
		if (ts_node_field_id_for_child(self, i) == field_term)
		{
			if (ret->data.program.body.len == 0 && (i++, true))
				continue ;
			ast_set_term(&ret->data.program.body.buffer[\
				ret->data.program.body.len - 1], \
				_select_term(ts_node_child(self, i)));
		}
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_command_name(\
	t_parse_node self, t_const_str input, t_ast_node *out)
{
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_command_name)
		return (ERROR);
	return (ast_from_node(ts_node_child(self, 0), input, out));
}

t_error	build_sym_command(t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_usize		i;
	t_usize		vec_idx;
	t_ast_node	temp;

	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_command)
		return (ERROR);
	ret = ast_alloc(AST_COMMAND);
	i = 0;
	vec_idx = 0;
	while (i < ts_node_child_count(self))
	{
		temp = NULL;
		if (ts_node_field_id_for_child(self, i) == field_name)
			vec_idx++;
		if (ast_from_node(ts_node_child(self, i), input, &temp))
			return (ast_free(ret), ERROR);
		vec_ast_push(_vec_command(&ret->data.command, vec_idx), temp);
		i++;
	}
	return (*out = ret, NO_ERROR);
}

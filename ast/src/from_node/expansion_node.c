/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expansion_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:26:15 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/02 17:34:28 by rparodi          ###   ########.fr       */
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

t_error	build_sym_regex(\
	t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_regex)
		return (ERROR);
	ret = ast_alloc(AST_REGEX);
	ret->data.regex.pattern = _extract_str(self, input);
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_extglob_pattern(\
	t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_extglob_pattern)
		return (ERROR);
	ret = ast_alloc(AST_EXTGLOB);
	ret->data.extglob.pattern = _extract_str(self, input);
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_expansion(\
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
	if (ts_node_symbol(self) != sym_expansion)
		return (ERROR);
	ret = ast_alloc(AST_EXPANSION);
	ret->data.expansion.kind = E_OP_NONE;
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (!ts_node_is_named(ts_node_child(self, i)) && (i++, true))
			continue ;
		if (ts_node_field_id_for_child(self, i) == field_len)
			ret->data.expansion.len_operator = true;
		if (ts_node_field_id_for_child(self, i) == field_name)
			ret->data.expansion.var_name = \
			_extract_str(ts_node_child(self, i), input);
		if (ts_node_field_id_for_child(self, i) == field_op)
			ret->data.expansion.kind = _extract_exp_op(ts_node_child(self, i));
		if (ts_node_field_id_for_child(self, i) == field_args)
		{
			if (ast_from_node(ts_node_child(self, i), input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.expansion.args, tmp);
		}
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_simple_expansion(\
	t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_usize		i;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_simple_expansion)
		return (ERROR);
	ret = ast_alloc(AST_EXPANSION);
	ret->data.expansion.kind = E_OP_NONE;
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (!ts_node_is_named(ts_node_child(self, i)) && (i++, true))
			continue ;
		ret->data.expansion.var_name = \
		_extract_str(ts_node_child(self, i), input);
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_command_substitution(\
	t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_ast_node	tmp;
	t_usize		i;

	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_command_substitution)
		return (ERROR);
	ret = ast_alloc(AST_COMMAND_SUBSTITUTION);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (!ts_node_is_named(ts_node_child(self, i)) && (i++, true))
			continue ;
		if (ts_node_symbol(ts_node_child(self, i)) == field_term)
		{
			if (ret->data.command_substitution.body.len != 0)
				ast_set_term(&ret->data.command_substitution.body.buffer[\
				ret->data.command_substitution.body.len - 1], \
				_select_term(ts_node_child(self, i)));
		}
		else
		{
			if (ast_from_node(ts_node_child(self, i), input, &tmp))
				return (ast_free(ret), ERROR);
			vec_ast_push(&ret->data.command_substitution.body, tmp);
		}
		i++;
	}
	return (*out = ret, NO_ERROR);
}

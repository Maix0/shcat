/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arithmetic_node2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 11:21:06 by rparodi           #+#    #+#             */
/*   Updated: 2024/08/04 11:21:36 by rparodi          ###   ########.fr       */
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

t_error	check_error_ternary(t_node self, t_ast_node *out)
{
	if (out == NULL)
		return (ERROR);
	if (ts_node_child_count(self) != 5)
		return (ERROR);
	if (ts_node_symbol(self) != sym_arithmetic_ternary_expression)
		return (ERROR);
	return (NO_ERROR);
}

t_error	build_sym_arithmetic_ternary_expression(\
	t_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_usize		i;

	if (check_error_ternary(self, out))
		return (ERROR);
	i = 0;
	ret = ast_alloc(AST_ARITHMETIC_TERNARY);
	while (i < ts_node_child_count(self))
	{
		if (ts_node_field_id_for_child(self, i) == field_cond)
			if (ast_from_node(ts_node_child(self, i), \
				input, &ret->data.arithmetic_ternary.condition))
				return (ast_free(ret), ERROR);
		if (ts_node_field_id_for_child(self, i) == field_then)
			if (ast_from_node(ts_node_child(self, i), \
				input, &ret->data.arithmetic_ternary.then))
				return (ast_free(ret), ERROR);
		if (ts_node_field_id_for_child(self, i) == field_else)
			if (ast_from_node(ts_node_child(self, i), \
				input, &ret->data.arithmetic_ternary.else_))
				return (ast_free(ret), ERROR);
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_arithmetic_unary_expression(\
	t_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;

	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_arithmetic_unary_expression)
		return (ERROR);
	if (ts_node_child_count(self) != 2)
		return (ERROR);
	ret = ast_alloc(AST_ARITHMETIC_UNARY);
	if (ts_node_field_id_for_child(self, 0) == field_op)
		ret->data.arithmetic_unary.operator = _parse_operator(\
			ts_node_child(self, 0));
	if (ast_from_node(ts_node_child(self, 1), \
		input, &ret->data.arithmetic_unary.value))
		return (ast_free(ret), ERROR);
	return (*out = ret, NO_ERROR);
}

t_error	arithmetic_choice(\
	t_node self, t_const_str input, t_ast_node *out, t_usize i)
{
	if (ts_node_field_id_for_child(self, i) \
		== sym_arithmetic_binary_expression)
		return (build_sym_arithmetic_binary_expression(self, input, out));
	if (ts_node_field_id_for_child(self, i) == sym_arithmetic_literal)
		return (build_sym_arithmetic_literal(self, input, out));
	if (ts_node_field_id_for_child(self, i) \
		== sym_arithmetic_parenthesized_expression)
		return (build_sym_arithmetic_parenthesized_expression(\
				self, input, out));
	if (ts_node_field_id_for_child(self, i) \
		== sym_arithmetic_postfix_expression)
		return (build_sym_arithmetic_postfix_expression(self, input, out));
	if (ts_node_field_id_for_child(self, i) \
		== sym_arithmetic_ternary_expression)
		return (build_sym_arithmetic_ternary_expression(self, input, out));
	if (ts_node_field_id_for_child(self, i) \
		== sym_arithmetic_unary_expression)
		return (build_sym_arithmetic_unary_expression(self, input, out));
	return (ERROR);
}

t_error	build_sym_arithmetic_expansion(\
	t_node self, t_const_str input, t_ast_node *out)
{
	t_usize		i;
	t_ast_node	ret;

	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_arithmetic_expansion)
		return (ERROR);
	ret = ast_alloc(AST_ARITHMETIC_EXPANSION);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (arithmetic_choice(self, input, out, i))
			return (ERROR);
		i++;
	}
	return (*out = ret, NO_ERROR);
}

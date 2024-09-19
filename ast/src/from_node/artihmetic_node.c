/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   artihmetic_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 11:07:59 by rparodi           #+#    #+#             */
/*   Updated: 2024/08/04 11:21:25 by rparodi          ###   ########.fr       */
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

t_ast_arithmetic_operator	_parse_operator(t_node self)
{
	t_symbol	symbol;

	symbol = ts_node_grammar_symbol(self);
	if (symbol == anon_sym_PLUS)
		return (ARITH_PLUS);
	if (symbol == anon_sym_DASH)
		return (ARITH_MINUS);
	if (symbol == anon_sym_STAR)
		return (ARITH_MULT);
	if (symbol == anon_sym_SLASH)
		return (ARITH_DIVIDE);
	if (symbol == anon_sym_PERCENT)
		return (ARITH_MOD);
	if (symbol == anon_sym_PLUS_PLUS)
		return (ARITH_INCREMENT);
	if (symbol == anon_sym_DASH_DASH)
		return (ARITH_DECREMENT);
	if (symbol == anon_sym_BANG)
		return (ARITH_NOT);
	return (me_abort("invalid arithmetic operator"), 0);
}

t_error	build_sym_arithmetic_binary_expression(\
		t_node self, t_const_str input, t_ast_node *out)
{
	t_usize		i;
	t_ast_node	ret;

	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_arithmetic_binary_expression)
		return (ERROR);
	i = 0;
	ret = ast_alloc(AST_ARITHMETIC_BINARY);
	while (i < ts_node_child_count(self))
	{
		if (ts_node_field_id_for_child(self, i) == field_lhs)
			if (ast_from_node(ts_node_child(self, i), \
				input, &ret->data.arithmetic_binary.lhs))
				return (ERROR);
		if (ts_node_field_id_for_child(self, i) == field_op)
			ret->data.arithmetic_binary.op = _parse_operator(\
				ts_node_child(self, i));
		if (ts_node_field_id_for_child(self, i) == field_rhs)
			if (ast_from_node(ts_node_child(self, i), \
				input, &ret->data.arithmetic_binary.rhs))
				return (ERROR);
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_arithmetic_literal(\
		t_node self, t_const_str input, t_ast_node *out)
{
	t_usize		i;
	t_ast_node	ret;

	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_arithmetic_literal)
		return (ERROR);
	i = 0;
	ret = ast_alloc(AST_ARITHMETIC_LITTERAL);
	if (ast_from_node(\
		ts_node_child(self, i), input, &ret->data.arithmetic_literal.value))
		return (ERROR);
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_arithmetic_parenthesized_expression( \
	t_node self, t_const_str input, t_ast_node *out)
{
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_arithmetic_parenthesized_expression)
		return (ERROR);
	return (ast_from_node(ts_node_child(self, 1), input, out));
}

t_error	build_sym_arithmetic_postfix_expression(\
	t_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;

	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_arithmetic_postfix_expression)
		return (ERROR);
	if (ts_node_child_count(self) != 2)
		return (ERROR);
	ret = ast_alloc(AST_ARITHMETIC_POSTFIX);
	if (ast_from_node(ts_node_child(self, 0), \
		input, &ret->data.arithmetic_postfix.value))
		return (ast_free(ret), ERROR);
	if (ts_node_field_id_for_child(self, 1) == field_op)
		ret->data.arithmetic_postfix.op = _parse_operator(\
			ts_node_child(self, 1));
	else
		return (ast_free(ret), ERROR);
	return (*out = ret, NO_ERROR);
}

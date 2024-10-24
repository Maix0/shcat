/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arithmetic_operation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 21:23:07 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/12 17:51:20 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_arith.h"

t_error	_binary_op_add(t_ast_node self, t_state *state, t_i64 *out)
{
	t_i64	lhs;
	t_i64	rhs;

	if (self == NULL || state == NULL || out == NULL || \
		self->kind == AST_ARITHMETIC_BINARY)
		return (ERROR);
	if (_get_node_number(self->data.arithmetic_binary.lhs, state, &lhs))
		return (ERROR);
	if (_get_node_number(self->data.arithmetic_binary.rhs, state, &rhs))
		return (ERROR);
	*out = lhs + rhs;
	return (NO_ERROR);
}

t_error	_binary_op_sub(t_ast_node self, t_state *state, t_i64 *out)
{
	t_i64	lhs;
	t_i64	rhs;

	if (self == NULL || state == NULL || out == NULL || \
		self->kind == AST_ARITHMETIC_BINARY)
		return (ERROR);
	if (_get_node_number(self->data.arithmetic_binary.lhs, state, &lhs))
		return (ERROR);
	if (_get_node_number(self->data.arithmetic_binary.rhs, state, &rhs))
		return (ERROR);
	*out = lhs - rhs;
	return (NO_ERROR);
}

t_error	_binary_op_mul(t_ast_node self, t_state *state, t_i64 *out)
{
	t_i64	lhs;
	t_i64	rhs;

	if (self == NULL || state == NULL || out == NULL || \
	self->kind == AST_ARITHMETIC_BINARY)
		return (ERROR);
	if (_get_node_number(self->data.arithmetic_binary.lhs, state, &lhs))
		return (ERROR);
	if (_get_node_number(self->data.arithmetic_binary.rhs, state, &rhs))
		return (ERROR);
	*out = lhs * rhs;
	return (NO_ERROR);
}

t_error	_binary_op_div(t_ast_node self, t_state *state, t_i64 *out)
{
	t_i64	lhs;
	t_i64	rhs;

	if (self == NULL || state == NULL || out == NULL || \
		self->kind == AST_ARITHMETIC_BINARY)
		return (ERROR);
	if (_get_node_number(self->data.arithmetic_binary.lhs, state, &lhs))
		return (ERROR);
	if (_get_node_number(self->data.arithmetic_binary.rhs, state, &rhs))
		return (ERROR);
	if (rhs == 0)
		return (ERROR);
	*out = lhs / rhs;
	return (NO_ERROR);
}

t_error	_binary_op_mod(t_ast_node self, t_state *state, t_i64 *out)
{
	t_i64	lhs;
	t_i64	rhs;

	if (self == NULL || state == NULL || out == NULL || \
		self->kind == AST_ARITHMETIC_BINARY)
		return (ERROR);
	if (_get_node_number(self->data.arithmetic_binary.lhs, state, &lhs))
		return (ERROR);
	if (_get_node_number(self->data.arithmetic_binary.rhs, state, &rhs))
		return (ERROR);
	if (rhs == 0)
		return (ERROR);
	*out = lhs % rhs;
	return (NO_ERROR);
}

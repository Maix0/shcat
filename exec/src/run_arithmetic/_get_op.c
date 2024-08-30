/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _get_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:56:29 by rparodi           #+#    #+#             */
/*   Updated: 2024/08/30 17:58:54 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_arith.h"
#include "me/types.h"
#include "me/convert/str_to_numbers.h"

/// ADD OPERATOR STUFF
t_error	_binary_get_op(t_ast_arithmetic_operator op, t_arith_op_func *out)
{
	if (out == NULL)
		return (ERROR);
	if (op == ARITH_PLUS)
		return (*out = _binary_op_add, NO_ERROR);
	if (op == ARITH_MINUS)
		return (*out = _binary_op_sub, NO_ERROR);
	if (op == ARITH_MULT)
		return (*out = _binary_op_mul, NO_ERROR);
	if (op == ARITH_DIVIDE)
		return (*out = _binary_op_div, NO_ERROR);
	return (ERROR);
}

// t_ast_node	_postfix_op_decrement(t_ast_node )

t_error	_postfix_get_op(t_ast_arithmetic_operator op, t_arith_op_func *out)
{
	if (op == ARITH_INCREMENT)
		return (*out = _postfix_op_inc, NO_ERROR);
	if (op == ARITH_DECREMENT)
		return (*out = _postfix_op_dec, NO_ERROR);
	return (ERROR);
}

t_error	_unary_get_op(t_ast_arithmetic_operator op, t_arith_op_func *out)
{
	if (op == ARITH_INCREMENT)
		return (*out = _unary_op_plus, NO_ERROR);
	if (op == ARITH_DECREMENT)
		return (*out = _unary_op_minus, NO_ERROR);
	return (ERROR);
}

t_error	_get_node_number(t_ast_node self, t_state *state, t_i64 *out)
{
	if (self == NULL || state == NULL || out == NULL)
		return (ERROR);
	if (self->kind == AST_ARITHMETIC_LITTERAL)
		return (run_arithmetic_literal(\
				&self->data.arithmetic_literal, state, out));
	if (self->kind == AST_ARITHMETIC_BINARY)
		return (run_arithmetic_binary(\
				&self->data.arithmetic_binary, state, out));
	return (ERROR);
}

//NOT FINISH
// this is black magic don't worry
t_ast_node	_arith_binary_to_ast_node(t_ast_arithmetic_binary *self)
{
	t_u8	*ptr;

	ptr = (void *)(self);
	return ((void *)(ptr - offsetof(\
					struct s_ast_node, data.arithmetic_binary)));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arith.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 15:14:50 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/30 17:15:00 by rparodi          ###   ########.fr       */
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

//NOT FINISH
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

// this is black magic don't worry
t_ast_node	_arith_binary_to_ast_node(t_ast_arithmetic_binary *self)
{
	t_u8	*ptr;

	ptr = (void *)(self);
	return ((void *)(ptr - offsetof(\
					struct s_ast_node, data.arithmetic_binary)));
}

t_ast_node	_arith_ternary_to_ast_node(t_ast_arithmetic_ternary *self)
{
	t_u8	*ptr;

	ptr = (void *)(self);
	return ((void *)(ptr - offsetof(\
					struct s_ast_node, data.arithmetic_ternary)));
}

t_ast_node	_arith_unary_to_ast_node(t_ast_arithmetic_unary *self)
{
	t_u8	*ptr;

	ptr = (void *)(self);
	return ((void *)(ptr - offsetof(\
					struct s_ast_node, data.arithmetic_unary)));
}

t_ast_node	_arith_postfix_to_ast_node(t_ast_arithmetic_postfix *self)
{
	t_u8	*ptr;

	ptr = (void *)(self);
	return ((void *)(ptr - offsetof(\
					struct s_ast_node, data.arithmetic_postfix)));
}

// this is black magic don't worry
t_ast_node	_arith_literal_to_ast_node(t_ast_arithmetic_literal *self)
{
	t_u8	*ptr;

	ptr = (void *)(self);
	return ((void *)(ptr - offsetof(\
					struct s_ast_node, data.arithmetic_literal)));
}

// this is black magic don't worry
t_ast_node	_arith_expansion_to_ast_node(t_ast_arithmetic_expansion *self)
{
	t_u8	*ptr;

	ptr = (void *)(self);
	return ((void *)(ptr \
		- offsetof(struct s_ast_node, data.arithmetic_expansion)));
}

/// AFTER 65
/// the from node needs to change
/// if they find a raw_string, it is a variable expansion,
/// so create a AST_EXPANSION
/// AFTER 67
/// probably an variable expansion i guess
t_error	run_arithmetic_literal(t_ast_arithmetic_literal *arithmetic_literal, \
		t_state *state, t_i64 *out)
{
	if (arithmetic_literal == NULL || state == NULL || out == NULL)
		return (ERROR);
	if (arithmetic_literal->value->kind == AST_RAW_STRING)
		return (str_to_i64(\
				arithmetic_literal->value->data.raw_string.str, 10, out));
	return (ERROR);
}

/*
t_error	run_arithmetic_expansion( \
t_ast_arithmetic_expansion *arithmetic_expansion, t_state *state, t_i64 *out)
{
	t_arith_op_func	func;
	t_i64			ret;

	if (arithmetic_expansion == NULL || state == NULL || out == NULL)
		return (ERROR);
	if (_get_node_number(\
		_arith_expansion_to_ast_node(arithmetic_expansion), state, &ret))
		return (ERROR);
	*out = ret;
	return (NO_ERROR);
}
*/

t_error	run_arithmetic_binary(t_ast_arithmetic_binary *arithmetic_binary, \
		t_state *state, t_i64 *out)
{
	t_arith_op_func	func;

	if (arithmetic_binary == NULL || state == NULL || out == NULL)
		return (ERROR);
	if (_binary_get_op(arithmetic_binary->op, &func))
		return (ERROR);
	if (func(_arith_binary_to_ast_node(arithmetic_binary), state, out))
		return (ERROR);
	return (NO_ERROR);
}

t_error	run_arithmetic_ternary(t_ast_arithmetic_ternary *arithmetic_ternary, \
		t_state *state, t_i64 *out)
{
	t_i64			cond;

	if (arithmetic_ternary == NULL || state == NULL || out == NULL)
		return (ERROR);
	if (_get_node_number(arithmetic_ternary->condition, state, &cond))
		return (ERROR);
	if (cond != 0)
	{
		if (_get_node_number(arithmetic_ternary->then, state, out))
			return (ERROR);
	}
	else
	{
		if (_get_node_number(arithmetic_ternary->else_, state, out))
			return (ERROR);
	}
	return (NO_ERROR);
}

t_error	run_arithmetic_postfix( \
t_ast_arithmetic_postfix *arithmetic_postfix, t_state *state, t_i64 *out)
{
	t_arith_op_func	func;

	if (arithmetic_postfix == NULL || state == NULL || out == NULL)
		return (ERROR);
	if (_postfix_get_op(arithmetic_postfix->op, &func))
		return (ERROR);
	if (func(_arith_postfix_to_ast_node(arithmetic_postfix), state, out))
		return (ERROR);
	return (NO_ERROR);
}

t_error	run_arithmetic_unary( \
t_ast_arithmetic_unary *arithmetic_unary, t_state *state, t_i64 *out)
{
	t_arith_op_func	func;

	if (arithmetic_unary == NULL || state == NULL || out == NULL)
		return (ERROR);
	if (_unary_get_op(arithmetic_unary->operator, &func))
		return (ERROR);
	if (func(_arith_unary_to_ast_node(arithmetic_unary), state, out))
		return (ERROR);
	return (NO_ERROR);
}

t_error	run_arithmetic_expansion( \
t_ast_arithmetic_expansion *arithmetic_expansion, t_state *state, t_i64 *out)
{
	if (arithmetic_expansion == NULL || state == NULL || out == NULL)
		return (ERROR);
	return (_get_node_number(arithmetic_expansion->expr, state, out));
}

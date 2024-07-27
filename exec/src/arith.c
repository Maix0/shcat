/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arith.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 15:14:50 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/27 14:43:31 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/state.h"
#include "ast/ast.h"
#include "exec/run.h"
#include "me/convert/numbers_to_str.h"
#include "me/convert/str_to_numbers.h"
#include "me/hashmap/hashmap_env.h"
#include "me/mem/mem.h"
#include "me/os/pipe.h"
#include "me/os/process.h"
#include "me/str/str.h"
#include "me/string/string.h"
#include "me/types.h"
#include "me/vec/vec_estr.h"
#include "me/vec/vec_str.h"

#include <stddef.h>
#include <stdio.h>

#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-variable"

typedef t_error (*t_arith_op_func)(t_ast_node self, t_state *state, t_i64 *out);

t_error run_arithmetic_binary(t_ast_arithmetic_binary *arithmetic_binary, t_state *state, t_i64 *out);
t_error run_arithmetic_literal(t_ast_arithmetic_literal *arithmetic_literal, t_state *state, t_i64 *out);
t_error run_arithmetic_postfix(t_ast_arithmetic_postfix *arithmetic_postfix, t_state *state, t_i64 *out);
t_error run_arithmetic_ternary(t_ast_arithmetic_ternary *arithmetic_ternary, t_state *state, t_i64 *out);
t_error run_arithmetic_unary(t_ast_arithmetic_unary *arithmetic_unary, t_state *state, t_i64 *out);
t_error run_arithmetic_expansion(t_ast_arithmetic_expansion *arithmetic_expansion, t_state *state, t_i64 *out);

t_error _get_node_number(t_ast_node self, t_state *state, t_i64 *out);

t_error _binary_op_add(t_ast_node self, t_state *state, t_i64 *out);
t_error _binary_op_sub(t_ast_node self, t_state *state, t_i64 *out);
t_error _binary_op_mul(t_ast_node self, t_state *state, t_i64 *out);
t_error _binary_op_div(t_ast_node self, t_state *state, t_i64 *out);
t_error _binary_op_mod(t_ast_node self, t_state *state, t_i64 *out);

t_error _binary_op_add(t_ast_node self, t_state *state, t_i64 *out)
{
	t_i64 lhs;
	t_i64 rhs;

	if (self == NULL || state == NULL || out == NULL || self->kind == AST_ARITHMETIC_BINARY)
		return (ERROR);
	if (_get_node_number(self->data.arithmetic_binary.lhs, state, &lhs))
		return (ERROR);
	if (_get_node_number(self->data.arithmetic_binary.rhs, state, &rhs))
		return (ERROR);
	// do check for invalid values here (like rhs == 0 for div/mod)
	*out = lhs + rhs;
	return (NO_ERROR);
}

t_error _binary_get_op(t_ast_arithmetic_operator op, t_arith_op_func *out)
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
	if (op == ARITH_MOD)
		return (*out = _binary_op_mod, NO_ERROR);
	/// add remaining;
	return (ERROR);
}

t_error _get_node_number(t_ast_node self, t_state *state, t_i64 *out)
{
	if (self == NULL || state == NULL || out == NULL)
		return (ERROR);
	if (self->kind == AST_ARITHMETIC_LITTERAL)
		return (run_arithmetic_literal(&self->data.arithmetic_literal, state, out));
	if (self->kind == AST_ARITHMETIC_BINARY)
		return (run_arithmetic_binary(&self->data.arithmetic_binary, state, out));
	// ADD OTHER STUFF HERE
	return (ERROR);
}

// this is black magic don't worry
t_ast_node _arith_binary_to_ast_node(t_ast_arithmetic_binary *self)
{
	t_u8 *ptr;

	ptr = (void *)(self);
	return ((void *)(ptr - offsetof(struct s_ast_node, data.arithmetic_binary)));
}

t_error run_arithmetic_literal(t_ast_arithmetic_literal *arithmetic_literal, t_state *state, t_i64 *out)
{

	if (arithmetic_literal == NULL || state == NULL || out == NULL)
		return (ERROR);
	/// the from node needs to change
	/// if they find a raw_string, it is a variable expansion, so create a AST_EXPANSION
	if (arithmetic_literal->value->kind == AST_RAW_STRING)
		return (str_to_i64(arithmetic_literal->value->data.raw_string.str, 10, out));
	// probably an variable expansion i guess
	return (ERROR);
}

t_error run_arithmetic_binary(t_ast_arithmetic_binary *arithmetic_binary, t_state *state, t_i64 *out)
{
	t_arith_op_func func;

	if (arithmetic_binary == NULL || state == NULL || out == NULL)
		return (ERROR);
	if (_binary_get_op(arithmetic_binary->op, &func))
		return (ERROR);
	if (func(_arith_binary_to_ast_node(arithmetic_binary), state, out))
		return (ERROR);
	return (NO_ERROR);
}

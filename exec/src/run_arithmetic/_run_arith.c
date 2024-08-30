/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _run_arith.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 18:01:31 by rparodi           #+#    #+#             */
/*   Updated: 2024/08/30 18:02:13 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_arith.h"
#include "me/types.h"
#include "me/convert/str_to_numbers.h"

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arithmetic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 15:14:50 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/30 19:26:44 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_arith.h"
#include "me/types.h"
#include "me/convert/str_to_numbers.h"

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

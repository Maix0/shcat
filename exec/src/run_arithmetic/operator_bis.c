/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_bis.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:45:46 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/02 19:27:31 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_arith.h"
#include "me/types.h"

t_error	_postfix_op_dec(t_ast_node self, t_state *state, t_i64 *out)
{
	(void)(self);
	(void)(state);
	(void)(out);
	return (ERROR);
}

t_error	_postfix_op_inc(t_ast_node self, t_state *state, t_i64 *out)
{
	(void)(self);
	(void)(state);
	(void)(out);
	return (ERROR);
}

t_error	_unary_op_minus(t_ast_node self, t_state *state, t_i64 *out)
{
	t_i64	val;

	(void)(self);
	(void)(state);
	(void)(out);
	if (_get_node_number(self, state, &val))
		return (ERROR);
	val = -val;
	*out = val;
	return (NO_ERROR);
}

t_error	_unary_op_plus(t_ast_node self, t_state *state, t_i64 *out)
{
	return (_get_node_number(self, state, out));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _run_arith.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 21:13:15 by rparodi           #+#    #+#             */
/*   Updated: 2024/08/30 19:29:43 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _RUN_ARITH_H
# define _RUN_ARITH_H

# include "app/state.h"
# include "ast/ast.h"
# include "me/types.h"
# include <unistd.h>

typedef t_error	(*t_arith_op_func)(t_ast_node self, t_state *state, t_i64 *out);

t_error		run_arithmetic_binary( \
t_ast_arithmetic_binary *arithmetic_binary, t_state *state, t_i64 *out);
t_error		run_arithmetic_literal( \
t_ast_arithmetic_literal *arithmetic_literal, t_state *state, t_i64 *out);
t_error		run_arithmetic_postfix( \
t_ast_arithmetic_postfix *arithmetic_postfix, t_state *state, t_i64 *out);
t_error		run_arithmetic_ternary( \
t_ast_arithmetic_ternary *arithmetic_ternary, t_state *state, t_i64 *out);
t_error		run_arithmetic_unary( \
t_ast_arithmetic_unary *arithmetic_unary, t_state *state, t_i64 *out);
t_error		run_arithmetic_expansion( \
t_ast_arithmetic_expansion *arithmetic_expansion, t_state *state, t_i64 *out);

t_error		_get_node_number(t_ast_node self, t_state *state, t_i64 *out);

t_error		_binary_op_add(t_ast_node self, t_state *state, t_i64 *out);
t_error		_binary_op_div(t_ast_node self, t_state *state, t_i64 *out);
t_error		_binary_op_mod(t_ast_node self, t_state *state, t_i64 *out);
t_error		_binary_op_mul(t_ast_node self, t_state *state, t_i64 *out);
t_error		_binary_op_sub(t_ast_node self, t_state *state, t_i64 *out);

t_error		_postfix_op_dec(t_ast_node self, t_state *state, t_i64 *out);
t_error		_postfix_op_inc(t_ast_node self, t_state *state, t_i64 *out);

t_error		_unary_op_minus(t_ast_node self, t_state *state, t_i64 *out);
t_error		_unary_op_plus(t_ast_node self, t_state *state, t_i64 *out);

t_ast_node	_arith_binary_to_ast_node(t_ast_arithmetic_binary *self);
t_ast_node	_arith_expansion_to_ast_node(t_ast_arithmetic_expansion *self);
t_ast_node	_arith_literal_to_ast_node(t_ast_arithmetic_literal *self);
t_ast_node	_arith_postfix_to_ast_node(t_ast_arithmetic_postfix *self);
t_ast_node	_arith_ternary_to_ast_node(t_ast_arithmetic_ternary *self);
t_ast_node	_arith_unary_to_ast_node(t_ast_arithmetic_unary *self);

t_error		_unary_get_op(t_ast_arithmetic_operator op, t_arith_op_func *out);
t_error		_binary_get_op(t_ast_arithmetic_operator op, t_arith_op_func *out);
t_error		_postfix_get_op(t_ast_arithmetic_operator op, t_arith_op_func *out);

#endif

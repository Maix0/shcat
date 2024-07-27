/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arith.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 21:13:15 by rparodi           #+#    #+#             */
/*   Updated: 2024/07/27 21:21:17 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARITH_H
# define ARITH_H

# include <stddef.h>
# include <stdio.h>

# include "app/state.h"
# include "ast/ast.h"
# include "exec/run.h"
# include "me/convert/numbers_to_str.h"
# include "me/convert/str_to_numbers.h"
# include "me/hashmap/hashmap_env.h"
# include "me/mem/mem.h"
# include "me/os/pipe.h"
# include "me/os/process.h"
# include "me/str/str.h"
# include "me/string/string.h"
# include "me/types.h"
# include "me/vec/vec_estr.h"
# include "me/vec/vec_str.h"

typedef t_error	(*t_arith_op_func)(t_ast_node self, t_state *state, t_i64 *out);

t_error	run_arithmetic_binary(t_ast_arithmetic_binary *arithmetic_binary, \
		t_state *state, t_i64 *out);
t_error	run_arithmetic_literal(t_ast_arithmetic_literal *arithmetic_literal, \
		t_state *state, t_i64 *out);
t_error	run_arithmetic_postfix(t_ast_arithmetic_postfix *arithmetic_postfix, \
		t_state *state, t_i64 *out);
t_error	run_arithmetic_ternary(t_ast_arithmetic_ternary *arithmetic_ternary, \
		t_state *state, t_i64 *out);
t_error	run_arithmetic_unary(t_ast_arithmetic_unary *arithmetic_unary, \
		t_state *state, t_i64 *out);
t_error	run_arithmetic_expansion( \
		t_ast_arithmetic_expansion *arithmetic_expansion, \
		t_state *state, t_i64 *out);

t_error	_get_node_number(t_ast_node self, t_state *state, t_i64 *out);

t_error	_binary_op_add(t_ast_node self, t_state *state, t_i64 *out);
t_error	_binary_op_sub(t_ast_node self, t_state *state, t_i64 *out);
t_error	_binary_op_mul(t_ast_node self, t_state *state, t_i64 *out);
t_error	_binary_op_div(t_ast_node self, t_state *state, t_i64 *out);
t_error	_binary_op_mod(t_ast_node self, t_state *state, t_i64 *out);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arith.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 15:14:50 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/26 15:20:41 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/state.h"
#include "ast/ast.h"
#include "exec/run.h"
#include "me/convert/numbers_to_str.h"
#include "me/hashmap/hashmap_env.h"
#include "me/mem/mem.h"
#include "me/os/pipe.h"
#include "me/os/process.h"
#include "me/str/str.h"
#include "me/string/string.h"
#include "me/types.h"
#include "me/vec/vec_estr.h"
#include "me/vec/vec_str.h"

#include <stdio.h>

#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-variable"

t_error run_arithmetic_binary(t_ast_arithmetic_binary *arithmetic_binary, t_state *state, void *out);
t_error run_arithmetic_literal(t_ast_arithmetic_literal *arithmetic_literal, t_state *state, void *out);
t_error run_arithmetic_postfix(t_ast_arithmetic_postfix *arithmetic_postfix, t_state *state, void *out);
t_error run_arithmetic_ternary(t_ast_arithmetic_ternary *arithmetic_ternary, t_state *state, void *out);
t_error run_arithmetic_unary(t_ast_arithmetic_unary *arithmetic_unary, t_state *state, void *out);
t_error run_arithmetic_expansion(t_ast_arithmetic_expansion *arithmetic_expansion, t_state *state, void *out);

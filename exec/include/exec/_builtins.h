/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _builtins.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:43:56 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:15 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUILTINS_H
# define _BUILTINS_H

# include "app/env.h"
# include "app/state.h"
# include "exec/_run_ast.h"
# include "me/os/os.h"
# include "me/types.h"
# include "me/vec/vec_str.h"

typedef struct s_builtin_spawn_info	t_builtin_spawn_info;

struct s_builtin_spawn_info
{
	t_state		*state;
	t_vec_str	args;
	t_fd		*stdin;
	t_fd		*stdout;
	t_fd		*stderr;
};

t_error			builtin_cd____(\
	t_state *state, t_builtin_spawn_info info, t_i32 *exit_code);
t_error			builtin_echo__(\
	t_state *state, t_builtin_spawn_info info, t_i32 *exit_code);
t_error			builtin_env___(\
	t_state *state, t_builtin_spawn_info info, t_i32 *exit_code);
t_error			builtin_exit__(\
	t_state *state, t_builtin_spawn_info info, t_i32 *exit_code);
t_error			builtin_export(\
	t_state *state, t_builtin_spawn_info info, t_i32 *exit_code);
t_error			builtin_pwd___(\
	t_state *state, t_builtin_spawn_info info, t_i32 *exit_code);
t_error			builtin_unset_(\
	t_state *state, t_builtin_spawn_info info, t_i32 *exit_code);
t_error			builtin_debug_(\
	t_state *state, t_builtin_spawn_info info, t_i32 *exit_code);

#endif /* BUILTINS_H */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtins.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:43:56 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/10 19:36:59 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUILTINS_H
#define BUILTINS_H

#include "app/env.h"
#include "app/state.h"
#include "exec/_run_ast.h"
#include "me/os/os.h"
#include "me/types.h"
#include "me/vec/vec_str.h"

typedef t_error (*t_builtin_func)(t_state *state, t_spawn_info info);

t_error builtin_cd____(t_state *state, t_spawn_info info);
t_error builtin_echo__(t_state *state, t_spawn_info info);
t_error builtin_env___(t_state *state, t_spawn_info info);
t_error builtin_exit__(t_state *state, t_spawn_info info);
t_error builtin_export(t_state *state, t_spawn_info info);
t_error builtin_pwd___(t_state *state, t_spawn_info info);
t_error builtin_unset_(t_state *state, t_spawn_info info);

#endif /* BUILTINS_H */

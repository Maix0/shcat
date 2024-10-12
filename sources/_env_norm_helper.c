/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _env_norm_helper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:39:47 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/12 17:52:00 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/env.h"
#include "me/string/string.h"
#include "me/hash/hasher.h"
#include "me/hashmap/hashmap_env.h"
#include "me/mem/mem.h"
#include "me/str/str.h"
#include "me/str/str.h"
#include "me/str/str.h"
#include "me/types.h"
#include "me/vec/vec_str.h"
#include <stdlib.h>

t_error	_build_envp_iterator(t_usize idx, const t_str *key, t_str *val, \
							void *ctx);

t_error	build_envp(\
	t_hashmap_env *envs, t_hashmap_env *tmp_vars, t_vec_str *envp)
{
	struct s_build_envp_state	state;

	state.tmp_vars = tmp_vars;
	state.buf = string_new(8096);
	state.out = vec_str_new(1024, (void (*)(t_str))mem_free);
	if (hmap_env_iter(envs, _build_envp_iterator, &state))
		return (string_free(state.buf), ERROR);
	if (vec_str_push(&state.out, NULL))
		return (string_free(state.buf), ERROR);
	*envp = state.out;
	string_free(state.buf);
	return (NO_ERROR);
}

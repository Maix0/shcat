/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:32:50 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/10 21:48:31 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/env.h"
#include "me/buffered_str/buf_str.h"
#include "me/hash/hasher.h"
#include "me/hashmap/hashmap_env.h"
#include "me/string/str_compare.h"
#include "me/types.h"
#include "me/vec/vec_str.h"
#include <stdlib.h>

static void _hash_str(t_hasher *hasher, t_str *s)
{
	hasher_write_str(hasher, *s);
}

static bool _cmp_str(t_str *s1, t_str *s2)
{
	return (str_compare(*s1, *s2));
}

static void _free_env(t_kv_env kv)
{
	if (kv.key)
		free(kv.key);
	if (kv.val)
		free(kv.val);
}

t_hashmap_env *create_env_map(void)
{
	return (new_hashmap_env(_hash_str, _cmp_str, _free_env));
}

t_error _build_envp_iterator(t_usize idx, const t_str *key, t_str *val,
							 void *ctx)
{
	struct s_build_envp_state *s;

	(void)(idx);
	s = ctx;
	if (push_str_buffer(&s->buf, *key) && push_str_char(&s->buf, '=') &&
		push_str_buffer(&s->buf, *val))
		return (vec_str_free(s->out), ERROR);
	if (vec_str_push(&s->out, s->buf.buf))
		return (str_free(s->buf), ERROR);
	s->buf = alloc_new_buffer(50);
	return (NO_ERROR);
}

t_error build_envp(t_hashmap_env *envs, t_vec_str *envp)
{
	struct s_build_envp_state state;

	state.out = vec_str_new(envs->num_buckets, (void (*)(t_str))me_free);
	state.buf = alloc_new_buffer(50);
	if (hashmap_env_iter(envs, _build_envp_iterator, &state))
		return (ERROR);
	if (vec_str_push(&state.out, NULL))
		return (ERROR);
	*envp = state.out;
	str_free(state.buf);
	return (NO_ERROR);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:32:50 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/18 18:44:24 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/env.h"
#include "me/buffered_str/buf_str.h"
#include "me/hash/hasher.h"
#include "me/hashmap/hashmap_env.h"
#include "me/mem/mem.h"
#include "me/string/str_clone.h"
#include "me/string/str_compare.h"
#include "me/string/str_len.h"
#include "me/types.h"
#include "me/vec/vec_str.h"
#include <stdlib.h>

static void _hash_str(t_hasher *hasher, t_str *s)
{
	t_usize len;

	len = str_len(*s);
	hasher_write_u64(hasher, (t_u64)len);
	hasher_write_bytes(hasher, (t_u8 *)*s, len);
	hasher_write_u8(hasher, 0);
}

static bool _cmp_str(t_str *s1, t_str *s2)
{
	return (str_compare(*s1, *s2));
}

static void _free_env(t_kv_env kv)
{
	if (kv.key)
		mem_free(kv.key);
	if (kv.val)
		mem_free(kv.val);
}

t_hashmap_env *create_env_map(void)
{
	return (new_hashmap_env(_hash_str, _cmp_str, _free_env));
}

t_error _build_envp_iterator(t_usize idx, const t_str *key, t_str *val,
							 void *ctx)
{
	struct s_build_envp_state *s;
	t_str					   push;

	(void)(idx);
	s = ctx;
	if (push_str_buffer(&s->buf, *key) || push_str_buffer(&s->buf, "=") ||
		push_str_buffer(&s->buf, *val))
		return (vec_str_free(s->out), ERROR);
	push = str_clone(s->buf.buf);
	if (vec_str_push(&s->out, push))
		return (str_free(s->buf), ERROR);
	str_clear(&s->buf);
	return (NO_ERROR);
}

t_error build_envp(t_hashmap_env *envs, t_vec_str *envp)
{
	struct s_build_envp_state state;

	state.buf = alloc_new_buffer(8096);
	state.out = vec_str_new(1024, (void (*)(t_str))mem_free);
	if (hashmap_env_iter(envs, _build_envp_iterator, &state))
		return (str_free(state.buf), printf("iter failed\n"), ERROR);
	if (vec_str_push(&state.out, NULL))
		return (str_free(state.buf), printf("coun't push null\n"), ERROR);
	*envp = state.out;
	str_free(state.buf);
	return (NO_ERROR);
}

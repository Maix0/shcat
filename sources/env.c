/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:32:50 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/03 16:31:34 by maiboyer         ###   ########.fr       */
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

static void	_hash_str(t_hasher *hasher, t_str *s)
{
	t_usize	len;

	len = str_len(*s);
	hasher_write_u64(hasher, (t_u64)len);
	hasher_write_bytes(hasher, (t_u8 *)*s, len);
	hasher_write_u8(hasher, 0);
}

static bool	_cmp_str(t_str *s1, t_str *s2)
{
	return (str_compare(*s1, *s2));
}

static void	_free_env(t_kv_env kv)
{
	if (kv.key)
		mem_free(kv.key);
	if (kv.val)
		mem_free(kv.val);
}

t_hashmap_env	*create_env_map(void)
{
	return (hmap_env_new(_hash_str, _cmp_str, _free_env));
}

t_error	_build_envp_iterator(t_usize idx, const t_str *key, t_str *val,
							void *ctx)
{
	struct s_build_envp_state	*s;
	t_str						push;
	t_str						*nval;

	(void)(idx);
	s = ctx;
	nval = hmap_env_get(s->tmp_vars, (t_str *)key);
	if (nval == NULL)
		nval = val;
	if (string_push(&s->buf, *key) || string_push(&s->buf, "=") || \
		string_push(&s->buf, *nval))
		return (vec_str_free(s->out), ERROR);
	push = str_clone(s->buf.buf);
	if (vec_str_push(&s->out, push))
		return (string_free(s->buf), ERROR);
	string_clear(&s->buf);
	return (NO_ERROR);
}

t_error	build_envp(t_hashmap_env *envs, t_hashmap_env *tmp_vars, t_vec_str *envp)
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

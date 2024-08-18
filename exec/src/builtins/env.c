/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:22:50 by rparodi           #+#    #+#             */
/*   Updated: 2024/08/18 22:54:31 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/builtins.h"
#include "me/hashmap/hashmap_env.h"
#include "me/printf/printf.h"
#include "me/str/str.h"
#include "me/types.h"

static t_error _append_key_to_vec(t_usize _idx, const t_str *key, t_str *value, void *vec)
{
	(void)(value);
	(void)(_idx);
	if (key == NULL || *key == NULL)
		return (NO_ERROR);
	vec_str_push(vec, *key);
	return (NO_ERROR);
}

static bool _sort_str(t_str *_lhs, t_str *_rhs)
{
	t_str lhs;
	t_str rhs;

	if (_lhs == NULL && _rhs != NULL)
		return (true);
	if (_lhs != NULL && _rhs == NULL)
		return (true);
	if (_lhs == NULL && _rhs == NULL)
		return (false);
	lhs = *_lhs;
	rhs = *_rhs;
	while (*lhs && *lhs == *rhs)
	{
		lhs++;
		rhs++;
	}
	return (*lhs < *rhs);
}

t_error builtin_env___(t_state *state, t_builtin_spawn_info info, t_i32 *exit_code)
{
	t_vec_str keys;
	t_vec_str keys_uniq;
	t_usize	  i;
	t_str	 *value;

	keys = vec_str_new(16, NULL);
	hmap_env_iter(state->env, _append_key_to_vec, &keys);
	hmap_env_iter(state->tmp_var, _append_key_to_vec, &keys);
	keys_uniq = vec_str_new(keys.len, NULL);
	i = 0;
	if (keys.len == 0)
		return (NO_ERROR);
	vec_str_sort(&keys, _sort_str);
	while (i < keys.len)
	{
		while (i < keys.len - 1 && str_compare(keys.buffer[i], keys.buffer[i + 1]))
			i++;
		vec_str_push(&keys_uniq, keys.buffer[i]);
		i++;
	}
	vec_str_free(keys);

	i = 0;
	while (i < keys_uniq.len)
	{
		value = hmap_env_get(state->tmp_var, &keys_uniq.buffer[i]);
		if (value == NULL)
			value = hmap_env_get(state->env, &keys_uniq.buffer[i]);
		if (value != NULL && *value != NULL)
			me_printf_fd(info.stdout, "%s=%s\n", keys_uniq.buffer[i], *value);
		i++;
	}
	vec_str_free(keys_uniq);
	*exit_code = 0;
	return (NO_ERROR);
}

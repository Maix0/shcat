/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:13:41 by rparodi           #+#    #+#             */
/*   Updated: 2024/08/18 21:51:31 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/builtins.h"
#include "me/hashmap/hashmap_env.h"
#include "me/printf/printf.h"
#include "me/str/str.h"
#include "me/string/string.h"
#include "me/types.h"
#include "me/vec/vec_str.h"

struct s_print_export_state
{
	t_state				 *state;
	t_builtin_spawn_info *info;
};

struct s_assign_export_state
{
	t_state				 *state;
	t_builtin_spawn_info *info;
	t_error				  err;
};

static void _assign_export(t_usize idx, t_str *arg, void *vctx)
{
	struct s_assign_export_state *ctx;
	const char					 *first_eq;
	t_str						  key;
	t_str						  value;

	if (arg == NULL || *arg == NULL || idx == 0)
		return;
	ctx = vctx;
	first_eq = str_find_chr(*arg, '=');
	if (first_eq == NULL || first_eq == *arg)
		return;
	key = str_substring(*arg, 0, first_eq - *arg);
	value = str_substring(first_eq, 1, ~0llu);
	if (hmap_env_insert(ctx->state->env, key, value))
		ctx->err = ERROR;
}

t_error _print_export(t_usize _idx, const t_str *key, t_str *value, void *vctx)
{
	const struct s_print_export_state *ctx = vctx;
	t_str							  *val;
	t_str							   true_val;

	(void)(_idx);
	val = hmap_env_get(ctx->state->tmp_var, (t_str *)key);
	if (val == NULL)
		val = value;
	if (val == NULL)
		return (NO_ERROR);
	true_val = *val;
	if (true_val == NULL)
		true_val = "";
	me_printf_fd(ctx->info->stdout, "export %s='%s'\n", *key, true_val);
	return (NO_ERROR);
}

static t_error _append_key_to_vec(t_usize _idx, const t_str *key, t_str *value, void *vec)
{
	(void)(value);
	(void)(_idx);
	if (key == NULL || *key == NULL)
		return (NO_ERROR);
	vec_str_push(vec, *key);
	return (NO_ERROR);
}

bool _sort_str(t_str *_lhs, t_str *_rhs)
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

t_error handle_quotes(t_str raw, t_string *out)
{
	t_usize	 i;
	t_string ret;

	i = 0;
	if (!raw)
		return (ERROR);
	ret = string_new(16);
	while (raw[i] != '\0')
	{
		if (raw[i] == '\'')
			printf("Pushing stuff\n"), string_push(&ret, "'\"'\"'");
		else
			string_push_char(&ret, raw[i]);
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error _print_export_env(t_state *state, t_builtin_spawn_info info, t_i32 *exit_code)
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
		if (value == NULL || *value == NULL)
		{
			me_printf_fd(info.stdout, "export %s\n", keys_uniq.buffer[i]);
		}
		else
		{
			t_string buf;
			if (!handle_quotes(*value, &buf))
			{
				me_printf_fd(info.stdout, "export %s='%s'\n", keys_uniq.buffer[i], buf.buf);
				string_free(buf);
			}
		}
		i++;
	}
	vec_str_free(keys_uniq);
	*exit_code = 0;
	return (NO_ERROR);
}

t_error builtin_export(t_state *state, t_builtin_spawn_info info, t_i32 *exit_code)
{
	struct s_assign_export_state assign_ctx;

	(void)(state);
	assign_ctx.info = &info;
	assign_ctx.state = state;
	assign_ctx.err = NO_ERROR;
	if (info.args.len == 1)
		return (_print_export_env(state, info, exit_code));
	return (*exit_code = 0, vec_str_iter(&info.args, _assign_export, &assign_ctx), assign_ctx.err);
}

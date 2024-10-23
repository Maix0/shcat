/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:13:41 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/23 15:23:27 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/builtins.h"
#include "me/hashmap/hashmap_env.h"
#include "me/printf/printf.h"
#include "me/str/str.h"
#include "me/string/string.h"
#include "me/types.h"
#include "me/vec/vec_str.h"

t_error	_append_key_to_vec(t_usize _, const t_str *key, t_str *v, void *vec);
bool	_sort_str(t_str *_lhs, t_str *_rhs);
t_error	get_uniq_keys(t_state *state, t_vec_str *out);

static void	_assign_export(t_usize idx, t_str *arg, void *vctx)
{
	struct s_assign_export_state	*ctx;
	const char						*first_eq;
	t_str							key;
	t_str							value;

	if (arg == NULL || *arg == NULL || idx == 0)
		return ;
	ctx = vctx;
	first_eq = str_find_chr(*arg, '=');
	if (first_eq == NULL || first_eq == *arg)
		hmap_env_insert(ctx->state->env, *arg, NULL);
	key = str_substring(*arg, 0, first_eq - *arg);
	value = str_substring(first_eq, 1, ~0llu);
	hmap_env_insert(ctx->state->env, key, value);
}

static t_error	handle_quotes(t_str raw, t_string *out)
{
	t_usize		i;
	t_string	ret;

	i = 0;
	if (!raw)
		return (ERROR);
	ret = string_new(16);
	while (raw[i] != '\0')
	{
		if (raw[i] == '\'')
			string_push(&ret, "'\"'\"'");
		else
			string_push_char(&ret, raw[i]);
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	_print_export_env(\
	t_state *state, t_builtin_spawn_info info, t_i32 *exit_code)
{
	t_vec_str	uniq;
	t_usize		i;
	t_str		*value;
	t_string	buf;

	if (get_uniq_keys(state, &uniq))
		return (ERROR);
	i = 0;
	while (i < uniq.len)
	{
		value = hmap_env_get(state->tmp_var, &uniq.buffer[i]);
		if (value == NULL)
			value = hmap_env_get(state->env, &uniq.buffer[i]);
		if (value == NULL || *value == NULL)
			me_printf_fd(info.stdout, "export %s\n", uniq.buffer[i]);
		else
		{
			if (!handle_quotes(*value, &buf))
				(me_printf_fd(\
info.stdout, "export %s='%s'\n", uniq.buffer[i], buf.buf), string_free(buf));
		}
		i++;
	}
	return (vec_str_free(uniq), *exit_code = 0, NO_ERROR);
}

t_error	builtin_export(\
	t_state *state, t_builtin_spawn_info info, t_i32 *exit_code)
{
	struct s_assign_export_state	assign_ctx;

	(void)(state);
	assign_ctx.info = &info;
	assign_ctx.state = state;
	assign_ctx.err = NO_ERROR;
	if (info.args.len == 1)
		return (_print_export_env(state, info, exit_code));
	return (*exit_code = 0, vec_str_iter(\
			&info.args, _assign_export, &assign_ctx), assign_ctx.err);
}

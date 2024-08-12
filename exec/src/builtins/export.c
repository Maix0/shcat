/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:13:41 by rparodi           #+#    #+#             */
/*   Updated: 2024/08/12 15:58:55 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/builtins.h"
#include "me/hashmap/hashmap_env.h"
#include "me/printf/printf.h"
#include "me/str/str.h"
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

static t_error _print_export(t_usize _idx, const t_str *key, t_str *value, void *vctx)
{
	const struct s_print_export_state *ctx = vctx;
	t_str							  *val;
	t_str							   true_val;

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

t_error builtin_export(t_state *state, t_builtin_spawn_info info, t_i32 *exit_code)
{
	struct s_print_export_state	 print_ctx;
	struct s_assign_export_state assign_ctx;
	print_ctx.info = &info;
	print_ctx.state = state;
	assign_ctx.info = &info;
	assign_ctx.state = state;
	assign_ctx.err = NO_ERROR;
	if (info.args.len == 1)
		return (*exit_code = 0, hmap_env_iter(state->env, _print_export, &print_ctx));
	return (*exit_code = 0, vec_str_iter(&info.args, _assign_export, &assign_ctx), assign_ctx.err);
}

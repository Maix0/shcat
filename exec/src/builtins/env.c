/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:22:50 by rparodi           #+#    #+#             */
/*   Updated: 2024/08/10 19:57:32 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/builtins.h"
#include "me/hashmap/hashmap_env.h"
#include "me/printf/printf.h"
#include "me/types.h"

struct s_print_env_state
{
	t_state		 *state;
	t_spawn_info *info;
};

static t_error _print_env(t_usize _idx, const t_str *key, t_str *value, void *vctx)
{
	const struct s_print_env_state *ctx = vctx;
	t_str						   *val;

	val = hmap_env_get(ctx->state->tmp_var, (t_str *)key);
	if (val == NULL)
		val = value;
	if (val == NULL || *val == NULL)
		return (NO_ERROR);
	// TODO: Fix this to handle the corrrect output
	me_printf_fd(NULL, "%s=%s\n", *key, *val);
	return (NO_ERROR);
}

t_error builtin_env___(t_state *state, t_spawn_info info)
{
	struct s_print_env_state ctx;

	ctx.info = &info;
	ctx.state = state;
	hmap_env_iter(state->env, _print_env, &ctx);
	return (NO_ERROR);
}

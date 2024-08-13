/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:43:18 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/13 15:13:11 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/builtins.h"
#include "me/hashmap/hashmap_env.h"
#include "me/printf/printf.h"
#include "me/str/str.h"
#include "me/string/string.h"
#include "me/types.h"
#include "unistd.h"

t_error builtin_cd____(t_state *state, t_builtin_spawn_info info, t_i32 *exit_code)
{
	const t_str key = "HOME";
	t_str	   *home;
	t_str		path;

	if (info.args.len <= 1)
	{
		home = hmap_env_get(state->tmp_var, (t_str *)&key);
		if (home == NULL || *home == NULL)
			home = hmap_env_get(state->env, (t_str *)&key);
		if (home == NULL || *home == NULL)
			return (*exit_code = 0, NO_ERROR);
		path = *home;
	}
	else
		path = info.args.buffer[1];
	if (chdir(path) == -1)
		return (*exit_code = 2, me_printf_fd(info.stderr, "cd: Unable to change directory\n"), NO_ERROR);
	return (*exit_code = 0, NO_ERROR);
}

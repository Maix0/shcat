/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:43:18 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/30 17:54:55 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/builtins.h"
#include "me/hashmap/hashmap_env.h"
#include "me/printf/printf.h"
#include "me/str/str.h"
#include "me/string/string.h"
#include "me/types.h"

t_error	builtin_unset_(\
	t_state *state, t_builtin_spawn_info info, t_i32 *exit_code)
{
	t_usize	i;

	(void)(state);
	i = 1;
	while (i < info.args.len)
		hmap_env_remove(state->env, &info.args.buffer[i++]);
	return (*exit_code = 0, NO_ERROR);
}

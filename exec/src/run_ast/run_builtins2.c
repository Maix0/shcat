/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_builtins2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:24:49 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:23 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_ast.h"
#include "exec/builtins.h"
#include "me/mem/mem.h"
#include "me/os/os.h"
#include "me/str/str.h"

void	_ffree_func(struct s_ffree_state *state)
{
	if (state == NULL)
		return ;
	hmap_env_free(state->state->env);
	hmap_env_free(state->state->tmp_var);
	close_fd(state->cmd_pipe.input);
}

bool	_is_builtin(t_const_str argv0)
{
	t_usize		i;
	const t_str	value[] = {"cd", "echo", "env", "exit", "export", "pwd", \
			"unset", "_debug", NULL};

	i = 0;
	if (argv0 == NULL)
		return (false);
	while (value[i] != NULL)
		if (str_compare(argv0, value[i++]))
			return (true);
	return (false);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_expansion_builtin.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:38:38 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:25 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_ast.h"
#include "me/mem/mem.h"
#include "me/str/str.h"
#include "me/convert/numbers_to_str.h"

// non bonus only returns -1
t_pid	get_self_pid(void);

bool	_is_special_var(t_ast_expansion *self)
{
	char	name;

	if (self == NULL)
		return (true);
	if (self->var_name == NULL)
		return (true);
	if (str_len(self->var_name) != 1)
		return (false);
	name = self->var_name[0];
	if (name == '*' || name == '@' || name == '?' || name == '!' || name == '#'
		|| name == '-' || name == '$' || name == '0')
		return (true);
	return (false);
}

static inline t_error	_run_expansion_special_var_inner(\
	t_ast_expansion *self, t_state *state, \
		t_expansion_result *out, char name)
{
	(void)(self);
	(void)(state);
	if (name == '#')
	{
		*out = (t_expansion_result){.exists = true, .value = NULL};
		if (i32_to_str(1, &out->value))
			return (ERROR);
	}
	if (name == '!')
	{
		*out = (t_expansion_result){.exists = true, .value = NULL};
		if (i32_to_str(1, &out->value))
			return (ERROR);
	}
	if (name == '$')
	{
		*out = (t_expansion_result){.exists = true, .value = NULL};
		if (i32_to_str(get_self_pid(), &out->value))
			return (ERROR);
	}
	return (NO_ERROR);
}

// return pid of last run program
// return `argc - 1` bc we don't care about argv[0]
// return pid of self (the shell)
// return the option string <ask maiboyer>
// return all args without argv[0]
// return all args with argv[0]
// return exit code of last run program
t_error	_run_expansion_special_var(t_ast_expansion *self, t_state *state,
		t_expansion_result *out)
{
	char	name;

	if (self == NULL || state == NULL || out == NULL)
		return (ERROR);
	name = self->var_name[0];
	*out = (t_expansion_result){.exists = false, .value = NULL};
	if (name == '?')
	{
		*out = (t_expansion_result){.exists = true, .value = NULL};
		if (i32_to_str(state->last_exit, &out->value))
			return (ERROR);
	}
	return (_run_expansion_special_var_inner(self, state, out, name));
}

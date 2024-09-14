/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_expansion_builtin.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:38:38 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/14 12:42:53 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_ast.h"
#include "me/mem/mem.h"
#include "me/str/str.h"
#include "me/convert/numbers_to_str.h"

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
		printf("PLEASE MAKE SURE TO FINISH THE SPECIAL VAR HANDLING !");
	}
	return (NO_ERROR);
}

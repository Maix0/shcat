/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_program.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:32:04 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/14 12:32:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_ast.h"

t_error	run_program(t_ast_program *self, t_state *state, t_program_result *out)
{
	t_usize	i;

	if (self == NULL || state == NULL || out == NULL)
		return (ERROR);
	i = 0;
	while (i < self->body.len)
	{
		if (_run_get_exit_code(self->body.buffer[i], state, &out->exit))
			return (ERROR);
		i++;
	}
	return (NO_ERROR);
}

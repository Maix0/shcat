/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_cmd_sub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:36:15 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/14 12:36:25 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_ast.h"

t_error	run_command_substitution(t_ast_command_substitution *self,
		t_state *state, void *out)
{
	(void)(self);
	(void)(state);
	(void)(out);
	return (ERROR);
}

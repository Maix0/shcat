/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_program.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:34:48 by rparodi           #+#    #+#             */
/*   Updated: 2024/05/09 15:06:42 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "app/state.h"
# include "me/types.h"
# include "gmr/symbols.h"
# include "app/node.h"
# include "app/node/handle_program.h"
# include "app/node/handle_command.h"

t_error handle_program(t_node *self, t_utils *shcat, t_i32 *out_exit_code)
{
	t_usize i;

	if (self->kind != sym_program)
		return (ERROR);
	i = 0;
	while (i < self->childs_count)
	{
		if (self->childs[i].kind == sym_command)
			if (handle_command(&self->childs[i], shcat, out_exit_code))
					return (ERROR);
		i++;
	}
	return (NO_ERROR);
}

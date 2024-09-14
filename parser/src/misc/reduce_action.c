/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reduce_action.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:33:11 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/14 12:55:11 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/reduce_action.h"
#include "me/vec/vec_reduce_action.h"

void	ts_reduce_action_set_add(\
	ReduceActionSet *self, t_reduce_action new_action)
{
	t_reduce_action	action;
	t_u32			i;

	i = 0;
	while (i < self->len)
	{
		action = self->buffer[i];
		if (action.symbol == new_action.symbol \
			&& action.count == new_action.count)
			return ;
		i++;
	}
	vec_reduce_action_push(self, new_action);
}

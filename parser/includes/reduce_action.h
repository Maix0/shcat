/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reduce_action.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:25:12 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/30 15:25:38 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REDUCE_ACTION_H
#define REDUCE_ACTION_H

#include "me/types.h"
#include "me/vec/vec_reduce_action.h"
#include "parser/api.h"
#include "parser/types/types_reduce_action.h"

static inline void ts_reduce_action_set_add(t_vec_reduce_action *self,
											t_reduce_action		 new_action)
{
	t_reduce_action action;

	for (t_u32 i = 0; i < self->len; i++)
	{
		action = self->buffer[i];
		if (action.symbol == new_action.symbol &&
			action.count == new_action.count)
			return;
	}
	vec_reduce_action_push(self, new_action);
}

#endif /* REDUCE_ACTION_H */

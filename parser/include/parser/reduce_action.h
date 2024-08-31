/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reduce_action.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:03:09 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 18:31:33 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REDUCE_ACTION_H
#define REDUCE_ACTION_H

#include "parser/api.h"
#include "parser/array.h"
#include "me/types.h"

struct s_reduce_action
{
	t_u32	 count;
	TSSymbol symbol;
	int		 dynamic_precedence;
	t_u16	 production_id;
};

typedef struct s_reduce_action ReduceAction;
typedef Array(ReduceAction) ReduceActionSet;

void ts_reduce_action_set_add(ReduceActionSet *self, ReduceAction new_action);

#endif // REDUCE_ACTION_H

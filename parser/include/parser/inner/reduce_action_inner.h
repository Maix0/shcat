/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reduce_action_inner.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:56:42 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/06 16:57:13 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REDUCE_ACTION_INNER_H
#define REDUCE_ACTION_INNER_H

#include "me/types.h"
#include "parser/inner/ptypes.h"

struct s_reduce_action
{
	t_u32	 count;
	t_symbol symbol;
	int		 dynamic_precedence;
	t_u16	 production_id;
};
typedef struct s_reduce_action t_reduce_action;

#endif /* REDUCE_ACTION_INNER_H */

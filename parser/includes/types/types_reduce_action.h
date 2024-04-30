/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_reduce_action.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:21:59 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/30 15:22:18 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_REDUCE_ACTION_H
#define TYPES_REDUCE_ACTION_H

#include "me/types.h"
#include "parser/types/types_symbol.h"

typedef struct s_reduce_action
{
	t_u32	 count;
	t_symbol symbol;
	t_i32	 dynamic_precedence;
	t_u16	 production_id;
} t_reduce_action;

#endif /* TYPES_REDUCE_ACTION_H */

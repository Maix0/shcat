/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reduce_action.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:03:09 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/06 17:08:38 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REDUCE_ACTION_H
#define REDUCE_ACTION_H

#include "me/types.h"
#include "parser/api.h"
#include "parser/array.h"
#include "parser/inner/reduce_action_inner.h"
#include "me/vec/vec_reduce_action.h"

typedef t_vec_reduce_action ReduceActionSet;

void ts_reduce_action_set_add(ReduceActionSet *self, t_reduce_action new_action);

#endif // REDUCE_ACTION_H

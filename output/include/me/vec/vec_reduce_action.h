/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_reduce_action.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:46:53 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 17:53:00 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_REDUCE_ACTION_H
#define VEC_REDUCE_ACTION_H

#include "parser/types/types_reduce_action.h"
#include "me/types.h"

typedef bool (*t_vec_reduce_action_sort_fn)(t_reduce_action *, t_reduce_action *);
typedef void (*t_free_reduce_action_item)(t_reduce_action);

typedef struct s_vec_reduce_action
{
	t_free_reduce_action_item free_func;
	t_usize					len;
	t_usize					capacity;
	t_reduce_action		   *buffer;
} t_vec_reduce_action;

t_vec_reduce_action vec_reduce_action_new(t_usize				  capacity,
									  t_free_reduce_action_item free_function);
t_error vec_reduce_action_push(t_vec_reduce_action *vec, t_reduce_action element);
t_error vec_reduce_action_push_front(t_vec_reduce_action *vec,
								   t_reduce_action	  element);
t_error vec_reduce_action_pop(t_vec_reduce_action *vec, t_reduce_action *value);
t_error vec_reduce_action_pop_front(t_vec_reduce_action *vec, t_reduce_action *value);
void	vec_reduce_action_free(t_vec_reduce_action vec);
t_error vec_reduce_action_reserve(t_vec_reduce_action *vec,
								t_usize			   wanted_capacity);
t_error vec_reduce_action_find(t_vec_reduce_action *vec,
							 bool (*fn)(const t_reduce_action *), t_usize *index);
t_error vec_reduce_action_find_starting(t_vec_reduce_action *vec,
									  bool (*fn)(const t_reduce_action *),
									  t_usize starting_index, t_usize *index);
t_error vec_reduce_action_all(t_vec_reduce_action *vec,
							bool (*fn)(const t_reduce_action *), bool *result);
t_error vec_reduce_action_any(t_vec_reduce_action *vec,
							bool (*fn)(const t_reduce_action *), bool *result);
void	vec_reduce_action_iter(t_vec_reduce_action *vec,
							 void (*fn)(t_usize index, t_reduce_action *value,
										void *state),
							 void *state);
void	vec_reduce_action_reverse(t_vec_reduce_action *vec);
void	vec_reduce_action_sort(t_vec_reduce_action		  *vec,
							 t_vec_reduce_action_sort_fn is_sorted);
t_error vec_reduce_action_back(t_vec_reduce_action *vec, t_reduce_action **out);

#endif

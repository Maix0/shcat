/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_parser_range.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:46:53 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 17:53:00 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_PARSER_RANGE_H
#define VEC_PARSER_RANGE_H

#include "parser/types/types_parser_range.h"
#include "me/types.h"

typedef bool (*t_vec_parser_range_sort_fn)(t_parser_range *, t_parser_range *);
typedef void (*t_free_parser_range_item)(t_parser_range);

typedef struct s_vec_parser_range
{
	t_free_parser_range_item free_func;
	t_usize					len;
	t_usize					capacity;
	t_parser_range		   *buffer;
} t_vec_parser_range;

t_vec_parser_range vec_parser_range_new(t_usize				  capacity,
									  t_free_parser_range_item free_function);
t_error vec_parser_range_push(t_vec_parser_range *vec, t_parser_range element);
t_error vec_parser_range_push_front(t_vec_parser_range *vec,
								   t_parser_range	  element);
t_error vec_parser_range_pop(t_vec_parser_range *vec, t_parser_range *value);
t_error vec_parser_range_pop_front(t_vec_parser_range *vec, t_parser_range *value);
void	vec_parser_range_free(t_vec_parser_range vec);
t_error vec_parser_range_reserve(t_vec_parser_range *vec,
								t_usize			   wanted_capacity);
t_error vec_parser_range_find(t_vec_parser_range *vec,
							 bool (*fn)(const t_parser_range *), t_usize *index);
t_error vec_parser_range_find_starting(t_vec_parser_range *vec,
									  bool (*fn)(const t_parser_range *),
									  t_usize starting_index, t_usize *index);
t_error vec_parser_range_all(t_vec_parser_range *vec,
							bool (*fn)(const t_parser_range *), bool *result);
t_error vec_parser_range_any(t_vec_parser_range *vec,
							bool (*fn)(const t_parser_range *), bool *result);
void	vec_parser_range_iter(t_vec_parser_range *vec,
							 void (*fn)(t_usize index, t_parser_range *value,
										void *state),
							 void *state);
void	vec_parser_range_reverse(t_vec_parser_range *vec);
void	vec_parser_range_sort(t_vec_parser_range		  *vec,
							 t_vec_parser_range_sort_fn is_sorted);
t_error vec_parser_range_back(t_vec_parser_range *vec, t_parser_range **out);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_parser_heredoc.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:46:53 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 17:53:00 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_PARSER_HEREDOC_H
#define VEC_PARSER_HEREDOC_H

#include "parser/types/types_heredoc.h"
#include "me/types.h"

typedef bool (*t_vec_parser_heredoc_sort_fn)(t_heredoc *, t_heredoc *);
typedef void (*t_free_parser_heredoc_item)(t_heredoc);

typedef struct s_vec_parser_heredoc
{
	t_free_parser_heredoc_item free_func;
	t_usize					len;
	t_usize					capacity;
	t_heredoc		   *buffer;
} t_vec_parser_heredoc;

t_vec_parser_heredoc vec_parser_heredoc_new(t_usize				  capacity,
									  t_free_parser_heredoc_item free_function);
t_error vec_parser_heredoc_push(t_vec_parser_heredoc *vec, t_heredoc element);
t_error vec_parser_heredoc_push_front(t_vec_parser_heredoc *vec,
								   t_heredoc	  element);
t_error vec_parser_heredoc_pop(t_vec_parser_heredoc *vec, t_heredoc *value);
t_error vec_parser_heredoc_pop_front(t_vec_parser_heredoc *vec, t_heredoc *value);
void	vec_parser_heredoc_free(t_vec_parser_heredoc vec);
t_error vec_parser_heredoc_reserve(t_vec_parser_heredoc *vec,
								t_usize			   wanted_capacity);
t_error vec_parser_heredoc_find(t_vec_parser_heredoc *vec,
							 bool (*fn)(const t_heredoc *), t_usize *index);
t_error vec_parser_heredoc_find_starting(t_vec_parser_heredoc *vec,
									  bool (*fn)(const t_heredoc *),
									  t_usize starting_index, t_usize *index);
t_error vec_parser_heredoc_all(t_vec_parser_heredoc *vec,
							bool (*fn)(const t_heredoc *), bool *result);
t_error vec_parser_heredoc_any(t_vec_parser_heredoc *vec,
							bool (*fn)(const t_heredoc *), bool *result);
void	vec_parser_heredoc_iter(t_vec_parser_heredoc *vec,
							 void (*fn)(t_usize index, t_heredoc *value,
										void *state),
							 void *state);
void	vec_parser_heredoc_reverse(t_vec_parser_heredoc *vec);
void	vec_parser_heredoc_sort(t_vec_parser_heredoc		  *vec,
							 t_vec_parser_heredoc_sort_fn is_sorted);
t_error vec_parser_heredoc_back(t_vec_parser_heredoc *vec, t_heredoc **out);

#endif

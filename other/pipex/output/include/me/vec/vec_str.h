/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_str.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:46:53 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 17:53:00 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_STR_H
# define VEC_STR_H

# include "me/types.h"

typedef void		(*t_free_str_item)(t_str);

typedef struct s_vec_str
{
	t_free_str_item	free_func;
	t_usize			len;
	t_usize			capacity;
	t_str			*buffer;
}					t_vec_str;

t_vec_str			vec_str_new(t_usize capacity,
						t_free_str_item free_function);
t_error				vec_str_push(t_vec_str *vec, t_str element);
t_error				vec_str_pop(t_vec_str *vec, t_str *value);
void				vec_str_free(t_vec_str vec);
t_error				vec_str_reserve(t_vec_str *vec, t_usize wanted_capacity);
t_error				vec_str_find(t_vec_str *vec, bool (*fn)(const t_str *),
						t_usize *index);
t_error				vec_str_find_starting(t_vec_str *vec,
						bool (*fn)(const t_str *), t_usize starting_index,
						t_usize *index);
t_error				vec_str_all(t_vec_str *vec, bool (*fn)(const t_str *),
						bool *result);
t_error				vec_str_any(t_vec_str *vec, bool (*fn)(const t_str *),
						bool *result);
void				vec_str_iter(t_vec_str *vec, void (*fn)(t_usize index,
							t_str *value, void *state), void *state);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_u8.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:46:53 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 17:53:00 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_U8_H
# define VEC_U8_H

# include "me/types.h"

typedef bool		(*t_vec_u8_sort_fn)(t_u8 *, t_u8 *);
typedef void		(*t_free_u8_item)(t_u8);

typedef struct s_vec_u8
{
	t_free_u8_item	free_func;
	t_usize			len;
	t_usize			capacity;
	t_u8			*buffer;
}					t_vec_u8;

t_vec_u8			vec_u8_new(t_usize capacity, t_free_u8_item free_function);
t_error				vec_u8_push(t_vec_u8 *vec, t_u8 element);
t_error				vec_u8_push_front(t_vec_u8 *vec, t_u8 element);
t_error				vec_u8_pop(t_vec_u8 *vec, t_u8 *value);
t_error				vec_u8_pop_front(t_vec_u8 *vec, t_u8 *value);
void				vec_u8_free(t_vec_u8 vec);
t_error				vec_u8_reserve(t_vec_u8 *vec, t_usize wanted_capacity);
t_error				vec_u8_find(t_vec_u8 *vec, bool (*fn)(const t_u8 *),
						t_usize *index);
t_error				vec_u8_find_starting(t_vec_u8 *vec,
						bool (*fn)(const t_u8 *), t_usize starting_index,
						t_usize *index);
t_error				vec_u8_all(t_vec_u8 *vec, bool (*fn)(const t_u8 *),
						bool *result);
t_error				vec_u8_any(t_vec_u8 *vec, bool (*fn)(const t_u8 *),
						bool *result);
void				vec_u8_iter(t_vec_u8 *vec, void (*fn)(t_usize index,
							t_u8 *value, void *state), void *state);
void				vec_u8_reverse(t_vec_u8 *vec);
void				vec_u8_sort(t_vec_u8 *vec, t_vec_u8_sort_fn is_sorted);

#endif

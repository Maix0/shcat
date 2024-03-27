/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_process.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:46:53 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 17:53:00 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_PROCESS_H
# define VEC_PROCESS_H

# include "me/os/process.h"
# include "me/types.h"

typedef void			(*t_free_process_item)(t_process);

typedef struct s_vec_process
{
	t_free_process_item	free_func;
	t_usize				len;
	t_usize				capacity;
	t_process			*buffer;
}						t_vec_process;

t_vec_process			vec_process_new(t_usize capacity,
							t_free_process_item free_function);
t_error					vec_process_push(t_vec_process *vec, t_process element);
t_error					vec_process_pop(t_vec_process *vec, t_process *value);
void					vec_process_free(t_vec_process vec);
t_error					vec_process_reserve(t_vec_process *vec,
							t_usize wanted_capacity);
t_error					vec_process_find(t_vec_process *vec,
							bool (*fn)(const t_process *), t_usize *index);
t_error					vec_process_find_starting(t_vec_process *vec,
							bool (*fn)(const t_process *),
							t_usize starting_index, t_usize *index);
t_error					vec_process_all(t_vec_process *vec,
							bool (*fn)(const t_process *), bool *result);
t_error					vec_process_any(t_vec_process *vec,
							bool (*fn)(const t_process *), bool *result);
void					vec_process_iter(t_vec_process *vec,
							void (*fn)(t_usize index, t_process *value,
								void *state), void *state);

#endif

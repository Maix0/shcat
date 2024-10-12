/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocator.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:52:31 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:02 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALLOCATOR_H
# define ALLOCATOR_H

# include "me/types.h"

typedef struct s_allocator		t_allocator;

typedef void					*(*t_allocator_alloc)(t_allocator *self,
									t_usize size);
typedef void					*(*t_allocator_alloc_array)(t_allocator *self,
									t_usize size, t_usize count);
typedef void					*(*t_allocator_realloc)(t_allocator *self,
									void *ptr, t_usize requested_size);
typedef void					*(*t_allocator_realloc_array)(t_allocator *self,
									void *ptr, t_usize requested_size,
									t_usize requested_count);
typedef void					(*t_allocator_free)(t_allocator *self,
						void *ptr);
typedef void					(*t_allocator_uninit)(t_allocator *self);

struct							s_allocator
{
	t_allocator_alloc			alloc;
	t_allocator_alloc_array		alloc_array;
	t_allocator_realloc			realloc;
	t_allocator_realloc_array	realloc_array;
	t_allocator_free			free;
	t_allocator_uninit			uninit;
	void						*alloc_data;
};

#endif /* ALLOCATOR_H */

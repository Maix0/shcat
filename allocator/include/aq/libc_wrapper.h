/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libc_wrapper.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:52:11 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:02 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBC_WRAPPER_H
# define LIBC_WRAPPER_H

# include "aq/allocator.h"
# include "me/types.h"

void		*lc_malloc(t_allocator *self, t_usize size);
void		*lc_calloc(t_allocator *self, t_usize size, t_usize count);
void		*lc_realloc(t_allocator *self, void *ptr, t_usize min_size);
void		*lc_realloc_array(t_allocator *self, void *ptr, t_usize size,
				t_usize count);
void		lc_free(t_allocator *self, void *ptr);
void		lc_uninit(t_allocator *self);

t_allocator	lc_init(void);

#endif /* LIBC_WRAPPER_H */

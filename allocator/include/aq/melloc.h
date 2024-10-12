/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   melloc.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:54:03 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:03 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MELLOC_H
# define MELLOC_H

# include "aq/allocator.h"

void		*m_malloc(t_allocator *self, t_usize size);
void		*m_alloc_array(t_allocator *self, t_usize size, t_usize count);
void		*m_realloc(t_allocator *self, void *ptr, t_usize min_size);
void		*m_realloc_array(t_allocator *self, void *ptr, t_usize size,
				t_usize count);
void		m_free(t_allocator *self, void *ptr);
void		m_uninit(t_allocator *self);

t_allocator	m_init(void);

#endif /* MELLOC_H */

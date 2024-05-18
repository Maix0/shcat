/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   melloc_interal.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:27:46 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/16 14:58:27 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MELLOC_INTERAL_H
#define MELLOC_INTERAL_H

#include "aq/allocator.h"
#include "me/types.h"

#define PAGE_LIST_MAX 255
#define PAGE_POW_2 12
#define PAGE_ALIGN 3

typedef struct s_chunk
{
	bool  used : 1;
	t_u64 size : 63;
} t_chunk;

typedef struct s_page
{
	t_usize size;
	void   *data;
} t_page;

typedef struct s_page_list
{
	t_usize				len;
	t_page				pages[PAGE_LIST_MAX];
	struct s_page_list *next;
} t_page_list;

struct s_allocator_melloc
{
	t_allocator_alloc		  alloc;
	t_allocator_alloc_array	  alloc_array;
	t_allocator_realloc		  realloc;
	t_allocator_realloc_array realloc_array;
	t_allocator_free		  free;
	t_allocator_uninit		  uninit;
	t_page_list				 *list;
};

t_error alloc_page_list(t_page_list **out);

void *m_malloc(struct s_allocator_melloc *self, t_usize size);
void *m_alloc_array(struct s_allocator_melloc *self, t_usize size,
					t_usize count);
void *m_realloc(struct s_allocator_melloc *self, void *ptr, t_usize min_size);
void *m_realloc_array(struct s_allocator_melloc *self, void *ptr, t_usize size,
					  t_usize count);
void  m_free(struct s_allocator_melloc *self, void *ptr);
void  m_uninit(struct s_allocator_melloc *self);

#endif /* MELLOC_INTERAL_H */

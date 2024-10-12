/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   melloc_interal.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:27:46 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:03 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MELLOC_INTERAL_H
# define MELLOC_INTERAL_H

# include "aq/allocator.h"
# include "me/types.h"

# define PAGE_LIST_MAX 255
# define PAGE_POW_2 12
# define PAGE_ALIGN 3

typedef struct s_chunk
{
	bool	used : 1;
	t_u64	size : 63;
}								t_chunk;

typedef struct s_page
{
	t_usize						size;
	void						*data;
}								t_page;

typedef struct s_page_list
{
	t_usize						len;
	t_page						pages[PAGE_LIST_MAX];
	struct s_page_list			*next;
}								t_page_list;

struct							s_allocator_melloc
{
	t_allocator_alloc			alloc;
	t_allocator_alloc_array		alloc_array;
	t_allocator_realloc			realloc;
	t_allocator_realloc_array	realloc_array;
	t_allocator_free			free;
	t_allocator_uninit			uninit;
	t_page_list					*list;
};

void	*m_malloc(struct s_allocator_melloc *self, t_usize size);
void	*m_alloc_array(struct s_allocator_melloc *self, \
					t_usize size, t_usize count);
void	*m_realloc(struct s_allocator_melloc *self, \
					void *ptr, t_usize min_size);
void	*m_realloc_array(struct s_allocator_melloc *self, \
					void *ptr, t_usize size, t_usize count);
void	m_free(struct s_allocator_melloc *self, void *ptr);
void	m_uninit(struct s_allocator_melloc *self);

t_chunk	*find_chunk_of_size(struct s_allocator_melloc *alloc, t_usize size);
t_chunk	*get_first_block(t_page *page);
t_chunk	*get_next_block(t_chunk *chunk, bool find_zero);
t_chunk	*split_block(t_chunk *chunk, t_usize size);
void	merge_blocks(t_page *page);

t_error	alloc_page_list(t_page_list **out);
t_error	alloc_new_page(struct s_allocator_melloc *alloc, t_usize page_size);

static inline t_usize	round_to_pow2(t_usize val, t_usize pow)
{
	pow = (1 << pow) - 1;
	return ((val + pow) & (~pow));
}

static inline void	*m_alloc_error(struct s_allocator_melloc *self, t_str msg)
{
	self->uninit((void *)self);
	me_abort(msg);
	return (NULL);
}

#endif /* MELLOC_INTERAL_H */

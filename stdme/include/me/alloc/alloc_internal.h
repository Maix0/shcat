/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_internal.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 09:48:17 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/09 13:30:12 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALLOC_INTERNAL_H
#define ALLOC_INTERNAL_H

#include "me/alloc/alloc.h"
#include "me/types.h"
#include <stdalign.h>

#define PAGE_SIZE_DEFAULT 4096 * 4
#define BLOCK_PADDING "\xFE\xDC\xAB\xC0\xFE\xEE"

typedef struct s_mblock
{
	struct s_mblock *next;
	struct s_mpage	*page;
	t_usize			 size;
	bool			 used;
	t_u8			 padding[7];
} t_mblock;

typedef struct s_mpage
{
	t_usize			page_size;
	t_mblock	   *first;
	struct s_mpage *next;
} t_mpage;

// Will never be null, as it will allocate a new arena if it needs to do so
t_mpage *get_head_arena(void);

// Will return ERROR if it couldn't malloc the page
t_error alloc_arena_page(t_usize min_size, t_mpage **out);

t_mblock *get_block_for_size(t_usize size);
void	  print_pages_info(void);
t_mpage	 *get_page_from_ptr(void *ptr);

#endif /* ALLOC_INTERNAL_H */

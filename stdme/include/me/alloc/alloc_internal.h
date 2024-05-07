/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_internal.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 09:48:17 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/07 22:03:02 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALLOC_INTERNAL_H
#define ALLOC_INTERNAL_H

#include "me/alloc/alloc.h"
#include "me/types.h"
#include <stdalign.h>

#define ARENA_SIZE_DEFAULT 4096

typedef struct s_arena_block
{
	t_usize				  size;
	bool				  end;
	bool				  free;
	t_u8				  padding[6];
} t_arena_block;

typedef struct s_arena_page
{
	t_usize				 page_size;
	struct s_arena_page *next;
} t_arena_page;

// Will never be null, as it will allocate a new arena if it needs to do so
t_arena_page *get_head_arena(void);

// Will return ERROR if it couldn't malloc the page
t_error alloc_arena_page(t_usize min_size, t_arena_page **out);

t_error get_block_for_page(t_usize size, t_arena_page *page, t_arena_block **out);

#endif /* ALLOC_INTERNAL_H */

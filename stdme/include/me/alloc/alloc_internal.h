/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_internal.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 09:48:17 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/07 10:14:16 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALLOC_INTERNAL_H
#define ALLOC_INTERNAL_H

#include "me/alloc/alloc.h"
#include "me/types.h"

#define ARENA_SIZE 16384

typedef struct s_arena_page
{
	t_u8				 bytes[ARENA_SIZE];
	t_usize				 current_index;
	struct s_arena_page *next;
} t_arena_page;

// Will never be null, as it will allocate a new arena if it needs to do so
t_arena_page *get_head_arena(void);

// Will return ERROR if it couldn't malloc the page
t_error alloc_arena(t_arena_page **out);

#endif /* ALLOC_INTERNAL_H */

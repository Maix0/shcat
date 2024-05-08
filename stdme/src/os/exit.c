/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:08:52 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/08 19:33:27 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/alloc/alloc_internal.h"
#include "me/fs/putendl_fd.h"
#include "me/fs/putnbr_fd.h"
#include "me/types.h"
#include <stdlib.h>

void me_exit(t_i32 exit_code)
{
	t_arena_page  *page;
	t_arena_page  *tmp;
	t_arena_block *block;
	t_usize		   count_block;

	page = get_head_arena();
	count_block = 0;
	while (page)
	{
		block = (void *)(((t_usize)page) + sizeof(*page));
		while (((t_usize)page) <= ((t_usize)block) &&
			   ((t_usize)block) <=
				   ((t_usize)page) + page->page_size + sizeof(*page))
		{
			count_block += block->used;
			block = (void *)(((t_usize)block) + sizeof(*block) + block);
		}
		tmp = page->next;
		me_free(page);
		page = tmp;
	}
	if (count_block != 0)
		(me_putnbr_fd(count_block, 2),
		 me_putendl_fd(" Blocks weren't freed when exiting !", 2));
	exit(exit_code);
}

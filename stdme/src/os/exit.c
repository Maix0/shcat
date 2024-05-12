/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:08:52 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/12 14:07:28 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/alloc/alloc_internal.h"
#include "me/fs/putendl_fd.h"
#include "me/fs/putnbr_fd.h"
#include "me/types.h"
#include <stdlib.h>

void __libc_free(void *ptr);

void me_exit(t_i32 exit_code)
{
	t_mpage	 *page;
	void	 *tmp;
	t_mblock *block;
	t_usize	  count_block;

	page = get_head_arena();
	count_block = 0;
	block = page->first;
	while (block)
	{
		if (block->used)
			count_block += 1;
		tmp = block->next;
		__libc_free(block);
		block = tmp;
	}
	while (page)
	{
		tmp = page->next;
		__libc_free(page->data);
		__libc_free(page);
		page = tmp;
	}
	if (count_block != 0)
		(me_putnbr_fd(count_block, 2),
		 me_putendl_fd(" Blocks weren't freed when exiting !", 2));
	exit(exit_code);
}

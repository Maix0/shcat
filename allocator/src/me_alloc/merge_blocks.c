/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_blocks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:39:14 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:06 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include "aq/internal_vg_funcs.h"
#include "aq/melloc_interal.h"

static void	_merge_blocks(t_chunk **cur, t_chunk **next, \
					bool *did_merge)
{
	(vg_mem_defined(*cur, sizeof(**cur)), vg_mem_defined(next,
			sizeof(**next)));
	if (!(*cur)->used && !(*next)->used)
	{
		*did_merge = true;
		(*cur)->size += sizeof(**cur);
		(*cur)->size += (*next)->size;
		(vg_mem_no_access(*cur, sizeof(**cur)), vg_mem_no_access(*next, \
			sizeof(**next)));
		*next = get_next_block(*cur, false);
	}
	else
	{
		(vg_mem_no_access(*cur, sizeof(**cur)), vg_mem_no_access(*next, \
			sizeof(**next)));
		*cur = *next;
		*next = get_next_block(*cur, false);
	}
}

void	merge_blocks(t_page *page)
{
	t_chunk	*cur;
	t_chunk	*next;
	bool	did_merge;

	did_merge = true;
	while (did_merge)
	{
		cur = get_first_block(page);
		next = get_next_block(cur, false);
		did_merge = false;
		while (cur != NULL && next != NULL)
			_merge_blocks(&cur, &next, &did_merge);
	}
}

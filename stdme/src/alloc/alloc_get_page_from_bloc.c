/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_get_page_from_bloc.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:11:20 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/08 19:14:57 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/alloc/alloc.h"
#include "me/alloc/alloc_internal.h"

t_arena_page *get_page_from_ptr(void *ptr)
{
	t_arena_page *page;

	page = get_head_arena();
	while (page)
	{
		if (((t_usize)page) <= ((t_usize)ptr) &&
			((t_usize)ptr) <= ((t_usize)page) + page->page_size + sizeof(*page))
			return (page);
		page = page->next;
	}
	return (NULL);
}

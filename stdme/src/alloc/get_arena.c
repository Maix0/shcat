/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_arena.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 09:47:50 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/07 14:20:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/alloc/alloc.h"
#include "me/alloc/alloc_internal.h"
#include "me/fs/putstr_fd.h"
#include "me/mem/mem_set_zero.h"
#include <stdlib.h>

void *__libc_malloc(size_t size);

t_arena_page *get_head_arena(void)
{
	static t_arena_page *val = NULL;

	if (val == NULL)
	{
		if (alloc_arena(&val))
		{
			me_putstr_fd("Error: malloc failed\n", 2);
			exit(1);
		}
	}
	return (val);
}

t_error alloc_arena(t_arena_page **out)
{
	if (out == NULL)
		return (ERROR);
	*out = __libc_malloc(sizeof(**out));
	if (*out == NULL)
		return (ERROR);
	mem_set_zero(*out, sizeof(**out));
	return (NO_ERROR);
}

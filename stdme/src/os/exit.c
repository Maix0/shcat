/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:08:52 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/07 15:01:38 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include "me/alloc/alloc_internal.h"
#include <stdlib.h>

void me_exit(t_i32 exit_code)
{
	t_arena_page *arena;
	t_arena_page *tmp;

	arena = get_head_arena();
	while (arena)
	{
		tmp = arena->next;
		free(arena);
		arena = tmp;
	}
	exit(exit_code);
}

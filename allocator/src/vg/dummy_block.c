/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dummy_block.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 22:51:55 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:08 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aq/internal_vg_funcs.h"

#ifndef VGFUNCS

void	vg_block_malloc(void *ptr, t_usize size)
{
	(void)(ptr);
	(void)(size);
}

void	vg_block_resize(void *ptr, t_usize oldsize, t_usize newsize)
{
	(void)(ptr);
	(void)(oldsize);
	(void)(newsize);
}

void	vg_block_free(void *ptr)
{
	(void)(ptr);
}

#endif

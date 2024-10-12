/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dummy_mempool_bis.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 22:33:30 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:08 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aq/internal_vg_funcs.h"

#ifndef VGFUNCS

void	vg_mempool_create_ext(void *pool, t_usize flags)
{
	(void)(pool);
	(void)(flags);
}

#endif

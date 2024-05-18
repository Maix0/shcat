/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dummy_mem_status.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 23:08:47 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/17 15:28:52 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aq/internal_vg_funcs.h"

#ifndef VGFUNCS

void vg_mem_no_access(void *ptr, t_usize size)
{
	(void)(ptr);
	(void)(size);
}

void vg_mem_undefined(void *ptr, t_usize size)
{
	(void)(ptr);
	(void)(size);
}

void vg_mem_defined(void *ptr, t_usize size)
{
	(void)(ptr);
	(void)(size);
}

#endif

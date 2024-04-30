/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline3.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:44:49 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/30 15:04:39 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE3_H
#define INLINE3_H

#include "parser/types/types_point.h"
#include <stdint.h>

static inline t_point point_val_zero(void)
{
	return ((t_point){0, 0});
}

static inline t_point point_val_max(void)
{
	return ((t_point){UINT32_MAX, UINT32_MAX});
}

#endif /* INLINE3_H */

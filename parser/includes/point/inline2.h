/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline2.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:43:58 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/30 14:44:12 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE2_H
#define INLINE2_H

#include "parser/types/types_point.h"

static inline bool point_gt(t_point a, t_point b)
{
	return (a.row > b.row) || (a.row == b.row && a.column > b.column);
}

static inline bool point_gte(t_point a, t_point b)
{
	return (a.row > b.row) || (a.row == b.row && a.column >= b.column);
}

static inline bool point_eq(t_point a, t_point b)
{
	return a.row == b.row && a.column == b.column;
}

static inline t_point point_min(t_point a, t_point b)
{
	if (a.row < b.row || (a.row == b.row && a.column < b.column))
		return a;
	else
		return b;
}

static inline t_point point_max(t_point a, t_point b)
{
	if (a.row > b.row || (a.row == b.row && a.column > b.column))
		return a;
	else
		return b;
}

#endif /* INLINE2_H */

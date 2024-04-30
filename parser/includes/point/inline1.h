/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline1.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:35:50 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/30 14:43:49 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE1_H
#define INLINE1_H

#include "parser/types/types_point.h"

static inline t_point point__new(unsigned row, unsigned column)
{
	t_point result = {row, column};
	return result;
}

static inline t_point point_add(t_point a, t_point b)
{
	if (b.row > 0)
		return point__new(a.row + b.row, b.column);
	else
		return point__new(a.row, a.column + b.column);
}

static inline t_point point_sub(t_point a, t_point b)
{
	if (a.row > b.row)
		return point__new(a.row - b.row, a.column);
	else
		return point__new(0, a.column - b.column);
}

static inline bool point_lte(t_point a, t_point b)
{
	return (a.row < b.row) || (a.row == b.row && a.column <= b.column);
}

static inline bool point_lt(t_point a, t_point b)
{
	return (a.row < b.row) || (a.row == b.row && a.column < b.column);
}

#endif /* INLINE1_H */

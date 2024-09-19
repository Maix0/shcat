/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point_funcs1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:31:13 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:31:33 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/point.h"

t_point	point__new(t_u32 row, t_u32 column)
{
	return ((t_point){row, column});
}

t_point	point_add(t_point a, t_point b)
{
	if (b.row > 0)
		return (point__new(a.row + b.row, b.column));
	else
		return (point__new(a.row, a.column + b.column));
}

t_point	point_sub(t_point a, t_point b)
{
	if (a.row > b.row)
		return (point__new(a.row - b.row, a.column));
	else
		return (point__new(0, a.column - b.column));
}

bool	point_lte(t_point a, t_point b)
{
	return ((a.row < b.row) || (a.row == b.row && a.column <= b.column));
}

bool	point_lt(t_point a, t_point b)
{
	return ((a.row < b.row) || (a.row == b.row && a.column < b.column));
}

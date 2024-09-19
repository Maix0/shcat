/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point_funcs2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:31:56 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:31:57 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/point.h"

bool	point_gt(t_point a, t_point b)
{
	return ((a.row > b.row) || (a.row == b.row && a.column > b.column));
}

bool	point_gte(t_point a, t_point b)
{
	return ((a.row > b.row) || (a.row == b.row && a.column >= b.column));
}

bool	point_eq(t_point a, t_point b)
{
	return (a.row == b.row && a.column == b.column);
}

t_point	point_min(t_point a, t_point b)
{
	if (a.row < b.row || (a.row == b.row && a.column < b.column))
		return (a);
	else
		return (b);
}

t_point	point_max(t_point a, t_point b)
{
	if (a.row > b.row || (a.row == b.row && a.column > b.column))
		return (a);
	else
		return (b);
}

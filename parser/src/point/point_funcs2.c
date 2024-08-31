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

bool	point_gt(TSPoint a, TSPoint b)
{
	return ((a.row > b.row) || (a.row == b.row && a.column > b.column));
}

bool	point_gte(TSPoint a, TSPoint b)
{
	return ((a.row > b.row) || (a.row == b.row && a.column >= b.column));
}

bool	point_eq(TSPoint a, TSPoint b)
{
	return (a.row == b.row && a.column == b.column);
}

TSPoint	point_min(TSPoint a, TSPoint b)
{
	if (a.row < b.row || (a.row == b.row && a.column < b.column))
		return (a);
	else
		return (b);
}

TSPoint	point_max(TSPoint a, TSPoint b)
{
	if (a.row > b.row || (a.row == b.row && a.column > b.column))
		return (a);
	else
		return (b);
}

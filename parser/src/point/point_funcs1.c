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

TSPoint	point__new(t_u32 row, t_u32 column)
{
	return ((TSPoint){row, column});
}

TSPoint	point_add(TSPoint a, TSPoint b)
{
	if (b.row > 0)
		return (point__new(a.row + b.row, b.column));
	else
		return (point__new(a.row, a.column + b.column));
}

TSPoint	point_sub(TSPoint a, TSPoint b)
{
	if (a.row > b.row)
		return (point__new(a.row - b.row, a.column));
	else
		return (point__new(0, a.column - b.column));
}

bool	point_lte(TSPoint a, TSPoint b)
{
	return ((a.row < b.row) || (a.row == b.row && a.column <= b.column));
}

bool	point_lt(TSPoint a, TSPoint b)
{
	return ((a.row < b.row) || (a.row == b.row && a.column < b.column));
}

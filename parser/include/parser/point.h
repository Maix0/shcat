/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:03:10 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 12:03:29 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

#include "parser/api.h"
#include "me/types.h"

#define POINT_ZERO ((TSPoint){0, 0})
#define POINT_MAX ((TSPoint){UINT32_MAX, UINT32_MAX})

TSPoint point_max(TSPoint a, TSPoint b);
TSPoint point_min(TSPoint a, TSPoint b);
TSPoint point__new(t_u32 row, t_u32 column);
TSPoint point_add(TSPoint a, TSPoint b);
TSPoint point_sub(TSPoint a, TSPoint b);
bool	point_lte(TSPoint a, TSPoint b);
bool	point_lt(TSPoint a, TSPoint b);
bool	point_gte(TSPoint a, TSPoint b);
bool	point_gt(TSPoint a, TSPoint b);
bool	point_eq(TSPoint a, TSPoint b);

#endif

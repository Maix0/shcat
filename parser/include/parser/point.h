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

#define POINT_ZERO ((t_point){0, 0})
#define POINT_MAX ((t_point){UINT32_MAX, UINT32_MAX})

t_point point_max(t_point a, t_point b);
t_point point_min(t_point a, t_point b);
t_point point__new(t_u32 row, t_u32 column);
t_point point_add(t_point a, t_point b);
t_point point_sub(t_point a, t_point b);
bool	point_lte(t_point a, t_point b);
bool	point_lt(t_point a, t_point b);
bool	point_gte(t_point a, t_point b);
bool	point_gt(t_point a, t_point b);
bool	point_eq(t_point a, t_point b);

#endif

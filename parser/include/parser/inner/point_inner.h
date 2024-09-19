/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point_inner.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:05:43 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 16:38:38 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_INNER_H
#define POINT_INNER_H

#include "me/types.h"

typedef struct s_point t_point;

struct s_point
{
	t_u32 row;
	t_u32 column;
};

t_point point__new(t_u32 row, t_u32 column);
t_point point_add(t_point a, t_point b);
t_point point_max(t_point a, t_point b);
t_point point_min(t_point a, t_point b);
t_point point_sub(t_point a, t_point b);
bool point_eq(t_point a, t_point b);
bool point_gt(t_point a, t_point b);
bool point_gte(t_point a, t_point b);
bool point_lt(t_point a, t_point b);
bool point_lte(t_point a, t_point b);


#endif /* POINT_INNER_H */

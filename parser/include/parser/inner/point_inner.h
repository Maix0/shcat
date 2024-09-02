/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point_inner.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:05:43 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/02 20:07:26 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_INNER_H
#define POINT_INNER_H

#include "me/types.h"

typedef struct s_point t_point;
typedef t_point		   TSPoint;

struct s_point
{
	t_u32 row;
	t_u32 column;
};

#endif /* POINT_INNER_H */

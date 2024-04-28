/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 14:54:39 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/31 15:07:54 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC2_H
# define VEC2_H

# include "me/types.h"

typedef struct s_vi2d
{
	t_i32				x;
	t_i32				y;
}						t_vi2d;

typedef struct s_vu2d
{
	t_u32				x;
	t_u32				y;
}						t_vu2d;

typedef struct s_vf2d
{
	t_f32				x;
	t_f32				y;
}						t_vf2d;

static inline t_vf2d	vf2d(t_f32 x, t_f32 y)
{
	return ((t_vf2d){.x = x, .y = y});
}

static inline t_vi2d	vi2d(t_i32 x, t_i32 y)
{
	return ((t_vi2d){.x = x, .y = y});
}

static inline t_vu2d	vu2d(t_u32 x, t_u32 y)
{
	return ((t_vu2d){.x = x, .y = y});
}

static inline t_vi2d	vi2d_add(t_vi2d lhs, t_vi2d rhs)
{
	return ((t_vi2d){.x = lhs.x + rhs.x, .y = lhs.y + rhs.y});
}

static inline t_vi2d	vi2d_sub(t_vi2d lhs, t_vi2d rhs)
{
	return ((t_vi2d){.x = lhs.x - rhs.x, .y = lhs.y - rhs.y});
}
#endif /* VEC2_H */

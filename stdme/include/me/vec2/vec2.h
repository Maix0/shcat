/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 14:54:39 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:12 by rparodi          ###   ########.fr       */
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

/// @brief Create a 2D float vector
/// @param x The x component
/// @param y The y component
/// @return The created vector
static inline t_vf2d	vf2d(t_f32 x, t_f32 y)
{
	return ((t_vf2d){.x = x, .y = y});
}

/// @brief Create a 2D int vector
/// @param x The x component
/// @param y The y component
/// @return The created vector
static inline t_vi2d	vi2d(t_i32 x, t_i32 y)
{
	return ((t_vi2d){.x = x, .y = y});
}

/// @brief Create a 2D unsigned int vector
/// @param x The x component
/// @param y The y component
/// @return The created vector
static inline t_vu2d	vu2d(t_u32 x, t_u32 y)
{
	return ((t_vu2d){.x = x, .y = y});
}

/// @brief Add two 2D int vectors
/// @param lhs  The left hand side vector
/// @param rhs  The right hand side vector
/// @return  The result of the addition
static inline t_vi2d	vi2d_add(t_vi2d lhs, t_vi2d rhs)
{
	return ((t_vi2d){.x = lhs.x + rhs.x, .y = lhs.y + rhs.y});
}

/// @brief Substract two 2D int vectors
/// @param lhs  The left hand side vector
/// @param rhs  The right hand side vector
/// @return  The result of the substraction
static inline t_vi2d	vi2d_sub(t_vi2d lhs, t_vi2d rhs)
{
	return ((t_vi2d){.x = lhs.x - rhs.x, .y = lhs.y - rhs.y});
}

#endif /* VEC2_H */

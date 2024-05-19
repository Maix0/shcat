/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:49:02 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/24 17:36:50 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLORS_H
# define COLORS_H

# include "me/types.h"

typedef __attribute__((aligned(4))) struct s_color
{
	t_u8	r;
	t_u8	b;
	t_u8	g;
	t_u8	a;
}		t_color;

/// @brief Create a new color with an specified alpha channel
/// @param r the red channel
/// @param g the green channel
/// @param b the blue channel
/// @param alpha the alpha channel
/// @return the resulting color
t_color	new_color_with_alpha(t_u8 r, t_u8 g, t_u8 b, t_u8 alpha);

/// @brief Create a new color
/// @param r the red channel
/// @param g the green channel
/// @param b the blue channel
/// @return the resulting color
t_color	new_color(t_u8 r, t_u8 g, t_u8 b);

#endif

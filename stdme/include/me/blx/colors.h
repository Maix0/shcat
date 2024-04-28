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

t_color	new_color_with_alpha(t_u8 r, t_u8 g, t_u8 b, t_u8 alpha);
t_color	new_color(t_u8 r, t_u8 g, t_u8 b);

#endif

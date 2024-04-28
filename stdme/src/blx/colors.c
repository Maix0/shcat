/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:01:18 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/27 16:26:30 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/blx/colors.h"
#include "me/types.h"

t_color	new_color_with_alpha(t_u8 r, t_u8 g, t_u8 b, t_u8 alpha)
{
	return ((t_color){.r = r, .g = g, .b = b, .a = alpha});
}

t_color	new_color(t_u8 r, t_u8 g, t_u8 b)
{
	return (new_color_with_alpha(r, g, b, 0x00));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 22:40:12 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/26 15:39:04 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/blx/blx.h"
#include "me/blx/sprite.h"
#include <mlx.h>

void	blx_sprite_free(t_sprite img)
{
	mlx_destroy_image(img.ctx->mlx, img.img);
}

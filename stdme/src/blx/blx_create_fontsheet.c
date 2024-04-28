/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blx_create_fontsheet.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:18:44 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/31 20:10:02 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/blx/blx.h"
#include "me/blx/sprite.h"
#include "me/types.h"
#include "me/printf/printf.h"
#include <stdio.h>
#include <stdlib.h>

#define FONT_SHEET_PATH "textures/font.xpm"

void	blx_create_fontsheet(t_blx *app)
{
	if (!blx_sprite_from_xpm(app, FONT_SHEET_PATH, &app->_data.font))
	{
		me_eprintf("Error:\nCouldn't open sprite sheet !\n");
		exit(5);
	}
}

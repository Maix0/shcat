/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:47:50 by maiboyer          #+#    #+#             */
/*   Updated: 2023/11/04 16:51:28 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/char/islower.h"
#include "me/char/toupper.h"

bool	me_toupper(char chr)
{
	if (me_islower(chr))
		return (chr - ('a' - 'A'));
	else
		return (chr);
}

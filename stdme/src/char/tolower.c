/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:47:50 by maiboyer          #+#    #+#             */
/*   Updated: 2023/11/04 16:56:03 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/char/isupper.h"
#include "me/char/tolower.h"

bool	me_tolower(char chr)
{
	if (me_isupper(chr))
		return (chr + ('a' - 'A'));
	else
		return (chr);
}

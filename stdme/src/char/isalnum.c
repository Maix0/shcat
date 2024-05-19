/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:19:40 by maiboyer          #+#    #+#             */
/*   Updated: 2023/11/09 19:38:51 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/char/char.h"
#include "me/char/char.h"
#include "me/char/char.h"

bool	me_isalnum(char chr)
{
	return (me_isalpha(chr) || me_isdigit(chr));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:19:40 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:23 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/char/char.h"
#include "me/char/char.h"
#include "me/char/char.h"

bool	me_isalnum(char chr)
{
	return (me_isalpha(chr) || me_isdigit(chr));
}

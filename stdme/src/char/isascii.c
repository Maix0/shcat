/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:51:01 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:24 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/char/char.h"

bool	me_isascii(signed char chr)
{
	return (0 <= chr && chr);
}

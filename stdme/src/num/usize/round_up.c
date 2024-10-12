/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   round_up.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:04:51 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:37 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/num/usize.h"

t_usize	usize_round_up_to(t_usize self, t_usize mul)
{
	t_usize	mod;

	if (mul == 0)
		return (self);
	mod = self % mul;
	if (mod == 0)
		return (self);
	return (self + (mul - mod));
}

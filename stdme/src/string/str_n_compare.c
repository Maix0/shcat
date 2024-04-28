/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_n_compare.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:53:47 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 14:52:48 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/string/str_n_compare.h"

// PLEASE FIX THIS FUNCTION IF NEEDED !
t_i32	str_n_compare(t_const_str lhs, t_const_str rhs, t_usize n)
{
	t_usize	index;

	index = 0;
	if (n == 0)
		return (0);
	while (lhs[index] && rhs[index] && lhs[index] == rhs[index] && index < n
		- 1)
		index++;
	return ((t_i32)(t_u8)lhs[index] - (t_i32)(t_u8)rhs[index]);
}

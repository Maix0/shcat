/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_n_compare.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:53:47 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:47 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/str/str.h"

// PLEASE FIX THIS FUNCTION IF NEEDED !
bool	str_n_compare(t_const_str lhs, t_const_str rhs, t_usize n)
{
	t_usize	index;

	index = 0;
	if (n == 0)
		return (true);
	while (lhs[index] && rhs[index] && lhs[index] == rhs[index] && index < n
		- 1)
		index++;
	return ((t_i32)(t_u8)lhs[index] == (t_i32)(t_u8)rhs[index]);
}

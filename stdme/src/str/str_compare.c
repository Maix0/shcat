/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_compare.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:53:47 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:44 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/str/str.h"

bool	str_compare(t_const_str lhs, t_const_str rhs)
{
	t_usize	index;

	if (lhs == NULL || rhs == NULL)
		return (lhs == rhs);
	index = 0;
	while (lhs[index] && rhs[index] && lhs[index] == rhs[index])
		index++;
	return ((t_i32)(t_u8)lhs[index] == (t_i32)(t_u8)rhs[index]);
}

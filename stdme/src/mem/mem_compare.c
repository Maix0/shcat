/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_compare.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:16:02 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:33 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"

bool	mem_compare(const void *lhs, const void *rhs, t_usize count)
{
	t_usize	i;
	t_u8	*lhs_;
	t_u8	*rhs_;

	i = 0;
	lhs_ = (t_u8 *)lhs;
	rhs_ = (t_u8 *)rhs;
	while (i < count)
	{
		if (lhs_[i] - rhs_[i])
			return (false);
		i++;
	}
	return (true);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:05:47 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:42 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "me/printf/formatter/utils.h"

void	handle_weird_precision_stuff(t_printf_arg *data, t_prec_strs strs,
							t_usize value)
{
	if (!value && data->extra.precision == 0 && (data->flags & PRECISION))
	{
		data->flags &= (~ZERO_ALIGN);
		data->flags |= ALIGN;
		if (strs.free_out)
			*strs.out = (mem_free(*strs.out), (t_str)mem_alloc_array(1, 1));
		else
			*strs.out = "";
		*strs.pretty = "";
	}
	else if ((data->flags & PRECISION) && !data->extra.left_align)
	{
		data->flags &= (~ZERO_ALIGN);
		data->flags |= ALIGN;
	}
}

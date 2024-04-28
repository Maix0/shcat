/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:45:06 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/28 19:42:10 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/fs/putnbr_fd.h"
#include "me/fs/write.h"

static void	me_inner(t_u64 nb, t_str out, t_usize *idx)
{
	bool	need_print;
	t_u64	modulus;
	char	c;

	modulus = 1000000000;
	need_print = false;
	while (modulus)
	{
		c = (char)(nb / modulus);
		if (c != 0 || need_print)
		{
			out[(*idx)++] = c + '0';
			need_print = true;
		}
		nb = nb % modulus;
		modulus /= 10;
	}
}

void	me_putnbr_fd(t_i32 n, t_file file)
{
	t_usize	idx;
	t_u64	nb;
	char	out[15];

	nb = (t_u64)n;
	idx = 0;
	if (nb < 0)
	{
		out[idx++] = '-';
		nb = -nb;
	}
	if (nb == 0)
		out[idx++] = '0';
	me_inner(nb, out, &idx);
	me_write(file, (t_u8 *)out, idx);
}

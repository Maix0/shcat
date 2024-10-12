/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:15:57 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:26 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/convert/numbers_to_str.h"
#include "me/mem/mem.h"
#include "me/str/str.h"
#include "me/types.h"
#include <stdint.h>
#include <stdio.h>

static t_error	_check_base(t_str base)
{
	t_usize	i;
	t_usize	j;

	i = 0;
	if (base == NULL)
		return (ERROR);
	while (base[i] != '\0')
	{
		j = 1;
		while (base[i + j] != '\0')
			if (base[i + (j++)] == base[i])
				return (ERROR);
		i++;
	}
	if (i <= 1)
		return (ERROR);
	return (NO_ERROR);
}

static void	_set_modulus(t_num_str_state *s)
{
	s->modulus = 1;
	s->base_len = str_len(s->base);
	while (UINT64_MAX / s->modulus >= s->base_len)
		s->modulus *= s->base_len;
}

static char	_get_char(t_u64 value, t_num_str_state *s)
{
	if (value == 0)
		s->zero = true;
	else
		s->zero = false;
	return (s->base[value]);
}

static t_error	_format_u64_base_innner(t_num_str_state *s)
{
	char	c;

	if (s->value == 0)
		return (s->buffer[s->idx++] = _get_char(0, s), NO_ERROR);
	while (s->modulus)
	{
		c = _get_char(s->value / s->modulus, s);
		if (!s->zero || s->print)
		{
			s->buffer[s->idx++] = c;
			s->print = true;
		}
		s->value = s->value % s->modulus;
		s->modulus /= s->base_len;
	}
	return (NO_ERROR);
}

t_error	_format_u64(t_num_str args, t_str *out)
{
	t_num_str_state	s;
	t_str			res;

	if (_check_base(args.base))
		return (ERROR);
	if (args.prefix == NULL)
		args.prefix = "";
	mem_set_zero(&s, sizeof(s));
	s.idx = 0;
	s.base = args.base;
	s.value = args.value;
	if (args.is_nonnegative)
		s.buffer[s.idx++] = '-';
	_set_modulus(&s);
	s.print = false;
	if (_format_u64_base_innner(&s))
		return (ERROR);
	res = str_join(args.prefix, s.buffer);
	if (res == NULL)
		return (ERROR);
	return (*out = res, NO_ERROR);
}

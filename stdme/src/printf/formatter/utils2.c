/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:00:07 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:41 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/char/char.h"
#include "me/printf/formatter/utils.h"
#include "me/types.h"

void	set_var_for_pad_and_stuff(t_pad_and_stuff_args *a, t_printf_arg *d)
{
	t_isize	fill_zero;
	t_isize	fill;

	fill_zero = 0;
	fill = 0;
	if (d->flags & ZERO_ALIGN && a->len < d->extra.align)
		fill_zero = d->extra.align - a->len - a->fill_zero - 2 * d->extra.pretty
			- a->sign_len;
	if (d->flags & PRECISION && a->len < d->extra.precision)
		fill_zero = d->extra.precision - a->len;
	if (d->flags & (ALIGN) && a->len < d->extra.align)
		fill = d->extra.align - a->len - a->fill_zero - 2 * d->extra.pretty
			- a->sign_len - fill_zero;
	if (fill_zero < 0)
		fill_zero = 0;
	if (fill < 0)
		fill = 0;
	if (fill_zero < 0)
		fill_zero = 0;
	if (fill < 0)
		fill = 0;
	a->fill_zero = fill_zero;
	a->fill = fill;
}

void	print_with_func(t_pad_and_stuff_args *a, t_printf_arg *d,
		t_printf_func f, t_const_str t)
{
	f(t, 1, d->p_args);
	if (t[0] == ' ' && t[1] == 0 && a->fill)
		a->fill--;
	if (t[0] == '0' && t[1] == 0 && a->fill_zero)
		a->fill_zero--;
}

void	pad_and_stuff(t_pad_and_stuff_args a, t_printf_arg d, t_printf_func f)
{
	set_var_for_pad_and_stuff(&a, &d);
	if (!(d.extra.left_align || d.extra.precision) && d.flags & (ZERO_ALIGN))
	{
		print_sign_if_needed(a, d, f);
		while (a.allow_zero_fill && a.fill_zero > 0)
			print_with_func(&a, &d, f, "0");
	}
	else
	{
		while (!(d.extra.left_align) && d.flags & (ALIGN) && a.fill > 0)
			print_with_func(&a, &d, f, " ");
		print_sign_if_needed(a, d, f);
		if (d.extra.pretty)
			f(a.pretty, a.pretty_len, d.p_args);
	}
	while (a.allow_zero_fill && a.fill_zero > 0)
		print_with_func(&a, &d, f, "0");
	f(a.str, a.len, d.p_args);
	while (d.extra.left_align && a.fill > 0)
		print_with_func(&a, &d, f, " ");
}

void	handle_prec_and_align(t_const_str fmt, t_usize *c_idx,
		t_printf_arg *c_arg)
{
	if (c_arg->extra.align && !(c_arg->flags & ZERO_ALIGN))
		c_arg->flags |= ALIGN;
	if (fmt[*c_idx] == '.')
	{
		(*c_idx)++;
		c_arg->flags |= PRECISION;
	}
}

void	advance_atoi(t_const_str fmt, t_usize *idx)
{
	while (me_isdigit(fmt[*idx]))
		(*idx)++;
}

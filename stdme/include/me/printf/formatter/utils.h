/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:58:41 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:10 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "me/printf/matchers/matchers.h"
# include "me/printf/_internal_printf.h"
# include "me/types.h"
# include <stdarg.h>

typedef struct s_prec_strs
{
	t_str			*out;
	t_str			*pretty;
	bool			free_out;
}					t_prec_strs;

typedef struct s_pad_and_stuff_args
{
	t_usize			fill_zero;
	t_usize			fill;
	t_usize			len;
	t_usize			pretty_len;
	t_usize			sign_len;
	t_str			pretty;
	t_str			str;
	t_str			sign;
	bool			allow_zero_fill;

}					t_pad_and_stuff_args;
typedef struct s_pad_inner_args
{
	void			*p_args;
	t_usize			fmt_len;
	t_printf_func	f;
	va_list			*arguments;
	t_matcher_list	*matchers;
}					t_pad_inner_args;

void				set_var_for_pad_and_stuff(t_pad_and_stuff_args *a,
						t_printf_arg *d);
void				print_with_func(t_pad_and_stuff_args *a, t_printf_arg *d,
						t_printf_func f, t_const_str t);
void				pad_and_stuff(t_pad_and_stuff_args a, t_printf_arg d,
						t_printf_func f);
void				handle_prec_and_align(t_const_str fmt, t_usize *c_idx,
						t_printf_arg *c_arg);
bool				handle_atoi_stuff(t_const_str fmt, t_usize *c_idx,
						t_usize *nxt, t_printf_arg *c_arg);
void				set_params2(t_const_str fmt, t_usize *c_idx, t_usize *nxt,
						t_printf_arg *c_arg);
bool				set_params(t_const_str fmt, t_usize *c_idx, t_usize *nxt,
						t_printf_arg *c_arg);
void				ret_reset(t_usize *c_idx, t_usize *nxt, t_const_str fmt);
t_printf_arg		print_substr(t_usize *c_idx, t_usize *nxt, t_const_str fmt,
						t_pad_inner_args extra);
void				pad_inner(t_const_str fmt, t_usize *c_idx, t_usize *nxt,
						t_pad_inner_args extra);
void				advance_atoi(t_const_str fmt, t_usize *idx);
void				me_printf_str_inner(t_const_str fmt, t_printf_func f,
						va_list *arguments, void *p_args);
void				print_sign_if_needed(t_pad_and_stuff_args a, t_printf_arg d,
						t_printf_func f);
void				handle_weird_precision_stuff(t_printf_arg *data,
						t_prec_strs strs, t_usize value);
#endif

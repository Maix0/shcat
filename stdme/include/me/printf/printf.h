/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:10:27 by maiboyer          #+#    #+#             */
/*   Updated: 2024/02/09 15:06:53 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H

# define PRINTF_H
# include "me/types.h"
# include <stdarg.h>

typedef struct s_fprintf_arg
{
	t_usize				total_print;
	t_file				fd;
}						t_fprintf_arg;

typedef enum e_printf_flags
{
	PRECISION = 1 << 1,
	ALIGN = 1 << 2,
	ZERO_ALIGN = 1 << 3,
	SIGN = 1 << 4,
}						t_printf_flags;

typedef enum e_printf_type
{
	CHAR = 1 << 0,
	STR = 1 << 1,
	U64 = 1 << 2,
	I64 = 1 << 3,
	VOID_PTR = 1 << 4,
	I32 = 1 << 5,
	U32 = 1 << 6,
}						t_printf_type;

typedef struct s_printf_extra_args
{
	t_u64				precision;
	t_u64				align;
	bool				left_align;
	bool				space_align;
	bool				pretty;
}						t_printf_extra_args;

typedef struct s_printf_args
{
	void				*argument;
	void				*p_args;
	t_printf_extra_args	extra;
	t_printf_flags		flags;
}						t_printf_arg;

typedef void			(*t_printf_func)(t_const_str to_write,
				t_usize to_write_len, void *p_args);

t_usize					me_printf(t_const_str fmt, ...);
t_usize					me_eprintf(t_const_str fmt, ...);
t_usize					me_vprintf(t_const_str fmt, va_list *args);
t_usize					me_veprintf(t_const_str fmt, va_list *args);

#endif

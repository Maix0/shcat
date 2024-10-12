/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _internal_printf.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 17:36:38 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:11 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _INTERNAL_PRINTF_H
# define _INTERNAL_PRINTF_H

# include "me/fs/fs.h"
# include "me/string/string.h"
# include "me/types.h"

typedef enum e_printf_flags			t_printf_flags;
typedef enum e_printf_type			t_printf_type;
typedef struct s_fprintf_arg		t_fprintf_arg;
typedef struct s_printf_args		t_printf_arg;
typedef struct s_printf_extra_args	t_printf_extra_args;
typedef struct s_sprintf_arg		t_sprintf_arg;

typedef void						(*t_printf_func)(t_const_str to_write,
							t_usize to_write_len, void *p_args);

struct								s_fprintf_arg
{
	t_usize							total_print;
	t_fd							*fd;
};

struct								s_sprintf_arg
{
	t_usize							total_print;
	t_string						*buffer;
};
enum								e_printf_flags
{
	PRECISION = 1 << 1,
	ALIGN = 1 << 2,
	ZERO_ALIGN = 1 << 3,
	SIGN = 1 << 4,
};

enum								e_printf_type
{
	CHAR = 1 << 0,
	STR = 1 << 1,
	U64 = 1 << 2,
	I64 = 1 << 3,
	VOID_PTR = 1 << 4,
	I32 = 1 << 5,
	U32 = 1 << 6,
};

struct								s_printf_extra_args
{
	t_u64							precision;
	t_u64							align;
	bool							left_align;
	bool							space_align;
	bool							pretty;
};

struct								s_printf_args
{
	void							*argument;
	void							*p_args;
	t_printf_extra_args				extra;
	t_printf_flags					flags;
};

void				me_printf_write(t_const_str to_write,
						t_usize to_write_len, void *p_args);
void				me_printf_append_string(t_const_str to_write,
						t_usize to_write_len, void *p_args);

#endif /* _INTERNAL_PRINTF_H */

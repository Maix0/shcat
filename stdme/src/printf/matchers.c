/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matchers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:07:40 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/11 19:11:51 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem_compare.h"
#include "me/printf/formatter/formatter.h"
#include "me/printf/matchers/matchers.h"
#include "me/printf/printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

t_matcher_list	*get_matchers(void)
{
	static t_matcher_list	printf_matchers = (t_matcher_list){
		.data = {
	{.matcher = "o", .matcher_len = 1, .arg_type = U64, .f = &printf_o},
	{.matcher = "c", .matcher_len = 1, .arg_type = CHAR, .f = &printf_c},
	{.matcher = "s", .matcher_len = 1, .arg_type = STR, .f = &printf_s},
	{.matcher = "p", .matcher_len = 1, .arg_type = VOID_PTR, .f = &printf_p},
	{.matcher = "d", .matcher_len = 1, .arg_type = I32, .f = &printf_d},
	{.matcher = "i", .matcher_len = 1, .arg_type = I32, .f = &printf_d},
	{.matcher = "u", .matcher_len = 1, .arg_type = U32, .f = &printf_u},
	{.matcher = "x", .matcher_len = 1, .arg_type = U32, .f = &printf_x_low},
	{.matcher = "X", .matcher_len = 1, .arg_type = U32, .f = &printf_x_up},
	},
		.next = NULL,
	};

	return (&printf_matchers);
}

bool	insert_matcher(t_matcher matcher)
{
	t_matcher_list	*matchers;
	t_usize			i;

	matchers = get_matchers();
	while (matchers)
	{
		i = 0;
		while (i < PRINTF_BUFFER_CHUNK)
		{
			if (matchers->data[i].f == NULL)
			{
				(*matchers).data[i] = matcher;
				return (true);
			}
		}
		matchers->next = malloc(sizeof(t_matcher_list) * 1);
	}
	return (false);
}

t_matcher	*find_matcher(t_const_str fmt, t_matcher_list *matchers,
		t_usize *c_idx)
{
	t_usize		matcher_index;
	t_matcher	*matcher;

	while (matchers)
	{
		matcher_index = 0;
		while (matcher_index < PRINTF_BUFFER_CHUNK)
		{
			matcher = &matchers->data[matcher_index];
			if (matcher->f)
			{
				if (!mem_compare(&fmt[*c_idx], matcher->matcher,
						matcher->matcher_len))
				{
					*c_idx += matcher->matcher_len;
					return (matcher);
				}
			}
			matcher_index++;
		}
		matchers = matchers->next;
	}
	return (NULL);
}

// FIGURE OUT HOW TO MAKE I64 WORK
void	call_matcher(t_matcher *matcher, t_printf_arg matcher_arguments,
		va_list args, t_printf_func f)
{
	t_matcher_tmp_val	vals;

	matcher_arguments.argument = NULL;
	if (matcher->arg_type == CHAR)
	{
		vals.chr_val = (char)va_arg(args, int);
		matcher_arguments.argument = (void *)&vals.chr_val;
	}
	if (matcher->arg_type == U32)
		vals.u64_val = va_arg(args, t_u32);
	if (matcher->arg_type == U64)
		vals.u64_val = va_arg(args, t_u64);
	if (matcher->arg_type == I64)
		vals.i64_val = va_arg(args, t_i64);
	if (matcher->arg_type == I32)
		vals.i64_val = va_arg(args, t_i32);
	if (matcher->arg_type == I32 || matcher->arg_type == I64)
		matcher_arguments.argument = (void *)&vals.i64_val;
	if (matcher->arg_type == U32 || matcher->arg_type == U64)
		matcher_arguments.argument = (void *)&vals.u64_val;
	if (matcher->arg_type == VOID_PTR)
		matcher_arguments.argument = (void *)va_arg(args, void *);
	if (matcher->arg_type == STR)
		matcher_arguments.argument = (void *)va_arg(args, t_str);
	matcher->f(matcher_arguments, f);
}

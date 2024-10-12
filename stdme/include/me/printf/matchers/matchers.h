/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matchers.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:09:07 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:11 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATCHERS_H
# define MATCHERS_H

# include "me/printf/_internal_printf.h"
# include "me/types.h"
# include <stdarg.h>
# define PRINTF_BUFFER_CHUNK 20

typedef struct s_matcher_tmp
{
	char					chr_val;
	t_i64					i64_val;
	t_u64					u64_val;
}							t_matcher_tmp_val;

typedef void				(*t_matcher_func)(t_printf_arg data,
					t_printf_func f);
typedef struct s_matcher
{
	t_const_str				matcher;
	t_usize					matcher_len;
	t_printf_type			arg_type;
	t_matcher_func			f;
}							t_matcher;

typedef struct s_matcher_list
{
	t_matcher				data[PRINTF_BUFFER_CHUNK];
	struct s_matcher_list	*next;
}							t_matcher_list;

t_matcher_list				*get_matchers(void);
bool						insert_matcher(t_matcher matcher);
t_matcher					*find_matcher(t_const_str fmt,
								t_matcher_list *matchers, t_usize *c_idx);
void						call_matcher(t_matcher *matcher,
								t_printf_arg matcher_arguments, va_list args,
								t_printf_func f);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_trim.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:43:42 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:48 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "me/str/str.h"
#include "me/str/str.h"
#include "me/str/str.h"
#include "me/str/str.h"
#include <stdlib.h>

t_str	str_trim(t_const_str str, t_const_str charset)
{
	t_usize	start_idx;
	t_usize	end_idx;
	t_usize	buf_size;
	t_str	out;

	if (str == NULL || charset == NULL)
		return (0);
	start_idx = 0;
	while (str[start_idx] && str_find_chr((t_str)charset,
			str[start_idx]) != NULL)
		start_idx++;
	end_idx = str_len((t_str)str);
	while (end_idx > 0 && str_find_chr((t_str)charset, str[end_idx]) != NULL)
		end_idx--;
	buf_size = end_idx - start_idx + 2;
	if (end_idx == 0)
		buf_size = 1;
	out = mem_alloc(sizeof(char) * buf_size);
	if (out == NULL)
		return (NULL);
	str_l_copy(out, &((t_str)str)[start_idx], buf_size);
	return (out);
}

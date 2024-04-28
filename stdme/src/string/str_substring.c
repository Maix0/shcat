/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_substring.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:42:55 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 16:52:34 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem_alloc.h"
#include "me/string/str_l_copy.h"
#include "me/string/str_len.h"
#include "me/string/str_substring.h"
#include <stdlib.h>

t_str	str_substring(t_const_str str, t_usize start, t_usize len)
{
	t_usize	len_str;
	t_usize	len_str_substring;
	t_str	out;

	if (str == NULL)
		return (NULL);
	len_str = str_len(str);
	if (start >= len_str)
		return (mem_alloc(1));
	len_str_substring = len_str - start + 1;
	if (len_str_substring > len)
		len_str_substring = len + 1;
	out = mem_alloc(sizeof(char) * len_str_substring);
	if (out == NULL)
		return (NULL);
	str_l_copy(out, &str[start], len_str_substring);
	return (out);
}

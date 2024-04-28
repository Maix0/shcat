/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_join.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:02:58 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 18:16:19 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem_alloc.h"
#include "me/string/str_join.h"
#include "me/string/str_l_cat.h"
#include "me/string/str_l_copy.h"
#include "me/string/str_len.h"
#include <stdlib.h>

t_str	str_join(t_const_str s1, t_const_str s2)
{
	t_str	out;
	t_usize	buf_size;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	buf_size = str_len(s1) + str_len(s2) + 1;
	out = mem_alloc(sizeof(char) * buf_size);
	if (out == NULL)
		return (NULL);
	str_l_copy(out, s1, buf_size);
	str_l_cat(out, s2, buf_size);
	return (out);
}

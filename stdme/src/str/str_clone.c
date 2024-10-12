/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_clone.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:05:48 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:44 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/str/str.h"
#include "me/mem/mem.h"
#include "me/str/str.h"
#include "me/str/str.h"
#include <stdlib.h>

t_str	str_clone(t_const_str source)
{
	t_str	res;
	t_usize	len;

	if (source == NULL)
		return (NULL);
	len = str_len(source) + 1;
	res = mem_alloc_array(sizeof(*res), len);
	if (res == NULL)
		return (NULL);
	str_l_copy(res, source, len);
	return (res);
}

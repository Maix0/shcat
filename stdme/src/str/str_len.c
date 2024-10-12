/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:07:41 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:46 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/str/str.h"

t_usize	str_len(t_const_str str)
{
	t_usize	out;

	if (str == NULL)
		return (0);
	out = 0;
	while (str[out])
		out++;
	return (out);
}

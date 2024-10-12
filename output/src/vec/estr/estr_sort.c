/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   estr_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 20:04:33 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:42 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include "me/vec/vec_estr.h"

void	vec_estr_sort(t_vec_estr *v, t_vec_estr_sort_fn is_sorted_fn)
{
	t_usize				sorted_part;
	t_usize				i;
	t_expandable_str	tmp;

	if (v == NULL)
		return ;
	sorted_part = v->len;
	while (sorted_part > 0)
	{
		i = 0;
		while (i < sorted_part - 1)
		{
			if (!is_sorted_fn(&v->buffer[i], &v->buffer[i + 1]))
			{
				tmp = v->buffer[i];
				v->buffer[i] = v->buffer[i + 1];
				v->buffer[i + 1] = tmp;
			}
			i++;
		}
		sorted_part--;
	}
}

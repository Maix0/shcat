/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_iter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:39:05 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 15:03:55 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/list/list_iter.h"

void	list_iter(t_list *list, void (*f)(void *))
{
	while (list)
	{
		f(list->content);
		list = list->next;
	}
}

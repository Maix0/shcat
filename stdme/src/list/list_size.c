/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:23:19 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 15:05:00 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/list/list_size.h"

t_usize	list_size(t_list *lst)
{
	t_list	*head;
	t_usize	idx;

	head = lst;
	idx = 0;
	while (head)
	{
		head = head->next;
		idx++;
	}
	return (idx);
}

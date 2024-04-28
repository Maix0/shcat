/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:40:24 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 15:05:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/list/list_alloc_node.h"
#include "me/list/list_free_all.h"
#include "me/list/list_map.h"
#include <stdlib.h>

t_list	*list_map(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*data;
	t_list	new;
	t_list	*cursor;

	new = (t_list){.next = NULL, .content = NULL};
	cursor = &new;
	while (lst)
	{
		data = f(lst->content);
		cursor->next = list_alloc_node(data);
		if (cursor->next == NULL)
		{
			del(data);
			list_free_all(&new.next, del);
			return (NULL);
		}
		cursor = cursor->next;
		lst = lst->next;
	}
	return (new.next);
}

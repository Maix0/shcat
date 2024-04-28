/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_get_last.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:37:08 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 15:03:49 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/list/list_get_last.h"

t_list	*list_get_last(t_list *list)
{
	t_list	*head;

	head = list;
	if (head == NULL)
		return (NULL);
	while (head->next)
		head = head->next;
	return (head);
}

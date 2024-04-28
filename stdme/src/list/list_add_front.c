/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_add_front.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:15:23 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 15:02:50 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/list/list_add_front.h"
#include "me/list/list_alloc_node.h"

void	list_add_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

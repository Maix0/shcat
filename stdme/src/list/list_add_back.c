/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_add_back.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:38:45 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 15:02:42 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/list/list_add_back.h"
#include "me/list/list_get_last.h"

void	list_add_back(t_list **list, t_list *new)
{
	if (*list)
		list_get_last(*list)->next = new;
	else
		*list = new;
}

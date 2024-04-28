/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_alloc_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:57:28 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 18:13:05 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/list/list_alloc_node.h"
#include "me/mem/mem_alloc.h"

t_list	*list_alloc_node(void *content)
{
	t_list	*out;

	out = mem_alloc(sizeof(t_list) * 1);
	if (out == NULL)
		return (NULL);
	out->content = content;
	out->next = NULL;
	return (out);
}

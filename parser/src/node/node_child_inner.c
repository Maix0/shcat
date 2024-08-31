/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_child_inner.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:16:18 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:16:34 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/_inner/node.h"

TSNode ts_node__child(TSNode self, t_u32 child_index, bool include_anonymous)
{
	TSNode result = self;
	bool   did_descend = true;

	while (did_descend)
	{
		did_descend = false;

		TSNode			  child;
		t_u32			  index = 0;
		NodeChildIterator iterator = ts_node_iterate_children(&result);
		while (ts_node_child_iterator_next(&iterator, &child))
		{
			if (ts_node__is_relevant(child, include_anonymous))
			{
				if (index == child_index)
				{
					return child;
				}
				index++;
			}
			else
			{
				t_u32 grandchild_index = child_index - index;
				t_u32 grandchild_count = ts_node__relevant_child_count(child, include_anonymous);
				if (grandchild_index < grandchild_count)
				{
					printf("did_descend\n");
					did_descend = true;
					result = child;
					child_index = grandchild_index;
					break;
				}
				index += grandchild_count;
			}
		}
	}

	return ts_node__null();
}

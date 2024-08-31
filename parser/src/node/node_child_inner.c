/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_child_inner.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:16:18 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:23:14 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/_inner/node.h"

TSNode	ts_node__child(TSNode self, t_u32 child_index, bool include_anonymous)
{
	TSNode				result;
	bool				did_descend;
	TSNode				child;
	t_u32				index;
	NodeChildIterator	iterator;
	t_u32				grandchild_index;
	t_u32				grandchild_count;

	result = self;
	did_descend = true;
	while (did_descend)
	{
		did_descend = false;
		index = 0;
		iterator = ts_node_iterate_children(&result);
		while (ts_node_child_iterator_next(&iterator, &child))
		{
			if (ts_node__is_relevant(child, include_anonymous))
			{
				if (index == child_index)
					return (child);
				index++;
			}
			else
			{
				grandchild_index = child_index - index;
				grandchild_count = ts_node__relevant_child_count(child,
						include_anonymous);
				if (grandchild_index < grandchild_count)
				{
					did_descend = true;
					result = child;
					child_index = grandchild_index;
					break ;
				}
				index += grandchild_count;
			}
		}
	}
	return (ts_node__null());
}

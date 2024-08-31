/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_child.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:14:40 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:15:06 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/_inner/node.h"

t_u32 ts_node_child_count(TSNode self)
{
	Subtree tree = ts_node__subtree(self);
	if (ts_subtree_child_count(tree) > 0)
		return tree->visible_child_count;
	else
		return 0;
}

t_u32 ts_node_named_child_count(TSNode self)
{
	Subtree tree = ts_node__subtree(self);
	if (ts_subtree_child_count(tree) > 0)
		return tree->named_child_count;
	else
		return 0;
}

TSFieldId ts_node_field_id_for_child(TSNode self, t_u32 child_index)
{
	TSNode	  result = self;
	bool	  did_descend = true;
	TSFieldId inherited_field_id = 0;

	while (did_descend)
	{
		did_descend = false;

		TSNode			  child;
		t_u32			  index = 0;
		NodeChildIterator iterator = ts_node_iterate_children(&result);
		while (ts_node_child_iterator_next(&iterator, &child))
		{
			if (ts_node__is_relevant(child, true))
			{
				if (index == child_index)
				{
					if (ts_node_is_extra(child))
						return 0;
					TSFieldId field_id = ts_node__field_id_from_language(result, iterator.structural_child_index - 1);
					if (field_id)
						return field_id;
					return inherited_field_id;
				}
				index++;
			}
			else
			{
				t_u32 grandchild_index = child_index - index;
				t_u32 grandchild_count = ts_node__relevant_child_count(child, true);
				if (grandchild_index < grandchild_count)
				{
					TSFieldId field_id = ts_node__field_id_from_language(result, iterator.structural_child_index - 1);
					if (field_id)
						inherited_field_id = field_id;
					did_descend = true;
					result = child;
					child_index = grandchild_index;
					break;
				}
				index += grandchild_count;
			}
		}
	}
	return 0;
}

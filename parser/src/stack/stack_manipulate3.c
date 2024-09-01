/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_manipulate3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:00:07 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:00:41 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/stack.h"
#include "parser/inner/stack.h"

t_stack_action	pop_error_callback(void *payload,
		const t_stack_iterator *iterator)
{
	bool	*found_error;

	if (iterator->subtrees.size > 0)
	{
		found_error = payload;
		if (!*found_error
			&& ts_subtree_is_error(iterator->subtrees.contents[0]))
		{
			*found_error = true;
			return (SActionPop | SActionStop);
		}
		else
			return (SActionStop);
	}
	else
		return (SActionNone);
}

SubtreeArray	ts_stack_pop_error(t_stack *self, t_stack_version version)
{
	t_stack_node		*node;
	bool				found_error;
	t_stack_slice_array	pop;
	t_usize				i;

	node = array_get(&self->heads, version)->node;
	i = 0;
	while (i < node->link_count)
	{
		if (node->links[i].subtree
			&& ts_subtree_is_error(node->links[i].subtree))
		{
			found_error = false;
			pop = stack__iter(self, version, pop_error_callback, &found_error,
					1);
			if (pop.size > 0)
			{
				assert(pop.size == 1);
				ts_stack_renumber_version(self, pop.contents[0].version,
					version);
				return (pop.contents[0].subtrees);
			}
			break ;
		}
		i++;
	}
	return ((SubtreeArray){.size = 0});
}

t_stack_action	pop_all_callback(void *payload,
		const t_stack_iterator *iterator)
{
	(void)payload;
	if (iterator->node->link_count == 0)
		return (SActionPop);
	else
		return (SActionNone);
}

t_stack_slice_array	ts_stack_pop_all(t_stack *self, t_stack_version version)
{
	return (stack__iter(self, version, pop_all_callback, NULL, 0));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subtree_helper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:34:30 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/02 21:39:19 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/language.h"
#include "parser/subtree.h"

void	ts_subtree_set_symbol(t_subtree *self, t_symbol symbol,
		const t_language *language)
{
	t_symbol_metadata	metadata;

	metadata = ts_language_symbol_metadata(language, symbol);
	(*self)->symbol = symbol;
	(*self)->named = metadata.named;
	(*self)->visible = metadata.visible;
}

// Clone a subtree.
t_subtree	ts_subtree_clone(t_subtree self)
{
	t_usize			alloc_size;
	t_usize			i;
	t_subtree		*new_children;
	t_subtree		*old_children;
	t_subtree_data	*result;

	alloc_size = ts_subtree_alloc_size(self->child_count);
	new_children = mem_alloc(alloc_size);
	old_children = ts_subtree_children(self);
	mem_copy(new_children, old_children, alloc_size);
	result = (t_subtree_data *)&new_children[self->child_count];
	i = 0;
	if (self->child_count > 0)
	{
		while (i < self->child_count)
		{
			new_children[i]->ref_count++;
			i++;
		}
	}
	else if (self->has_external_tokens)
		result->external_scanner_state = \
		ts_external_scanner_state_copy(&self->external_scanner_state);
	result->ref_count = 1;
	return ((t_subtree)result);
}

t_subtree	ts_subtree_ensure_owner(t_subtree self)
{
	t_subtree	result;

	result = ts_subtree_clone(self);
	ts_subtree_release(self);
	return (result);
}

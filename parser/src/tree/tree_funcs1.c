/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree_funcs1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:40:05 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:40:09 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/api.h"
#include "parser/subtree.h"
#include "parser/tree.h"

t_tree	*ts_tree_new(t_subtree root, const t_language *language)
{
	t_tree	*result;

	result = mem_alloc(sizeof(*result));
	result->root = root;
	result->language = language;
	return (result);
}

t_tree	*ts_tree_copy(const t_tree *self)
{
	(self->root->ref_count++);
	return (ts_tree_new(self->root, self->language));
}

void	ts_tree_delete(t_tree *self)
{
	if (self == NULL)
		return ;
	ts_subtree_release(self->root);
	mem_free(self);
}

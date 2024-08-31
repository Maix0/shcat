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

TSTree	*ts_tree_new(Subtree root, const TSLanguage *language)
{
	TSTree	*result;

	result = mem_alloc(sizeof(*result));
	result->root = root;
	result->language = language;
	return (result);
}

TSTree	*ts_tree_copy(const TSTree *self)
{
	ts_subtree_retain(self->root);
	return (ts_tree_new(self->root, self->language));
}

void	ts_tree_delete(TSTree *self)
{
	if (self == NULL)
		return ;
	ts_subtree_release(self->root);
	mem_free(self);
}

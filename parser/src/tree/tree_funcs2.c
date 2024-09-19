/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree_funcs2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:40:17 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:41:01 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/api.h"
#include "parser/subtree.h"
#include "parser/tree.h"

t_node	ts_tree_root_node(const t_tree *self)
{
	return (ts_node_new(self, &self->root, ts_subtree_padding(self->root), 0));
}

t_node	ts_tree_root_node_with_offset(const t_tree *self, t_u32 offset_bytes,
		t_point offset_extent)
{
	t_length	offset;

	offset = (t_length){offset_bytes, offset_extent};
	return (ts_node_new(self, &self->root, length_add(offset,
				ts_subtree_padding(self->root)), 0));
}

const t_language	*ts_tree_language(const t_tree *self)
{
	return (self->language);
}

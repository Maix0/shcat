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

TSNode	ts_tree_root_node(const TSTree *self)
{
	return (ts_node_new(self, &self->root, ts_subtree_padding(self->root), 0));
}

TSNode	ts_tree_root_node_with_offset(const TSTree *self, t_u32 offset_bytes,
		TSPoint offset_extent)
{
	Length	offset;

	offset = (Length){offset_bytes, offset_extent};
	return (ts_node_new(self, &self->root, length_add(offset,
				ts_subtree_padding(self->root)), 0));
}

const TSLanguage	*ts_tree_language(const TSTree *self)
{
	return (self->language);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:04:59 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:12:08 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NODE_H
#define NODE_H

#include "me/types.h"
#include "parser/length.h"
#include "parser/subtree.h"

typedef struct s_node_child_iterator NodeChildIterator;
struct s_node_child_iterator
{
	t_subtree			parent;
	const TSTree   *tree;
	Length			position;
	t_u32			child_index;
	t_u32			structural_child_index;
	const TSSymbol *alias_sequence;
};

NodeChildIterator ts_node_iterate_children(const TSNode *node);
TSFieldId		  ts_node__field_id_from_language(TSNode self, t_u32 structural_child_index);
TSNode			  ts_node__child(TSNode self, t_u32 child_index, bool include_anonymous);
TSNode			  ts_node__null(void);
bool			  ts_node__is_relevant(TSNode self, bool include_anonymous);
bool			  ts_node_child_iterator_done(NodeChildIterator *self);
bool			  ts_node_child_iterator_next(NodeChildIterator *self, TSNode *result);
t_const_str		  ts_node__field_name_from_language(TSNode self, t_u32 structural_child_index);
t_u32			  ts_node__relevant_child_count(TSNode self, bool include_anonymous);
t_subtree			  ts_node__subtree(TSNode self);
t_u32			  ts_node__alias(const TSNode *self);

#endif /* NODE_H */

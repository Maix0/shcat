/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:04:59 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 19:35:40 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NODE_H
# define NODE_H

# include "me/types.h"
# include "parser/length.h"
# include "parser/subtree.h"

typedef struct s_node_child_iterator	NodeChildIterator;
struct s_node_child_iterator
{
	t_subtree		parent;
	const t_tree   *tree;
	t_length		position;
	t_u32			child_index;
	t_u32			structural_child_index;
	const t_symbol *alias_sequence;
};

NodeChildIterator ts_node_iterate_children(const t_node *node);
t_field_id		  ts_node__field_id_from_language(t_node self, t_u32 structural_child_index);
t_node			  ts_node__child(t_node self, t_u32 child_index, bool include_anonymous);
t_node			  ts_node__null(void);
bool			  ts_node__is_relevant(t_node self, bool include_anonymous);
bool			  ts_node_child_iterator_done(NodeChildIterator *self);
bool			  ts_node_child_iterator_next(NodeChildIterator *self, t_node *result);
t_const_str		  ts_node__field_name_from_language(t_node self, t_u32 structural_child_index);
t_u32			  ts_node__relevant_child_count(t_node self, bool include_anonymous);
t_subtree			  ts_node__subtree(t_node self);
t_u32			  ts_node__alias(const t_node *self);

#endif /* NODE_H */

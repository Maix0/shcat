/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_select.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:55:07 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/13 14:09:10 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/parser_inner.h"

// Determine if a given tree should be replaced by an
// alternative tree.
//
// The decision is based on the trees' error costs (if any),
// their dynamic precedence, and finally, as a default, by a
// recursive comparison of the trees' symbols.
bool	ts_parser__select_tree(t_parser *self, t_subtree left, t_subtree right)
{
	int	comparison;

	(void)(self);
	if (!left)
		return (true);
	if (!right)
		return (false);
	if (ts_subtree_error_cost(right) < ts_subtree_error_cost(left))
		return (true);
	if (ts_subtree_error_cost(left) < ts_subtree_error_cost(right))
		return (false);
	if (ts_subtree_dynamic_precedence(right) > \
		ts_subtree_dynamic_precedence(left))
		return (true);
	if (ts_subtree_dynamic_precedence(left) > \
		ts_subtree_dynamic_precedence(right))
		return (false);
	if (ts_subtree_error_cost(left) > 0)
		return (true);
	comparison = ts_subtree_compare(left, right);
	return (comparison == 1);
}

// Determine if a given tree's children should be replaced
// by an alternative array of children.
bool	ts_parser__select_children(t_parser *self, t_subtree left,
		const t_vec_subtree *children)
{
	t_subtree	scratch_tree;

	vec_subtree_copy_into(&self->scratch_trees, (void *)children);
	scratch_tree = ts_subtree_new_node(ts_subtree_symbol(left),
			&self->scratch_trees, 0, self->language);
	return (ts_parser__select_tree(self, left, (scratch_tree)));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_accept.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:02:35 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 21:37:04 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include "parser/inner/parser_inner.h"

void	_parser_accept_endloop(t_parser *self, t_subtree root, t_u32 *i)
{
	self->accept_count++;
	if (self->finished_tree)
	{
		if (ts_parser__select_tree(self, self->finished_tree, root))
		{
			ts_subtree_release(self->finished_tree);
			self->finished_tree = root;
		}
		else
			ts_subtree_release(root);
	}
	else
		self->finished_tree = root;
	(*i)++;
}

bool	parser_select_root(\
		t_parser *self, t_vec_subtree *trees, t_subtree *root, t_u32 *j)
{
	t_u32			k;
	t_u32			n;
	const t_subtree	*childs;
	t_subtree		tree;

	tree = trees->buffer[*j];
	if (!ts_subtree_extra(tree))
	{
		n = ts_subtree_child_count(tree);
		childs = ts_subtree_children(tree);
		k = 0;
		while (k < n)
		{
			childs[k]->ref_count++;
			k++;
		}
		vec_subtree_splice(trees, vec_subtree_splice_args(*j, 1, n, childs));
		*root = ts_subtree_new_node(ts_subtree_symbol(tree), trees, \
					tree->production_id, self->language);
		ts_subtree_release(tree);
		return (true);
	}
	return ((*j)--, false);
}

void	ts_parser__accept(\
				t_parser *self, t_stack_version v, t_subtree lookahead)
{
	t_stack_slice_array	pop;
	t_vec_subtree		trees;
	t_subtree			root;
	t_u32				i;
	t_u32				j;

	if (!ts_subtree_is_eof(lookahead))
		me_abort("failed assertion: lookahead isn't eof tree");
	ts_stack_push(self->stack, (struct s_stack_push_arg){v, lookahead, 0, 1});
	pop = ts_stack_pop_all(self->stack, v);
	i = 0;
	while (i < pop.size)
	{
		trees = pop.contents[i].subtrees;
		root = NULL;
		j = trees.len - 1;
		while (j + 1 > 0)
			if (parser_select_root(self, &trees, &root, &j))
				break ;
		_parser_accept_endloop(self, root, &i);
	}
	ts_stack_remove_version(self->stack, pop.contents[0].version);
	ts_stack_halt(self->stack, v);
}

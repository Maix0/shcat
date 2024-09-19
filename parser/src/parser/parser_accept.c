/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_accept.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:02:35 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 17:23:29 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/parser_inner.h"

void	ts_parser__accept(t_parser *self, t_stack_version version,
		t_subtree lookahead)
{
	t_u32				child_count;
	const t_subtree		*children;
	t_stack_slice_array	pop;
	t_vec_subtree		trees;
	t_subtree			root;
	t_u32				i;
	t_u32				j;
	t_u32				k;
	t_subtree			tree;

	assert(ts_subtree_is_eof(lookahead));
	ts_stack_push(self->stack, (struct s_stack_push_arg){version, lookahead, false, 1});
	pop = ts_stack_pop_all(self->stack, version);
	i = 0;
	while (i < pop.size)
	{
		trees = pop.contents[i].subtrees;
		root = NULL;
		j = trees.len - 1;
		while (j + 1 > 0)
		{
			tree = trees.buffer[j];
			if (!ts_subtree_extra(tree))
			{
				child_count = ts_subtree_child_count(tree);
				children = ts_subtree_children(tree);
				k = 0;
				while (k < child_count)
				{
					children[k]->ref_count++;
					k++;
				}
				vec_subtree_splice(&trees, vec_subtree_splice_args(j, 1,
						child_count, children));
				root = (ts_subtree_new_node(ts_subtree_symbol(tree), &trees,
							tree->production_id, self->language));
				ts_subtree_release(tree);
				break ;
			}
			j--;
		}
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
		i++;
	}
	ts_stack_remove_version(self->stack, pop.contents[0].version);
	ts_stack_halt(self->stack, version);
}

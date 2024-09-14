/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subtree_balance.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:53:20 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/14 12:53:42 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/vec/vec_subtree.h"
#include "parser/inner/ptypes.h"
#include "parser/subtree.h"

void	ts_subtree__compress(t_subtree self, t_u32 count,
		const t_language *language, t_vec_subtree *stack)
{
	t_u32		initial_stack_size;
	t_subtree	tree;
	TSSymbol	symbol;
	t_u32		i;
	t_subtree	child;
	t_subtree	grandchild;

	initial_stack_size = stack->len;
	tree = self;
	symbol = tree->symbol;
	i = 0;
	while (i < count)
	{
		if (tree->ref_count > 1 || tree->child_count < 2)
			break ;
		child = (ts_subtree_children(tree)[0]);
		if (child->child_count < 2 || child->ref_count > 1
			|| child->symbol != symbol)
			break ;
		grandchild = (ts_subtree_children(child)[0]);
		if (grandchild->child_count < 2 || grandchild->ref_count > 1
			|| grandchild->symbol != symbol)
			break ;
		ts_subtree_children(tree)[0] = (grandchild);
		ts_subtree_children(child)[0] = ts_subtree_children(grandchild)[\
			grandchild->child_count - 1];
		ts_subtree_children(grandchild)[grandchild->child_count - 1] = (child);
		vec_subtree_push(stack, tree);
		tree = grandchild;
		i++;
	}
	while (stack->len > initial_stack_size)
	{
		vec_subtree_pop(stack, &tree);
		child = (ts_subtree_children(tree)[0]);
		grandchild = (ts_subtree_children(child)[child->child_count - 1]);
		ts_subtree_summarize_children(grandchild, language);
		ts_subtree_summarize_children(child, language);
		ts_subtree_summarize_children(tree, language);
	}
}

void	ts_subtree_balance(t_subtree self, const t_language *language)
{
	t_i64			repeat_delta;
	t_subtree		child1;
	t_subtree		child2;
	t_subtree		child;
	t_subtree		tree;
	t_u32			i;
	t_u32			n;
	t_vec_subtree	tree_stack;

	tree_stack = vec_subtree_new(16, NULL);
	if (ts_subtree_child_count(self) > 0 && self->ref_count == 1)
		vec_subtree_push(&tree_stack, (self));
	while (tree_stack.len > 0)
	{
		vec_subtree_pop(&tree_stack, &tree);
		if (tree->repeat_depth > 0)
		{
			child1 = ts_subtree_children(tree)[0];
			child2 = ts_subtree_children(tree)[tree->child_count - 1];
			repeat_delta = (t_i64)ts_subtree_repeat_depth(child1)
				- (t_i64)ts_subtree_repeat_depth(child2);
			if (repeat_delta > 0)
			{
				n = (t_u32)repeat_delta;
				i = n / 2;
				while (i > 0)
				{
					ts_subtree__compress(tree, i, language, &tree_stack);
					n -= i;
					i /= 2;
				}
			}
		}
		i = 0;
		while (i < tree->child_count)
		{
			child = ts_subtree_children(tree)[i];
			if (ts_subtree_child_count(child) > 0 && child->ref_count == 1)
				vec_subtree_push(&tree_stack, (child));
			i++;
		}
	}
	vec_subtree_free(tree_stack);
}

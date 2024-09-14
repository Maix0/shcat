/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subtree_balance.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:53:20 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/14 14:02:24 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/vec/vec_subtree.h"
#include "parser/inner/ptypes.h"
#include "parser/subtree.h"

bool	_subtree_compress_inner(\
		t_subtree *tree, t_symbol symbol, t_vec_subtree *stack)
{
	t_subtree	child[2];

	if ((*tree)->ref_count > 1 || (*tree)->child_count < 2)
		return (true);
	child[0] = (ts_subtree_children(*tree)[0]);
	if (child[0]->child_count < 2 || child[0]->ref_count > 1
		|| child[0]->symbol != symbol)
		return (true);
	child[1] = (ts_subtree_children(child[0])[0]);
	if (child[1]->child_count < 2 || child[1]->ref_count > 1
		|| child[1]->symbol != symbol)
		return (true);
	ts_subtree_children(*tree)[0] = child[1];
	ts_subtree_children(child[0])[0] = ts_subtree_children(child[1])[\
		child[1]->child_count - 1];
	ts_subtree_children(child[1])[child[1]->child_count - 1] = (child[0]);
	vec_subtree_push(stack, *tree);
	*tree = child[1];
	return (false);
}

void	ts_subtree__compress(t_subtree self, t_u32 count,
		const t_language *language, t_vec_subtree *stack)
{
	t_symbol	symbol;
	t_subtree	child[2];
	t_subtree	tree;
	t_u32		i;
	t_u32		initial_stack_size;

	initial_stack_size = stack->len;
	tree = self;
	symbol = tree->symbol;
	i = 0;
	while (i++ < count)
		if (_subtree_compress_inner(&tree, symbol, stack))
			break ;
	while (stack->len > initial_stack_size)
	{
		vec_subtree_pop(stack, &tree);
		child[0] = (ts_subtree_children(tree)[0]);
		child[1] = (ts_subtree_children(child[0])[child[0]->child_count - 1]);
		ts_subtree_summarize_children(child[1], language);
		ts_subtree_summarize_children(child[0], language);
		ts_subtree_summarize_children(tree, language);
	}
}

void	_subtree_balance_repush(t_vec_subtree *tree_stack, t_subtree tree)
{
	t_u32		i;
	t_subtree	child;

	i = 0;
	while (i < tree->child_count)
	{
		child = ts_subtree_children(tree)[i];
		if (ts_subtree_child_count(child) > 0 && child->ref_count == 1)
			vec_subtree_push(tree_stack, child);
		i++;
	}
}

void	_subtree_balance_inner(\
	const t_language *language, t_vec_subtree *tree_stack)
{
	t_i64		repeat_delta;
	t_subtree	child[2];
	t_subtree	tree;
	t_u32		i;
	t_u32		n;

	if (vec_subtree_pop(tree_stack, &tree) && tree->repeat_depth > 0)
	{
		child[0] = ts_subtree_children(tree)[0];
		child[1] = ts_subtree_children(tree)[tree->child_count - 1];
		repeat_delta = (t_i64)ts_subtree_repeat_depth(child[0])
			- (t_i64)ts_subtree_repeat_depth(child[1]);
		if (repeat_delta > 0)
		{
			n = (t_u32)repeat_delta;
			i = n / 2;
			while (i > 0)
			{
				ts_subtree__compress(tree, i, language, tree_stack);
				n -= i;
				i /= 2;
			}
		}
	}
	_subtree_balance_repush(tree_stack, tree);
}

void	ts_subtree_balance(t_subtree self, const t_language *language)
{
	t_vec_subtree	tree_stack;

	tree_stack = vec_subtree_new(16, NULL);
	if (ts_subtree_child_count(self) > 0 && self->ref_count == 1)
		vec_subtree_push(&tree_stack, self);
	while (tree_stack.len > 0)
		_subtree_balance_inner(language, &tree_stack);
	vec_subtree_free(tree_stack);
}

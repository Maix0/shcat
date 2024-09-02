/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subtree_funcs1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:36:10 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/02 20:39:57 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/vec/vec_subtree.h"
#include "parser/subtree.h"

void	ts_subtree_release(t_subtree self)
{
	t_vec_subtree	to_free;
	t_subtree		tree;
	t_subtree		*children;
	t_usize			i;

	to_free = vec_subtree_new(16, NULL);
	if (--self->ref_count == 0)
		vec_subtree_push(&to_free, self);
	while (to_free.len > 0)
	{
		vec_subtree_pop(&to_free, &tree);
		if (tree->child_count > 0)
		{
			i = 0;
			children = ts_subtree_children(tree);
			while (i < tree->child_count)
			{
				if (--(children[i])->ref_count == 0)
					vec_subtree_push(&to_free, children[i]);
				i++;
			}
			mem_free(children);
		}
		else
		{
			if (tree->has_external_tokens)
				ts_external_scanner_state_delete(&tree->external_scanner_state);
			mem_free(tree);
		}
	}
	vec_subtree_free(to_free);
}

int	subtree_compare_func(t_subtree left, t_subtree right)
{
	int	result;

	result = 0;
	if (ts_subtree_symbol(left) < ts_subtree_symbol(right))
		result = -1;
	else if (ts_subtree_symbol(right) < ts_subtree_symbol(left))
		result = 1;
	else if (ts_subtree_child_count(left) < ts_subtree_child_count(right))
		result = -1;
	else if (ts_subtree_child_count(right) < ts_subtree_child_count(left))
		result = 1;
	return (result);
}

int	ts_subtree_compare(t_subtree left, t_subtree right)
{
	t_vec_subtree	cmp_stack;
	t_i8			result;
	t_usize			i;

	result = 0;
	cmp_stack = vec_subtree_new(16, NULL);
	vec_subtree_push(&cmp_stack, (left));
	vec_subtree_push(&cmp_stack, (right));
	while (cmp_stack.len >= 2)
	{
		vec_subtree_pop(&cmp_stack, &left);
		vec_subtree_pop(&cmp_stack, &right);
		result = subtree_compare_func(left, right);
		if (result != 0)
			return (vec_subtree_free(cmp_stack), result);
		i = ts_subtree_child_count(left);
		while (i > 0)
		{
			vec_subtree_push(&cmp_stack, ts_subtree_children(left)[i - 1]);
			vec_subtree_push(&cmp_stack, ts_subtree_children(right)[i - 1]);
			i--;
		}
	}
	return (vec_subtree_free(cmp_stack), 0);
}

t_subtree	ts_subtree_last_external_token(t_subtree tree)
{
	t_usize		i;
	t_subtree	child;

	if (!ts_subtree_has_external_tokens(tree))
		return (NULL);
	while (tree->child_count > 0)
	{
		i = tree->child_count - 1;
		while (i + 1 > 0)
		{
			child = ts_subtree_children(tree)[i];
			if (ts_subtree_has_external_tokens(child))
			{
				tree = child;
				break ;
			}
			i--;
		}
	}
	return (tree);
}

#include "me/vec/vec_subtree.h"
#include "parser/inner/ptypes.h"
#include "parser/subtree.h"

void ts_subtree__compress(t_subtree self, t_u32 count, const t_language *language, t_vec_subtree *stack)
{
	t_u32 initial_stack_size = stack->len;

	t_subtree tree = self;
	TSSymbol  symbol = tree->symbol;
	for (t_u32 i = 0; i < count; i++)
	{
		if (tree->ref_count > 1 || tree->child_count < 2)
			break;

		t_subtree child = (ts_subtree_children(tree)[0]);
		if (child->child_count < 2 || child->ref_count > 1 || child->symbol != symbol)
			break;

		t_subtree grandchild = (ts_subtree_children(child)[0]);
		if (grandchild->child_count < 2 || grandchild->ref_count > 1 || grandchild->symbol != symbol)
			break;

		ts_subtree_children(tree)[0] = (grandchild);
		ts_subtree_children(child)[0] = ts_subtree_children(grandchild)[grandchild->child_count - 1];
		ts_subtree_children(grandchild)[grandchild->child_count - 1] = (child);
		vec_subtree_push(stack, tree);
		tree = grandchild;
	}

	while (stack->len > initial_stack_size)
	{
		vec_subtree_pop(stack, &tree);
		t_subtree child = (ts_subtree_children(tree)[0]);
		t_subtree grandchild = (ts_subtree_children(child)[child->child_count - 1]);
		ts_subtree_summarize_children(grandchild, language);
		ts_subtree_summarize_children(child, language);
		ts_subtree_summarize_children(tree, language);
	}
}

void ts_subtree_balance(t_subtree self, const t_language *language)
{
	// return ;
	t_vec_subtree tree_stack;
	t_subtree	  tree;

	tree_stack = vec_subtree_new(16, NULL);

	if (ts_subtree_child_count(self) > 0 && self->ref_count == 1)
		vec_subtree_push(&tree_stack, (self));

	while (tree_stack.len > 0)
	{
		vec_subtree_pop(&tree_stack, &tree);

		if (tree->repeat_depth > 0)
		{
			t_subtree child1 = ts_subtree_children(tree)[0];
			t_subtree child2 = ts_subtree_children(tree)[tree->child_count - 1];
			t_i64	  repeat_delta = (t_i64)ts_subtree_repeat_depth(child1) - (t_i64)ts_subtree_repeat_depth(child2);
			if (repeat_delta > 0)
			{
				t_u32 n = (t_u32)repeat_delta;
				for (t_u32 i = n / 2; i > 0; i /= 2)
				{
					ts_subtree__compress(tree, i, language, &tree_stack);
					n -= i;
				}
			}
		}

		for (t_u32 i = 0; i < tree->child_count; i++)
		{
			t_subtree child = ts_subtree_children(tree)[i];
			if (ts_subtree_child_count(child) > 0 && child->ref_count == 1)
				vec_subtree_push(&tree_stack, (child));
		}
	}
	vec_subtree_free(tree_stack);
}
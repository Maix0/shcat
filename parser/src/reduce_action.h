#ifndef TREE_SITTER_REDUCE_ACTION_H_
#define TREE_SITTER_REDUCE_ACTION_H_

#include "./api.h"
#include "./array.h"
#include "me/types.h"

typedef struct ReduceAction
{
	t_u32		   count;
	TSSymbol	   symbol;
	int			   dynamic_precedence;
	t_u16 production_id;
} ReduceAction;

typedef Array(ReduceAction) ReduceActionSet;

static inline void ts_reduce_action_set_add(ReduceActionSet *self, ReduceAction new_action)
{
	for (t_u32 i = 0; i < self->size; i++)
	{
		ReduceAction action = self->contents[i];
		if (action.symbol == new_action.symbol && action.count == new_action.count)
			return;
	}
	array_push(self, new_action);
}

#endif // TREE_SITTER_REDUCE_ACTION_H_

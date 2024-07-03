#include "./reduce_action.h"

void ts_reduce_action_set_add(ReduceActionSet *self, ReduceAction new_action)
{
	ReduceAction action;
	t_u32		 i;

	i = 0;
	while (i < self->size)
	{
		action = self->contents[i];
		if (action.symbol == new_action.symbol && action.count == new_action.count)
			return;
		i++;
	}
	array_push(self, new_action);
}
#ifndef REDUCE_ACTION_H
#define REDUCE_ACTION_H

#include "./api.h"
#include "./array.h"
#include "me/types.h"

struct ReduceAction
{
	t_u32	 count;
	TSSymbol symbol;
	int		 dynamic_precedence;
	t_u16	 production_id;
};

typedef struct ReduceAction ReduceAction;
typedef Array(ReduceAction) ReduceActionSet;

void ts_reduce_action_set_add(ReduceActionSet *self, ReduceAction new_action);

#endif // REDUCE_ACTION_H

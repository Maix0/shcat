#ifndef TREE_SITTER_REDUCE_ACTION_H_
#define TREE_SITTER_REDUCE_ACTION_H_


#include "./array.h"
#include "api.h"

typedef struct ReduceAction {
  uint32_t count;
  TSSymbol symbol;
  int dynamic_precedence;
  unsigned short production_id;
} ReduceAction;

typedef Array(ReduceAction) ReduceActionSet;

static inline void ts_reduce_action_set_add(ReduceActionSet *self,
                                            ReduceAction new_action) {
  for (uint32_t i = 0; i < self->size; i++) {
    ReduceAction action = self->contents[i];
    if (action.symbol == new_action.symbol && action.count == new_action.count)
      return;
  }
  array_push(self, new_action);
}


#endif  // TREE_SITTER_REDUCE_ACTION_H_

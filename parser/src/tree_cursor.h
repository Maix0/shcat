#ifndef TREE_SITTER_TREE_CURSOR_H_
#define TREE_SITTER_TREE_CURSOR_H_

#include "./subtree.h"

typedef struct {
  const Subtree *subtree;
  t_parse_length position;
  t_u32 child_index;
  t_u32 structural_child_index;
  t_u32 descendant_index;
} TreeCursorEntry;

typedef struct {
  const t_parse_tree *tree;
  Array(TreeCursorEntry) stack;
  t_symbol root_alias_symbol;
} TreeCursor;

typedef enum {
  TreeCursorStepNone,
  TreeCursorStepHidden,
  TreeCursorStepVisible,
} TreeCursorStep;

void ts_tree_cursor_init(TreeCursor *, t_parse_node);
void ts_tree_cursor_current_status(
  const t_parse_tree_cursor *,
  t_field_id *,
  bool *,
  bool *,
  bool *,
  t_symbol *,
  unsigned *
);

TreeCursorStep ts_tree_cursor_goto_first_child_internal(t_parse_tree_cursor *);
TreeCursorStep ts_tree_cursor_goto_next_sibling_internal(t_parse_tree_cursor *);

static inline Subtree ts_tree_cursor_current_subtree(const t_parse_tree_cursor *_self) {
  const TreeCursor *self = (const TreeCursor *)_self;
  TreeCursorEntry *last_entry = array_back(&self->stack);
  return *last_entry->subtree;
}

t_parse_node ts_tree_cursor_parent_node(const t_parse_tree_cursor *);

#endif  // TREE_SITTER_TREE_CURSOR_H_
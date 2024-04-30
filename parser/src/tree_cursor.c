#include "parser/api.h"

#include "./tree_cursor.h"
#include "./language.h"
#include "./tree.h"

typedef struct {
  Subtree parent;
  const t_parse_tree *tree;
  t_parse_length position;
  t_u32 child_index;
  t_u32 structural_child_index;
  t_u32 descendant_index;
  const t_symbol *alias_sequence;
} CursorChildIterator;

// CursorChildIterator

static inline bool ts_tree_cursor_is_entry_visible(const TreeCursor *self, t_u32 index) {
  TreeCursorEntry *entry = &self->stack.contents[index];
  if (index == 0 || ts_subtree_visible(*entry->subtree)) {
    return true;
  } else if (!ts_subtree_extra(*entry->subtree)) {
    TreeCursorEntry *parent_entry = &self->stack.contents[index - 1];
    return ts_language_alias_at(
      self->tree->language,
      parent_entry->subtree->ptr->production_id,
      entry->structural_child_index
    );
  } else {
    return false;
  }
}

static inline CursorChildIterator ts_tree_cursor_iterate_children(const TreeCursor *self) {
  TreeCursorEntry *last_entry = array_back(&self->stack);
  if (ts_subtree_child_count(*last_entry->subtree) == 0) {
    return (CursorChildIterator) {NULL_SUBTREE, self->tree, length_zero(), 0, 0, 0, NULL};
  }
  const t_symbol *alias_sequence = ts_language_alias_sequence(
    self->tree->language,
    last_entry->subtree->ptr->production_id
  );

  t_u32 descendant_index = last_entry->descendant_index;
  if (ts_tree_cursor_is_entry_visible(self, self->stack.size - 1)) {
    descendant_index += 1;
  }

  return (CursorChildIterator) {
    .tree = self->tree,
    .parent = *last_entry->subtree,
    .position = last_entry->position,
    .child_index = 0,
    .structural_child_index = 0,
    .descendant_index = descendant_index,
    .alias_sequence = alias_sequence,
  };
}

static inline bool ts_tree_cursor_child_iterator_next(
  CursorChildIterator *self,
  TreeCursorEntry *result,
  bool *visible
) {
  if (!self->parent.ptr || self->child_index == self->parent.ptr->child_count) return false;
  const Subtree *child = &ts_subtree_children(self->parent)[self->child_index];
  *result = (TreeCursorEntry) {
    .subtree = child,
    .position = self->position,
    .child_index = self->child_index,
    .structural_child_index = self->structural_child_index,
    .descendant_index = self->descendant_index,
  };
  *visible = ts_subtree_visible(*child);
  bool extra = ts_subtree_extra(*child);
  if (!extra) {
    if (self->alias_sequence) {
      *visible |= self->alias_sequence[self->structural_child_index];
    }
    self->structural_child_index++;
  }

  self->descendant_index += ts_subtree_visible_descendant_count(*child);
  if (*visible) {
    self->descendant_index += 1;
  }

  self->position = length_add(self->position, ts_subtree_size(*child));
  self->child_index++;

  if (self->child_index < self->parent.ptr->child_count) {
    Subtree next_child = ts_subtree_children(self->parent)[self->child_index];
    self->position = length_add(self->position, ts_subtree_padding(next_child));
  }

  return true;
}

// Return a position that, when `b` is added to it, yields `a`. This
// can only be computed if `b` has zero rows. Otherwise, this function
// returns `LENGTH_UNDEFINED`, and the caller needs to recompute
// the position some other way.
static inline t_parse_length length_backtrack(t_parse_length a, t_parse_length b) {
  if (length_is_undefined(a) || b.extent.row != 0) {
    return LENGTH_UNDEFINED;
  }

  t_parse_length result;
  result.bytes = a.bytes - b.bytes;
  result.extent.row = a.extent.row;
  result.extent.column = a.extent.column - b.extent.column;
  return result;
}

static inline bool ts_tree_cursor_child_iterator_previous(
  CursorChildIterator *self,
  TreeCursorEntry *result,
  bool *visible
) {
  // this is mostly a reverse `ts_tree_cursor_child_iterator_next` taking into
  // account unsigned underflow
  if (!self->parent.ptr || (t_i8)self->child_index == -1) return false;
  const Subtree *child = &ts_subtree_children(self->parent)[self->child_index];
  *result = (TreeCursorEntry) {
    .subtree = child,
    .position = self->position,
    .child_index = self->child_index,
    .structural_child_index = self->structural_child_index,
  };
  *visible = ts_subtree_visible(*child);
  bool extra = ts_subtree_extra(*child);
  if (!extra && self->alias_sequence) {
    *visible |= self->alias_sequence[self->structural_child_index];
    self->structural_child_index--;
  }

  self->position = length_backtrack(self->position, ts_subtree_padding(*child));
  self->child_index--;

  // unsigned can underflow so compare it to child_count
  if (self->child_index < self->parent.ptr->child_count) {
    Subtree previous_child = ts_subtree_children(self->parent)[self->child_index];
    t_parse_length size = ts_subtree_size(previous_child);
    self->position = length_backtrack(self->position, size);
  }

  return true;
}

// t_parse_tree_cursor - lifecycle

t_parse_tree_cursor ts_tree_cursor_new(t_parse_node node) {
  t_parse_tree_cursor self = {NULL, NULL, {0, 0, 0}};
  ts_tree_cursor_init((TreeCursor *)&self, node);
  return self;
}

void ts_tree_cursor_reset(t_parse_tree_cursor *_self, t_parse_node node) {
  ts_tree_cursor_init((TreeCursor *)_self, node);
}

void ts_tree_cursor_init(TreeCursor *self, t_parse_node node) {
  self->tree = node.tree;
  self->root_alias_symbol = node.context[3];
  array_clear(&self->stack);
  array_push(&self->stack, ((TreeCursorEntry) {
    .subtree = (const Subtree *)node.id,
    .position = {
      ts_node_start_byte(node),
      ts_node_start_point(node)
    },
    .child_index = 0,
    .structural_child_index = 0,
    .descendant_index = 0,
  }));
}

void ts_tree_cursor_delete(t_parse_tree_cursor *_self) {
  TreeCursor *self = (TreeCursor *)_self;
  array_delete(&self->stack);
}

// t_parse_tree_cursor - walking the tree

TreeCursorStep ts_tree_cursor_goto_first_child_internal(t_parse_tree_cursor *_self) {
  TreeCursor *self = (TreeCursor *)_self;
  bool visible;
  TreeCursorEntry entry;
  CursorChildIterator iterator = ts_tree_cursor_iterate_children(self);
  while (ts_tree_cursor_child_iterator_next(&iterator, &entry, &visible)) {
    if (visible) {
      array_push(&self->stack, entry);
      return TreeCursorStepVisible;
    }
    if (ts_subtree_visible_child_count(*entry.subtree) > 0) {
      array_push(&self->stack, entry);
      return TreeCursorStepHidden;
    }
  }
  return TreeCursorStepNone;
}

bool ts_tree_cursor_goto_first_child(t_parse_tree_cursor *self) {
  for (;;) {
    switch (ts_tree_cursor_goto_first_child_internal(self)) {
      case TreeCursorStepHidden:
        continue;
      case TreeCursorStepVisible:
        return true;
      default:
        return false;
    }
  }
  return false;
}

TreeCursorStep ts_tree_cursor_goto_last_child_internal(t_parse_tree_cursor *_self) {
  TreeCursor *self = (TreeCursor *)_self;
  bool visible;
  TreeCursorEntry entry;
  CursorChildIterator iterator = ts_tree_cursor_iterate_children(self);
  if (!iterator.parent.ptr || iterator.parent.ptr->child_count == 0) return TreeCursorStepNone;

  TreeCursorEntry last_entry = {0};
  TreeCursorStep last_step = TreeCursorStepNone;
  while (ts_tree_cursor_child_iterator_next(&iterator, &entry, &visible)) {
    if (visible) {
      last_entry = entry;
      last_step = TreeCursorStepVisible;
    }
    else if (ts_subtree_visible_child_count(*entry.subtree) > 0) {
      last_entry = entry;
      last_step = TreeCursorStepHidden;
    }
  }
  if (last_entry.subtree) {
    array_push(&self->stack, last_entry);
    return last_step;
  }

  return TreeCursorStepNone;
}

bool ts_tree_cursor_goto_last_child(t_parse_tree_cursor *self) {
  for (;;) {
    switch (ts_tree_cursor_goto_last_child_internal(self)) {
      case TreeCursorStepHidden:
        continue;
      case TreeCursorStepVisible:
        return true;
      default:
        return false;
    }
  }
  return false;
}

static inline t_i64 ts_tree_cursor_goto_first_child_for_byte_and_point(
  t_parse_tree_cursor *_self,
  t_u32 goal_byte,
  t_point goal_point
) {
  TreeCursor *self = (TreeCursor *)_self;
  t_u32 initial_size = self->stack.size;
  t_u32 visible_child_index = 0;

  bool did_descend;
  do {
    did_descend = false;

    bool visible;
    TreeCursorEntry entry;
    CursorChildIterator iterator = ts_tree_cursor_iterate_children(self);
    while (ts_tree_cursor_child_iterator_next(&iterator, &entry, &visible)) {
      t_parse_length entry_end = length_add(entry.position, ts_subtree_size(*entry.subtree));
      bool at_goal = entry_end.bytes >= goal_byte && point_gte(entry_end.extent, goal_point);
      t_u32 visible_child_count = ts_subtree_visible_child_count(*entry.subtree);
      if (at_goal) {
        if (visible) {
          array_push(&self->stack, entry);
          return visible_child_index;
        }
        if (visible_child_count > 0) {
          array_push(&self->stack, entry);
          did_descend = true;
          break;
        }
      } else if (visible) {
        visible_child_index++;
      } else {
        visible_child_index += visible_child_count;
      }
    }
  } while (did_descend);

  self->stack.size = initial_size;
  return -1;
}

t_i64 ts_tree_cursor_goto_first_child_for_byte(t_parse_tree_cursor *self, t_u32 goal_byte) {
  return ts_tree_cursor_goto_first_child_for_byte_and_point(self, goal_byte, point_val_zero());
}

t_i64 ts_tree_cursor_goto_first_child_for_point(t_parse_tree_cursor *self, t_point goal_point) {
  return ts_tree_cursor_goto_first_child_for_byte_and_point(self, 0, goal_point);
}

TreeCursorStep ts_tree_cursor_goto_sibling_internal(
    t_parse_tree_cursor *_self,
    bool (*advance)(CursorChildIterator *, TreeCursorEntry *, bool *)) {
  TreeCursor *self = (TreeCursor *)_self;
  t_u32 initial_size = self->stack.size;

  while (self->stack.size > 1) {
    TreeCursorEntry entry = array_pop(&self->stack);
    CursorChildIterator iterator = ts_tree_cursor_iterate_children(self);
    iterator.child_index = entry.child_index;
    iterator.structural_child_index = entry.structural_child_index;
    iterator.position = entry.position;
    iterator.descendant_index = entry.descendant_index;

    bool visible = false;
    advance(&iterator, &entry, &visible);
    if (visible && self->stack.size + 1 < initial_size) break;

    while (advance(&iterator, &entry, &visible)) {
      if (visible) {
        array_push(&self->stack, entry);
        return TreeCursorStepVisible;
      }

      if (ts_subtree_visible_child_count(*entry.subtree)) {
        array_push(&self->stack, entry);
        return TreeCursorStepHidden;
      }
    }
  }

  self->stack.size = initial_size;
  return TreeCursorStepNone;
}

TreeCursorStep ts_tree_cursor_goto_next_sibling_internal(t_parse_tree_cursor *_self) {
  return ts_tree_cursor_goto_sibling_internal(_self, ts_tree_cursor_child_iterator_next);
}

bool ts_tree_cursor_goto_next_sibling(t_parse_tree_cursor *self) {
  switch (ts_tree_cursor_goto_next_sibling_internal(self)) {
    case TreeCursorStepHidden:
      ts_tree_cursor_goto_first_child(self);
      return true;
    case TreeCursorStepVisible:
      return true;
    default:
      return false;
  }
}

TreeCursorStep ts_tree_cursor_goto_previous_sibling_internal(t_parse_tree_cursor *_self) {
  // since subtracting across row loses column information, we may have to
  // restore it
  TreeCursor *self = (TreeCursor *)_self;

  // for that, save current position before traversing
  TreeCursorStep step = ts_tree_cursor_goto_sibling_internal(
      _self, ts_tree_cursor_child_iterator_previous);
  if (step == TreeCursorStepNone)
    return step;

  // if length is already valid, there's no need to recompute it
  if (!length_is_undefined(array_back(&self->stack)->position))
    return step;

  // restore position from the parent node
  const TreeCursorEntry *parent = &self->stack.contents[self->stack.size - 2];
  t_parse_length position = parent->position;
  t_u32 child_index = array_back(&self->stack)->child_index;
  const Subtree *children = ts_subtree_children((*(parent->subtree)));

  if (child_index > 0) {
    // skip first child padding since its position should match the position of the parent
    position = length_add(position, ts_subtree_size(children[0]));
    for (t_u32 i = 1; i < child_index; ++i) {
      position = length_add(position, ts_subtree_total_size(children[i]));
    }
    position = length_add(position, ts_subtree_padding(children[child_index]));
  }

  array_back(&self->stack)->position = position;

  return step;
}

bool ts_tree_cursor_goto_previous_sibling(t_parse_tree_cursor *self) {
  switch (ts_tree_cursor_goto_previous_sibling_internal(self)) {
    case TreeCursorStepHidden:
      ts_tree_cursor_goto_last_child(self);
      return true;
    case TreeCursorStepVisible:
      return true;
    default:
      return false;
  }
}

bool ts_tree_cursor_goto_parent(t_parse_tree_cursor *_self) {
  TreeCursor *self = (TreeCursor *)_self;
  for (unsigned i = self->stack.size - 2; i + 1 > 0; i--) {
    if (ts_tree_cursor_is_entry_visible(self, i)) {
      self->stack.size = i + 1;
      return true;
    }
  }
  return false;
}

void ts_tree_cursor_goto_descendant(
  t_parse_tree_cursor *_self,
  t_u32 goal_descendant_index
) {
  TreeCursor *self = (TreeCursor *)_self;

  // Ascend to the lowest ancestor that contains the goal node.
  for (;;) {
    t_u32 i = self->stack.size - 1;
    TreeCursorEntry *entry = &self->stack.contents[i];
    t_u32 next_descendant_index =
      entry->descendant_index +
      (ts_tree_cursor_is_entry_visible(self, i) ? 1 : 0) +
      ts_subtree_visible_descendant_count(*entry->subtree);
    if (
      (entry->descendant_index <= goal_descendant_index) &&
      (next_descendant_index > goal_descendant_index)
    ) {
      break;
    } else if (self->stack.size <= 1) {
      return;
    } else {
      self->stack.size--;
    }
  }

  // Descend to the goal node.
  bool did_descend = true;
  do {
    did_descend = false;
    bool visible;
    TreeCursorEntry entry;
    CursorChildIterator iterator = ts_tree_cursor_iterate_children(self);
    if (iterator.descendant_index > goal_descendant_index) {
      return;
    }

    while (ts_tree_cursor_child_iterator_next(&iterator, &entry, &visible)) {
      if (iterator.descendant_index > goal_descendant_index) {
        array_push(&self->stack, entry);
        if (visible && entry.descendant_index == goal_descendant_index) {
          return;
        } else {
          did_descend = true;
          break;
        }
      }
    }
  } while (did_descend);
}

t_u32 ts_tree_cursor_current_descendant_index(const t_parse_tree_cursor *_self) {
  const TreeCursor *self = (const TreeCursor *)_self;
  TreeCursorEntry *last_entry = array_back(&self->stack);
  return last_entry->descendant_index;
}

t_parse_node ts_tree_cursor_current_node(const t_parse_tree_cursor *_self) {
  const TreeCursor *self = (const TreeCursor *)_self;
  TreeCursorEntry *last_entry = array_back(&self->stack);
  t_symbol alias_symbol = self->root_alias_symbol;
  if (self->stack.size > 1 && !ts_subtree_extra(*last_entry->subtree)) {
    TreeCursorEntry *parent_entry = &self->stack.contents[self->stack.size - 2];
    alias_symbol = ts_language_alias_at(
      self->tree->language,
      parent_entry->subtree->ptr->production_id,
      last_entry->structural_child_index
    );
  }
  return ts_node_new(
    self->tree,
    last_entry->subtree,
    last_entry->position,
    alias_symbol
  );
}

// Private - Get various facts about the current node that are needed
// when executing tree queries.
void ts_tree_cursor_current_status(
  const t_parse_tree_cursor *_self,
  t_field_id *field_id,
  bool *has_later_siblings,
  bool *has_later_named_siblings,
  bool *can_have_later_siblings_with_this_field,
  t_symbol *supertypes,
  unsigned *supertype_count
) {
  const TreeCursor *self = (const TreeCursor *)_self;
  unsigned max_supertypes = *supertype_count;
  *field_id = 0;
  *supertype_count = 0;
  *has_later_siblings = false;
  *has_later_named_siblings = false;
  *can_have_later_siblings_with_this_field = false;

  // Walk up the tree, visiting the current node and its invisible ancestors,
  // because fields can refer to nodes through invisible *wrapper* nodes,
  for (unsigned i = self->stack.size - 1; i > 0; i--) {
    TreeCursorEntry *entry = &self->stack.contents[i];
    TreeCursorEntry *parent_entry = &self->stack.contents[i - 1];

    const t_symbol *alias_sequence = ts_language_alias_sequence(
      self->tree->language,
      parent_entry->subtree->ptr->production_id
    );

    #define subtree_symbol(subtree, structural_child_index) \
      ((                                                    \
        !ts_subtree_extra(subtree) &&                       \
        alias_sequence &&                                   \
        alias_sequence[structural_child_index]              \
      ) ?                                                   \
        alias_sequence[structural_child_index] :            \
        ts_subtree_symbol(subtree))

    // Stop walking up when a visible ancestor is found.
    t_symbol entry_symbol = subtree_symbol(
      *entry->subtree,
      entry->structural_child_index
    );
    t_symbol_metadata entry_metadata = ts_language_symbol_metadata(
      self->tree->language,
      entry_symbol
    );
    if (i != self->stack.size - 1 && entry_metadata.visible) break;

    // Record any supertypes
    if (entry_metadata.supertype && *supertype_count < max_supertypes) {
      supertypes[*supertype_count] = entry_symbol;
      (*supertype_count)++;
    }

    // Determine if the current node has later siblings.
    if (!*has_later_siblings) {
      unsigned sibling_count = parent_entry->subtree->ptr->child_count;
      unsigned structural_child_index = entry->structural_child_index;
      if (!ts_subtree_extra(*entry->subtree)) structural_child_index++;
      for (unsigned j = entry->child_index + 1; j < sibling_count; j++) {
        Subtree sibling = ts_subtree_children(*parent_entry->subtree)[j];
        t_symbol_metadata sibling_metadata = ts_language_symbol_metadata(
          self->tree->language,
          subtree_symbol(sibling, structural_child_index)
        );
        if (sibling_metadata.visible) {
          *has_later_siblings = true;
          if (*has_later_named_siblings) break;
          if (sibling_metadata.named) {
            *has_later_named_siblings = true;
            break;
          }
        } else if (ts_subtree_visible_child_count(sibling) > 0) {
          *has_later_siblings = true;
          if (*has_later_named_siblings) break;
          if (sibling.ptr->named_child_count > 0) {
            *has_later_named_siblings = true;
            break;
          }
        }
        if (!ts_subtree_extra(sibling)) structural_child_index++;
      }
    }

    #undef subtree_symbol

    if (!ts_subtree_extra(*entry->subtree)) {
      const t_field_map_entry *field_map, *field_map_end;
      ts_language_field_map(
        self->tree->language,
        parent_entry->subtree->ptr->production_id,
        &field_map, &field_map_end
      );

      // Look for a field name associated with the current node.
      if (!*field_id) {
        for (const t_field_map_entry *map = field_map; map < field_map_end; map++) {
          if (!map->inherited && map->child_index == entry->structural_child_index) {
            *field_id = map->field_id;
            break;
          }
        }
      }

      // Determine if the current node can have later siblings with the same field name.
      if (*field_id) {
        for (const t_field_map_entry *map = field_map; map < field_map_end; map++) {
          if (
            map->field_id == *field_id &&
            map->child_index > entry->structural_child_index
          ) {
            *can_have_later_siblings_with_this_field = true;
            break;
          }
        }
      }
    }
  }
}

t_u32 ts_tree_cursor_current_depth(const t_parse_tree_cursor *_self) {
  const TreeCursor *self = (const TreeCursor *)_self;
  t_u32 depth = 0;
  for (unsigned i = 1; i < self->stack.size; i++) {
    if (ts_tree_cursor_is_entry_visible(self, i)) {
      depth++;
    }
  }
  return depth;
}

t_parse_node ts_tree_cursor_parent_node(const t_parse_tree_cursor *_self) {
  const TreeCursor *self = (const TreeCursor *)_self;
  for (int i = (int)self->stack.size - 2; i >= 0; i--) {
    TreeCursorEntry *entry = &self->stack.contents[i];
    bool is_visible = true;
    t_symbol alias_symbol = 0;
    if (i > 0) {
      TreeCursorEntry *parent_entry = &self->stack.contents[i - 1];
      alias_symbol = ts_language_alias_at(
        self->tree->language,
        parent_entry->subtree->ptr->production_id,
        entry->structural_child_index
      );
      is_visible = (alias_symbol != 0) || ts_subtree_visible(*entry->subtree);
    }
    if (is_visible) {
      return ts_node_new(
        self->tree,
        entry->subtree,
        entry->position,
        alias_symbol
      );
    }
  }
  return ts_node_new(NULL, NULL, length_zero(), 0);
}

t_field_id ts_tree_cursor_current_field_id(const t_parse_tree_cursor *_self) {
  const TreeCursor *self = (const TreeCursor *)_self;

  // Walk up the tree, visiting the current node and its invisible ancestors.
  for (unsigned i = self->stack.size - 1; i > 0; i--) {
    TreeCursorEntry *entry = &self->stack.contents[i];
    TreeCursorEntry *parent_entry = &self->stack.contents[i - 1];

    // Stop walking up when another visible node is found.
    if (
      i != self->stack.size - 1 &&
      ts_tree_cursor_is_entry_visible(self, i)
    ) break;

    if (ts_subtree_extra(*entry->subtree)) break;

    const t_field_map_entry *field_map, *field_map_end;
    ts_language_field_map(
      self->tree->language,
      parent_entry->subtree->ptr->production_id,
      &field_map, &field_map_end
    );
    for (const t_field_map_entry *map = field_map; map < field_map_end; map++) {
      if (!map->inherited && map->child_index == entry->structural_child_index) {
        return map->field_id;
      }
    }
  }
  return 0;
}

const char *ts_tree_cursor_current_field_name(const t_parse_tree_cursor *_self) {
  t_field_id id = ts_tree_cursor_current_field_id(_self);
  if (id) {
    const TreeCursor *self = (const TreeCursor *)_self;
    return self->tree->language->field_names[id];
  } else {
    return NULL;
  }
}

t_parse_tree_cursor ts_tree_cursor_copy(const t_parse_tree_cursor *_cursor) {
  const TreeCursor *cursor = (const TreeCursor *)_cursor;
  t_parse_tree_cursor res = {NULL, NULL, {0, 0}};
  TreeCursor *copy = (TreeCursor *)&res;
  copy->tree = cursor->tree;
  copy->root_alias_symbol = cursor->root_alias_symbol;
  array_init(&copy->stack);
  array_push_all(&copy->stack, &cursor->stack);
  return res;
}

void ts_tree_cursor_reset_to(t_parse_tree_cursor *_dst, const t_parse_tree_cursor *_src) {
  const TreeCursor *cursor = (const TreeCursor *)_src;
  TreeCursor *copy = (TreeCursor *)_dst;
  copy->tree = cursor->tree;
  copy->root_alias_symbol = cursor->root_alias_symbol;
  array_clear(&copy->stack);
  array_push_all(&copy->stack, &cursor->stack);
}
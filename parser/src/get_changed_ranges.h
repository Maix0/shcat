#ifndef TREE_SITTER_GET_CHANGED_RANGES_H_
#define TREE_SITTER_GET_CHANGED_RANGES_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "./tree_cursor.h"
#include "./subtree.h"

typedef Array(t_range) TSRangeArray;

void ts_range_array_get_changed_ranges(
  const t_range *old_ranges, unsigned old_range_count,
  const t_range *new_ranges, unsigned new_range_count,
  TSRangeArray *differences
);

bool ts_range_array_intersects(
  const TSRangeArray *self, unsigned start_index,
  uint32_t start_byte, uint32_t end_byte
);

unsigned ts_subtree_get_changed_ranges(
  const Subtree *old_tree, const Subtree *new_tree,
  TreeCursor *cursor1, TreeCursor *cursor2,
  const t_language *language,
  const TSRangeArray *included_range_differences,
  t_range **ranges
);

#ifdef __cplusplus
}
#endif

#endif  // TREE_SITTER_GET_CHANGED_RANGES_H_

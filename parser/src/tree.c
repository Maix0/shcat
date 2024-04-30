#define _POSIX_C_SOURCE 200112L

#include "./api.h"
#include "./array.h"
#include "./get_changed_ranges.h"
#include "./length.h"
#include "./subtree.h"
#include "./tree_cursor.h"
#include "./tree.h"

t_tree *ts_tree_new(
  Subtree root, const t_language *language,
  const t_range *included_ranges, unsigned included_range_count
) {
  t_tree *result = ts_malloc(sizeof(t_tree));
  result->root = root;
  result->language = ts_language_copy(language);
  result->included_ranges = ts_calloc(included_range_count, sizeof(t_range));
  memcpy(result->included_ranges, included_ranges, included_range_count * sizeof(t_range));
  result->included_range_count = included_range_count;
  return result;
}

t_tree *ts_tree_copy(const t_tree *self) {
  ts_subtree_retain(self->root);
  return ts_tree_new(self->root, self->language, self->included_ranges, self->included_range_count);
}

void ts_tree_delete(t_tree *self) {
  if (!self) return;

  SubtreePool pool = ts_subtree_pool_new(0);
  ts_subtree_release(&pool, self->root);
  ts_subtree_pool_delete(&pool);
  ts_language_delete(self->language);
  ts_free(self->included_ranges);
  ts_free(self);
}

t_parse_node ts_tree_root_node(const t_tree *self) {
  return ts_node_new(self, &self->root, ts_subtree_padding(self->root), 0);
}

t_parse_node ts_tree_root_node_with_offset(
  const t_tree *self,
  uint32_t offset_bytes,
  t_point offset_extent
) {
  Length offset = {offset_bytes, offset_extent};
  return ts_node_new(self, &self->root, length_add(offset, ts_subtree_padding(self->root)), 0);
}

const t_language *ts_tree_language(const t_tree *self) {
  return self->language;
}

void ts_tree_edit(t_tree *self, const t_input_edit *edit) {
  for (unsigned i = 0; i < self->included_range_count; i++) {
    t_range *range = &self->included_ranges[i];
    if (range->end_byte >= edit->old_end_byte) {
      if (range->end_byte != UINT32_MAX) {
        range->end_byte = edit->new_end_byte + (range->end_byte - edit->old_end_byte);
        range->end_point = point_add(
          edit->new_end_point,
          point_sub(range->end_point, edit->old_end_point)
        );
        if (range->end_byte < edit->new_end_byte) {
          range->end_byte = UINT32_MAX;
          range->end_point = POINT_MAX;
        }
      }
    } else if (range->end_byte > edit->start_byte) {
      range->end_byte = edit->start_byte;
      range->end_point = edit->start_point;
    }
    if (range->start_byte >= edit->old_end_byte) {
      range->start_byte = edit->new_end_byte + (range->start_byte - edit->old_end_byte);
      range->start_point = point_add(
        edit->new_end_point,
        point_sub(range->start_point, edit->old_end_point)
      );
      if (range->start_byte < edit->new_end_byte) {
        range->start_byte = UINT32_MAX;
        range->start_point = POINT_MAX;
      }
    } else if (range->start_byte > edit->start_byte) {
      range->start_byte = edit->start_byte;
      range->start_point = edit->start_point;
    }
  }

  SubtreePool pool = ts_subtree_pool_new(0);
  self->root = ts_subtree_edit(self->root, edit, &pool);
  ts_subtree_pool_delete(&pool);
}

t_range *ts_tree_included_ranges(const t_tree *self, uint32_t *length) {
  *length = self->included_range_count;
  t_range *ranges = ts_calloc(self->included_range_count, sizeof(t_range));
  memcpy(ranges, self->included_ranges, self->included_range_count * sizeof(t_range));
  return ranges;
}

t_range *ts_tree_get_changed_ranges(const t_tree *old_tree, const t_tree *new_tree, uint32_t *length) {
  TreeCursor cursor1 = {NULL, array_new(), 0};
  TreeCursor cursor2 = {NULL, array_new(), 0};
  ts_tree_cursor_init(&cursor1, ts_tree_root_node(old_tree));
  ts_tree_cursor_init(&cursor2, ts_tree_root_node(new_tree));

  TSRangeArray included_range_differences = array_new();
  ts_range_array_get_changed_ranges(
    old_tree->included_ranges, old_tree->included_range_count,
    new_tree->included_ranges, new_tree->included_range_count,
    &included_range_differences
  );

  t_range *result;
  *length = ts_subtree_get_changed_ranges(
    &old_tree->root, &new_tree->root, &cursor1, &cursor2,
    old_tree->language, &included_range_differences, &result
  );

  array_delete(&included_range_differences);
  array_delete(&cursor1.stack);
  array_delete(&cursor2.stack);
  return result;
}

#ifdef _WIN32

#include <io.h>
#include <windows.h>

int _ts_dup(HANDLE handle) {
  HANDLE dup_handle;
  if (!DuplicateHandle(
    GetCurrentProcess(), handle,
    GetCurrentProcess(), &dup_handle,
    0, FALSE, DUPLICATE_SAME_ACCESS
  )) return -1;

  return _open_osfhandle((intptr_t)dup_handle, 0);
}

void ts_tree_print_dot_graph(const TSTree *self, int fd) {
  FILE *file = _fdopen(_ts_dup((HANDLE)_get_osfhandle(fd)), "a");
  ts_subtree_print_dot_graph(self->root, self->language, file);
  fclose(file);
}

#else

#include <unistd.h>

int _ts_dup(int file_descriptor) {
  return dup(file_descriptor);
}

void ts_tree_print_dot_graph(const t_tree *self, int file_descriptor) {
  FILE *file = fdopen(_ts_dup(file_descriptor), "a");
  ts_subtree_print_dot_graph(self->root, self->language, file);
  fclose(file);
}

#endif

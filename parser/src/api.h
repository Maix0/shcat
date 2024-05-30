#ifndef TREE_SITTER_ARRAY_H_
#define TREE_SITTER_ARRAY_H_

#include "me/char/char.h"
#include "me/mem/mem.h"
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "./api_structs.h"
#include "./array.h"
#include "./funcs.h"

#define ts_builtin_sym_error_repeat (ts_builtin_sym_error - 1)
#define LANGUAGE_VERSION_WITH_PRIMARY_STATES 14
#define LANGUAGE_VERSION_USABLE_VIA_WASM 13
#define ERROR_STATE 0
#define ERROR_COST_PER_RECOVERY 500
#define ERROR_COST_PER_MISSING_TREE 110
#define ERROR_COST_PER_SKIPPED_TREE 100
#define ERROR_COST_PER_SKIPPED_LINE 30
#define ERROR_COST_PER_SKIPPED_CHAR 1
#define MAX_STEP_CAPTURE_COUNT 3
#define MAX_NEGATED_FIELD_COUNT 8
#define MAX_STATE_PREDECESSOR_COUNT 256
#define MAX_ANALYSIS_STATE_DEPTH 8
#define MAX_ANALYSIS_ITERATION_COUNT 256
#define MAX_LINK_COUNT 8
#define MAX_NODE_POOL_SIZE 50
#define MAX_ITERATOR_COUNT 64
#define TS_MAX_INLINE_TREE_LENGTH UINT8_MAX
#define TS_MAX_TREE_POOL_SIZE 32
#define ts_builtin_sym_error ((t_symbol)-1)
#define ts_builtin_sym_end 0

#define POINT_ZERO ((t_point){0, 0})
#define POINT_MAX ((t_point){UINT32_MAX, UINT32_MAX})
#define TS_TREE_STATE_NONE USHRT_MAX
#define NULL_SUBTREE ((t_subtree){.ptr = NULL})
#define STACK_VERSION_NONE ((t_stack_version)-1)
#define TS_DECODE_ERROR (-1)

#if true
# undef malloc
# undef calloc
# undef realloc
# undef free

# define malloc(s) mem_alloc((s))
# define calloc(s, l) mem_alloc_array((s), (l))
# define realloc(p, t) mem_realloc((p), (t))
# define free(p) mem_free((p))
#endif

// Get a subtree's children, which are allocated immediately before the
// tree's own heap data.
#define ts_subtree_children(self) ((self).data.is_inline ? NULL : (t_subtree *)((self).ptr) - (self).ptr->child_count)

static const t_length LENGTH_UNDEFINED = {0, {0, 1}};
static const t_length LENGTH_MAX = {UINT32_MAX, {UINT32_MAX, UINT32_MAX}};

#endif // TREE_SITTER_TREE_H_

#ifndef SUBTREE_H
#define SUBTREE_H

#include "me/types.h"
#include "parser/api.h"
#include "parser/array.h"
#include "parser/length.h"
#include "parser/parser.h"
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

#define TS_BIG_ENDIAN 0
#define TS_PTR_SIZE 64
#define TS_TREE_STATE_NONE USHRT_MAX
#define NULL_SUBTREE ((Subtree){.ptr = NULL})

struct ExternalScannerState
{
	union {
		char *long_data;
		char  short_data[24];
	};
	t_u32 length;
};

// The serialized state of an external scanner.
//
// Every time an external token subtree is created after a call to an
// external scanner, the scanner's `serialize` function is called to
// retrieve a serialized copy of its state. The bytes are then copied
// onto the subtree itself so that the scanner's state can later be
// restored using its `deserialize` function.
//
// Small byte arrays are stored inline, and long ones are allocated
// separately on the heap.
typedef struct ExternalScannerState ExternalScannerState;

// A heap-allocated representation of a subtree.
//
// This representation is used for parent nodes, external tokens,
// errors, and other leaf nodes whose data is too large to fit into
// the inline representation.
typedef struct SubtreeHeapData
{
	t_u32	  ref_count;
	Length	  padding;
	Length	  size;
	t_u32	  lookahead_bytes;
	t_u32	  error_cost;
	t_u32	  child_count;
	TSSymbol  symbol;
	TSStateId parse_state;

	bool visible : 1;
	bool named : 1;
	bool extra : 1;
	bool fragile_left : 1;
	bool fragile_right : 1;
	bool has_changes : 1;
	bool has_external_tokens : 1;
	bool has_external_scanner_state_change : 1;
	bool depends_on_column : 1;
	bool is_missing : 1;
	bool is_keyword : 1;

	union {
		// Non-terminal subtrees (`child_count > 0`)
		struct
		{
			t_u32 visible_child_count;
			t_u32 named_child_count;
			t_u32 visible_descendant_count;
			t_i32 dynamic_precedence;
			t_u16 repeat_depth;
			t_u16 production_id;
			struct
			{
				TSSymbol  symbol;
				TSStateId parse_state;
			} first_leaf;
		};

		// External terminal subtrees (`child_count == 0 && has_external_tokens`)
		ExternalScannerState external_scanner_state;

		// Error terminal subtrees (`child_count == 0 && symbol == ts_builtin_sym_error`)
		t_i32 lookahead_char;
	};
} SubtreeHeapData;

// The fundamental building block of a syntax tree.
typedef union Subtree {
	const SubtreeHeapData *ptr;
} Subtree;

// Like Subtree, but mutable.
typedef union MutableSubtree {
	SubtreeHeapData *ptr;
} MutableSubtree;

typedef Array(Subtree) SubtreeArray;
typedef Array(MutableSubtree) MutableSubtreeArray;

void		ts_external_scanner_state_init(ExternalScannerState *, const t_u8 *, t_u32);
const t_u8 *ts_external_scanner_state_data(const ExternalScannerState *);
bool		ts_external_scanner_state_eq(const ExternalScannerState *self, const t_u8 *, t_u32);
void		ts_external_scanner_state_delete(ExternalScannerState *self);

void ts_subtree_array_copy(SubtreeArray, SubtreeArray *);
void ts_subtree_array_clear(SubtreeArray *);
void ts_subtree_array_delete(SubtreeArray *);
void ts_subtree_array_remove_trailing_extras(SubtreeArray *, SubtreeArray *);
void ts_subtree_array_reverse(SubtreeArray *);

Subtree						ts_subtree_new_leaf(TSSymbol, Length, Length, t_u32, TSStateId, bool, bool, bool, const TSLanguage *);
Subtree						ts_subtree_new_error(t_i32, Length, Length, t_u32, TSStateId, const TSLanguage *);
MutableSubtree				ts_subtree_new_node(TSSymbol, SubtreeArray *, t_u32, const TSLanguage *);
Subtree						ts_subtree_new_error_node(SubtreeArray *, bool, const TSLanguage *);
Subtree						ts_subtree_new_missing_leaf(TSSymbol, Length, t_u32, const TSLanguage *);
MutableSubtree				ts_subtree_make_mut(Subtree);
void						ts_subtree_retain(Subtree);
void						ts_subtree_release(Subtree);
int							ts_subtree_compare(Subtree, Subtree);
void						ts_subtree_set_symbol(MutableSubtree *, TSSymbol, const TSLanguage *);
void						ts_subtree_summarize(MutableSubtree, const Subtree *, t_u32, const TSLanguage *);
void						ts_subtree_summarize_children(MutableSubtree, const TSLanguage *);
void						ts_subtree_balance(Subtree, const TSLanguage *);
Subtree						ts_subtree_edit(Subtree, const TSInputEdit *edit);
char					   *ts_subtree_string(Subtree, TSSymbol, bool, const TSLanguage *, bool include_all);
void						ts_subtree_print_dot_graph(Subtree, const TSLanguage *, FILE *);
Subtree						ts_subtree_last_external_token(Subtree);
const ExternalScannerState *ts_subtree_external_scanner_state(Subtree self);
bool						ts_subtree_external_scanner_state_eq(Subtree, Subtree);

static inline TSSymbol ts_subtree_symbol(Subtree self)
{
	return ((self).ptr->symbol);
}
static inline bool ts_subtree_visible(Subtree self)
{
	return ((self).ptr->visible);
}
static inline bool ts_subtree_named(Subtree self)
{
	return ((self).ptr->named);
}
static inline bool ts_subtree_extra(Subtree self)
{
	return ((self).ptr->extra);
}
static inline bool ts_subtree_has_changes(Subtree self)
{
	return ((self).ptr->has_changes);
}
static inline bool ts_subtree_missing(Subtree self)
{
	return ((self).ptr->is_missing);
}
static inline bool ts_subtree_is_keyword(Subtree self)
{
	return ((self).ptr->is_keyword);
}
static inline TSStateId ts_subtree_parse_state(Subtree self)
{
	return ((self).ptr->parse_state);
}
static inline t_u32 ts_subtree_lookahead_bytes(Subtree self)
{
	return ((self).ptr->lookahead_bytes);
}

// Get the size needed to store a heap-allocated subtree with the given
// number of children.
static inline size_t ts_subtree_alloc_size(t_u32 child_count)
{
	return child_count * sizeof(Subtree) + sizeof(SubtreeHeapData);
}

// Get a subtree's children, which are allocated immediately before the
// tree's own heap data.
#define ts_subtree_children(self) ((Subtree *)((self).ptr) - (self).ptr->child_count)

static inline void ts_subtree_set_extra(MutableSubtree *self, bool is_extra)
{
	self->ptr->extra = is_extra;
}

static inline TSSymbol ts_subtree_leaf_symbol(Subtree self)
{
	if (self.ptr->child_count == 0)
		return self.ptr->symbol;
	return self.ptr->first_leaf.symbol;
}

static inline TSStateId ts_subtree_leaf_parse_state(Subtree self)
{
	if (self.ptr->child_count == 0)
		return self.ptr->parse_state;
	return self.ptr->first_leaf.parse_state;
}

static inline Length ts_subtree_padding(Subtree self)
{
	return self.ptr->padding;
}

static inline Length ts_subtree_size(Subtree self)
{
	return self.ptr->size;
}

static inline Length ts_subtree_total_size(Subtree self)
{
	return (length_add(ts_subtree_padding(self), ts_subtree_size(self)));
}

static inline t_u32 ts_subtree_total_bytes(Subtree self)
{
	return (ts_subtree_total_size(self).bytes);
}

static inline t_u32 ts_subtree_child_count(Subtree self)
{
	return (self.ptr->child_count);
}

static inline t_u32 ts_subtree_repeat_depth(Subtree self)
{
	return (self.ptr->repeat_depth);
}

static inline t_u32 ts_subtree_is_repetition(Subtree self)
{
	return (!self.ptr->named && !self.ptr->visible && self.ptr->child_count != 0);
}

static inline t_u32 ts_subtree_visible_descendant_count(Subtree self)
{
	return ((self.ptr->child_count == 0) ? 0 : self.ptr->visible_descendant_count);
}

static inline t_u32 ts_subtree_visible_child_count(Subtree self)
{
	if (ts_subtree_child_count(self) > 0)
		return (self.ptr->visible_child_count);
	else
		return 0;
}

static inline t_u32 ts_subtree_error_cost(Subtree self)
{
	if (ts_subtree_missing(self))
		return (ERROR_COST_PER_MISSING_TREE + ERROR_COST_PER_RECOVERY);
	else
		return (self.ptr->error_cost);
}

static inline t_i32 ts_subtree_dynamic_precedence(Subtree self)
{
	return ((self.ptr->child_count == 0) ? 0 : self.ptr->dynamic_precedence);
}

static inline t_u16 ts_subtree_production_id(Subtree self)
{
	if (ts_subtree_child_count(self) > 0)
		return (self.ptr->production_id);
	else
		return (0);
}

static inline bool ts_subtree_fragile_left(Subtree self)
{
	return (self.ptr->fragile_left);
}

static inline bool ts_subtree_fragile_right(Subtree self)
{
	return (self.ptr->fragile_right);
}

static inline bool ts_subtree_has_external_tokens(Subtree self)
{
	return (self.ptr->has_external_tokens);
}

static inline bool ts_subtree_has_external_scanner_state_change(Subtree self)
{
	return (self.ptr->has_external_scanner_state_change);
}

static inline bool ts_subtree_depends_on_column(Subtree self)
{
	return (self.ptr->depends_on_column);
}

static inline bool ts_subtree_is_fragile(Subtree self)
{
	return ((self.ptr->fragile_left || self.ptr->fragile_right));
}

static inline bool ts_subtree_is_error(Subtree self)
{
	return (ts_subtree_symbol(self) == ts_builtin_sym_error);
}

static inline bool ts_subtree_is_eof(Subtree self)
{
	return (ts_subtree_symbol(self) == ts_builtin_sym_end);
}

static inline Subtree ts_subtree_from_mut(MutableSubtree self)
{
	Subtree result;

	result.ptr = self.ptr;
	return (result);
}

static inline MutableSubtree ts_subtree_to_mut_unsafe(Subtree self)
{
	MutableSubtree result;

	result.ptr = (void *)self.ptr;
	return (result);
}

#endif // SUBTREE_H

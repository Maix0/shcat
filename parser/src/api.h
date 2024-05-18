#ifndef TREE_SITTER_ARRAY_H_
#define TREE_SITTER_ARRAY_H_

#include "me/mem/mem.h"
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

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
#define TREE_SITTER_SERIALIZATION_BUFFER_SIZE 1024
#define POINT_ZERO ((t_point){0, 0})
#define POINT_MAX ((t_point){UINT32_MAX, UINT32_MAX})
#define TS_TREE_STATE_NONE USHRT_MAX
#define NULL_SUBTREE ((t_subtree){.ptr = NULL})
#define STACK_VERSION_NONE ((t_stack_version)-1)
#define TS_DECODE_ERROR (-1)

#if false 
# undef malloc
# undef calloc
# undef realloc
# undef free

# define malloc(s) mem_alloc((s))
# define calloc(s, l) mem_alloc_array((s), (l))
# define realloc(p, t) mem_realloc((p), (t))
# define free(p) mem_free((p))
#endif

#define Array(T)                                                               \
	struct                                                                     \
	{                                                                          \
		T		*contents;                                                     \
		uint32_t size;                                                         \
		uint32_t capacity;                                                     \
	}

#ifndef inline
# define inline __inline__
#endif

/// Initialize an array.
#define array_init(self)                                                       \
	((self)->size = 0, (self)->capacity = 0, (self)->contents = NULL)

/// Create an empty array.
#define array_new()                                                            \
	{                                                                          \
		NULL, 0, 0                                                             \
	}

/// Get a pointer to the element at a given `index` in the array.
#define array_get(self, _index)                                                \
	(assert((uint32_t)(_index) < (self)->size), &(self)->contents[_index])

/// Get a pointer to the first element in the array.
#define array_front(self) array_get(self, 0)

/// Get a pointer to the last element in the array.
#define array_back(self) array_get(self, (self)->size - 1)

/// Clear the array, setting its size to zero. Note that this does not free any
/// memory allocated for the array's contents.
#define array_clear(self) ((self)->size = 0)

/// Reserve `new_capacity` elements of space in the array. If `new_capacity` is
/// less than the array's current capacity, this function has no effect.
#define array_reserve(self, new_capacity)                                      \
	_array__reserve((Array *)(self), array_elem_size(self), new_capacity)

/// Free any memory allocated for this array. Note that this does not free any
/// memory allocated for the array's contents.
#define array_delete(self) _array__delete((Array *)(self))

/// Push a new `element` onto the end of the array.
#define array_push(self, element)                                              \
	(_array__grow((Array *)(self), 1, array_elem_size(self)),                  \
	 (self)->contents[(self)->size++] = (element))

/// Increase the array's size by `count` elements.
/// New elements are zero-initialized.
#define array_grow_by(self, count)                                             \
	do                                                                         \
	{                                                                          \
		if ((count) == 0)                                                      \
			break;                                                             \
		_array__grow((Array *)(self), count, array_elem_size(self));           \
		memset((self)->contents + (self)->size, 0,                             \
			   (count) * array_elem_size(self));                               \
		(self)->size += (count);                                               \
	} while (0)

/// Append all elements from one array to the end of another.
#define array_push_all(self, other)                                            \
	array_extend((self), (other)->size, (other)->contents)

/// Append `count` elements to the end of the array, reading their values from
/// the `contents` pointer.
#define array_extend(self, count, contents)                                    \
	_array__splice((Array *)(self), array_elem_size(self), (self)->size, 0,    \
				   count, contents)

/// Remove `old_count` elements from the array starting at the given `index`. At
/// the same index, insert `new_count` new elements, reading their values from
/// the `new_contents` pointer.
#define array_splice(self, _index, old_count, new_count, new_contents)         \
	_array__splice((Array *)(self), array_elem_size(self), _index, old_count,  \
				   new_count, new_contents)

/// Insert one `element` into the array at the given `index`.
#define array_insert(self, _index, element)                                    \
	_array__splice((Array *)(self), array_elem_size(self), _index, 0, 1,       \
				   &(element))

/// Remove one element from the array at the given `index`.
#define array_erase(self, _index)                                              \
	_array__erase((Array *)(self), array_elem_size(self), _index)

/// Pop the last element off the array, returning the element by value.
#define array_pop(self) ((self)->contents[--(self)->size])

/// Assign the contents of one array to another, reallocating if necessary.
#define array_assign(self, other)                                              \
	_array__assign((Array *)(self), (const Array *)(other),                    \
				   array_elem_size(self))

/// Swap one array with another
#define array_swap(self, other) _array__swap((Array *)(self), (Array *)(other))

/// Get the size of the array contents
#define array_elem_size(self) (sizeof *(self)->contents)

/// Search a sorted array for a given `needle` value, using the given `compare`
/// callback to determine the order.
///
/// If an existing element is found to be equal to `needle`, then the `index`
/// out-parameter is set to the existing value's index, and the `exists`
/// out-parameter is set to true. Otherwise, `index` is set to an index where
/// `needle` should be inserted in order to preserve the sorting, and `exists`
/// is set to false.
#define array_search_sorted_with(self, compare, needle, _index, _exists)       \
	_array__search_sorted(self, 0, compare, , needle, _index, _exists)

/// Search a sorted array for a given `needle` value, using integer comparisons
/// of a given struct field (specified with a leading dot) to determine the
/// order.
///
/// See also `array_search_sorted_with`.
#define array_search_sorted_by(self, field, needle, _index, _exists)           \
	_array__search_sorted(self, 0, _compare_int, field, needle, _index, _exists)

/// Insert a given `value` into a sorted array, using the given `compare`
/// callback to determine the order.
#define array_insert_sorted_with(self, compare, value)                         \
	do                                                                         \
	{                                                                          \
		unsigned _index, _exists;                                              \
		array_search_sorted_with(self, compare, &(value), &_index, &_exists);  \
		if (!_exists)                                                          \
			array_insert(self, _index, value);                                 \
	} while (0)

/// Insert a given `value` into a sorted array, using integer comparisons of
/// a given struct field (specified with a leading dot) to determine the order.
///
/// See also `array_search_sorted_by`.
#define array_insert_sorted_by(self, field, value)                             \
	do                                                                         \
	{                                                                          \
		unsigned _index, _exists;                                              \
		array_search_sorted_by(self, field, (value)field, &_index, &_exists);  \
		if (!_exists)                                                          \
			array_insert(self, _index, value);                                 \
	} while (0)

// Get a subtree's children, which are allocated immediately before the
// tree's own heap data.
#define ts_subtree_children(self)                                              \
	((self).data.is_inline                                                     \
		 ? NULL                                                                \
		 : (t_subtree *)((self).ptr) - (self).ptr->child_count)

typedef uint16_t					t_state_id;
typedef uint16_t					t_symbol;
typedef uint16_t					t_field_id;
typedef struct s_language			t_language;
typedef struct s_first_parser		t_first_parser;
typedef struct s_first_tree			t_first_tree;
typedef struct s_parse_query		t_parse_query;
typedef struct s_query_cursor		t_query_cursor;
typedef struct s_lookahead_iterator t_lookahead_iterator;

typedef struct s_point
{
	uint32_t row;
	uint32_t column;
} t_point;

typedef struct s_length
{
	uint32_t bytes;
	t_point	 extent;
} t_length;

typedef enum e_input_encoding
{
	TSInputEncodingUTF8,
	TSInputEncodingUTF16,
} t_input_encoding;

typedef enum e_symbol_type
{
	TSSymbolTypeRegular,
	TSSymbolTypeAnonymous,
	TSSymbolTypeAuxiliary,
} t_symbol_type;

typedef struct s_parse_range
{
	t_point	 start_point;
	t_point	 end_point;
	uint32_t start_byte;
	uint32_t end_byte;
} t_parse_range;

typedef struct s_parse_input
{
	void *payload;
	const char *(*read)(void *payload, uint32_t byte_index, t_point position,
						uint32_t *bytes_read);
	t_input_encoding encoding;
} t_parse_input;

typedef enum e_log_type
{
	TSLogTypeParse,
	TSLogTypeLex,
} t_log_type;

typedef struct s_parse_logger
{
	void *payload;
	void (*log)(void *payload, t_log_type log_type, const char *buffer);
} t_parse_logger;

typedef struct s_input_edit
{
	uint32_t start_byte;
	uint32_t old_end_byte;
	uint32_t new_end_byte;
	t_point	 start_point;
	t_point	 old_end_point;
	t_point	 new_end_point;
} t_input_edit;

typedef struct s_parse_node
{
	uint32_t			context[4];
	const void		   *id;
	const t_first_tree *tree;
} t_parse_node;

typedef struct s_tree_cursor_entry
{
	const union u_subtree *subtree;
	t_length			   position;
	uint32_t			   child_index;
	uint32_t			   structural_child_index;
	uint32_t			   descendant_index;
} t_tree_cursor_entry;

typedef struct s_tree_cursor
{
	const t_first_tree *tree;
	Array(t_tree_cursor_entry) stack;
	t_symbol root_alias_symbol;
} t_tree_cursor;

typedef struct s_query_capture
{
	t_parse_node node;
	uint32_t	 index;
} t_query_capture;

typedef enum e_quantifier
{
	TSQuantifierZero = 0, // must match the array initialization value
	TSQuantifierZeroOrOne,
	TSQuantifierZeroOrMore,
	TSQuantifierOne,
	TSQuantifierOneOrMore,
} t_quantifier;

typedef struct s_query_match
{
	uint32_t			   id;
	uint16_t			   pattern_index;
	uint16_t			   capture_count;
	const t_query_capture *captures;
} t_query_match;

typedef enum e_query_predicate_step_type
{
	TSQueryPredicateStepTypeDone,
	TSQueryPredicateStepTypeCapture,
	TSQueryPredicateStepTypeString,
} t_query_predicate_step_type;

typedef struct s_query_predicate_step
{
	t_query_predicate_step_type type;
	uint32_t					value_id;
} t_query_predicate_step;

typedef enum e_query_error
{
	TSQueryErrorNone = 0,
	TSQueryErrorSyntax,
	TSQueryErrorNodeType,
	TSQueryErrorField,
	TSQueryErrorCapture,
	TSQueryErrorStructure,
	TSQueryErrorLanguage,
} t_query_error;

// Private

typedef Array(void) Array;

/// This is not what you're looking for, see `array_delete`.
static inline void _array__delete(Array *self)
{
	if (self->contents)
	{
		free(self->contents);
		self->contents = NULL;
		self->size = 0;
		self->capacity = 0;
	}
}

/// This is not what you're looking for, see `array_erase`.
static inline void _array__erase(Array *self, size_t element_size,
								 uint32_t index)
{
	assert(index < self->size);
	char *contents = (char *)self->contents;
	memmove(contents + index * element_size,
			contents + (index + 1) * element_size,
			(self->size - index - 1) * element_size);
	self->size--;
}

/// This is not what you're looking for, see `array_reserve`.
static inline void _array__reserve(Array *self, size_t element_size,
								   uint32_t new_capacity)
{
	if (new_capacity > self->capacity)
	{
		if (self->contents)
		{
			self->contents =
				realloc(self->contents, new_capacity * element_size);
		}
		else
		{
			self->contents = malloc(new_capacity * element_size);
		}
		self->capacity = new_capacity;
	}
}

/// This is not what you're looking for, see `array_assign`.
static inline void _array__assign(Array *self, const Array *other,
								  size_t element_size)
{
	_array__reserve(self, element_size, other->size);
	self->size = other->size;
	memcpy(self->contents, other->contents, self->size * element_size);
}

/// This is not what you're looking for, see `array_swap`.
static inline void _array__swap(Array *self, Array *other)
{
	Array swap = *other;
	*other = *self;
	*self = swap;
}

/// This is not what you're looking for, see `array_push` or `array_grow_by`.
static inline void _array__grow(Array *self, uint32_t count,
								size_t element_size)
{
	uint32_t new_size = self->size + count;
	if (new_size > self->capacity)
	{
		uint32_t new_capacity = self->capacity * 2;
		if (new_capacity < 8)
			new_capacity = 8;
		if (new_capacity < new_size)
			new_capacity = new_size;
		_array__reserve(self, element_size, new_capacity);
	}
}

/// This is not what you're looking for, see `array_splice`.
static inline void _array__splice(Array *self, size_t element_size,
								  uint32_t index, uint32_t old_count,
								  uint32_t new_count, const void *elements)
{
	uint32_t new_size = self->size + new_count - old_count;
	uint32_t old_end = index + old_count;
	uint32_t new_end = index + new_count;
	assert(old_end <= self->size);

	_array__reserve(self, element_size, new_size);

	char *contents = (char *)self->contents;
	if (self->size > old_end)
	{
		memmove(contents + new_end * element_size,
				contents + old_end * element_size,
				(self->size - old_end) * element_size);
	}
	if (new_count > 0)
	{
		if (elements)
		{
			memcpy((contents + index * element_size), elements,
				   new_count * element_size);
		}
		else
		{
			memset((contents + index * element_size), 0,
				   new_count * element_size);
		}
	}
	self->size += new_count - old_count;
}

/// A binary search routine, based on Rust's `std::slice::binary_search_by`.
/// This is not what you're looking for, see `array_search_sorted_with` or
/// `array_search_sorted_by`.
#define _array__search_sorted(self, start, compare, suffix, needle, _index,    \
							  _exists)                                         \
	do                                                                         \
	{                                                                          \
		*(_index) = start;                                                     \
		*(_exists) = false;                                                    \
		uint32_t size = (self)->size - *(_index);                              \
		if (size == 0)                                                         \
			break;                                                             \
		int comparison;                                                        \
		while (size > 1)                                                       \
		{                                                                      \
			uint32_t half_size = size / 2;                                     \
			uint32_t mid_index = *(_index) + half_size;                        \
			comparison =                                                       \
				compare(&((self)->contents[mid_index] suffix), (needle));      \
			if (comparison <= 0)                                               \
				*(_index) = mid_index;                                         \
			size -= half_size;                                                 \
		}                                                                      \
		comparison = compare(&((self)->contents[*(_index)] suffix), (needle)); \
		if (comparison == 0)                                                   \
			*(_exists) = true;                                                 \
		else if (comparison < 0)                                               \
			*(_index) += 1;                                                    \
	} while (0)

/// Helper macro for the `_sorted_by` routines below. This takes the left
/// (existing) parameter by reference in order to work with the generic sorting
/// function above.
#define _compare_int(a, b) ((int)*(a) - (int)(b))

#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

static inline size_t atomic_load(const volatile size_t *p)
{
#ifdef __ATOMIC_RELAXED
	return __atomic_load_n(p, __ATOMIC_RELAXED);
#else
	return __sync_fetch_and_add((volatile size_t *)p, 0);
#endif
}

static inline uint32_t atomic_inc(volatile uint32_t *p)
{
#ifdef __ATOMIC_RELAXED
	return __atomic_add_fetch(p, 1U, __ATOMIC_SEQ_CST);
#else
	return __sync_add_and_fetch(p, 1U);
#endif
}

static inline uint32_t atomic_dec(volatile uint32_t *p)
{
#ifdef __ATOMIC_RELAXED
	return __atomic_sub_fetch(p, 1U, __ATOMIC_SEQ_CST);
#else
	return __sync_sub_and_fetch(p, 1U);
#endif
}

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
typedef struct
{
	union {
		char *long_data;
		char  short_data[24];
	};
	uint32_t length;
} t_external_scanner_state;

// A compact representation of a subtree.
//
// This representation is used for small leaf nodes that are not
// errors, and were not created by an external scanner.
//
// The idea behind the layout of this struct is that the `is_inline`
// bit will fall exactly into the same location as the least significant
// bit of the pointer in `t_subtree` or `t_mutable_subtree`, respectively.
// Because of alignment, for any valid pointer this will be 0, giving
// us the opportunity to make use of this bit to signify whether to use
// the pointer or the inline struct.
typedef struct s_subtree_inline_data t_subtree_inline_data;

#define SUBTREE_BITS                                                           \
	bool visible : 1;                                                          \
	bool named : 1;                                                            \
	bool extra : 1;                                                            \
	bool has_changes : 1;                                                      \
	bool is_missing : 1;                                                       \
	bool is_keyword : 1;

#define SUBTREE_SIZE                                                           \
	uint8_t padding_columns;                                                   \
	uint8_t padding_rows : 4;                                                  \
	uint8_t lookahead_bytes : 4;                                               \
	uint8_t padding_bytes;                                                     \
	uint8_t size_bytes;

#if TS_BIG_ENDIAN
# if TS_PTR_SIZE == 32

struct s_subtree_inline_data
{
	uint16_t parse_state;
	uint8_t	 symbol;
	SUBTREE_BITS
	bool unused : 1;
	bool is_inline : 1;
	SUBTREE_SIZE
};

# else

struct s_subtree_inline_data
{
	SUBTREE_SIZE
	uint16_t parse_state;
	uint8_t	 symbol;
	SUBTREE_BITS
	bool unused : 1;
	bool is_inline : 1;
};

# endif
#else

struct s_subtree_inline_data
{
	bool is_inline : 1;
	SUBTREE_BITS
	uint8_t	 symbol;
	uint16_t parse_state;
	SUBTREE_SIZE
};

#endif

#undef SUBTREE_BITS
#undef SUBTREE_SIZE

// A heap-allocated representation of a subtree.
//
// This representation is used for parent nodes, external tokens,
// errors, and other leaf nodes whose data is too large to fit into
// the inline representation.
typedef struct s_subtree_heap_data
{
	volatile uint32_t ref_count;
	t_length		  padding;
	t_length		  size;
	uint32_t		  lookahead_bytes;
	uint32_t		  error_cost;
	uint32_t		  child_count;
	t_symbol		  symbol;
	t_state_id		  parse_state;

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
			uint32_t visible_child_count;
			uint32_t named_child_count;
			uint32_t visible_descendant_count;
			int32_t	 dynamic_precedence;
			uint16_t repeat_depth;
			uint16_t production_id;
			struct
			{
				t_symbol   symbol;
				t_state_id parse_state;
			} first_leaf;
		};

		// External terminal subtrees (`child_count == 0 &&
		// has_external_tokens`)
		t_external_scanner_state external_scanner_state;

		// Error terminal subtrees (`child_count == 0 && symbol ==
		// ts_builtin_sym_error`)
		int32_t lookahead_char;
	};
} t_subtree_heap_data;

// The fundamental building block of a syntax tree.
typedef union u_subtree {
	t_subtree_inline_data	   data;
	const t_subtree_heap_data *ptr;
} t_subtree;

// Like t_subtree, but mutable.
typedef union u_mutable_subtree {
	t_subtree_inline_data data;
	t_subtree_heap_data	 *ptr;
} t_mutable_subtree;

typedef Array(t_subtree) t_subtree_array;
typedef Array(t_mutable_subtree) t_mutable_subtree_array;

typedef struct
{
	t_mutable_subtree_array free_trees;
	t_mutable_subtree_array tree_stack;
} t_subtree_pool;

typedef Array(t_parse_range) t_range_array;

typedef union u_parse_action {
	struct
	{
		uint8_t	   type;
		t_state_id state;
		bool	   extra;
		bool	   repetition;
	} shift;
	struct
	{
		uint8_t	 type;
		uint8_t	 child_count;
		t_symbol symbol;
		int16_t	 dynamic_precedence;
		uint16_t production_id;
	} reduce;
	uint8_t type;
} t_parse_action;

void ts_range_array_get_changed_ranges(const t_parse_range *old_ranges,
									   unsigned				old_range_count,
									   const t_parse_range *new_ranges,
									   unsigned				new_range_count,
									   t_range_array	   *differences);

bool ts_range_array_intersects(const t_range_array *self, unsigned start_index,
							   uint32_t start_byte, uint32_t end_byte);

unsigned ts_subtree_get_changed_ranges(
	const t_subtree *old_tree, const t_subtree *new_tree,
	t_tree_cursor *cursor1, t_tree_cursor *cursor2, const t_language *language,
	const t_range_array *included_range_differences, t_parse_range **ranges);

typedef struct s_table_entry
{
	const t_parse_action *actions;
	uint32_t			  action_count;
	bool				  is_reusable;
} t_table_entry;

typedef struct s_lookahead_iterator
{
	const t_language *language;
	const uint16_t	 *data;
	const uint16_t	 *group_end;
	t_state_id		  state;
	uint16_t		  table_value;
	uint16_t		  section_index;
	uint16_t		  group_count;
	bool			  is_small_state;

	const t_parse_action *actions;
	t_symbol			  symbol;
	t_state_id			  next_state;
	uint16_t			  action_count;
} t_lookahead_iterator;

typedef struct s_symbol_metadata
{
	bool visible;
	bool named;
	bool supertype;
} t_symbol_metadata;

typedef enum e_parse_action_type
{
	TSParseActionTypeShift,
	TSParseActionTypeReduce,
	TSParseActionTypeAccept,
	TSParseActionTypeRecover,
} t_parse_action_type;

typedef union u_parse_action_entry {
	t_parse_action action;
	struct
	{
		uint8_t count;
		bool	reusable;
	} entry;
} t_parse_action_entry;

typedef struct s_field_map_entry
{
	t_field_id field_id;
	uint8_t	   child_index;
	bool	   inherited;
} t_field_map_entry;

typedef struct s_field_map_slice
{
	uint16_t index;
	uint16_t length;
} t_field_map_slice;

typedef struct s_lexer_data t_lexer_data;

struct s_lexer_data
{
	int32_t	 lookahead;
	t_symbol result_symbol;
	void (*advance)(t_lexer_data *, bool);
	void (*mark_end)(t_lexer_data *);
	uint32_t (*get_column)(t_lexer_data *);
	bool (*is_at_included_range_start)(const t_lexer_data *);
	bool (*eof)(const t_lexer_data *);
};

typedef struct s_lex_mode
{
	uint16_t lex_state;
	uint16_t external_lex_state;
} t_lex_mode;

typedef struct s_char_range
{
	int32_t start;
	int32_t end;
} t_char_range;

struct s_language
{
	uint32_t					version;
	uint32_t					symbol_count;
	uint32_t					alias_count;
	uint32_t					token_count;
	uint32_t					external_token_count;
	uint32_t					state_count;
	uint32_t					large_state_count;
	uint32_t					production_id_count;
	uint32_t					field_count;
	uint16_t					max_alias_sequence_length;
	const uint16_t			   *parse_table;
	const uint16_t			   *small_parse_table;
	const uint32_t			   *small_parse_table_map;
	const t_parse_action_entry *parse_actions;
	const char *const		   *symbol_names;
	const char *const		   *field_names;
	const t_field_map_slice	   *field_map_slices;
	const t_field_map_entry	   *field_map_entries;
	const t_symbol_metadata	   *symbol_metadata;
	const t_symbol			   *public_symbol_map;
	const uint16_t			   *alias_map;
	const t_symbol			   *alias_sequences;
	const t_lex_mode		   *lex_modes;
	bool (*lex_fn)(t_lexer_data *, t_state_id);
	bool (*keyword_lex_fn)(t_lexer_data *, t_state_id);
	t_symbol keyword_capture_token;
	struct
	{
		const bool	   *states;
		const t_symbol *symbol_map;
		void *(*create)(void);
		void (*destroy)(void *);
		bool (*scan)(void *, t_lexer_data *, const bool *symbol_whitelist);
		unsigned (*serialize)(void *, char *);
		void (*deserialize)(void *, const char *, unsigned);
	} external_scanner;
	const t_state_id *primary_state_ids;
};

void ts_language_table_entry(const t_language *, t_state_id, t_symbol,
							 t_table_entry *);

t_symbol_metadata ts_language_symbol_metadata(const t_language *, t_symbol);

t_symbol ts_language_public_symbol(const t_language *, t_symbol);

t_state_id ts_language_next_state(const t_language *self, t_state_id state,
								  t_symbol symbol);

static inline bool ts_language_is_symbol_external(const t_language *self,
												  t_symbol			symbol)
{
	return 0 < symbol && symbol < self->external_token_count + 1;
}

static inline const t_parse_action *ts_language_actions(const t_language *self,
														t_state_id		  state,
														t_symbol  symbol,
														uint32_t *count)
{
	t_table_entry entry;
	ts_language_table_entry(self, state, symbol, &entry);
	*count = entry.action_count;
	return entry.actions;
}

static inline bool ts_language_has_reduce_action(const t_language *self,
												 t_state_id		   state,
												 t_symbol		   symbol)
{
	t_table_entry entry;
	ts_language_table_entry(self, state, symbol, &entry);
	return entry.action_count > 0 &&
		   entry.actions[0].type == TSParseActionTypeReduce;
}

// Lookup the table value for a given symbol and state.
//
// For non-terminal symbols, the table value represents a successor state.
// For terminal symbols, it represents an index in the actions table.
// For 'large' parse states, this is a direct lookup. For 'small' parse
// states, this requires searching through the symbol groups to find
// the given symbol.
static inline uint16_t ts_language_lookup(const t_language *self,
										  t_state_id state, t_symbol symbol)
{
	if (state >= self->large_state_count)
	{
		uint32_t index =
			self->small_parse_table_map[state - self->large_state_count];
		const uint16_t *data = &self->small_parse_table[index];
		uint16_t		group_count = *(data++);
		for (unsigned i = 0; i < group_count; i++)
		{
			uint16_t section_value = *(data++);
			uint16_t symbol_count = *(data++);
			for (unsigned j = 0; j < symbol_count; j++)
			{
				if (*(data++) == symbol)
					return section_value;
			}
		}
		return 0;
	}
	else
	{
		return self->parse_table[state * self->symbol_count + symbol];
	}
}

static inline bool ts_language_has_actions(const t_language *self,
										   t_state_id state, t_symbol symbol)
{
	return ts_language_lookup(self, state, symbol) != 0;
}

// Iterate over all of the symbols that are valid in the given state.
//
// For 'large' parse states, this just requires iterating through
// all possible symbols and checking the parse table for each one.
// For 'small' parse states, this exploits the structure of the
// table to only visit the valid symbols.
static inline t_lookahead_iterator ts_language_lookaheads(
	const t_language *self, t_state_id state)
{
	bool			is_small_state = state >= self->large_state_count;
	const uint16_t *data;
	const uint16_t *group_end = NULL;
	uint16_t		group_count = 0;
	if (is_small_state)
	{
		uint32_t index =
			self->small_parse_table_map[state - self->large_state_count];
		data = &self->small_parse_table[index];
		group_end = data + 1;
		group_count = *data;
	}
	else
	{
		data = &self->parse_table[state * self->symbol_count] - 1;
	}
	return (t_lookahead_iterator){
		.language = self,
		.data = data,
		.group_end = group_end,
		.group_count = group_count,
		.is_small_state = is_small_state,
		.symbol = UINT16_MAX,
		.next_state = 0,
	};
}

static inline bool ts_lookahead_iterator__next(t_lookahead_iterator *self)
{
	// For small parse states, valid symbols are listed explicitly,
	// grouped by their value. There's no need to look up the actions
	// again until moving to the next group.
	if (self->is_small_state)
	{
		self->data++;
		if (self->data == self->group_end)
		{
			if (self->group_count == 0)
				return false;
			self->group_count--;
			self->table_value = *(self->data++);
			unsigned symbol_count = *(self->data++);
			self->group_end = self->data + symbol_count;
			self->symbol = *self->data;
		}
		else
		{
			self->symbol = *self->data;
			return true;
		}
	}

	// For large parse states, iterate through every symbol until one
	// is found that has valid actions.
	else
	{
		do
		{
			self->data++;
			self->symbol++;
			if (self->symbol >= self->language->symbol_count)
				return false;
			self->table_value = *self->data;
		} while (!self->table_value);
	}

	// Depending on if the symbols is terminal or non-terminal, the table value
	// either represents a list of actions or a successor state.
	if (self->symbol < self->language->token_count)
	{
		const t_parse_action_entry *entry =
			&self->language->parse_actions[self->table_value];
		self->action_count = entry->entry.count;
		self->actions = (const t_parse_action *)(entry + 1);
		self->next_state = 0;
	}
	else
	{
		self->action_count = 0;
		self->next_state = self->table_value;
	}
	return true;
}

// Whether the state is a "primary state". If this returns false, it indicates
// that there exists another state that behaves identically to this one with
// respect to query analysis.
static inline bool ts_language_state_is_primary(const t_language *self,
												t_state_id		  state)
{
	if (self->version >= LANGUAGE_VERSION_WITH_PRIMARY_STATES)
	{
		return state == self->primary_state_ids[state];
	}
	else
	{
		return true;
	}
}

static inline const bool *ts_language_enabled_external_tokens(
	const t_language *self, unsigned external_scanner_state)
{
	if (external_scanner_state == 0)
	{
		return NULL;
	}
	else
	{
		return self->external_scanner.states +
			   self->external_token_count * external_scanner_state;
	}
}

static inline const t_symbol *ts_language_alias_sequence(const t_language *self,
														 uint32_t production_id)
{
	return production_id
			   ? &self->alias_sequences[production_id *
										self->max_alias_sequence_length]
			   : NULL;
}

static inline t_symbol ts_language_alias_at(const t_language *self,
											uint32_t		  production_id,
											uint32_t		  child_index)
{
	return production_id
			   ? self->alias_sequences[production_id *
										   self->max_alias_sequence_length +
									   child_index]
			   : 0;
}

static inline void ts_language_field_map(const t_language *self,
										 uint32_t		   production_id,
										 const t_field_map_entry **start,
										 const t_field_map_entry **end)
{
	if (self->field_count == 0)
	{
		*start = NULL;
		*end = NULL;
		return;
	}

	t_field_map_slice slice = self->field_map_slices[production_id];
	*start = &self->field_map_entries[slice.index];
	*end = &self->field_map_entries[slice.index] + slice.length;
}

static inline void ts_language_aliases_for_symbol(const t_language *self,
												  t_symbol original_symbol,
												  const t_symbol **start,
												  const t_symbol **end)
{
	*start = &self->public_symbol_map[original_symbol];
	*end = *start + 1;

	unsigned idx = 0;
	for (;;)
	{
		t_symbol symbol = self->alias_map[idx++];
		if (symbol == 0 || symbol > original_symbol)
			break;
		uint16_t count = self->alias_map[idx++];
		if (symbol == original_symbol)
		{
			*start = &self->alias_map[idx];
			*end = &self->alias_map[idx + count];
			break;
		}
		idx += count;
	}
}

static const t_length LENGTH_UNDEFINED = {0, {0, 1}};
static const t_length LENGTH_MAX = {UINT32_MAX, {UINT32_MAX, UINT32_MAX}};

static t_point point_add(t_point a, t_point b);
static t_point point_sub(t_point a, t_point b);

static inline bool length_is_undefined(t_length length)
{
	return length.bytes == 0 && length.extent.column != 0;
}

static inline t_length length_min(t_length len1, t_length len2)
{
	return (len1.bytes < len2.bytes) ? len1 : len2;
}

static inline t_length length_add(t_length len1, t_length len2)
{
	t_length result;
	result.bytes = len1.bytes + len2.bytes;
	result.extent = point_add(len1.extent, len2.extent);
	return result;
}

static inline t_length length_sub(t_length len1, t_length len2)
{
	t_length result;
	result.bytes = len1.bytes - len2.bytes;
	result.extent = point_sub(len1.extent, len2.extent);
	return result;
}

static inline t_length length_zero(void)
{
	t_length result = {0, {0, 0}};
	return result;
}

static inline t_length length_saturating_sub(t_length len1, t_length len2)
{
	if (len1.bytes > len2.bytes)
	{
		return length_sub(len1, len2);
	}
	else
	{
		return length_zero();
	}
}

typedef struct s_lexer
{
	t_lexer_data data;
	t_length	 current_position;
	t_length	 token_start_position;
	t_length	 token_end_position;

	t_parse_range *included_ranges;
	const char	  *chunk;
	t_parse_input  input;
	t_parse_logger logger;

	uint32_t included_range_count;
	uint32_t current_included_range_index;
	uint32_t chunk_start;
	uint32_t chunk_size;
	uint32_t lookahead_size;
	bool	 did_get_column;

	char debug_buffer[TREE_SITTER_SERIALIZATION_BUFFER_SIZE];
} t_lexer;

void ts_lexer_init(t_lexer *);
void ts_lexer_delete(t_lexer *);
void ts_lexer_set_input(t_lexer *, t_parse_input);
void ts_lexer_reset(t_lexer *, t_length);
void ts_lexer_start(t_lexer *);
void ts_lexer_finish(t_lexer *, uint32_t *);
void ts_lexer_advance_to_end(t_lexer *);
void ts_lexer_mark_end(t_lexer *);
bool ts_lexer_set_included_ranges(t_lexer *self, const t_parse_range *ranges,
								  uint32_t count);
t_parse_range *ts_lexer_included_ranges(const t_lexer *self, uint32_t *count);

static inline bool set_contains(t_char_range *ranges, uint32_t len,
								int32_t lookahead)
{
	uint32_t index = 0;
	uint32_t size = len - index;
	while (size > 1)
	{
		uint32_t	  half_size = size / 2;
		uint32_t	  mid_index = index + half_size;
		t_char_range *range = &ranges[mid_index];
		if (lookahead >= range->start && lookahead <= range->end)
		{
			return true;
		}
		else if (lookahead > range->end)
		{
			index = mid_index;
		}
		size -= half_size;
	}
	t_char_range *range = &ranges[index];
	return (lookahead >= range->start && lookahead <= range->end);
}

static inline t_point point__new(unsigned row, unsigned column)
{
	t_point result = {row, column};
	return result;
}

static inline t_point point_add(t_point a, t_point b)
{
	if (b.row > 0)
		return point__new(a.row + b.row, b.column);
	else
		return point__new(a.row, a.column + b.column);
}

static inline t_point point_sub(t_point a, t_point b)
{
	if (a.row > b.row)
		return point__new(a.row - b.row, a.column);
	else
		return point__new(0, a.column - b.column);
}

static inline bool point_lte(t_point a, t_point b)
{
	return (a.row < b.row) || (a.row == b.row && a.column <= b.column);
}

static inline bool point_lt(t_point a, t_point b)
{
	return (a.row < b.row) || (a.row == b.row && a.column < b.column);
}

static inline bool point_gt(t_point a, t_point b)
{
	return (a.row > b.row) || (a.row == b.row && a.column > b.column);
}

static inline bool point_gte(t_point a, t_point b)
{
	return (a.row > b.row) || (a.row == b.row && a.column >= b.column);
}

static inline bool point_eq(t_point a, t_point b)
{
	return a.row == b.row && a.column == b.column;
}

static inline t_point point_min(t_point a, t_point b)
{
	if (a.row < b.row || (a.row == b.row && a.column < b.column))
		return a;
	else
		return b;
}

static inline t_point point_max(t_point a, t_point b)
{
	if (a.row > b.row || (a.row == b.row && a.column > b.column))
		return a;
	else
		return b;
}

typedef struct s_reduce_action
{
	uint32_t	   count;
	t_symbol	   symbol;
	int			   dynamic_precedence;
	unsigned short production_id;
} t_reduce_action;

typedef Array(t_reduce_action) t_reduce_action_set;

static inline void ts_reduce_action_set_add(t_reduce_action_set *self,
											t_reduce_action		 new_action)
{
	for (uint32_t i = 0; i < self->size; i++)
	{
		t_reduce_action action = self->contents[i];
		if (action.symbol == new_action.symbol &&
			action.count == new_action.count)
			return;
	}
	array_push(self, new_action);
}

typedef struct s_stack_entry
{
	t_subtree tree;
	uint32_t  child_index;
	uint32_t  byte_offset;
} t_stack_entry;

typedef struct s_reusable_node
{
	Array(t_stack_entry) stack;
	t_subtree last_external_token;
} t_reusable_node;

static inline t_reusable_node reusable_node_new(void)
{
	return (t_reusable_node){array_new(), NULL_SUBTREE};
}

static inline void reusable_node_clear(t_reusable_node *self)
{
	array_clear(&self->stack);
	self->last_external_token = NULL_SUBTREE;
}

static inline t_subtree reusable_node_tree(t_reusable_node *self)
{
	return self->stack.size > 0
			   ? self->stack.contents[self->stack.size - 1].tree
			   : NULL_SUBTREE;
}

static inline uint32_t reusable_node_byte_offset(t_reusable_node *self)
{
	return self->stack.size > 0
			   ? self->stack.contents[self->stack.size - 1].byte_offset
			   : UINT32_MAX;
}

static inline void reusable_node_delete(t_reusable_node *self)
{
	array_delete(&self->stack);
}

static inline uint32_t ts_subtree_total_bytes(t_subtree self);
static inline bool	   ts_subtree_has_external_tokens(t_subtree self);
t_subtree			   ts_subtree_last_external_token(t_subtree self);
static inline uint32_t ts_subtree_child_count(t_subtree self);

static inline void reusable_node_advance(t_reusable_node *self)
{
	t_stack_entry last_entry = *array_back(&self->stack);
	uint32_t	  byte_offset =
		last_entry.byte_offset + ts_subtree_total_bytes(last_entry.tree);
	if (ts_subtree_has_external_tokens(last_entry.tree))
	{
		self->last_external_token =
			ts_subtree_last_external_token(last_entry.tree);
	}

	t_subtree tree;
	uint32_t  next_index;
	do
	{
		t_stack_entry popped_entry = array_pop(&self->stack);
		next_index = popped_entry.child_index + 1;
		if (self->stack.size == 0)
			return;
		tree = array_back(&self->stack)->tree;
	} while (ts_subtree_child_count(tree) <= next_index);

	array_push(&self->stack, ((t_stack_entry){
								 .tree = ts_subtree_children(tree)[next_index],
								 .child_index = next_index,
								 .byte_offset = byte_offset,
							 }));
}

static inline bool reusable_node_descend(t_reusable_node *self)
{
	t_stack_entry last_entry = *array_back(&self->stack);
	if (ts_subtree_child_count(last_entry.tree) > 0)
	{
		array_push(&self->stack,
				   ((t_stack_entry){
					   .tree = ts_subtree_children(last_entry.tree)[0],
					   .child_index = 0,
					   .byte_offset = last_entry.byte_offset,
				   }));
		return true;
	}
	else
	{
		return false;
	}
}

static inline void reusable_node_advance_past_leaf(t_reusable_node *self)
{
	while (reusable_node_descend(self))
	{
	}
	reusable_node_advance(self);
}

static inline void reusable_node_reset(t_reusable_node *self, t_subtree tree)
{
	reusable_node_clear(self);
	array_push(&self->stack, ((t_stack_entry){
								 .tree = tree,
								 .child_index = 0,
								 .byte_offset = 0,
							 }));

	// Never reuse the root node, because it has a non-standard internal
	// structure due to transformations that are applied when it is accepted:
	// adding the EOF child and any extra children.
	if (!reusable_node_descend(self))
	{
		reusable_node_clear(self);
	}
}

typedef struct s_stack t_stack;

typedef unsigned t_stack_version;

typedef struct s_stack_slice
{
	t_subtree_array subtrees;
	t_stack_version version;
} t_stack_slice;
typedef Array(t_stack_slice) t_stack_slice_array;

typedef struct s_stack_summary_entry
{
	t_length   position;
	unsigned   depth;
	t_state_id state;
} t_stack_summary_entry;
typedef Array(t_stack_summary_entry) t_stack_summary;

// Create a stack.
t_stack *ts_stack_new(t_subtree_pool *);

// Release the memory reserved for a given stack.
void ts_stack_delete(t_stack *);

// Get the stack's current number of versions.
uint32_t ts_stack_version_count(const t_stack *);

// Get the state at the top of the given version of the stack. If the stack is
// empty, this returns the initial state, 0.
t_state_id ts_stack_state(const t_stack *, t_stack_version);

// Get the last external token associated with a given version of the stack.
t_subtree ts_stack_last_external_token(const t_stack *, t_stack_version);

// Set the last external token associated with a given version of the stack.
void ts_stack_set_last_external_token(t_stack *, t_stack_version, t_subtree);

// Get the position of the given version of the stack within the document.
t_length ts_stack_position(const t_stack *, t_stack_version);

// Push a tree and state onto the given version of the stack.
//
// This transfers ownership of the tree to the t_stack. Callers that
// need to retain ownership of the tree for their own purposes should
// first retain the tree.
void ts_stack_push(t_stack *, t_stack_version, t_subtree, bool, t_state_id);

// Pop the given number of entries from the given version of the stack. This
// operation can increase the number of stack versions by revealing multiple
// versions which had previously been merged. It returns an array that
// specifies the index of each revealed version and the trees that were
// removed from that version.
t_stack_slice_array ts_stack_pop_count(t_stack *, t_stack_version,
									   uint32_t count);

// Remove an error at the top of the given version of the stack.
t_subtree_array ts_stack_pop_error(t_stack *, t_stack_version);

// Remove any pending trees from the top of the given version of the stack.
t_stack_slice_array ts_stack_pop_pending(t_stack *, t_stack_version);

// Remove any all trees from the given version of the stack.
t_stack_slice_array ts_stack_pop_all(t_stack *, t_stack_version);

// Get the maximum number of tree nodes reachable from this version of the stack
// since the last error was detected.
unsigned ts_stack_node_count_since_error(const t_stack *, t_stack_version);

int ts_stack_dynamic_precedence(t_stack *, t_stack_version);

bool ts_stack_has_advanced_since_error(const t_stack *, t_stack_version);

// Compute a summary of all the parse states near the top of the given
// version of the stack and store the summary for later retrieval.
void ts_stack_record_summary(t_stack *, t_stack_version, unsigned max_depth);

// Retrieve a summary of all the parse states near the top of the
// given version of the stack.
t_stack_summary *ts_stack_get_summary(t_stack *, t_stack_version);

// Get the total cost of all errors on the given version of the stack.
unsigned ts_stack_error_cost(const t_stack *, t_stack_version version);

// Merge the given two stack versions if possible, returning true
// if they were successfully merged and false otherwise.
bool ts_stack_merge(t_stack *, t_stack_version, t_stack_version);

// Determine whether the given two stack versions can be merged.
bool ts_stack_can_merge(t_stack *, t_stack_version, t_stack_version);

t_subtree ts_stack_resume(t_stack *, t_stack_version);

void ts_stack_pause(t_stack *, t_stack_version, t_subtree);

void ts_stack_halt(t_stack *, t_stack_version);

bool ts_stack_is_active(const t_stack *, t_stack_version);

bool ts_stack_is_paused(const t_stack *, t_stack_version);

bool ts_stack_is_halted(const t_stack *, t_stack_version);

void ts_stack_renumber_version(t_stack *, t_stack_version, t_stack_version);

void ts_stack_swap_versions(t_stack *, t_stack_version, t_stack_version);

t_stack_version ts_stack_copy_version(t_stack *, t_stack_version);

// Remove the given version from the stack.
void ts_stack_remove_version(t_stack *, t_stack_version);

void ts_stack_clear(t_stack *);

typedef void (*StackIterateCallback)(void *, t_state_id, uint32_t);

void ts_external_scanner_state_init(t_external_scanner_state *, const char *,
									unsigned);
const char *ts_external_scanner_state_data(const t_external_scanner_state *);
bool		ts_external_scanner_state_eq(const t_external_scanner_state *self,
										 const char *, unsigned);
void		ts_external_scanner_state_delete(t_external_scanner_state *self);

void ts_subtree_array_copy(t_subtree_array, t_subtree_array *);
void ts_subtree_array_clear(t_subtree_pool *, t_subtree_array *);
void ts_subtree_array_delete(t_subtree_pool *, t_subtree_array *);
void ts_subtree_array_remove_trailing_extras(t_subtree_array *,
											 t_subtree_array *);
void ts_subtree_array_reverse(t_subtree_array *);

t_subtree_pool ts_subtree_pool_new(uint32_t capacity);
void		   ts_subtree_pool_delete(t_subtree_pool *);

t_subtree ts_subtree_new_leaf(t_subtree_pool *, t_symbol, t_length, t_length,
							  uint32_t, t_state_id, bool, bool, bool,
							  const t_language *);
t_subtree ts_subtree_new_error(t_subtree_pool *, int32_t, t_length, t_length,
							   uint32_t, t_state_id, const t_language *);
t_mutable_subtree ts_subtree_new_node(t_symbol, t_subtree_array *, unsigned,
									  const t_language *);
t_subtree		  ts_subtree_new_error_node(t_subtree_array *, bool,
											const t_language *);
t_subtree ts_subtree_new_missing_leaf(t_subtree_pool *, t_symbol, t_length,
									  uint32_t, const t_language *);
t_mutable_subtree ts_subtree_make_mut(t_subtree_pool *, t_subtree);
void			  ts_subtree_retain(t_subtree);
void			  ts_subtree_release(t_subtree_pool *, t_subtree);
int				  ts_subtree_compare(t_subtree, t_subtree, t_subtree_pool *);
void ts_subtree_set_symbol(t_mutable_subtree *, t_symbol, const t_language *);
void ts_subtree_summarize(t_mutable_subtree, const t_subtree *, uint32_t,
						  const t_language *);
void ts_subtree_summarize_children(t_mutable_subtree, const t_language *);
void ts_subtree_balance(t_subtree, t_subtree_pool *, const t_language *);
t_subtree ts_subtree_edit(t_subtree, const t_input_edit *edit,
						  t_subtree_pool *);
char	 *ts_subtree_string(t_subtree, t_symbol, bool, const t_language *,
							bool include_all);
t_subtree ts_subtree_last_external_token(t_subtree);
const t_external_scanner_state *ts_subtree_external_scanner_state(
	t_subtree self);
bool ts_subtree_external_scanner_state_eq(t_subtree, t_subtree);

#define SUBTREE_GET(self, name)                                                \
	((self).data.is_inline ? (self).data.name : (self).ptr->name)

static inline t_symbol ts_subtree_symbol(t_subtree self)
{
	return SUBTREE_GET(self, symbol);
}
static inline bool ts_subtree_visible(t_subtree self)
{
	return SUBTREE_GET(self, visible);
}
static inline bool ts_subtree_named(t_subtree self)
{
	return SUBTREE_GET(self, named);
}
static inline bool ts_subtree_extra(t_subtree self)
{
	return SUBTREE_GET(self, extra);
}
static inline bool ts_subtree_has_changes(t_subtree self)
{
	return SUBTREE_GET(self, has_changes);
}
static inline bool ts_subtree_missing(t_subtree self)
{
	return SUBTREE_GET(self, is_missing);
}
static inline bool ts_subtree_is_keyword(t_subtree self)
{
	return SUBTREE_GET(self, is_keyword);
}
static inline t_state_id ts_subtree_parse_state(t_subtree self)
{
	return SUBTREE_GET(self, parse_state);
}
static inline uint32_t ts_subtree_lookahead_bytes(t_subtree self)
{
	return SUBTREE_GET(self, lookahead_bytes);
}

#undef SUBTREE_GET

// Get the size needed to store a heap-allocated subtree with the given
// number of children.
static inline size_t ts_subtree_alloc_size(uint32_t child_count)
{
	return child_count * sizeof(t_subtree) + sizeof(t_subtree_heap_data);
}

static inline void ts_subtree_set_extra(t_mutable_subtree *self, bool is_extra)
{
	if (self->data.is_inline)
	{
		self->data.extra = is_extra;
	}
	else
	{
		self->ptr->extra = is_extra;
	}
}

static inline t_symbol ts_subtree_leaf_symbol(t_subtree self)
{
	if (self.data.is_inline)
		return self.data.symbol;
	if (self.ptr->child_count == 0)
		return self.ptr->symbol;
	return self.ptr->first_leaf.symbol;
}

static inline t_state_id ts_subtree_leaf_parse_state(t_subtree self)
{
	if (self.data.is_inline)
		return self.data.parse_state;
	if (self.ptr->child_count == 0)
		return self.ptr->parse_state;
	return self.ptr->first_leaf.parse_state;
}

static inline t_length ts_subtree_padding(t_subtree self)
{
	if (self.data.is_inline)
	{
		t_length result = {self.data.padding_bytes,
						   {self.data.padding_rows, self.data.padding_columns}};
		return result;
	}
	else
	{
		return self.ptr->padding;
	}
}

static inline t_length ts_subtree_size(t_subtree self)
{
	if (self.data.is_inline)
	{
		t_length result = {self.data.size_bytes, {0, self.data.size_bytes}};
		return result;
	}
	else
	{
		return self.ptr->size;
	}
}

static inline t_length ts_subtree_total_size(t_subtree self)
{
	return length_add(ts_subtree_padding(self), ts_subtree_size(self));
}

static inline uint32_t ts_subtree_total_bytes(t_subtree self)
{
	return ts_subtree_total_size(self).bytes;
}

static inline uint32_t ts_subtree_child_count(t_subtree self)
{
	return self.data.is_inline ? 0 : self.ptr->child_count;
}

static inline uint32_t ts_subtree_repeat_depth(t_subtree self)
{
	return self.data.is_inline ? 0 : self.ptr->repeat_depth;
}

static inline uint32_t ts_subtree_is_repetition(t_subtree self)
{
	return self.data.is_inline ? 0
							   : !self.ptr->named && !self.ptr->visible &&
									 self.ptr->child_count != 0;
}

static inline uint32_t ts_subtree_visible_descendant_count(t_subtree self)
{
	return (self.data.is_inline || self.ptr->child_count == 0)
			   ? 0
			   : self.ptr->visible_descendant_count;
}

static inline uint32_t ts_subtree_visible_child_count(t_subtree self)
{
	if (ts_subtree_child_count(self) > 0)
	{
		return self.ptr->visible_child_count;
	}
	else
	{
		return 0;
	}
}

static inline uint32_t ts_subtree_error_cost(t_subtree self)
{
	if (ts_subtree_missing(self))
	{
		return ERROR_COST_PER_MISSING_TREE + ERROR_COST_PER_RECOVERY;
	}
	else
	{
		return self.data.is_inline ? 0 : self.ptr->error_cost;
	}
}

static inline int32_t ts_subtree_dynamic_precedence(t_subtree self)
{
	return (self.data.is_inline || self.ptr->child_count == 0)
			   ? 0
			   : self.ptr->dynamic_precedence;
}

static inline uint16_t ts_subtree_production_id(t_subtree self)
{
	if (ts_subtree_child_count(self) > 0)
	{
		return self.ptr->production_id;
	}
	else
	{
		return 0;
	}
}

static inline bool ts_subtree_fragile_left(t_subtree self)
{
	return self.data.is_inline ? false : self.ptr->fragile_left;
}

static inline bool ts_subtree_fragile_right(t_subtree self)
{
	return self.data.is_inline ? false : self.ptr->fragile_right;
}

static inline bool ts_subtree_has_external_tokens(t_subtree self)
{
	return self.data.is_inline ? false : self.ptr->has_external_tokens;
}

static inline bool ts_subtree_has_external_scanner_state_change(t_subtree self)
{
	return self.data.is_inline ? false
							   : self.ptr->has_external_scanner_state_change;
}

static inline bool ts_subtree_depends_on_column(t_subtree self)
{
	return self.data.is_inline ? false : self.ptr->depends_on_column;
}

static inline bool ts_subtree_is_fragile(t_subtree self)
{
	return self.data.is_inline
			   ? false
			   : (self.ptr->fragile_left || self.ptr->fragile_right);
}

static inline bool ts_subtree_is_error(t_subtree self)
{
	return ts_subtree_symbol(self) == ts_builtin_sym_error;
}

static inline bool ts_subtree_is_eof(t_subtree self)
{
	return ts_subtree_symbol(self) == ts_builtin_sym_end;
}

static inline t_subtree ts_subtree_from_mut(t_mutable_subtree self)
{
	t_subtree result;
	result.data = self.data;
	return result;
}

static inline t_mutable_subtree ts_subtree_to_mut_unsafe(t_subtree self)
{
	t_mutable_subtree result;
	result.data = self.data;
	return result;
}

typedef enum e_tree_cursor_step
{
	TreeCursorStepNone,
	TreeCursorStepHidden,
	TreeCursorStepVisible,
} t_tree_cursor_step;

void ts_tree_cursor_init(t_tree_cursor *, t_parse_node);
void ts_tree_cursor_current_status(const t_tree_cursor *, t_field_id *, bool *,
								   bool *, bool *, t_symbol *, unsigned *);

t_tree_cursor_step ts_tree_cursor_goto_first_child_internal(t_tree_cursor *);
t_tree_cursor_step ts_tree_cursor_goto_next_sibling_internal(t_tree_cursor *);

static inline t_subtree ts_tree_cursor_current_subtree(
	const t_tree_cursor *_self)
{
	const t_tree_cursor *self = (const t_tree_cursor *)_self;
	t_tree_cursor_entry *last_entry = array_back(&self->stack);
	return *last_entry->subtree;
}

t_parse_node ts_tree_cursor_parent_node(const t_tree_cursor *);

typedef struct s_parent_cache_entry
{
	const t_subtree *child;
	const t_subtree *parent;
	t_length		 position;
	t_symbol		 alias_symbol;
} t_parent_cache_entry;

struct s_first_tree
{
	t_subtree		  root;
	const t_language *language;
	t_parse_range	 *included_ranges;
	unsigned		  included_range_count;
};

t_first_tree *ts_tree_new(t_subtree root, const t_language *language,
						  const t_parse_range *, unsigned);
t_parse_node  ts_node_new(const t_first_tree *, const t_subtree *, t_length,
						  t_symbol);

typedef uint64_t t_parser_clock;
typedef uint64_t t_parser_duration;

#endif // TREE_SITTER_TREE_H_
